#define WITH_FS_RES 1

static jobject jobject_ref(Runtime *runtime, jobject obj) {
  JniEnv *env = runtime->jnienv;

  if (obj) {
    env->instance_release_from_thread(obj, runtime);
  }
  env->instance_hold_to_thread(obj, runtime);

  return obj;
}

static void jobject_unref(Runtime *runtime, jobject obj) {
  JniEnv *env = runtime->jnienv;
  env->instance_release_from_thread(obj, runtime);
}

typedef struct _async_callback_info_t {
  jobject obj;
  Runtime *runtime;
  char func[TK_NAME_LEN + 1];
} async_callback_info_t;

static async_callback_info_t *
async_callback_info_create(Runtime *runtime, jobject obj, const char *name) {
  JniEnv *env = runtime->jnienv;
  async_callback_info_t *info = TKMEM_ZALLOC(async_callback_info_t);
  return_value_if_fail(info != NULL, NULL);

  info->runtime = runtime;
  info->obj = jobject_ref(runtime, obj);
  tk_strncpy(info->func, name, TK_NAME_LEN);

  return info;
}

static int async_callback_info_call(async_callback_info_t *info, void *data) {
  ret_t ret = RET_OK;
  Runtime *runtime = info->runtime;
  JniEnv *env = info->runtime->jnienv;

  char *type_s = (char *)"(J)I";
  char *name_s = info->func;

  Utf8String *class_name = info->obj->mb.clazz->name;
  Utf8String *name = env->utf8_create_part_c(name_s, 0, strlen(name_s));
  Utf8String *type = env->utf8_create_part_c(type_s, 0, strlen(type_s));
  MethodInfo *minfo =
      env->find_methodInfo_by_name(class_name, name, type, runtime);
  env->utf8_destory(name);
  env->utf8_destory(type);

  env->push_ref(runtime->stack, info->obj);
  env->push_long(runtime->stack, (s64)data);

  if (env->execute_method(minfo, runtime)) {
    env->print_exception(runtime);
  } else {
    ret = env->pop_int(runtime->stack);
  }

  log_debug("call %s ret=%d\n", info->func, ret);

  return ret;
}

static ret_t async_callback_info_destroy(async_callback_info_t *info) {
  return_value_if_fail(info != NULL, RET_BAD_PARAMS);

  jobject_unref(info->runtime, info->obj);
  TKMEM_FREE(info);

  return RET_OK;
}

static ret_t emitter_item_on_destroy(void *data) {
  emitter_item_t *item = (emitter_item_t *)data;

  async_callback_info_destroy((async_callback_info_t *)(item->ctx));

  return RET_OK;
}

static ret_t idle_info_on_destroy(void *data) {
  idle_info_t *item = (idle_info_t *)data;

  async_callback_info_destroy((async_callback_info_t *)(item->ctx));

  return RET_OK;
}

static ret_t timer_info_on_destroy(void *data) {
  timer_info_t *item = (timer_info_t *)data;

  async_callback_info_destroy((async_callback_info_t *)(item->ctx));

  return RET_OK;
}

static ret_t call_on_event(void *ctx, event_t *e) {
  return async_callback_info_call((async_callback_info_t *)(ctx), e);
}

static ret_t call_on_idle(const idle_info_t *info) {
  return async_callback_info_call((async_callback_info_t *)(info->ctx),
                                  (void *)info);
}

static ret_t call_on_timer(const timer_info_t *info) {
  return (ret_t)async_callback_info_call((async_callback_info_t *)(info->ctx),
                                         (void *)info);
}

static ret_t call_on_data(void *ctx, const void *data) {
  return (ret_t)async_callback_info_call((async_callback_info_t *)(ctx),
                                         (void *)data);
}

int awtk_TEmitter_emitter_on(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);
  emitter_t *emitter = EMITTER(jni_ctx_get_object(&ctx));
  int32_t type = jni_ctx_get_int(&ctx);
  jobject on_event = jni_ctx_get_jobject(&ctx);
  int64_t unused_ctx = jni_ctx_get_int64(&ctx);

  async_callback_info_t *info =
      async_callback_info_create(runtime, on_event, "onEvent");
  uint32_t id = emitter_on(emitter, type, call_on_event, info);

  if (id == TK_INVALID_ID) {
    async_callback_info_destroy(info);
  } else {
    emitter_set_on_destroy(emitter, id, emitter_item_on_destroy, NULL);
  }

  jni_ctx_return_int(&ctx, id);

  return 0;
}

int awtk_TIdle_idle_add(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);

  jobject on_idle = jni_ctx_get_jobject(&ctx);
  int64_t unused_ctx = jni_ctx_get_int64(&ctx);
  async_callback_info_t *info =
      async_callback_info_create(runtime, on_idle, "onIdle");

  uint32_t id = idle_add(call_on_idle, info);
  if (id == TK_INVALID_ID) {
    async_callback_info_destroy(info);
  } else {
    idle_set_on_destroy(id, idle_info_on_destroy, NULL);
  }
  jni_ctx_return_int(&ctx, id);

  return 0;
}

int awtk_TTimer_timer_add(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);

  jobject on_timer = jni_ctx_get_jobject(&ctx);
  int64_t unused_ctx = jni_ctx_get_int64(&ctx);
  int32_t duration = jni_ctx_get_int(&ctx);
  async_callback_info_t *info =
      async_callback_info_create(runtime, on_timer, "onTimer");

  uint32_t id = timer_add(call_on_timer, info, duration);
  if (id == TK_INVALID_ID) {
    async_callback_info_destroy(info);
  } else {
    timer_set_on_destroy(id, timer_info_on_destroy, NULL);
  }
  jni_ctx_return_int(&ctx, id);

  return 0;
}

int awtk_TWidget_widget_on(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);
  widget_t *widget = WIDGET(jni_ctx_get_object(&ctx));
  int32_t type = jni_ctx_get_int(&ctx);
  jobject on_event = jni_ctx_get_jobject(&ctx);
  int64_t unused_ctx = jni_ctx_get_int64(&ctx);

  async_callback_info_t *info =
      async_callback_info_create(runtime, on_event, "onEvent");
  uint32_t id = widget_on(widget, type, call_on_event, info);

  if (id == TK_INVALID_ID) {
    async_callback_info_destroy(info);
  } else {
    emitter_set_on_destroy(widget->emitter, id, emitter_item_on_destroy, NULL);
  }
  jni_ctx_return_int(&ctx, id);

  return 0;
}

int awtk_TWidget_widget_foreach(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);

  widget_t *widget = WIDGET(jni_ctx_get_object(&ctx));
  jobject visit = jni_ctx_get_jobject(&ctx);
  int64_t unused_ctx = jni_ctx_get_int64(&ctx);

  async_callback_info_t *info =
      async_callback_info_create(runtime, visit, "onData");
  ret_t ret = widget_foreach(widget, call_on_data, info);
  async_callback_info_destroy(info);

  jni_ctx_return_int(&ctx, ret);

  return 0;
}

#include "assets.c"

int awtk_AWTK_init(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);

  uint32_t w = (uint32_t)jni_ctx_get_int(&ctx);
  uint32_t h = (uint32_t)jni_ctx_get_int(&ctx);

  ret_t ret = tk_init(w, h, APP_SIMULATOR, "AWTK-JAVA", NULL);

  assets_init();
  tk_ext_widgets_init();
  jni_ctx_return_int(&ctx, (int32_t)(ret));

  return 0;
}

int awtk_AWTK_run(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = jni_ctx_init(runtime, clazz);

  ret_t ret = tk_run();
  jni_ctx_return_int(&ctx, (int32_t)(ret));

  return 0;
}
