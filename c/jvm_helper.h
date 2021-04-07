#ifndef JVM_HELPER_H
#define JVM_HELPER_H

typedef JniEnv JNIEnv;
typedef Instance* jobject;

typedef struct _jni_ctx_t {
  Runtime *runtime;
  JClass *clazz;
  int32_t pos;
} jni_ctx_t;

static inline jni_ctx_t jni_ctx_init(Runtime *runtime, JClass *clazz) {
  jni_ctx_t ctx = {runtime, clazz};

  return ctx;
}

static inline int32_t jni_ctx_get_int(jni_ctx_t *ctx) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  return (int32_t)(env->localvar_getInt(runtime->localvar, ctx->pos++));
}

static inline int64_t jni_ctx_get_int64(jni_ctx_t *ctx) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;
  int64_t ret =
      (int64_t)(env->localvar_getLong_2slot(runtime->localvar, ctx->pos));

  ctx->pos += 2;

  return ret;
}

static inline float jni_ctx_get_float(jni_ctx_t *ctx) {
  Int2Float ret;
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  ret.i = (int32_t)(env->localvar_getInt(runtime->localvar, ctx->pos));

  ctx->pos++;

  return ret.f;
}

static inline double jni_ctx_get_double(jni_ctx_t *ctx) {
  Long2Double ret;
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  ret.l = (int64_t)(env->localvar_getLong_2slot(runtime->localvar, ctx->pos));

  ctx->pos += 2;

  return ret.d;
}

static inline void *jni_ctx_get_object(jni_ctx_t *ctx) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;
  int64_t ret =
      (int64_t)(env->localvar_getLong_2slot(runtime->localvar, ctx->pos));

  ctx->pos += 2;

  return (void *)((char *)NULL + ret);
}

static inline jobject jni_ctx_get_jobject(jni_ctx_t *ctx) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;
  jobject ret = env->localvar_getRefer(runtime->localvar, ctx->pos++);

  return ret;
}

static inline char *jni_ctx_get_str(jni_ctx_t *ctx) {
  char *ret = NULL;
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;
  Instance *jstr = env->localvar_getRefer(runtime->localvar, ctx->pos);
  Utf8String *ustr = env->utf8_create();
  return_value_if_fail(ustr != NULL, NULL);

  env->jstring_2_utf8(jstr, ustr, runtime);
  ret = tk_strdup(env->utf8_cstr(ustr));
  env->utf8_destory(ustr);

  ctx->pos++;

  return ret;
}

static inline ret_t jni_ctx_return_int(jni_ctx_t *ctx, int32_t val) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  env->push_int(runtime->stack, (s32)(val));

  return RET_OK;
}

static inline ret_t jni_ctx_return_int64(jni_ctx_t *ctx, int64_t val) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  env->push_long(runtime->stack, (s64)(val));

  return RET_OK;
}

static inline ret_t jni_ctx_return_float(jni_ctx_t *ctx, float val) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  env->push_float(runtime->stack, (f32)(val));

  return RET_OK;
}

static inline ret_t jni_ctx_return_double(jni_ctx_t *ctx, double val) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  env->push_double(runtime->stack, (f64)(val));

  return RET_OK;
}

static inline ret_t jni_ctx_return_str(jni_ctx_t *ctx, const char *val) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  if (val != NULL) {
    Instance *jstr = env->jstring_create_cstr((char*)val, runtime);
    env->push_ref(runtime->stack, jstr);
  } else {
    env->push_ref(runtime->stack, NULL);
  }

  return RET_OK;
}

static inline ret_t jni_ctx_return_wstr(jni_ctx_t *ctx, const wchar_t *val) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  str_t str;
  str_init(&str, 0);

  str_from_wstr(&str, val);
  jni_ctx_return_str(ctx, str.str);
  str_reset(&str);

  return RET_OK;
}

static inline ret_t jni_ctx_return_object(jni_ctx_t *ctx, void *val) {
  Runtime *runtime = ctx->runtime;
  JniEnv *env = runtime->jnienv;

  env->push_long(runtime->stack, (s64)(val));

  return RET_OK;
}

#endif /*JVM_HELPER_H*/
