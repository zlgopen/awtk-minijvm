
#define WITH_FS_RES 1

int awtk_TEmitter_emitter_on(Runtime *runtime, JClass *clazz) {
  /*TODO*/
  return 0;
}

int awtk_TIdle_idle_add(Runtime *runtime, JClass *clazz) {
  /*TODO*/
  return 0;
}

int awtk_TTimer_timer_add(Runtime *runtime, JClass *clazz) {
  /*TODO*/
  return 0;
}

int awtk_TWidget_widget_on(Runtime *runtime, JClass *clazz) {
  /*TODO*/
  return 0;
}

int awtk_TWidget_widget_foreach(Runtime *runtime, JClass *clazz) {
  /*TODO*/
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
