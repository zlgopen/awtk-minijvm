#include <jvm.h>
#include "awtk.h"
#include "jvm_helper.h"

#include "custom.c"

int awtk_TEvent_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (event_t*)event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TEvent_event_get_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)event_get_type(event);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEvent_event_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  event_t* ret = NULL;
  uint32_t type = (uint32_t)jni_ctx_get_int(&actx);
  ret = (event_t*)event_create(type);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TEvent_event_t_get_prop_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  event_t* obj = (event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->type));

  return 0;
}

int awtk_TEvent_event_t_get_prop_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  event_t* obj = (event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->size));

  return 0;
}

int awtk_TEvent_event_t_get_prop_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  event_t* obj = (event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int64(&actx, (int64_t)(obj->time));

  return 0;
}

int awtk_TEvent_event_t_get_prop_target(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  event_t* obj = (event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int64(&actx, (int64_t)(obj->target));

  return 0;
}

int awtk_TEmitter_emitter_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  emitter_t* ret = NULL;
  ret = (emitter_t*)emitter_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TEmitter_emitter_dispatch(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jni_ctx_get_object(&actx);
  event_t* e = (event_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)emitter_dispatch(emitter, e);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEmitter_emitter_dispatch_simple_event(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jni_ctx_get_object(&actx);
  uint32_t type = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)emitter_dispatch_simple_event(emitter, type);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEmitter_emitter_off(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jni_ctx_get_object(&actx);
  uint32_t id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)emitter_off(emitter, id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEmitter_emitter_enable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)emitter_enable(emitter);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEmitter_emitter_disable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  emitter_t* emitter = (emitter_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)emitter_disable(emitter);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEmitter_emitter_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  emitter_t* ret = NULL;
  emitter_t* emitter = (emitter_t*)jni_ctx_get_object(&actx);
  ret = (emitter_t*)emitter_cast(emitter);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRectf_rectf_t_get_prop_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rectf_t* obj = (rectf_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->x));

  return 0;
}

int awtk_TRectf_rectf_t_get_prop_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rectf_t* obj = (rectf_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->y));

  return 0;
}

int awtk_TRectf_rectf_t_get_prop_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rectf_t* obj = (rectf_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->w));

  return 0;
}

int awtk_TRectf_rectf_t_get_prop_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rectf_t* obj = (rectf_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->h));

  return 0;
}

int awtk_TRect_rect_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rect_t* ret = NULL;
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (rect_t*)rect_create(x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRect_rect_set(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (rect_t*)rect_set(rect, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRect_rect_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rect_t* ret = NULL;
  rect_t* rect = (rect_t*)jni_ctx_get_object(&actx);
  ret = (rect_t*)rect_cast(rect);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRect_rect_t_get_prop_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rect_t* obj = (rect_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->x));

  return 0;
}

int awtk_TRect_rect_t_get_prop_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rect_t* obj = (rect_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->y));

  return 0;
}

int awtk_TRect_rect_t_get_prop_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rect_t* obj = (rect_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->w));

  return 0;
}

int awtk_TRect_rect_t_get_prop_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rect_t* obj = (rect_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->h));

  return 0;
}

int awtk_TBitmap_bitmap_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* ret = NULL;
  ret = (bitmap_t*)bitmap_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TBitmap_bitmap_create_ex(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* ret = NULL;
  uint32_t w = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t h = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t line_length = (uint32_t)jni_ctx_get_int(&actx);
  bitmap_format_t format = (bitmap_format_t)jni_ctx_get_int(&actx);
  ret = (bitmap_t*)bitmap_create_ex(w, h, line_length, format);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TBitmap_bitmap_get_bpp(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  bitmap_t* bitmap = (bitmap_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)bitmap_get_bpp(bitmap);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TBitmap_bitmap_get_bpp_of_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  bitmap_format_t format = (bitmap_format_t)jni_ctx_get_int(&actx);
  ret = (uint32_t)bitmap_get_bpp_of_format(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TBitmap_bitmap_t_get_prop_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* obj = (bitmap_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->w));

  return 0;
}

int awtk_TBitmap_bitmap_t_get_prop_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* obj = (bitmap_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->h));

  return 0;
}

int awtk_TBitmap_bitmap_t_get_prop_line_length(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* obj = (bitmap_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->line_length));

  return 0;
}

int awtk_TBitmap_bitmap_t_get_prop_flags(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* obj = (bitmap_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->flags));

  return 0;
}

int awtk_TBitmap_bitmap_t_get_prop_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* obj = (bitmap_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->format));

  return 0;
}

int awtk_TBitmap_bitmap_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bitmap_t* obj = (bitmap_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TObject_object_ref(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (object_t*)object_ref(obj);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TObject_object_get_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (const char*)object_get_type(obj);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TObject_object_get_desc(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (const char*)object_get_desc(obj);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TObject_object_get_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)object_get_size(obj);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_is_collection(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)object_is_collection(obj);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)object_set_name(obj, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_compare(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  object_t* other = (object_t*)jni_ctx_get_object(&actx);
  ret = (int)object_compare(obj, other);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_get_prop(obj, name, v);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (const char*)object_get_prop_str(obj, name);
  TKMEM_FREE(name);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_pointer(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  void* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (void*)object_get_prop_pointer(obj, name);
  TKMEM_FREE(name);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_object(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (object_t*)object_get_prop_object(obj, name);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int32_t defval = (int32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)object_get_prop_int(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  bool_t defval = (bool_t)jni_ctx_get_int(&actx);
  ret = (bool_t)object_get_prop_bool(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_float(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  float_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  float_t defval = (float_t)jni_ctx_get_float(&actx);
  ret = (float_t)object_get_prop_float(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  double ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  double defval = (double)jni_ctx_get_float(&actx);
  ret = (double)object_get_prop_double(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TObject_object_remove_prop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)object_remove_prop(obj, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  value_t* value = (value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_set_prop(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* value = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)object_set_prop_str(obj, name, value);
  TKMEM_FREE(name);
  TKMEM_FREE(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_object(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  object_t* value = (object_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_set_prop_object(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_int(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  bool_t value = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_bool(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_float(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  float_t value = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)object_set_prop_float(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  double value = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)object_set_prop_double(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_copy_prop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  object_t* src = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)object_copy_prop(obj, src, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_has_prop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (bool_t)object_has_prop(obj, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_eval(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* expr = (const char*)jni_ctx_get_str(&actx);
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_eval(obj, expr, v);
  TKMEM_FREE(expr);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_can_exec(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* args = (const char*)jni_ctx_get_str(&actx);
  ret = (bool_t)object_can_exec(obj, name, args);
  TKMEM_FREE(name);
  TKMEM_FREE(args);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_exec(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* args = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)object_exec(obj, name, args);
  TKMEM_FREE(name);
  TKMEM_FREE(args);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_notify_changed(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_notify_changed(obj);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_has_prop_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  ret = (bool_t)object_has_prop_by_path(obj, path);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_str_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  ret = (const char*)object_get_prop_str_by_path(obj, path);
  TKMEM_FREE(path);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_pointer_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  void* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  ret = (void*)object_get_prop_pointer_by_path(obj, path);
  TKMEM_FREE(path);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_object_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* ret = NULL;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  ret = (object_t*)object_get_prop_object_by_path(obj, path);
  TKMEM_FREE(path);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_int_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  int32_t defval = (int32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)object_get_prop_int_by_path(obj, path, defval);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_bool_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  bool_t defval = (bool_t)jni_ctx_get_int(&actx);
  ret = (bool_t)object_get_prop_bool_by_path(obj, path, defval);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_float_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  float_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  float_t defval = (float_t)jni_ctx_get_float(&actx);
  ret = (float_t)object_get_prop_float_by_path(obj, path, defval);
  TKMEM_FREE(path);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  value_t* value = (value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_set_prop_by_path(obj, path, value);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_str_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  const char* value = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)object_set_prop_str_by_path(obj, path, value);
  TKMEM_FREE(path);
  TKMEM_FREE(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_object_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  object_t* value = (object_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_set_prop_object_by_path(obj, path, value);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_int_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_int_by_path(obj, path, value);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_bool_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  bool_t value = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_bool_by_path(obj, path, value);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_float_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  float_t value = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)object_set_prop_float_by_path(obj, path, value);
  TKMEM_FREE(path);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_can_exec_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  const char* args = (const char*)jni_ctx_get_str(&actx);
  ret = (bool_t)object_can_exec_by_path(obj, path, args);
  TKMEM_FREE(path);
  TKMEM_FREE(args);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_exec_by_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* path = (const char*)jni_ctx_get_str(&actx);
  const char* args = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)object_exec_by_path(obj, path, args);
  TKMEM_FREE(path);
  TKMEM_FREE(args);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_int8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int8_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int8_t defval = (int8_t)jni_ctx_get_int(&actx);
  ret = (int8_t)object_get_prop_int8(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_int8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int8_t value = (int8_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_int8(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_uint8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint8_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint8_t defval = (uint8_t)jni_ctx_get_int(&actx);
  ret = (uint8_t)object_get_prop_uint8(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_uint8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint8_t value = (uint8_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_uint8(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_int16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int16_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int16_t defval = (int16_t)jni_ctx_get_int(&actx);
  ret = (int16_t)object_get_prop_int16(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_int16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int16_t value = (int16_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_int16(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_uint16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint16_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint16_t defval = (uint16_t)jni_ctx_get_int(&actx);
  ret = (uint16_t)object_get_prop_uint16(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_uint16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint16_t value = (uint16_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_uint16(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_int32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int32_t defval = (int32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)object_get_prop_int32(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_int32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_int32(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_uint32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint32_t defval = (uint32_t)jni_ctx_get_int(&actx);
  ret = (uint32_t)object_get_prop_uint32(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_uint32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint32_t value = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_set_prop_uint32(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_int64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int64_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int64_t defval = (int64_t)jni_ctx_get_int64(&actx);
  ret = (int64_t)object_get_prop_int64(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_int64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int64_t value = (int64_t)jni_ctx_get_int64(&actx);
  ret = (ret_t)object_set_prop_int64(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_get_prop_uint64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint64_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint64_t defval = (uint64_t)jni_ctx_get_int64(&actx);
  ret = (uint64_t)object_get_prop_uint64(obj, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TObject_object_set_prop_uint64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint64_t value = (uint64_t)jni_ctx_get_int64(&actx);
  ret = (ret_t)object_set_prop_uint64(obj, name, value);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObject_object_t_get_prop_ref_count(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ref_count));

  return 0;
}

int awtk_TObject_object_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TValue_value_set_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  bool_t value = (bool_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_bool(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)value_bool(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_set_int8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  int8_t value = (int8_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_int8(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_int8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int8_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (int8_t)value_int8(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_set_uint8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  uint8_t value = (uint8_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_uint8(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_uint8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int8_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (int8_t)value_uint8(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_set_int16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  int16_t value = (int16_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_int16(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_int16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int16_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (int16_t)value_int16(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_set_uint16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  uint16_t value = (uint16_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_uint16(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_uint16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint16_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (uint16_t)value_uint16(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_set_int32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_int32(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_int32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)value_int32(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_set_uint32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  uint32_t value = (uint32_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_uint32(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_set_int64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  int64_t value = (int64_t)jni_ctx_get_int64(&actx);
  ret = (value_t*)value_set_int64(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_int64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int64_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (int64_t)value_int64(v);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TValue_value_set_uint64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  uint64_t value = (uint64_t)jni_ctx_get_int64(&actx);
  ret = (value_t*)value_set_uint64(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_uint64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint64_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (uint64_t)value_uint64(v);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TValue_value_set_float(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  float_t value = (float_t)jni_ctx_get_float(&actx);
  ret = (value_t*)value_set_float(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_float32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  float ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (float)value_float32(v);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TValue_value_set_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  double value = (double)jni_ctx_get_float(&actx);
  ret = (value_t*)value_set_double(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  double ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (double)value_double(v);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TValue_value_dup_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  const char* value = (const char*)jni_ctx_get_str(&actx);
  ret = (value_t*)value_dup_str(v, value);
  TKMEM_FREE(value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (const char*)value_str(v);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TValue_value_str_ex(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  char* buff = (char*)jni_ctx_get_str(&actx);
  uint32_t size = (uint32_t)jni_ctx_get_int(&actx);
  ret = (const char*)value_str_ex(v, buff, size);
  TKMEM_FREE(buff);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TValue_value_is_null(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  value_t* value = (value_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)value_is_null(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_set_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_int(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_set_object(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  object_t* value = (object_t*)jni_ctx_get_object(&actx);
  ret = (value_t*)value_set_object(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_object(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (object_t*)value_object(v);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_set_token(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  uint32_t value = (uint32_t)jni_ctx_get_int(&actx);
  ret = (value_t*)value_set_token(v, value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_token(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)value_token(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  ret = (value_t*)value_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TValue_value_reset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)value_reset(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TValue_value_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  value_t* value = (value_t*)jni_ctx_get_object(&actx);
  ret = (value_t*)value_cast(value);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGlobal_tk_init(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  app_type_t app_type = (app_type_t)jni_ctx_get_int(&actx);
  const char* app_name = (const char*)jni_ctx_get_str(&actx);
  const char* app_root = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)tk_init(w, h, app_type, app_name, app_root);
  TKMEM_FREE(app_name);
  TKMEM_FREE(app_root);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGlobal_tk_run(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  ret = (ret_t)tk_run();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGlobal_tk_quit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  ret = (ret_t)tk_quit();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGlobal_tk_get_pointer_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  ret = (int32_t)tk_get_pointer_x();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGlobal_tk_get_pointer_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  ret = (int32_t)tk_get_pointer_y();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGlobal_tk_is_pointer_pressed(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  ret = (bool_t)tk_is_pointer_pressed();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TBidiType_BIDI_TYPE_AUTO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BIDI_TYPE_AUTO));

  return 0;
}

int awtk_TBidiType_BIDI_TYPE_LTR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BIDI_TYPE_LTR));

  return 0;
}

int awtk_TBidiType_BIDI_TYPE_RTL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BIDI_TYPE_RTL));

  return 0;
}

int awtk_TBidiType_BIDI_TYPE_LRO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BIDI_TYPE_LRO));

  return 0;
}

int awtk_TBidiType_BIDI_TYPE_RLO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BIDI_TYPE_RLO));

  return 0;
}

int awtk_TBidiType_BIDI_TYPE_WLTR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BIDI_TYPE_WLTR));

  return 0;
}

int awtk_TBidiType_BIDI_TYPE_WRTL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BIDI_TYPE_WRTL));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_DEFAULT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_DEFAULT));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_CENTER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_CENTER));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_ICON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_ICON));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_SCALE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_SCALE));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_SCALE_AUTO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_SCALE_AUTO));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_SCALE_DOWN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_SCALE_DOWN));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_SCALE_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_SCALE_W));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_SCALE_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_SCALE_H));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_REPEAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_REPEAT));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_REPEAT_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_REPEAT_X));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_REPEAT_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_REPEAT_Y));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_REPEAT_Y_INVERSE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_REPEAT_Y_INVERSE));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_PATCH9(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_PATCH9));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_PATCH3_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_PATCH3_X));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_PATCH3_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_PATCH3_Y));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_PATCH3_X_SCALE_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_PATCH3_X_SCALE_Y));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_PATCH3_Y_SCALE_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_PATCH3_Y_SCALE_X));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_REPEAT9(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_REPEAT9));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_REPEAT3_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_REPEAT3_X));

  return 0;
}

int awtk_TImageDrawType_IMAGE_DRAW_REPEAT3_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(IMAGE_DRAW_REPEAT3_Y));

  return 0;
}

int awtk_TCanvas_canvas_get_width(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  ret = (wh_t)canvas_get_width(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_get_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  wh_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  ret = (wh_t)canvas_get_height(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_get_clip_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  rect_t* r = (rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)canvas_get_clip_rect(c, r);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_set_clip_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const rect_t* r = (const rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)canvas_set_clip_rect(c, r);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_set_clip_rect_ex(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const rect_t* r = (const rect_t*)jni_ctx_get_object(&actx);
  bool_t translate = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_set_clip_rect_ex(c, r, translate);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_set_fill_color_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const char* color = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)canvas_set_fill_color_str(c, color);
  TKMEM_FREE(color);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_set_text_color_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const char* color = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)canvas_set_text_color_str(c, color);
  TKMEM_FREE(color);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_set_stroke_color_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const char* color = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)canvas_set_stroke_color_str(c, color);
  TKMEM_FREE(color);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_set_global_alpha(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  uint8_t alpha = (uint8_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_set_global_alpha(c, alpha);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_translate(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  xy_t dx = (xy_t)jni_ctx_get_int(&actx);
  xy_t dy = (xy_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_translate(c, dx, dy);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_untranslate(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  xy_t dx = (xy_t)jni_ctx_get_int(&actx);
  xy_t dy = (xy_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_untranslate(c, dx, dy);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_vline(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_draw_vline(c, x, y, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_hline(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_draw_hline(c, x, y, w);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_fill_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_fill_rect(c, x, y, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_clear_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_clear_rect(c, x, y, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_stroke_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_stroke_rect(c, x, y, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_set_font(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  font_size_t size = (font_size_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_set_font(c, name, size);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_measure_utf8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  float_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const char* str = (const char*)jni_ctx_get_str(&actx);
  ret = (float_t)canvas_measure_utf8(c, str);
  TKMEM_FREE(str);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_utf8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const char* str = (const char*)jni_ctx_get_str(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_draw_utf8(c, str, x, y);
  TKMEM_FREE(str);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_utf8_in_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const char* str = (const char*)jni_ctx_get_str(&actx);
  const rect_t* r = (const rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)canvas_draw_utf8_in_rect(c, str, r);
  TKMEM_FREE(str);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_icon(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  xy_t cx = (xy_t)jni_ctx_get_int(&actx);
  xy_t cy = (xy_t)jni_ctx_get_int(&actx);
  ret = (ret_t)canvas_draw_icon(c, img, cx, cy);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  const rect_t* src = (const rect_t*)jni_ctx_get_object(&actx);
  const rect_t* dst = (const rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)canvas_draw_image(c, img, src, dst);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_image_ex(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  image_draw_type_t draw_type = (image_draw_type_t)jni_ctx_get_int(&actx);
  const rect_t* dst = (const rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)canvas_draw_image_ex(c, img, draw_type, dst);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_draw_image_ex2(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  image_draw_type_t draw_type = (image_draw_type_t)jni_ctx_get_int(&actx);
  const rect_t* src = (const rect_t*)jni_ctx_get_object(&actx);
  const rect_t* dst = (const rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)canvas_draw_image_ex2(c, img, draw_type, src, dst);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_get_vgcanvas(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  ret = (vgcanvas_t*)canvas_get_vgcanvas(c);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCanvas_canvas_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  canvas_t* ret = NULL;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  ret = (canvas_t*)canvas_cast(c);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCanvas_canvas_reset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)canvas_reset(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvas_canvas_t_get_prop_ox(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  canvas_t* obj = (canvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ox));

  return 0;
}

int awtk_TCanvas_canvas_t_get_prop_oy(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  canvas_t* obj = (canvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->oy));

  return 0;
}

int awtk_TCanvas_canvas_t_get_prop_font_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  canvas_t* obj = (canvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->font_name));

  return 0;
}

int awtk_TCanvas_canvas_t_get_prop_font_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  canvas_t* obj = (canvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->font_size));

  return 0;
}

int awtk_TCanvas_canvas_t_get_prop_global_alpha(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  canvas_t* obj = (canvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->global_alpha));

  return 0;
}

int awtk_TClipBoardDataType_CLIP_BOARD_DATA_TYPE_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(CLIP_BOARD_DATA_TYPE_NONE));

  return 0;
}

int awtk_TClipBoardDataType_CLIP_BOARD_DATA_TYPE_TEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(CLIP_BOARD_DATA_TYPE_TEXT));

  return 0;
}

int awtk_TClipBoard_clip_board_set_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)clip_board_set_text(text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TClipBoard_clip_board_get_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  ret = (const char*)clip_board_get_text();
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TDialogQuitCode_DIALOG_QUIT_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(DIALOG_QUIT_NONE));

  return 0;
}

int awtk_TDialogQuitCode_DIALOG_QUIT_OK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(DIALOG_QUIT_OK));

  return 0;
}

int awtk_TDialogQuitCode_DIALOG_QUIT_YES(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(DIALOG_QUIT_YES));

  return 0;
}

int awtk_TDialogQuitCode_DIALOG_QUIT_CANCEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(DIALOG_QUIT_CANCEL));

  return 0;
}

int awtk_TDialogQuitCode_DIALOG_QUIT_NO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(DIALOG_QUIT_NO));

  return 0;
}

int awtk_TDialogQuitCode_DIALOG_QUIT_OTHER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(DIALOG_QUIT_OTHER));

  return 0;
}

int awtk_TEventType_EVT_POINTER_DOWN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_DOWN));

  return 0;
}

int awtk_TEventType_EVT_POINTER_DOWN_BEFORE_CHILDREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_DOWN_BEFORE_CHILDREN));

  return 0;
}

int awtk_TEventType_EVT_POINTER_MOVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_MOVE));

  return 0;
}

int awtk_TEventType_EVT_POINTER_MOVE_BEFORE_CHILDREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_MOVE_BEFORE_CHILDREN));

  return 0;
}

int awtk_TEventType_EVT_POINTER_UP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_UP));

  return 0;
}

int awtk_TEventType_EVT_POINTER_UP_BEFORE_CHILDREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_UP_BEFORE_CHILDREN));

  return 0;
}

int awtk_TEventType_EVT_WHEEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WHEEL));

  return 0;
}

int awtk_TEventType_EVT_WHEEL_BEFORE_CHILDREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WHEEL_BEFORE_CHILDREN));

  return 0;
}

int awtk_TEventType_EVT_POINTER_DOWN_ABORT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_DOWN_ABORT));

  return 0;
}

int awtk_TEventType_EVT_CONTEXT_MENU(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_CONTEXT_MENU));

  return 0;
}

int awtk_TEventType_EVT_POINTER_ENTER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_ENTER));

  return 0;
}

int awtk_TEventType_EVT_POINTER_LEAVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_POINTER_LEAVE));

  return 0;
}

int awtk_TEventType_EVT_LONG_PRESS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_LONG_PRESS));

  return 0;
}

int awtk_TEventType_EVT_CLICK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_CLICK));

  return 0;
}

int awtk_TEventType_EVT_FOCUS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_FOCUS));

  return 0;
}

int awtk_TEventType_EVT_BLUR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_BLUR));

  return 0;
}

int awtk_TEventType_EVT_KEY_DOWN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_KEY_DOWN));

  return 0;
}

int awtk_TEventType_EVT_KEY_LONG_PRESS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_KEY_LONG_PRESS));

  return 0;
}

int awtk_TEventType_EVT_KEY_DOWN_BEFORE_CHILDREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_KEY_DOWN_BEFORE_CHILDREN));

  return 0;
}

int awtk_TEventType_EVT_KEY_REPEAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_KEY_REPEAT));

  return 0;
}

int awtk_TEventType_EVT_KEY_UP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_KEY_UP));

  return 0;
}

int awtk_TEventType_EVT_KEY_UP_BEFORE_CHILDREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_KEY_UP_BEFORE_CHILDREN));

  return 0;
}

int awtk_TEventType_EVT_WILL_MOVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WILL_MOVE));

  return 0;
}

int awtk_TEventType_EVT_MOVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_MOVE));

  return 0;
}

int awtk_TEventType_EVT_WILL_RESIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WILL_RESIZE));

  return 0;
}

int awtk_TEventType_EVT_RESIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_RESIZE));

  return 0;
}

int awtk_TEventType_EVT_WILL_MOVE_RESIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WILL_MOVE_RESIZE));

  return 0;
}

int awtk_TEventType_EVT_MOVE_RESIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_MOVE_RESIZE));

  return 0;
}

int awtk_TEventType_EVT_VALUE_WILL_CHANGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_VALUE_WILL_CHANGE));

  return 0;
}

int awtk_TEventType_EVT_VALUE_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_VALUE_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_VALUE_CHANGING(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_VALUE_CHANGING));

  return 0;
}

int awtk_TEventType_EVT_PAINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_PAINT));

  return 0;
}

int awtk_TEventType_EVT_BEFORE_PAINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_BEFORE_PAINT));

  return 0;
}

int awtk_TEventType_EVT_AFTER_PAINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_AFTER_PAINT));

  return 0;
}

int awtk_TEventType_EVT_PAINT_DONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_PAINT_DONE));

  return 0;
}

int awtk_TEventType_EVT_LOCALE_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_LOCALE_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_ANIM_START(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ANIM_START));

  return 0;
}

int awtk_TEventType_EVT_ANIM_STOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ANIM_STOP));

  return 0;
}

int awtk_TEventType_EVT_ANIM_PAUSE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ANIM_PAUSE));

  return 0;
}

int awtk_TEventType_EVT_ANIM_ONCE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ANIM_ONCE));

  return 0;
}

int awtk_TEventType_EVT_ANIM_END(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ANIM_END));

  return 0;
}

int awtk_TEventType_EVT_WINDOW_LOAD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WINDOW_LOAD));

  return 0;
}

int awtk_TEventType_EVT_WIDGET_LOAD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WIDGET_LOAD));

  return 0;
}

int awtk_TEventType_EVT_WINDOW_WILL_OPEN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WINDOW_WILL_OPEN));

  return 0;
}

int awtk_TEventType_EVT_WINDOW_OPEN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WINDOW_OPEN));

  return 0;
}

int awtk_TEventType_EVT_WINDOW_TO_BACKGROUND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WINDOW_TO_BACKGROUND));

  return 0;
}

int awtk_TEventType_EVT_WINDOW_TO_FOREGROUND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WINDOW_TO_FOREGROUND));

  return 0;
}

int awtk_TEventType_EVT_WINDOW_CLOSE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WINDOW_CLOSE));

  return 0;
}

int awtk_TEventType_EVT_REQUEST_CLOSE_WINDOW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_REQUEST_CLOSE_WINDOW));

  return 0;
}

int awtk_TEventType_EVT_TOP_WINDOW_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_TOP_WINDOW_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_IM_START(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_START));

  return 0;
}

int awtk_TEventType_EVT_IM_STOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_STOP));

  return 0;
}

int awtk_TEventType_EVT_IM_COMMIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_COMMIT));

  return 0;
}

int awtk_TEventType_EVT_IM_CLEAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_CLEAR));

  return 0;
}

int awtk_TEventType_EVT_IM_CANCEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_CANCEL));

  return 0;
}

int awtk_TEventType_EVT_IM_PREEDIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_PREEDIT));

  return 0;
}

int awtk_TEventType_EVT_IM_PREEDIT_CONFIRM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_PREEDIT_CONFIRM));

  return 0;
}

int awtk_TEventType_EVT_IM_PREEDIT_ABORT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_PREEDIT_ABORT));

  return 0;
}

int awtk_TEventType_EVT_IM_SHOW_CANDIDATES(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_SHOW_CANDIDATES));

  return 0;
}

int awtk_TEventType_EVT_IM_SHOW_PRE_CANDIDATES(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_SHOW_PRE_CANDIDATES));

  return 0;
}

int awtk_TEventType_EVT_IM_LANG_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_LANG_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_IM_ACTION(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_ACTION));

  return 0;
}

int awtk_TEventType_EVT_IM_ACTION_INFO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_IM_ACTION_INFO));

  return 0;
}

int awtk_TEventType_EVT_DRAG_START(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_DRAG_START));

  return 0;
}

int awtk_TEventType_EVT_DRAG(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_DRAG));

  return 0;
}

int awtk_TEventType_EVT_DRAG_END(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_DRAG_END));

  return 0;
}

int awtk_TEventType_EVT_RESET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_RESET));

  return 0;
}

int awtk_TEventType_EVT_SCREEN_SAVER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_SCREEN_SAVER));

  return 0;
}

int awtk_TEventType_EVT_LOW_MEMORY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_LOW_MEMORY));

  return 0;
}

int awtk_TEventType_EVT_OUT_OF_MEMORY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_OUT_OF_MEMORY));

  return 0;
}

int awtk_TEventType_EVT_ORIENTATION_WILL_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ORIENTATION_WILL_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_ORIENTATION_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ORIENTATION_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_WIDGET_CREATED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WIDGET_CREATED));

  return 0;
}

int awtk_TEventType_EVT_REQUEST_QUIT_APP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_REQUEST_QUIT_APP));

  return 0;
}

int awtk_TEventType_EVT_THEME_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_THEME_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_WIDGET_ADD_CHILD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WIDGET_ADD_CHILD));

  return 0;
}

int awtk_TEventType_EVT_WIDGET_REMOVE_CHILD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_WIDGET_REMOVE_CHILD));

  return 0;
}

int awtk_TEventType_EVT_SCROLL_START(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_SCROLL_START));

  return 0;
}

int awtk_TEventType_EVT_SCROLL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_SCROLL));

  return 0;
}

int awtk_TEventType_EVT_SCROLL_END(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_SCROLL_END));

  return 0;
}

int awtk_TEventType_EVT_MULTI_GESTURE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_MULTI_GESTURE));

  return 0;
}

int awtk_TEventType_EVT_PAGE_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_PAGE_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_ASSET_MANAGER_LOAD_ASSET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ASSET_MANAGER_LOAD_ASSET));

  return 0;
}

int awtk_TEventType_EVT_ASSET_MANAGER_UNLOAD_ASSET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ASSET_MANAGER_UNLOAD_ASSET));

  return 0;
}

int awtk_TEventType_EVT_ASSET_MANAGER_CLEAR_CACHE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ASSET_MANAGER_CLEAR_CACHE));

  return 0;
}

int awtk_TEventType_EVT_TIMER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_TIMER));

  return 0;
}

int awtk_TEventType_EVT_REQ_START(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_REQ_START));

  return 0;
}

int awtk_TEventType_EVT_USER_START(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_USER_START));

  return 0;
}

int awtk_TEventType_EVT_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_NONE));

  return 0;
}

int awtk_TEventType_EVT_PROP_WILL_CHANGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_PROP_WILL_CHANGE));

  return 0;
}

int awtk_TEventType_EVT_PROP_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_PROP_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_CMD_WILL_EXEC(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_CMD_WILL_EXEC));

  return 0;
}

int awtk_TEventType_EVT_CMD_EXECED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_CMD_EXECED));

  return 0;
}

int awtk_TEventType_EVT_CMD_CAN_EXEC(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_CMD_CAN_EXEC));

  return 0;
}

int awtk_TEventType_EVT_ITEMS_WILL_CHANGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ITEMS_WILL_CHANGE));

  return 0;
}

int awtk_TEventType_EVT_ITEMS_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ITEMS_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_PROPS_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_PROPS_CHANGED));

  return 0;
}

int awtk_TEventType_EVT_PROGRESS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_PROGRESS));

  return 0;
}

int awtk_TEventType_EVT_DONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_DONE));

  return 0;
}

int awtk_TEventType_EVT_ERROR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_ERROR));

  return 0;
}

int awtk_TEventType_EVT_DESTROY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_DESTROY));

  return 0;
}

int awtk_TFontManager_font_manager_unload_font(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  font_manager_t* fm = (font_manager_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  font_size_t size = (font_size_t)jni_ctx_get_int(&actx);
  ret = (ret_t)font_manager_unload_font(fm, name, size);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFontManager_font_manager_shrink_cache(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  font_manager_t* fm = (font_manager_t*)jni_ctx_get_object(&actx);
  uint32_t cache_size = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)font_manager_shrink_cache(fm, cache_size);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFontManager_font_manager_unload_all(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  font_manager_t* fm = (font_manager_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)font_manager_unload_all(fm);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGlyphFormat_GLYPH_FMT_ALPHA(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(GLYPH_FMT_ALPHA));

  return 0;
}

int awtk_TGlyphFormat_GLYPH_FMT_MONO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(GLYPH_FMT_MONO));

  return 0;
}

int awtk_TGlyphFormat_GLYPH_FMT_RGBA(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(GLYPH_FMT_RGBA));

  return 0;
}

int awtk_TIdle_idle_remove(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  uint32_t idle_id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)idle_remove(idle_id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TIdle_idle_remove_all_by_ctx(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  void* ctx = (void*)jni_ctx_get_int64(&actx);
  ret = (ret_t)idle_remove_all_by_ctx(ctx);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageManager_image_manager(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_manager_t* ret = NULL;
  ret = (image_manager_t*)image_manager();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImageManager_image_manager_get_bitmap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  image_manager_t* imm = (image_manager_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  bitmap_t* image = (bitmap_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)image_manager_get_bitmap(imm, name, image);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageManager_image_manager_preload(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  image_manager_t* imm = (image_manager_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)image_manager_preload(imm, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputType_INPUT_TEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_TEXT));

  return 0;
}

int awtk_TInputType_INPUT_INT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_INT));

  return 0;
}

int awtk_TInputType_INPUT_UINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_UINT));

  return 0;
}

int awtk_TInputType_INPUT_HEX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_HEX));

  return 0;
}

int awtk_TInputType_INPUT_FLOAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_FLOAT));

  return 0;
}

int awtk_TInputType_INPUT_UFLOAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_UFLOAT));

  return 0;
}

int awtk_TInputType_INPUT_EMAIL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_EMAIL));

  return 0;
}

int awtk_TInputType_INPUT_PASSWORD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_PASSWORD));

  return 0;
}

int awtk_TInputType_INPUT_PHONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_PHONE));

  return 0;
}

int awtk_TInputType_INPUT_IPV4(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_IPV4));

  return 0;
}

int awtk_TInputType_INPUT_DATE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_DATE));

  return 0;
}

int awtk_TInputType_INPUT_TIME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_TIME));

  return 0;
}

int awtk_TInputType_INPUT_TIME_FULL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_TIME_FULL));

  return 0;
}

int awtk_TInputType_INPUT_CUSTOM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_CUSTOM));

  return 0;
}

int awtk_TInputType_INPUT_CUSTOM_PASSWORD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_CUSTOM_PASSWORD));

  return 0;
}

int awtk_TInputType_INPUT_ASCII(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INPUT_ASCII));

  return 0;
}

int awtk_TInputMethod_input_method_commit_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)input_method_commit_text(im, text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputMethod_input_method_set_lang(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  const char* lang = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)input_method_set_lang(im, lang);
  TKMEM_FREE(lang);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputMethod_input_method_get_lang(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  ret = (const char*)input_method_get_lang(im);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TInputMethod_input_method_dispatch_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  uint32_t key = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)input_method_dispatch_key(im, key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputMethod_input_method_dispatch_keys(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  const char* key = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)input_method_dispatch_keys(im, key);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputMethod_input_method_dispatch_preedit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)input_method_dispatch_preedit(im);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputMethod_input_method_dispatch_preedit_confirm(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)input_method_dispatch_preedit_confirm(im);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputMethod_input_method_dispatch_preedit_abort(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  input_method_t* im = (input_method_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)input_method_dispatch_preedit_abort(im);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TInputMethod_input_method(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  input_method_t* ret = NULL;
  ret = (input_method_t*)input_method();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RETURN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RETURN));

  return 0;
}

int awtk_TKeyCode_TK_KEY_ESCAPE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_ESCAPE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_BACKSPACE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_BACKSPACE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_TAB(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_TAB));

  return 0;
}

int awtk_TKeyCode_TK_KEY_SPACE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_SPACE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_EXCLAIM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_EXCLAIM));

  return 0;
}

int awtk_TKeyCode_TK_KEY_QUOTEDBL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_QUOTEDBL));

  return 0;
}

int awtk_TKeyCode_TK_KEY_HASH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_HASH));

  return 0;
}

int awtk_TKeyCode_TK_KEY_PERCENT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_PERCENT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_DOLLAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_DOLLAR));

  return 0;
}

int awtk_TKeyCode_TK_KEY_AMPERSAND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_AMPERSAND));

  return 0;
}

int awtk_TKeyCode_TK_KEY_QUOTE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_QUOTE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LEFTPAREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LEFTPAREN));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RIGHTPAREN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RIGHTPAREN));

  return 0;
}

int awtk_TKeyCode_TK_KEY_ASTERISK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_ASTERISK));

  return 0;
}

int awtk_TKeyCode_TK_KEY_PLUS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_PLUS));

  return 0;
}

int awtk_TKeyCode_TK_KEY_COMMA(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_COMMA));

  return 0;
}

int awtk_TKeyCode_TK_KEY_MINUS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_MINUS));

  return 0;
}

int awtk_TKeyCode_TK_KEY_PERIOD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_PERIOD));

  return 0;
}

int awtk_TKeyCode_TK_KEY_SLASH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_SLASH));

  return 0;
}

int awtk_TKeyCode_TK_KEY_0(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_0));

  return 0;
}

int awtk_TKeyCode_TK_KEY_1(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_1));

  return 0;
}

int awtk_TKeyCode_TK_KEY_2(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_2));

  return 0;
}

int awtk_TKeyCode_TK_KEY_3(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_3));

  return 0;
}

int awtk_TKeyCode_TK_KEY_4(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_4));

  return 0;
}

int awtk_TKeyCode_TK_KEY_5(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_5));

  return 0;
}

int awtk_TKeyCode_TK_KEY_6(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_6));

  return 0;
}

int awtk_TKeyCode_TK_KEY_7(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_7));

  return 0;
}

int awtk_TKeyCode_TK_KEY_8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_8));

  return 0;
}

int awtk_TKeyCode_TK_KEY_9(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_9));

  return 0;
}

int awtk_TKeyCode_TK_KEY_COLON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_COLON));

  return 0;
}

int awtk_TKeyCode_TK_KEY_SEMICOLON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_SEMICOLON));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LESS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LESS));

  return 0;
}

int awtk_TKeyCode_TK_KEY_EQUAL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_EQUAL));

  return 0;
}

int awtk_TKeyCode_TK_KEY_GREATER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_GREATER));

  return 0;
}

int awtk_TKeyCode_TK_KEY_QUESTION(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_QUESTION));

  return 0;
}

int awtk_TKeyCode_TK_KEY_AT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_AT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LEFTBRACKET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LEFTBRACKET));

  return 0;
}

int awtk_TKeyCode_TK_KEY_BACKSLASH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_BACKSLASH));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RIGHTBRACKET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RIGHTBRACKET));

  return 0;
}

int awtk_TKeyCode_TK_KEY_CARET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_CARET));

  return 0;
}

int awtk_TKeyCode_TK_KEY_UNDERSCORE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_UNDERSCORE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_BACKQUOTE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_BACKQUOTE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_a(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_a));

  return 0;
}

int awtk_TKeyCode_TK_KEY_b(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_b));

  return 0;
}

int awtk_TKeyCode_TK_KEY_c(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_c));

  return 0;
}

int awtk_TKeyCode_TK_KEY_d(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_d));

  return 0;
}

int awtk_TKeyCode_TK_KEY_e(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_e));

  return 0;
}

int awtk_TKeyCode_TK_KEY_f(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_f));

  return 0;
}

int awtk_TKeyCode_TK_KEY_g(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_g));

  return 0;
}

int awtk_TKeyCode_TK_KEY_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_h));

  return 0;
}

int awtk_TKeyCode_TK_KEY_i(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_i));

  return 0;
}

int awtk_TKeyCode_TK_KEY_j(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_j));

  return 0;
}

int awtk_TKeyCode_TK_KEY_k(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_k));

  return 0;
}

int awtk_TKeyCode_TK_KEY_l(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_l));

  return 0;
}

int awtk_TKeyCode_TK_KEY_m(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_m));

  return 0;
}

int awtk_TKeyCode_TK_KEY_n(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_n));

  return 0;
}

int awtk_TKeyCode_TK_KEY_o(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_o));

  return 0;
}

int awtk_TKeyCode_TK_KEY_p(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_p));

  return 0;
}

int awtk_TKeyCode_TK_KEY_q(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_q));

  return 0;
}

int awtk_TKeyCode_TK_KEY_r(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_r));

  return 0;
}

int awtk_TKeyCode_TK_KEY_s(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_s));

  return 0;
}

int awtk_TKeyCode_TK_KEY_t(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_t));

  return 0;
}

int awtk_TKeyCode_TK_KEY_u(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_u));

  return 0;
}

int awtk_TKeyCode_TK_KEY_v(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_v));

  return 0;
}

int awtk_TKeyCode_TK_KEY_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_w));

  return 0;
}

int awtk_TKeyCode_TK_KEY_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_x));

  return 0;
}

int awtk_TKeyCode_TK_KEY_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_y));

  return 0;
}

int awtk_TKeyCode_TK_KEY_z(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_z));

  return 0;
}

int awtk_TKeyCode_TK_KEY_A(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_A));

  return 0;
}

int awtk_TKeyCode_TK_KEY_B(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_B));

  return 0;
}

int awtk_TKeyCode_TK_KEY_C(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_C));

  return 0;
}

int awtk_TKeyCode_TK_KEY_D(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_D));

  return 0;
}

int awtk_TKeyCode_TK_KEY_E(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_E));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F));

  return 0;
}

int awtk_TKeyCode_TK_KEY_G(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_G));

  return 0;
}

int awtk_TKeyCode_TK_KEY_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_H));

  return 0;
}

int awtk_TKeyCode_TK_KEY_I(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_I));

  return 0;
}

int awtk_TKeyCode_TK_KEY_J(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_J));

  return 0;
}

int awtk_TKeyCode_TK_KEY_K(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_K));

  return 0;
}

int awtk_TKeyCode_TK_KEY_L(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_L));

  return 0;
}

int awtk_TKeyCode_TK_KEY_M(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_M));

  return 0;
}

int awtk_TKeyCode_TK_KEY_N(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_N));

  return 0;
}

int awtk_TKeyCode_TK_KEY_O(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_O));

  return 0;
}

int awtk_TKeyCode_TK_KEY_P(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_P));

  return 0;
}

int awtk_TKeyCode_TK_KEY_Q(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_Q));

  return 0;
}

int awtk_TKeyCode_TK_KEY_R(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_R));

  return 0;
}

int awtk_TKeyCode_TK_KEY_S(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_S));

  return 0;
}

int awtk_TKeyCode_TK_KEY_T(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_T));

  return 0;
}

int awtk_TKeyCode_TK_KEY_U(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_U));

  return 0;
}

int awtk_TKeyCode_TK_KEY_V(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_V));

  return 0;
}

int awtk_TKeyCode_TK_KEY_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_W));

  return 0;
}

int awtk_TKeyCode_TK_KEY_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_X));

  return 0;
}

int awtk_TKeyCode_TK_KEY_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_Y));

  return 0;
}

int awtk_TKeyCode_TK_KEY_Z(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_Z));

  return 0;
}

int awtk_TKeyCode_TK_KEY_DOT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_DOT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_DELETE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_DELETE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LEFTBRACE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LEFTBRACE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RIGHTBRACE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RIGHTBRACE));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LSHIFT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LSHIFT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RSHIFT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RSHIFT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LCTRL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LCTRL));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RCTRL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RCTRL));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LALT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LALT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RALT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RALT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_CAPSLOCK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_CAPSLOCK));

  return 0;
}

int awtk_TKeyCode_TK_KEY_HOME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_HOME));

  return 0;
}

int awtk_TKeyCode_TK_KEY_END(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_END));

  return 0;
}

int awtk_TKeyCode_TK_KEY_INSERT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_INSERT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_UP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_UP));

  return 0;
}

int awtk_TKeyCode_TK_KEY_DOWN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_DOWN));

  return 0;
}

int awtk_TKeyCode_TK_KEY_LEFT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_LEFT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_RIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_RIGHT));

  return 0;
}

int awtk_TKeyCode_TK_KEY_PAGEUP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_PAGEUP));

  return 0;
}

int awtk_TKeyCode_TK_KEY_PAGEDOWN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_PAGEDOWN));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F1(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F1));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F2(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F2));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F3(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F3));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F4(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F4));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F5(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F5));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F6(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F6));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F7(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F7));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F8));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F9(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F9));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F10(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F10));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F11(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F11));

  return 0;
}

int awtk_TKeyCode_TK_KEY_F12(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_F12));

  return 0;
}

int awtk_TKeyCode_TK_KEY_MENU(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_MENU));

  return 0;
}

int awtk_TKeyCode_TK_KEY_COMMAND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_COMMAND));

  return 0;
}

int awtk_TKeyCode_TK_KEY_BACK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_BACK));

  return 0;
}

int awtk_TKeyCode_TK_KEY_CANCEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_CANCEL));

  return 0;
}

int awtk_TKeyCode_TK_KEY_WHEEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(TK_KEY_WHEEL));

  return 0;
}

int awtk_TLocaleInfo_locale_info(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  locale_info_t* ret = NULL;
  ret = (locale_info_t*)locale_info();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TLocaleInfo_locale_info_tr(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  locale_info_t* locale_info = (locale_info_t*)jni_ctx_get_object(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (const char*)locale_info_tr(locale_info, text);
  TKMEM_FREE(text);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TLocaleInfo_locale_info_change(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jni_ctx_get_object(&actx);
  char* language = (char*)jni_ctx_get_str(&actx);
  char* country = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)locale_info_change(locale_info, language, country);
  TKMEM_FREE(language);
  TKMEM_FREE(country);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLocaleInfo_locale_info_off(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  locale_info_t* locale_info = (locale_info_t*)jni_ctx_get_object(&actx);
  uint32_t id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)locale_info_off(locale_info, id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyleId_STYLE_ID_BG_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_BG_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FG_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FG_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_MASK_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_MASK_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FONT_NAME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FONT_NAME));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FONT_SIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FONT_SIZE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FONT_STYLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FONT_STYLE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_TEXT_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_TEXT_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_HIGHLIGHT_FONT_NAME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_HIGHLIGHT_FONT_NAME));

  return 0;
}

int awtk_TStyleId_STYLE_ID_HIGHLIGHT_FONT_SIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_HIGHLIGHT_FONT_SIZE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_HIGHLIGHT_TEXT_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_HIGHLIGHT_TEXT_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_TIPS_TEXT_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_TIPS_TEXT_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_TEXT_ALIGN_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_TEXT_ALIGN_H));

  return 0;
}

int awtk_TStyleId_STYLE_ID_TEXT_ALIGN_V(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_TEXT_ALIGN_V));

  return 0;
}

int awtk_TStyleId_STYLE_ID_BORDER_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_BORDER_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_BORDER_WIDTH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_BORDER_WIDTH));

  return 0;
}

int awtk_TStyleId_STYLE_ID_BORDER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_BORDER));

  return 0;
}

int awtk_TStyleId_STYLE_ID_BG_IMAGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_BG_IMAGE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_BG_IMAGE_DRAW_TYPE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_BG_IMAGE_DRAW_TYPE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ICON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ICON));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FG_IMAGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FG_IMAGE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FG_IMAGE_DRAW_TYPE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FG_IMAGE_DRAW_TYPE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_SPACER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_SPACER));

  return 0;
}

int awtk_TStyleId_STYLE_ID_MARGIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_MARGIN));

  return 0;
}

int awtk_TStyleId_STYLE_ID_MARGIN_LEFT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_MARGIN_LEFT));

  return 0;
}

int awtk_TStyleId_STYLE_ID_MARGIN_RIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_MARGIN_RIGHT));

  return 0;
}

int awtk_TStyleId_STYLE_ID_MARGIN_TOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_MARGIN_TOP));

  return 0;
}

int awtk_TStyleId_STYLE_ID_MARGIN_BOTTOM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_MARGIN_BOTTOM));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ICON_AT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ICON_AT));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ACTIVE_ICON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ACTIVE_ICON));

  return 0;
}

int awtk_TStyleId_STYLE_ID_X_OFFSET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_X_OFFSET));

  return 0;
}

int awtk_TStyleId_STYLE_ID_Y_OFFSET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_Y_OFFSET));

  return 0;
}

int awtk_TStyleId_STYLE_ID_SELECTED_BG_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_SELECTED_BG_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_SELECTED_FG_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_SELECTED_FG_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_SELECTED_TEXT_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_SELECTED_TEXT_COLOR));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ROUND_RADIUS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ROUND_RADIUS));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ROUND_RADIUS_TOP_LETF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ROUND_RADIUS_TOP_LETF));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ROUND_RADIUS_TOP_RIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ROUND_RADIUS_TOP_RIGHT));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ROUND_RADIUS_BOTTOM_LETF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ROUND_RADIUS_BOTTOM_LETF));

  return 0;
}

int awtk_TStyleId_STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT));

  return 0;
}

int awtk_TStyleId_STYLE_ID_CHILDREN_LAYOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_CHILDREN_LAYOUT));

  return 0;
}

int awtk_TStyleId_STYLE_ID_SELF_LAYOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_SELF_LAYOUT));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FOCUSABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FOCUSABLE));

  return 0;
}

int awtk_TStyleId_STYLE_ID_FEEDBACK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(STYLE_ID_FEEDBACK));

  return 0;
}

int awtk_TStyle_style_notify_widget_state_changed(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)style_notify_widget_state_changed(s, widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyle_style_is_valid(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)style_is_valid(s);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyle_style_get_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int32_t defval = (int32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)style_get_int(s, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyle_style_get_uint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint32_t defval = (uint32_t)jni_ctx_get_int(&actx);
  ret = (uint32_t)style_get_uint(s, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyle_style_get_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* defval = (const char*)jni_ctx_get_str(&actx);
  ret = (const char*)style_get_str(s, name, defval);
  TKMEM_FREE(name);
  TKMEM_FREE(defval);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TStyle_style_set(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  const char* state = (const char*)jni_ctx_get_str(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const value_t* value = (const value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)style_set(s, state, name, value);
  TKMEM_FREE(state);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyle_style_update_state(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  theme_t* theme = (theme_t*)jni_ctx_get_object(&actx);
  const char* widget_type = (const char*)jni_ctx_get_str(&actx);
  const char* style_name = (const char*)jni_ctx_get_str(&actx);
  const char* widget_state = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)style_update_state(s, theme, widget_type, style_name, widget_state);
  TKMEM_FREE(widget_type);
  TKMEM_FREE(style_name);
  TKMEM_FREE(widget_state);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyle_style_get_style_state(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  ret = (const char*)style_get_style_state(s);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TStyle_style_is_mutable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)style_is_mutable(s);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyle_style_get_style_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  ret = (const char*)style_get_style_type(s);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TTheme_theme(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  theme_t* ret = NULL;
  ret = (theme_t*)theme();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTimer_timer_remove(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)timer_remove(timer_id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimer_timer_remove_all_by_ctx(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  void* ctx = (void*)jni_ctx_get_int64(&actx);
  ret = (ret_t)timer_remove_all_by_ctx(ctx);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimer_timer_reset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)timer_reset(timer_id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimer_timer_suspend(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)timer_suspend(timer_id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimer_timer_resume(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)timer_resume(timer_id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimer_timer_modify(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  uint32_t timer_id = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t duration = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)timer_modify(timer_id, duration);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAlignV_ALIGN_V_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_V_NONE));

  return 0;
}

int awtk_TAlignV_ALIGN_V_MIDDLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_V_MIDDLE));

  return 0;
}

int awtk_TAlignV_ALIGN_V_TOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_V_TOP));

  return 0;
}

int awtk_TAlignV_ALIGN_V_BOTTOM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_V_BOTTOM));

  return 0;
}

int awtk_TAlignH_ALIGN_H_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_H_NONE));

  return 0;
}

int awtk_TAlignH_ALIGN_H_CENTER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_H_CENTER));

  return 0;
}

int awtk_TAlignH_ALIGN_H_LEFT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_H_LEFT));

  return 0;
}

int awtk_TAlignH_ALIGN_H_RIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ALIGN_H_RIGHT));

  return 0;
}

int awtk_TAppType_APP_MOBILE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(APP_MOBILE));

  return 0;
}

int awtk_TAppType_APP_SIMULATOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(APP_SIMULATOR));

  return 0;
}

int awtk_TAppType_APP_DESKTOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(APP_DESKTOP));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_NONE));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_RGBA8888(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_RGBA8888));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_ABGR8888(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_ABGR8888));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_BGRA8888(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_BGRA8888));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_ARGB8888(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_ARGB8888));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_RGB565(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_RGB565));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_BGR565(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_BGR565));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_RGB888(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_RGB888));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_BGR888(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_BGR888));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_GRAY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_GRAY));

  return 0;
}

int awtk_TBitmapFormat_BITMAP_FMT_MONO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FMT_MONO));

  return 0;
}

int awtk_TBitmapFlag_BITMAP_FLAG_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FLAG_NONE));

  return 0;
}

int awtk_TBitmapFlag_BITMAP_FLAG_OPAQUE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FLAG_OPAQUE));

  return 0;
}

int awtk_TBitmapFlag_BITMAP_FLAG_IMMUTABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FLAG_IMMUTABLE));

  return 0;
}

int awtk_TBitmapFlag_BITMAP_FLAG_TEXTURE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FLAG_TEXTURE));

  return 0;
}

int awtk_TBitmapFlag_BITMAP_FLAG_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FLAG_CHANGED));

  return 0;
}

int awtk_TBitmapFlag_BITMAP_FLAG_PREMULTI_ALPHA(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(BITMAP_FLAG_PREMULTI_ALPHA));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* ret = NULL;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (vgcanvas_t*)vgcanvas_cast(vg);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_flush(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_flush(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_begin_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_begin_path(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_move_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_move_to(vg, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_line_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_line_to(vg, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_quad_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t cpx = (float_t)jni_ctx_get_float(&actx);
  float_t cpy = (float_t)jni_ctx_get_float(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_quad_to(vg, cpx, cpy, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_bezier_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t cp1x = (float_t)jni_ctx_get_float(&actx);
  float_t cp1y = (float_t)jni_ctx_get_float(&actx);
  float_t cp2x = (float_t)jni_ctx_get_float(&actx);
  float_t cp2y = (float_t)jni_ctx_get_float(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_bezier_to(vg, cp1x, cp1y, cp2x, cp2y, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_arc_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x1 = (float_t)jni_ctx_get_float(&actx);
  float_t y1 = (float_t)jni_ctx_get_float(&actx);
  float_t x2 = (float_t)jni_ctx_get_float(&actx);
  float_t y2 = (float_t)jni_ctx_get_float(&actx);
  float_t r = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_arc_to(vg, x1, y1, x2, y2, r);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_arc(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  float_t r = (float_t)jni_ctx_get_float(&actx);
  float_t start_angle = (float_t)jni_ctx_get_float(&actx);
  float_t end_angle = (float_t)jni_ctx_get_float(&actx);
  bool_t ccw = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)vgcanvas_arc(vg, x, y, r, start_angle, end_angle, ccw);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_is_point_in_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  ret = (bool_t)vgcanvas_is_point_in_path(vg, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  float_t w = (float_t)jni_ctx_get_float(&actx);
  float_t h = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_rect(vg, x, y, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_rounded_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  float_t w = (float_t)jni_ctx_get_float(&actx);
  float_t h = (float_t)jni_ctx_get_float(&actx);
  float_t r = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_rounded_rect(vg, x, y, w, h, r);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_ellipse(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  float_t rx = (float_t)jni_ctx_get_float(&actx);
  float_t ry = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_ellipse(vg, x, y, rx, ry);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_close_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_close_path(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_path_winding(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  bool_t dir = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)vgcanvas_path_winding(vg, dir);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_rotate(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t rad = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_rotate(vg, rad);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_scale(vg, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_translate(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_translate(vg, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_transform(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t a = (float_t)jni_ctx_get_float(&actx);
  float_t b = (float_t)jni_ctx_get_float(&actx);
  float_t c = (float_t)jni_ctx_get_float(&actx);
  float_t d = (float_t)jni_ctx_get_float(&actx);
  float_t e = (float_t)jni_ctx_get_float(&actx);
  float_t f = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_transform(vg, a, b, c, d, e, f);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_transform(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t a = (float_t)jni_ctx_get_float(&actx);
  float_t b = (float_t)jni_ctx_get_float(&actx);
  float_t c = (float_t)jni_ctx_get_float(&actx);
  float_t d = (float_t)jni_ctx_get_float(&actx);
  float_t e = (float_t)jni_ctx_get_float(&actx);
  float_t f = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_set_transform(vg, a, b, c, d, e, f);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_clip_path(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_clip_path(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_clip_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  float_t w = (float_t)jni_ctx_get_float(&actx);
  float_t h = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_clip_rect(vg, x, y, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_intersect_clip_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  float_t w = (float_t)jni_ctx_get_float(&actx);
  float_t h = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_intersect_clip_rect(vg, x, y, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_fill(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_fill(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_stroke(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_stroke(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_paint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  bool_t stroke = (bool_t)jni_ctx_get_int(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_paint(vg, stroke, img);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_font(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  char* font = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vgcanvas_set_font(vg, font);
  TKMEM_FREE(font);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_font_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t font = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_set_font_size(vg, font);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_text_align(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  char* value = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vgcanvas_set_text_align(vg, value);
  TKMEM_FREE(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_text_baseline(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  char* value = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vgcanvas_set_text_baseline(vg, value);
  TKMEM_FREE(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_fill_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  char* text = (char*)jni_ctx_get_str(&actx);
  float_t x = (float_t)jni_ctx_get_float(&actx);
  float_t y = (float_t)jni_ctx_get_float(&actx);
  float_t max_width = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_fill_text(vg, text, x, y, max_width);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_measure_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  float_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  char* text = (char*)jni_ctx_get_str(&actx);
  ret = (float_t)vgcanvas_measure_text(vg, text);
  TKMEM_FREE(text);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_draw_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  float_t sx = (float_t)jni_ctx_get_float(&actx);
  float_t sy = (float_t)jni_ctx_get_float(&actx);
  float_t sw = (float_t)jni_ctx_get_float(&actx);
  float_t sh = (float_t)jni_ctx_get_float(&actx);
  float_t dx = (float_t)jni_ctx_get_float(&actx);
  float_t dy = (float_t)jni_ctx_get_float(&actx);
  float_t dw = (float_t)jni_ctx_get_float(&actx);
  float_t dh = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_draw_image(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_draw_icon(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  float_t sx = (float_t)jni_ctx_get_float(&actx);
  float_t sy = (float_t)jni_ctx_get_float(&actx);
  float_t sw = (float_t)jni_ctx_get_float(&actx);
  float_t sh = (float_t)jni_ctx_get_float(&actx);
  float_t dx = (float_t)jni_ctx_get_float(&actx);
  float_t dy = (float_t)jni_ctx_get_float(&actx);
  float_t dw = (float_t)jni_ctx_get_float(&actx);
  float_t dh = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_draw_icon(vg, img, sx, sy, sw, sh, dx, dy, dw, dh);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_antialias(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  bool_t value = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)vgcanvas_set_antialias(vg, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_global_alpha(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t alpha = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_set_global_alpha(vg, alpha);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_line_width(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t value = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_set_line_width(vg, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_fill_color_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  const char* color = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vgcanvas_set_fill_color_str(vg, color);
  TKMEM_FREE(color);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_stroke_color_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  const char* color = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vgcanvas_set_stroke_color_str(vg, color);
  TKMEM_FREE(color);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_line_cap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  char* value = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vgcanvas_set_line_cap(vg, value);
  TKMEM_FREE(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_line_join(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  char* value = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vgcanvas_set_line_join(vg, value);
  TKMEM_FREE(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_set_miter_limit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  float_t value = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)vgcanvas_set_miter_limit(vg, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_save(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_save(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_restore(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  vgcanvas_t* vg = (vgcanvas_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)vgcanvas_restore(vg);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->w));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->h));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_stride(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->stride));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_ratio(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->ratio));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_anti_alias(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->anti_alias));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_line_width(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->line_width));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_global_alpha(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->global_alpha));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_miter_limit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->miter_limit));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_line_cap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->line_cap));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_line_join(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->line_join));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_font(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->font));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_font_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->font_size));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_text_align(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->text_align));

  return 0;
}

int awtk_TVgcanvas_vgcanvas_t_get_prop_text_baseline(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vgcanvas_t* obj = (vgcanvas_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->text_baseline));

  return 0;
}

int awtk_TVgcanvasLineCap_VGCANVAS_LINE_CAP_ROUND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(VGCANVAS_LINE_CAP_ROUND));

  return 0;
}

int awtk_TVgcanvasLineCap_VGCANVAS_LINE_CAP_SQUARE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(VGCANVAS_LINE_CAP_SQUARE));

  return 0;
}

int awtk_TVgcanvasLineCap_VGCANVAS_LINE_CAP_BUTT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(VGCANVAS_LINE_CAP_BUTT));

  return 0;
}

int awtk_TVgcanvasLineJoin_VGCANVAS_LINE_JOIN_ROUND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(VGCANVAS_LINE_JOIN_ROUND));

  return 0;
}

int awtk_TVgcanvasLineJoin_VGCANVAS_LINE_JOIN_BEVEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(VGCANVAS_LINE_JOIN_BEVEL));

  return 0;
}

int awtk_TVgcanvasLineJoin_VGCANVAS_LINE_JOIN_MITTER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(VGCANVAS_LINE_JOIN_MITTER));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_EXEC(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_EXEC));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_X));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_Y));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_W));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_H));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MAX_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MAX_H));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DESIGN_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DESIGN_W));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DESIGN_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DESIGN_H));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_SCALE_CHILDREN_X));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_SCALE_CHILDREN_Y));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_SCALE_CHILDREN_W));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_SCALE_CHILDREN_H));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_INPUTING(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_INPUTING));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ALWAYS_ON_TOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ALWAYS_ON_TOP));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CARET_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CARET_X));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CARET_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CARET_Y));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DIRTY_RECT_TOLERANCE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DIRTY_RECT_TOLERANCE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_BIDI(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_BIDI));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CANVAS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CANVAS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LOCALIZE_OPTIONS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LOCALIZE_OPTIONS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_NATIVE_WINDOW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_NATIVE_WINDOW));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_HIGHLIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_HIGHLIGHT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_BAR_SIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_BAR_SIZE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_OPACITY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_OPACITY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MIN_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MIN_W));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MAX_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MAX_W));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_ADJUST_SIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_ADJUST_SIZE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SINGLE_INSTANCE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SINGLE_INSTANCE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_STRONGLY_FOCUS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_STRONGLY_FOCUS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CHILDREN_LAYOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CHILDREN_LAYOUT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LAYOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LAYOUT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SELF_LAYOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SELF_LAYOUT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LAYOUT_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LAYOUT_W));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LAYOUT_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LAYOUT_H));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_VIRTUAL_W(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_VIRTUAL_W));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_VIRTUAL_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_VIRTUAL_H));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_NAME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_NAME));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_TYPE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_TYPE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLOSABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLOSABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_POINTER_CURSOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_POINTER_CURSOR));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_VALUE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_VALUE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_REVERSE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_REVERSE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LENGTH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LENGTH));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LINE_WRAP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LINE_WRAP));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_WORD_WRAP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_WORD_WRAP));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_TEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_TEXT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_TR_TEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_TR_TEXT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_STYLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_STYLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ENABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ENABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FEEDBACK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FEEDBACK));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FLOATING(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FLOATING));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MARGIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MARGIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SPACING(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SPACING));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LEFT_MARGIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LEFT_MARGIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_RIGHT_MARGIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_RIGHT_MARGIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_TOP_MARGIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_TOP_MARGIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_BOTTOM_MARGIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_BOTTOM_MARGIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_STEP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_STEP));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_VISIBLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_VISIBLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SENSITIVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SENSITIVE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ANIMATION(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ANIMATION));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ANIM_HINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ANIM_HINT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FULLSCREEN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FULLSCREEN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DISABLE_ANIM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DISABLE_ANIM));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_OPEN_ANIM_HINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_OPEN_ANIM_HINT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLOSE_ANIM_HINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLOSE_ANIM_HINT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ACTION_TEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ACTION_TEXT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_TIPS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_TIPS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_TR_TIPS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_TR_TIPS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_INPUT_TYPE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_INPUT_TYPE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_KEYBOARD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_KEYBOARD));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DEFAULT_FOCUSED_CHILD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DEFAULT_FOCUSED_CHILD));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_READONLY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_READONLY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CANCELABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CANCELABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_PASSWORD_VISIBLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_PASSWORD_VISIBLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ACTIVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ACTIVE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CURR_PAGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CURR_PAGE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_PAGE_MAX_NUMBER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_PAGE_MAX_NUMBER));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_VERTICAL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_VERTICAL));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SHOW_TEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SHOW_TEXT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_XOFFSET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_XOFFSET));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_YOFFSET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_YOFFSET));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ALIGN_V(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ALIGN_V));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ALIGN_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ALIGN_H));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_PLAY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_PLAY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LOOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LOOP));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_FIX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_FIX));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_OPEN_IM_WHEN_FOCUSED));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLOSE_IM_WHEN_BLURED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLOSE_IM_WHEN_BLURED));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_X_MIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_X_MIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_X_MAX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_X_MAX));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_Y_MIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_Y_MIN));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_Y_MAX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_Y_MAX));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MAX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MAX));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_GRAB_KEYS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_GRAB_KEYS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ROW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ROW));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_STATE_FOR_STYLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_STATE_FOR_STYLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_THEME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_THEME));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_STAGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_STAGE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_IMAGE_MANAGER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_IMAGE_MANAGER));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ASSETS_MANAGER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ASSETS_MANAGER));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LOCALE_INFO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LOCALE_INFO));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FONT_MANAGER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FONT_MANAGER));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_THEME_OBJ(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_THEME_OBJ));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DEFAULT_THEME_OBJ(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DEFAULT_THEME_OBJ));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ITEM_WIDTH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ITEM_WIDTH));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ITEM_HEIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ITEM_HEIGHT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DEFAULT_ITEM_HEIGHT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DEFAULT_ITEM_HEIGHT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_XSLIDABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_XSLIDABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_YSLIDABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_YSLIDABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_REPEAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_REPEAT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LONG_PRESS_TIME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LONG_PRESS_TIME));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ENABLE_LONG_PRESS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ENABLE_LONG_PRESS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLICK_THROUGH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLICK_THROUGH));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ANIMATABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ANIMATABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_HIDE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_HIDE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_AUTO_HIDE_SCROLL_BAR));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_IMAGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_IMAGE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FORMAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FORMAT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DRAW_TYPE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DRAW_TYPE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SELECTABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SELECTABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLICKABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLICKABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SCALE_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SCALE_X));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SCALE_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SCALE_Y));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ANCHOR_X(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ANCHOR_X));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ANCHOR_Y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ANCHOR_Y));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ROTATION(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ROTATION));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_COMPACT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_COMPACT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SCROLLABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SCROLLABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ICON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ICON));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_OPTIONS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_OPTIONS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SELECTED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SELECTED));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CHECKED));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_ACTIVE_ICON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_ACTIVE_ICON));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LOAD_UI(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LOAD_UI));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_OPEN_WINDOW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_OPEN_WINDOW));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_SELECTED_INDEX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_SELECTED_INDEX));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLOSE_WHEN_CLICK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLOSE_WHEN_CLICK));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_CLOSE_WHEN_TIMEOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_CLOSE_WHEN_TIMEOUT));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_LINE_GAP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_LINE_GAP));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_BG_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_BG_COLOR));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_BORDER_COLOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_BORDER_COLOR));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_DELAY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_DELAY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_IS_KEYBOARD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_IS_KEYBOARD));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FOCUSED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FOCUSED));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FOCUS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FOCUS));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_FOCUSABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_FOCUSABLE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_WITH_FOCUS_STATE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_WITH_FOCUS_STATE));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_PREV_KEY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MOVE_FOCUS_PREV_KEY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MOVE_FOCUS_NEXT_KEY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_UP_KEY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MOVE_FOCUS_UP_KEY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MOVE_FOCUS_DOWN_KEY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MOVE_FOCUS_LEFT_KEY));

  return 0;
}

int awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_NONE));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_WINDOW_MANAGER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_WINDOW_MANAGER));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_NORMAL_WINDOW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_NORMAL_WINDOW));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_OVERLAY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_OVERLAY));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_TOOL_BAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_TOOL_BAR));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_DIALOG(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_DIALOG));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_POPUP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_POPUP));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SYSTEM_BAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SYSTEM_BAR));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SYSTEM_BAR_BOTTOM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SYSTEM_BAR_BOTTOM));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SPRITE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SPRITE));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_KEYBOARD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_KEYBOARD));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_DND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_DND));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_LABEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_LABEL));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_BUTTON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_BUTTON));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_IMAGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_IMAGE));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_EDIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_EDIT));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_PROGRESS_BAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_PROGRESS_BAR));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_GROUP_BOX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_GROUP_BOX));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_CHECK_BUTTON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_CHECK_BUTTON));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_RADIO_BUTTON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_RADIO_BUTTON));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_DIALOG_TITLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_DIALOG_TITLE));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_DIALOG_CLIENT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_DIALOG_CLIENT));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SLIDER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SLIDER));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_VIEW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_VIEW));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_COMBO_BOX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_COMBO_BOX));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_COMBO_BOX_ITEM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_COMBO_BOX_ITEM));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SLIDE_VIEW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SLIDE_VIEW));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SLIDE_INDICATOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SLIDE_INDICATOR));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SLIDE_INDICATOR_ARC(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SLIDE_INDICATOR_ARC));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_PAGES(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_PAGES));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_TAB_BUTTON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_TAB_BUTTON));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_TAB_CONTROL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_TAB_CONTROL));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_TAB_BUTTON_GROUP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_TAB_BUTTON_GROUP));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_BUTTON_GROUP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_BUTTON_GROUP));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_CANDIDATES(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_CANDIDATES));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SPIN_BOX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SPIN_BOX));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_DRAGGER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_DRAGGER));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SCROLL_BAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SCROLL_BAR));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SCROLL_BAR_DESKTOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SCROLL_BAR_DESKTOP));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SCROLL_BAR_MOBILE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SCROLL_BAR_MOBILE));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_SCROLL_VIEW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_SCROLL_VIEW));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_LIST_VIEW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_LIST_VIEW));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_LIST_VIEW_H(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_LIST_VIEW_H));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_LIST_ITEM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_LIST_ITEM));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_COLOR_PICKER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_COLOR_PICKER));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_COLOR_COMPONENT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_COLOR_COMPONENT));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_COLOR_TILE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_COLOR_TILE));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_CLIP_VIEW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_CLIP_VIEW));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_RICH_TEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_RICH_TEXT));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_APP_BAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_APP_BAR));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_GRID(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_GRID));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_GRID_ITEM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_GRID_ITEM));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_ROW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_ROW));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_COLUMN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_COLUMN));

  return 0;
}

int awtk_TWidgetType_WIDGET_TYPE_CALIBRATION_WIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_TYPE_CALIBRATION_WIN));

  return 0;
}

int awtk_TWindowStage_WINDOW_STAGE_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_STAGE_NONE));

  return 0;
}

int awtk_TWindowStage_WINDOW_STAGE_LOADED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_STAGE_LOADED));

  return 0;
}

int awtk_TWindowStage_WINDOW_STAGE_CREATED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_STAGE_CREATED));

  return 0;
}

int awtk_TWindowStage_WINDOW_STAGE_OPENED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_STAGE_OPENED));

  return 0;
}

int awtk_TWindowStage_WINDOW_STAGE_CLOSED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_STAGE_CLOSED));

  return 0;
}

int awtk_TWindowStage_WINDOW_STAGE_SUSPEND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_STAGE_SUSPEND));

  return 0;
}

int awtk_TWindowClosable_WINDOW_CLOSABLE_YES(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_CLOSABLE_YES));

  return 0;
}

int awtk_TWindowClosable_WINDOW_CLOSABLE_NO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_CLOSABLE_NO));

  return 0;
}

int awtk_TWindowClosable_WINDOW_CLOSABLE_CONFIRM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(WINDOW_CLOSABLE_CONFIRM));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_NONE));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_NORMAL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_NORMAL));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_CHANGED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_PRESSED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_PRESSED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_OVER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_OVER));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_DISABLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_DISABLE));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_FOCUSED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_FOCUSED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_CHECKED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_UNCHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_UNCHECKED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_EMPTY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_EMPTY));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_EMPTY_FOCUS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_EMPTY_FOCUS));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_ERROR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_ERROR));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_SELECTED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_SELECTED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_NORMAL_OF_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_NORMAL_OF_CHECKED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_PRESSED_OF_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_PRESSED_OF_CHECKED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_OVER_OF_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_OVER_OF_CHECKED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_DISABLE_OF_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_DISABLE_OF_CHECKED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_FOCUSED_OF_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_FOCUSED_OF_CHECKED));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_NORMAL_OF_ACTIVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_NORMAL_OF_ACTIVE));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_PRESSED_OF_ACTIVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_PRESSED_OF_ACTIVE));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_OVER_OF_ACTIVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_OVER_OF_ACTIVE));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_DISABLE_OF_ACTIVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_DISABLE_OF_ACTIVE));

  return 0;
}

int awtk_TWidgetState_WIDGET_STATE_FOCUSED_OF_ACTIVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_STATE_FOCUSED_OF_ACTIVE));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_DEFAULT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_DEFAULT));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_EDIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_EDIT));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_HAND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_HAND));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_WAIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_WAIT));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_CROSS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_CROSS));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_NO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_NO));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_SIZENWSE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_SIZENWSE));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_SIZENESW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_SIZENESW));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_SIZEWE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_SIZEWE));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_SIZENS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_SIZENS));

  return 0;
}

int awtk_TWidgetCursor_WIDGET_CURSOR_SIZEALL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(WIDGET_CURSOR_SIZEALL));

  return 0;
}

int awtk_TWidget_widget_count_children(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)widget_count_children(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_child(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t index = (int32_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)widget_get_child(widget, index);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_get_focused_widget(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)widget_get_focused_widget(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_get_native_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  native_window_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (native_window_t*)widget_get_native_window(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_index_of(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)widget_index_of(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_close_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_close_window(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_back(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_back(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_back_to_home(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_back_to_home(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_move(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_move(widget, x, y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_resize(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_resize(widget, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_move_resize(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_move_resize(widget, x, y, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_animate_value_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  uint32_t duration = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_animate_value_to(widget, value, duration);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_add_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t delta = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_add_value(widget, delta);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_style_exist(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* style_name = (const char*)jni_ctx_get_str(&actx);
  const char* state_name = (const char*)jni_ctx_get_str(&actx);
  ret = (bool_t)widget_is_style_exist(widget, style_name, state_name);
  TKMEM_FREE(style_name);
  TKMEM_FREE(state_name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_use_style(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* style = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_use_style(widget, style);
  TKMEM_FREE(style);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_text_utf8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_text_utf8(widget, text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_child_text_utf8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_child_text_utf8(widget, name, text);
  TKMEM_FREE(name);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_child_text_with_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  double value = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)widget_set_child_text_with_double(widget, name, format, value);
  TKMEM_FREE(name);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_child_text_with_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  int value = (int)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_child_text_with_int(widget, name, format, value);
  TKMEM_FREE(name);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_tr_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_tr_text(widget, text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)widget_get_value(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_enable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_enable(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_floating(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_floating(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_auto_adjust_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_auto_adjust_size(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_with_focus_state(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_with_focus_state(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_focusable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_focusable(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_sensitive(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_sensitive(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_visible(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_visible(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_feedback(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_get_feedback(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const wchar_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const wchar_t*)widget_get_text(widget);
  jni_ctx_return_wstr(&actx, (wchar_t*)(ret));

  return 0;
}

int awtk_TWidget_widget_set_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_name(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_theme(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_theme(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_pointer_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* cursor = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_pointer_cursor(widget, cursor);
  TKMEM_FREE(cursor);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_animation(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* animation = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_animation(widget, animation);
  TKMEM_FREE(animation);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_create_animator(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* animation = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_create_animator(widget, animation);
  TKMEM_FREE(animation);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_start_animator(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_start_animator(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_animator_time_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  float_t time_scale = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)widget_set_animator_time_scale(widget, name, time_scale);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_pause_animator(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_pause_animator(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_stop_animator(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_stop_animator(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_destroy_animator(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_destroy_animator(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_enable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t enable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_enable(widget, enable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_feedback(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t feedback = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_feedback(widget, feedback);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_auto_adjust_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t auto_adjust_size = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_auto_adjust_size(widget, auto_adjust_size);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_floating(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t floating = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_floating(widget, floating);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_focused(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t focused = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_focused(widget, focused);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_focusable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t focusable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_focusable(widget, focusable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_state(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* state = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_state(widget, state);
  TKMEM_FREE(state);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_opacity(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint8_t opacity = (uint8_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_opacity(widget, opacity);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_dirty_rect_tolerance(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint16_t dirty_rect_tolerance = (uint16_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_dirty_rect_tolerance(widget, dirty_rect_tolerance);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_destroy_children(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_destroy_children(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_add_child(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  widget_t* child = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_add_child(widget, child);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_remove_child(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  widget_t* child = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_remove_child(widget, child);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_insert_child(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  widget_t* child = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_insert_child(widget, index, child);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_restack(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_restack(widget, index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_child(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (widget_t*)widget_child(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_lookup(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  bool_t recursive = (bool_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)widget_lookup(widget, name, recursive);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_lookup_by_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* type = (const char*)jni_ctx_get_str(&actx);
  bool_t recursive = (bool_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)widget_lookup_by_type(widget, type, recursive);
  TKMEM_FREE(type);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_set_visible(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t visible = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_visible(widget, visible);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_visible_only(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t visible = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_visible_only(widget, visible);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_sensitive(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t sensitive = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_sensitive(widget, sensitive);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_off(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t id = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_off(widget, id);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_invalidate_force(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const rect_t* r = (const rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_invalidate_force(widget, r);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_prop_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* v = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_prop_str(widget, name, v);
  TKMEM_FREE(name);
  TKMEM_FREE(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_prop_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* defval = (const char*)jni_ctx_get_str(&actx);
  ret = (const char*)widget_get_prop_str(widget, name, defval);
  TKMEM_FREE(name);
  TKMEM_FREE(defval);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TWidget_widget_set_prop_pointer(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  void* v = (void*)jni_ctx_get_int64(&actx);
  ret = (ret_t)widget_set_prop_pointer(widget, name, v);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_prop_pointer(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  void* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (void*)widget_get_prop_pointer(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_prop_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int32_t v = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_prop_int(widget, name, v);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_prop_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  int32_t defval = (int32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)widget_get_prop_int(widget, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_prop_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  bool_t v = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_prop_bool(widget, name, v);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_prop_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  bool_t defval = (bool_t)jni_ctx_get_int(&actx);
  ret = (bool_t)widget_get_prop_bool(widget, name, defval);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_window_opened(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_window_opened(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_window_created(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_window_created(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_parent_of(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  widget_t* child = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_parent_of(widget, child);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_direct_parent_of(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  widget_t* child = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_direct_parent_of(widget, child);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_window(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_system_bar(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_system_bar(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_normal_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_normal_window(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_dialog(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_dialog(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_popup(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_popup(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_overlay(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_overlay(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_opened_dialog(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_opened_dialog(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_opened_popup(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_opened_popup(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_keyboard(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_keyboard(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_designing_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_designing_window(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_is_window_manager(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_is_window_manager(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)widget_get_window(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_get_window_manager(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)widget_get_window_manager(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_get_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const char*)widget_get_type(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TWidget_widget_clone(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)widget_clone(widget, parent);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_equal(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  widget_t* other = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)widget_equal(widget, other);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)widget_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWidget_widget_destroy(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_destroy(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_destroy_async(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_destroy_async(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_unref(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_unref(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_stroke_border_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const rect_t* r = (const rect_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_stroke_border_rect(widget, c, r);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_fill_bg_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const rect_t* r = (const rect_t*)jni_ctx_get_object(&actx);
  image_draw_type_t draw_type = (image_draw_type_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_fill_bg_rect(widget, c, r, draw_type);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_fill_fg_rect(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  canvas_t* c = (canvas_t*)jni_ctx_get_object(&actx);
  const rect_t* r = (const rect_t*)jni_ctx_get_object(&actx);
  image_draw_type_t draw_type = (image_draw_type_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_fill_fg_rect(widget, c, r, draw_type);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_dispatch_to_target(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  event_t* e = (event_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_dispatch_to_target(widget, e);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_dispatch_to_key_target(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  event_t* e = (event_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_dispatch_to_key_target(widget, e);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_style_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const char*)widget_get_style_type(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TWidget_widget_update_style(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_update_style(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_update_style_recursive(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_update_style_recursive(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_as_key_target(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_set_as_key_target(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_focus_next(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_focus_next(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_focus_prev(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_focus_prev(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_get_state_for_style(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t active = (bool_t)jni_ctx_get_int(&actx);
  bool_t checked = (bool_t)jni_ctx_get_int(&actx);
  ret = (const char*)widget_get_state_for_style(widget, active, checked);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TWidget_widget_layout(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)widget_layout(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_self_layout(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* params = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_self_layout(widget, params);
  TKMEM_FREE(params);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_children_layout(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* params = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_children_layout(widget, params);
  TKMEM_FREE(params);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_self_layout_params(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* x = (const char*)jni_ctx_get_str(&actx);
  const char* y = (const char*)jni_ctx_get_str(&actx);
  const char* w = (const char*)jni_ctx_get_str(&actx);
  const char* h = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_self_layout_params(widget, x, y, w, h);
  TKMEM_FREE(x);
  TKMEM_FREE(y);
  TKMEM_FREE(w);
  TKMEM_FREE(h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_style_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* state_and_name = (const char*)jni_ctx_get_str(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_style_int(widget, state_and_name, value);
  TKMEM_FREE(state_and_name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_style_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* state_and_name = (const char*)jni_ctx_get_str(&actx);
  const char* value = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)widget_set_style_str(widget, state_and_name, value);
  TKMEM_FREE(state_and_name);
  TKMEM_FREE(value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_set_style_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* state_and_name = (const char*)jni_ctx_get_str(&actx);
  uint32_t value = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)widget_set_style_color(widget, state_and_name, value);
  TKMEM_FREE(state_and_name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->x));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->y));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->w));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->h));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_pointer_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->pointer_cursor));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_tr_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->tr_text));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_style(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->style));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_animation(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->animation));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_enable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->enable));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_feedback(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->feedback));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_visible(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->visible));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_sensitive(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->sensitive));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_focusable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->focusable));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_with_focus_state(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->with_focus_state));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_auto_adjust_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_adjust_size));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_floating(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->floating));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_dirty_rect_tolerance(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->dirty_rect_tolerance));

  return 0;
}

int awtk_TWidget_widget_t_get_prop_parent(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* obj = (widget_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_object(&actx, (void*)(obj->parent));

  return 0;
}

int awtk_TAppConf_app_conf_save(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  ret = (ret_t)app_conf_save();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_reload(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  ret = (ret_t)app_conf_reload();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_deinit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  ret = (ret_t)app_conf_deinit();
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_exist(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  ret = (bool_t)app_conf_exist(key);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_set_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  int32_t v = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)app_conf_set_int(key, v);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_set_int64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  int64_t v = (int64_t)jni_ctx_get_int64(&actx);
  ret = (ret_t)app_conf_set_int64(key, v);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_set_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  bool_t v = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)app_conf_set_bool(key, v);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_set_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  double v = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)app_conf_set_double(key, v);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_set_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  const char* v = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)app_conf_set_str(key, v);
  TKMEM_FREE(key);
  TKMEM_FREE(v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_get_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  int32_t defval = (int32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)app_conf_get_int(key, defval);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_get_int64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int64_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  int64_t defval = (int64_t)jni_ctx_get_int64(&actx);
  ret = (int64_t)app_conf_get_int64(key, defval);
  TKMEM_FREE(key);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_get_bool(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  bool_t defval = (bool_t)jni_ctx_get_int(&actx);
  ret = (bool_t)app_conf_get_bool(key, defval);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_get_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  double ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  double defval = (double)jni_ctx_get_float(&actx);
  ret = (double)app_conf_get_double(key, defval);
  TKMEM_FREE(key);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_get_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  const char* defval = (const char*)jni_ctx_get_str(&actx);
  ret = (const char*)app_conf_get_str(key, defval);
  TKMEM_FREE(key);
  TKMEM_FREE(defval);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TAppConf_app_conf_remove(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* key = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)app_conf_remove(key);
  TKMEM_FREE(key);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_AUTO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INDICATOR_DEFAULT_PAINT_AUTO));

  return 0;
}

int awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_FILL_DOT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INDICATOR_DEFAULT_PAINT_FILL_DOT));

  return 0;
}

int awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_STROKE_DOT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INDICATOR_DEFAULT_PAINT_STROKE_DOT));

  return 0;
}

int awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_FILL_RECT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INDICATOR_DEFAULT_PAINT_FILL_RECT));

  return 0;
}

int awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_STROKE_RECT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(INDICATOR_DEFAULT_PAINT_STROKE_RECT));

  return 0;
}

int awtk_TVpageEvent_EVT_VPAGE_WILL_OPEN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_VPAGE_WILL_OPEN));

  return 0;
}

int awtk_TVpageEvent_EVT_VPAGE_OPEN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_VPAGE_OPEN));

  return 0;
}

int awtk_TVpageEvent_EVT_VPAGE_CLOSE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EVT_VPAGE_CLOSE));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_NONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_NONE));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_FONT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_FONT));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_IMAGE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_IMAGE));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_STYLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_STYLE));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_UI(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_UI));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_XML(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_XML));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_STRINGS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_STRINGS));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_SCRIPT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_SCRIPT));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_FLOW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_FLOW));

  return 0;
}

int awtk_TAssetType_ASSET_TYPE_DATA(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(ASSET_TYPE_DATA));

  return 0;
}

int awtk_TAssetInfo_asset_info_get_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint16_t ret = 0;
  asset_info_t* info = (asset_info_t*)jni_ctx_get_object(&actx);
  ret = (uint16_t)asset_info_get_type(info);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAssetInfo_asset_info_get_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  asset_info_t* info = (asset_info_t*)jni_ctx_get_object(&actx);
  ret = (const char*)asset_info_get_name(info);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TAssetInfo_asset_info_t_get_prop_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* obj = (asset_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->type));

  return 0;
}

int awtk_TAssetInfo_asset_info_t_get_prop_subtype(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* obj = (asset_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->subtype));

  return 0;
}

int awtk_TAssetInfo_asset_info_t_get_prop_is_in_rom(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* obj = (asset_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->is_in_rom));

  return 0;
}

int awtk_TAssetInfo_asset_info_t_get_prop_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* obj = (asset_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->size));

  return 0;
}

int awtk_TAssetInfo_asset_info_t_get_prop_refcount(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* obj = (asset_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->refcount));

  return 0;
}

int awtk_TAssetInfo_asset_info_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* obj = (asset_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TColor_color_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_t* ret = NULL;
  uint8_t r = (uint8_t)jni_ctx_get_int(&actx);
  uint8_t b = (uint8_t)jni_ctx_get_int(&actx);
  uint8_t g = (uint8_t)jni_ctx_get_int(&actx);
  uint8_t a = (uint8_t)jni_ctx_get_int(&actx);
  ret = (color_t*)color_create(r, b, g, a);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColor_color_from_str(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_t* ret = NULL;
  color_t* c = (color_t*)jni_ctx_get_object(&actx);
  const char* str = (const char*)jni_ctx_get_str(&actx);
  ret = (color_t*)color_from_str(c, str);
  TKMEM_FREE(str);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColor_color_r(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint8_t ret = 0;
  color_t* c = (color_t*)jni_ctx_get_object(&actx);
  ret = (uint8_t)color_r(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TColor_color_g(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint8_t ret = 0;
  color_t* c = (color_t*)jni_ctx_get_object(&actx);
  ret = (uint8_t)color_g(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TColor_color_b(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint8_t ret = 0;
  color_t* c = (color_t*)jni_ctx_get_object(&actx);
  ret = (uint8_t)color_b(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TColor_color_a(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint8_t ret = 0;
  color_t* c = (color_t*)jni_ctx_get_object(&actx);
  ret = (uint8_t)color_a(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TColor_color_get_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  color_t* c = (color_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)color_get_color(c);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TColor_color_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_t* ret = NULL;
  color_t* color = (color_t*)jni_ctx_get_object(&actx);
  ret = (color_t*)color_cast(color);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColor_color_t_set_prop_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_t* obj = (color_t*)jni_ctx_get_object(&actx);
  uint32_t color = (uint32_t)jni_ctx_get_int(&actx);
  obj->color = color;

  return 0;
};

int awtk_TColor_color_t_get_prop_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_t* obj = (color_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->color));

  return 0;
}

int awtk_TDateTime_date_time_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* ret = NULL;
  ret = (date_time_t*)date_time_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDateTime_date_time_set_year(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  uint32_t year = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)date_time_set_year(dt, year);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_set_month(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  uint32_t month = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)date_time_set_month(dt, month);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_set_day(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  uint32_t day = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)date_time_set_day(dt, day);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_set_hour(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  uint32_t hour = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)date_time_set_hour(dt, hour);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_set_minute(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  uint32_t minute = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)date_time_set_minute(dt, minute);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_set_second(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  uint32_t second = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)date_time_set_second(dt, second);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_set(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)date_time_set(dt);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_from_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  uint64_t time = (uint64_t)jni_ctx_get_int64(&actx);
  ret = (ret_t)date_time_from_time(dt, time);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_to_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint64_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  ret = (uint64_t)date_time_to_time(dt);
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_add_delta(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  date_time_t* dt = (date_time_t*)jni_ctx_get_object(&actx);
  int64_t delta = (int64_t)jni_ctx_get_int64(&actx);
  ret = (ret_t)date_time_add_delta(dt, delta);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_is_leap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  uint32_t year = (uint32_t)jni_ctx_get_int(&actx);
  ret = (bool_t)date_time_is_leap(year);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_get_days(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  uint32_t year = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t montn = (uint32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)date_time_get_days(year, montn);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_get_wday(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  uint32_t year = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t montn = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t day = (uint32_t)jni_ctx_get_int(&actx);
  ret = (int32_t)date_time_get_wday(year, montn, day);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDateTime_date_time_get_month_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  uint32_t montn = (uint32_t)jni_ctx_get_int(&actx);
  ret = (const char*)date_time_get_month_name(montn);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TDateTime_date_time_get_wday_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  uint32_t wday = (uint32_t)jni_ctx_get_int(&actx);
  ret = (const char*)date_time_get_wday_name(wday);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TDateTime_date_time_t_get_prop_second(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* obj = (date_time_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->second));

  return 0;
}

int awtk_TDateTime_date_time_t_get_prop_minute(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* obj = (date_time_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->minute));

  return 0;
}

int awtk_TDateTime_date_time_t_get_prop_hour(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* obj = (date_time_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->hour));

  return 0;
}

int awtk_TDateTime_date_time_t_get_prop_day(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* obj = (date_time_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->day));

  return 0;
}

int awtk_TDateTime_date_time_t_get_prop_wday(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* obj = (date_time_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->wday));

  return 0;
}

int awtk_TDateTime_date_time_t_get_prop_month(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* obj = (date_time_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->month));

  return 0;
}

int awtk_TDateTime_date_time_t_get_prop_year(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  date_time_t* obj = (date_time_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->year));

  return 0;
}

int awtk_TEasingType_EASING_LINEAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_LINEAR));

  return 0;
}

int awtk_TEasingType_EASING_QUADRATIC_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_QUADRATIC_IN));

  return 0;
}

int awtk_TEasingType_EASING_QUADRATIC_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_QUADRATIC_OUT));

  return 0;
}

int awtk_TEasingType_EASING_QUADRATIC_INOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_QUADRATIC_INOUT));

  return 0;
}

int awtk_TEasingType_EASING_CUBIC_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_CUBIC_IN));

  return 0;
}

int awtk_TEasingType_EASING_CUBIC_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_CUBIC_OUT));

  return 0;
}

int awtk_TEasingType_EASING_SIN_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_SIN_IN));

  return 0;
}

int awtk_TEasingType_EASING_SIN_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_SIN_OUT));

  return 0;
}

int awtk_TEasingType_EASING_SIN_INOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_SIN_INOUT));

  return 0;
}

int awtk_TEasingType_EASING_POW_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_POW_IN));

  return 0;
}

int awtk_TEasingType_EASING_POW_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_POW_OUT));

  return 0;
}

int awtk_TEasingType_EASING_POW_INOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_POW_INOUT));

  return 0;
}

int awtk_TEasingType_EASING_CIRCULAR_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_CIRCULAR_IN));

  return 0;
}

int awtk_TEasingType_EASING_CIRCULAR_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_CIRCULAR_OUT));

  return 0;
}

int awtk_TEasingType_EASING_CIRCULAR_INOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_CIRCULAR_INOUT));

  return 0;
}

int awtk_TEasingType_EASING_ELASTIC_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_ELASTIC_IN));

  return 0;
}

int awtk_TEasingType_EASING_ELASTIC_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_ELASTIC_OUT));

  return 0;
}

int awtk_TEasingType_EASING_ELASTIC_INOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_ELASTIC_INOUT));

  return 0;
}

int awtk_TEasingType_EASING_BACK_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_BACK_IN));

  return 0;
}

int awtk_TEasingType_EASING_BACK_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_BACK_OUT));

  return 0;
}

int awtk_TEasingType_EASING_BACK_INOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_BACK_INOUT));

  return 0;
}

int awtk_TEasingType_EASING_BOUNCE_IN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_BOUNCE_IN));

  return 0;
}

int awtk_TEasingType_EASING_BOUNCE_OUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_BOUNCE_OUT));

  return 0;
}

int awtk_TEasingType_EASING_BOUNCE_INOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(EASING_BOUNCE_INOUT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_ENVOY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_ENVOY));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_FRACTALS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_FRACTALS));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_FUTURESPLASH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_FUTURESPLASH));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_HTA(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_HTA));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_JSON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_JSON));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_UBJSON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_UBJSON));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_MAC_BINHEX40(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_MAC_BINHEX40));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_MSWORD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_MSWORD));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_OCTET_STREAM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_OCTET_STREAM));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_ODA(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_ODA));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_OLESCRIPT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_OLESCRIPT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PDF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_PDF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PICS_RULES(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_PICS_RULES));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PKCS10(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_PKCS10));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PKIX_CRL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_PKIX_CRL));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_POSTSCRIPT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_POSTSCRIPT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_RTF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_RTF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_EXCEL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_EXCEL));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_OUTLOOK));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_PKISECCAT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKISTL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_PKISTL));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_POWERPOINT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PROJECT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_PROJECT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_WORKS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_VND_MS_WORKS));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_WINHLP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_WINHLP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_BCPIO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_BCPIO));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_CDF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_CDF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_COMPRESS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_COMPRESS));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_COMPRESSED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_COMPRESSED));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_CPIO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_CPIO));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_CSH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_CSH));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_DIRECTOR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_DIRECTOR));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_DVI(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_DVI));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_GTAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_GTAR));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_GZIP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_GZIP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_HDF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_HDF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_IPHONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_IPHONE));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_JAVASCRIPT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_JAVASCRIPT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_LATEX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_LATEX));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSACCESS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSACCESS));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSCARDFILE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSCARDFILE));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSCLIP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSCLIP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSDOWNLOAD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSDOWNLOAD));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSMEDIAVIEW));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSMETAFILE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSMETAFILE));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSMONEY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSMONEY));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSPUBLISHER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSPUBLISHER));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSSCHEDULE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSSCHEDULE));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSTERMINAL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSTERMINAL));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSWRITE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_MSWRITE));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_NETCDF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_NETCDF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_PERFMON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_PERFMON));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_PKCS12(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_PKCS12));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_SH));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SHAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_SHAR));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_STUFFIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_STUFFIT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SV4CPIO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_SV4CPIO));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SV4CRC(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_SV4CRC));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_TAR));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TCL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_TCL));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TEX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_TEX));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TEXINFO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_TEXINFO));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TROFF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_TROFF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_USTAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_X_USTAR));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_ZIP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_APPLICATION_ZIP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_AUDIO_BASIC(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_AUDIO_BASIC));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_AUDIO_MID(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_AUDIO_MID));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_AUDIO_MPEG(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_AUDIO_MPEG));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_AUDIO_X_AIFF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_AUDIO_X_AIFF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_AUDIO_X_MPEGURL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_AUDIO_X_MPEGURL));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_AUDIO_X_WAV(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_AUDIO_X_WAV));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_BMP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_BMP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_CIS_COD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_CIS_COD));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_GIF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_GIF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_IEF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_IEF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_JPEG(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_JPEG));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_PIPEG(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_PIPEG));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_SVG_XML(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_SVG_XML));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_TIFF(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_TIFF));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_CMX(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_X_CMX));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_ICON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_X_ICON));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_RGB(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_X_RGB));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_XBITMAP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_X_XBITMAP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_XPIXMAP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_X_XPIXMAP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_XWINDOWDUMP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_IMAGE_X_XWINDOWDUMP));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_MESSAGE_RFC822(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_MESSAGE_RFC822));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_CSS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_CSS));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_H323(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_H323));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_HTML(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_HTML));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_IULS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_IULS));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_PLAIN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_PLAIN));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_RICHTEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_RICHTEXT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_SCRIPTLET(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_SCRIPTLET));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_WEBVIEWHTML(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_WEBVIEWHTML));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_X_COMPONENT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_X_COMPONENT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_X_SETEXT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_X_SETEXT));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_TEXT_X_VCARD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_TEXT_X_VCARD));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_VIDEO_MPEG(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_VIDEO_MPEG));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_VIDEO_QUICKTIME(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_VIDEO_QUICKTIME));

  return 0;
}

int awtk_TMIME_TYPE_MIME_TYPE_VIDEO_X_MSVIDEO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(MIME_TYPE_VIDEO_X_MSVIDEO));

  return 0;
}

int awtk_TNamedValue_named_value_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  named_value_t* ret = NULL;
  ret = (named_value_t*)named_value_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TNamedValue_named_value_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  named_value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jni_ctx_get_object(&actx);
  ret = (named_value_t*)named_value_cast(nv);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TNamedValue_named_value_set_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  named_value_t* nv = (named_value_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)named_value_set_name(nv, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNamedValue_named_value_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  named_value_t* nv = (named_value_t*)jni_ctx_get_object(&actx);
  const value_t* value = (const value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)named_value_set_value(nv, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNamedValue_named_value_get_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_t* ret = NULL;
  named_value_t* nv = (named_value_t*)jni_ctx_get_object(&actx);
  ret = (value_t*)named_value_get_value(nv);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TNamedValue_named_value_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  named_value_t* obj = (named_value_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_SAVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_SAVE));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_RELOAD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_RELOAD));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_MOVE_UP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_MOVE_UP));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_MOVE_DOWN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_MOVE_DOWN));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_REMOVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_REMOVE));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_REMOVE_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_REMOVE_CHECKED));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_CLEAR(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_CLEAR));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_ADD(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_ADD));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_DETAIL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_DETAIL));

  return 0;
}

int awtk_TObjectCmd_OBJECT_CMD_EDIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_CMD_EDIT));

  return 0;
}

int awtk_TObjectProp_OBJECT_PROP_SIZE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_PROP_SIZE));

  return 0;
}

int awtk_TObjectProp_OBJECT_PROP_CHECKED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_str(&actx, (char*)(OBJECT_PROP_CHECKED));

  return 0;
}

int awtk_TRlog_rlog_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rlog_t* ret = NULL;
  const char* filename_pattern = (const char*)jni_ctx_get_str(&actx);
  uint32_t max_size = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t buff_size = (uint32_t)jni_ctx_get_int(&actx);
  ret = (rlog_t*)rlog_create(filename_pattern, max_size, buff_size);
  TKMEM_FREE(filename_pattern);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRlog_rlog_write(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  rlog_t* log = (rlog_t*)jni_ctx_get_object(&actx);
  const char* str = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)rlog_write(log, str);
  TKMEM_FREE(str);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeNow_time_now_s(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint64_t ret = 0;
  ret = (uint64_t)time_now_s();
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TTimeNow_time_now_ms(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint64_t ret = 0;
  ret = (uint64_t)time_now_ms();
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TTimeNow_time_now_us(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint64_t ret = 0;
  ret = (uint64_t)time_now_us();
  jni_ctx_return_int64(&actx, (int64_t)(ret));

  return 0;
}

int awtk_TRet_RET_OK(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_OK));

  return 0;
}

int awtk_TRet_RET_OOM(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_OOM));

  return 0;
}

int awtk_TRet_RET_FAIL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_FAIL));

  return 0;
}

int awtk_TRet_RET_NOT_IMPL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_NOT_IMPL));

  return 0;
}

int awtk_TRet_RET_QUIT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_QUIT));

  return 0;
}

int awtk_TRet_RET_FOUND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_FOUND));

  return 0;
}

int awtk_TRet_RET_BUSY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_BUSY));

  return 0;
}

int awtk_TRet_RET_REMOVE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_REMOVE));

  return 0;
}

int awtk_TRet_RET_REPEAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_REPEAT));

  return 0;
}

int awtk_TRet_RET_NOT_FOUND(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_NOT_FOUND));

  return 0;
}

int awtk_TRet_RET_DONE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_DONE));

  return 0;
}

int awtk_TRet_RET_STOP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_STOP));

  return 0;
}

int awtk_TRet_RET_SKIP(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_SKIP));

  return 0;
}

int awtk_TRet_RET_CONTINUE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_CONTINUE));

  return 0;
}

int awtk_TRet_RET_OBJECT_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_OBJECT_CHANGED));

  return 0;
}

int awtk_TRet_RET_ITEMS_CHANGED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_ITEMS_CHANGED));

  return 0;
}

int awtk_TRet_RET_BAD_PARAMS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_BAD_PARAMS));

  return 0;
}

int awtk_TRet_RET_TIMEOUT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_TIMEOUT));

  return 0;
}

int awtk_TRet_RET_CRC(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_CRC));

  return 0;
}

int awtk_TRet_RET_IO(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_IO));

  return 0;
}

int awtk_TRet_RET_EOS(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_EOS));

  return 0;
}

int awtk_TRet_RET_NOT_MODIFIED(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(RET_NOT_MODIFIED));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_INVALID(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_INVALID));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_BOOL(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_BOOL));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_INT8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_INT8));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_UINT8(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_UINT8));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_INT16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_INT16));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_UINT16(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_UINT16));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_INT32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_INT32));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_UINT32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_UINT32));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_INT64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_INT64));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_UINT64(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_UINT64));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_POINTER(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_POINTER));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_FLOAT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_FLOAT));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_FLOAT32(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_FLOAT32));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_DOUBLE(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_DOUBLE));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_STRING(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_STRING));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_WSTRING(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_WSTRING));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_OBJECT(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_OBJECT));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_SIZED_STRING(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_SIZED_STRING));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_BINARY(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_BINARY));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_UBJSON(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_UBJSON));

  return 0;
}

int awtk_TValueType_VALUE_TYPE_TOKEN(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  jni_ctx_return_int(&actx, (int32_t)(VALUE_TYPE_TOKEN));

  return 0;
}

int awtk_TAssetsManager_assets_manager(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  assets_manager_t* ret = NULL;
  ret = (assets_manager_t*)assets_manager();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TAssetsManager_assets_manager_set_theme(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  assets_manager_t* am = (assets_manager_t*)jni_ctx_get_object(&actx);
  const char* theme = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)assets_manager_set_theme(am, theme);
  TKMEM_FREE(theme);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TAssetsManager_assets_manager_ref(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* ret = NULL;
  assets_manager_t* am = (assets_manager_t*)jni_ctx_get_object(&actx);
  asset_type_t type = (asset_type_t)jni_ctx_get_int(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (asset_info_t*)assets_manager_ref(am, type, name);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TAssetsManager_assets_manager_ref_ex(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  asset_info_t* ret = NULL;
  assets_manager_t* am = (assets_manager_t*)jni_ctx_get_object(&actx);
  asset_type_t type = (asset_type_t)jni_ctx_get_int(&actx);
  uint16_t subtype = (uint16_t)jni_ctx_get_int(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (asset_info_t*)assets_manager_ref_ex(am, type, subtype, name);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TAssetsManager_assets_manager_unref(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  assets_manager_t* am = (assets_manager_t*)jni_ctx_get_object(&actx);
  asset_info_t* info = (asset_info_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)assets_manager_unref(am, info);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWheelEvent_wheel_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  wheel_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (wheel_event_t*)wheel_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWheelEvent_wheel_event_t_get_prop_dy(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  wheel_event_t* obj = (wheel_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->dy));

  return 0;
}

int awtk_TWheelEvent_wheel_event_t_get_prop_alt(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  wheel_event_t* obj = (wheel_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->alt));

  return 0;
}

int awtk_TWheelEvent_wheel_event_t_get_prop_ctrl(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  wheel_event_t* obj = (wheel_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ctrl));

  return 0;
}

int awtk_TWheelEvent_wheel_event_t_get_prop_shift(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  wheel_event_t* obj = (wheel_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->shift));

  return 0;
}

int awtk_TOrientationEvent_orientation_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  orientation_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (orientation_event_t*)orientation_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TOrientationEvent_orientation_event_t_get_prop_orientation(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  orientation_event_t* obj = (orientation_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->orientation));

  return 0;
}

int awtk_TValueChangeEvent_value_change_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  value_change_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (value_change_event_t*)value_change_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPointerEvent_pointer_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (pointer_event_t*)pointer_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->x));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->y));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_button(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->button));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_pressed(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->pressed));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_alt(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->alt));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_ctrl(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ctrl));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_cmd(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->cmd));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_menu(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->menu));

  return 0;
}

int awtk_TPointerEvent_pointer_event_t_get_prop_shift(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pointer_event_t* obj = (pointer_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->shift));

  return 0;
}

int awtk_TKeyEvent_key_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (key_event_t*)key_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->key));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_alt(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->alt));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_lalt(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->lalt));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_ralt(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ralt));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_ctrl(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ctrl));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_lctrl(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->lctrl));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_rctrl(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->rctrl));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_shift(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->shift));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_lshift(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->lshift));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_rshift(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->rshift));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_cmd(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->cmd));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_menu(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->menu));

  return 0;
}

int awtk_TKeyEvent_key_event_t_get_prop_capslock(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  key_event_t* obj = (key_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->capslock));

  return 0;
}

int awtk_TPaintEvent_paint_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  paint_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (paint_event_t*)paint_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPaintEvent_paint_event_t_get_prop_c(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  paint_event_t* obj = (paint_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_object(&actx, (void*)(obj->c));

  return 0;
}

int awtk_TWindowEvent_window_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (window_event_t*)window_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindowEvent_window_event_t_get_prop_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_event_t* obj = (window_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_object(&actx, (void*)(obj->window));

  return 0;
}

int awtk_TMultiGestureEvent_multi_gesture_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  multi_gesture_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (multi_gesture_event_t*)multi_gesture_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  multi_gesture_event_t* obj = (multi_gesture_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->x));

  return 0;
}

int awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  multi_gesture_event_t* obj = (multi_gesture_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->y));

  return 0;
}

int awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_rotation(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  multi_gesture_event_t* obj = (multi_gesture_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->rotation));

  return 0;
}

int awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_distance(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  multi_gesture_event_t* obj = (multi_gesture_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->distance));

  return 0;
}

int awtk_TImageBase_image_base_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)image_base_set_image(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageBase_image_base_set_rotation(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t rotation = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)image_base_set_rotation(widget, rotation);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageBase_image_base_set_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t scale_x = (float_t)jni_ctx_get_float(&actx);
  float_t scale_y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)image_base_set_scale(widget, scale_x, scale_y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageBase_image_base_set_anchor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t anchor_x = (float_t)jni_ctx_get_float(&actx);
  float_t anchor_y = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)image_base_set_anchor(widget, anchor_x, anchor_y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageBase_image_base_set_selected(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t selected = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_base_set_selected(widget, selected);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageBase_image_base_set_selectable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t selectable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_base_set_selectable(widget, selectable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageBase_image_base_set_clickable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t clickable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_base_set_clickable(widget, clickable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageBase_image_base_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)image_base_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->image));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_anchor_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->anchor_x));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_anchor_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->anchor_y));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_scale_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->scale_x));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_scale_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->scale_y));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_rotation(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->rotation));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_clickable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->clickable));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_selectable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->selectable));

  return 0;
}

int awtk_TImageBase_image_base_t_get_prop_selected(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_base_t* obj = (image_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->selected));

  return 0;
}

int awtk_TStyleMutable_style_mutable_set_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)style_mutable_set_name(s, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyleMutable_style_mutable_set_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  const char* state = (const char*)jni_ctx_get_str(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  uint32_t val = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)style_mutable_set_int(s, state, name, val);
  TKMEM_FREE(state);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TStyleMutable_style_mutable_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  style_t* ret = NULL;
  style_t* s = (style_t*)jni_ctx_get_object(&actx);
  ret = (style_t*)style_mutable_cast(s);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TStyleMutable_style_mutable_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  style_t* ret = NULL;
  style_t* default_style = (style_t*)jni_ctx_get_object(&actx);
  ret = (style_t*)style_mutable_create(default_style);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TStyleMutable_style_mutable_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  style_mutable_t* obj = (style_mutable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TWindowBase_window_base_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)window_base_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_theme(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->theme));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_design_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->design_w));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_design_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->design_h));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_scale_children_x));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_scale_children_y));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_scale_children_w));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_scale_children_h));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_disable_anim(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->disable_anim));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_closable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->closable));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_open_anim_hint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->open_anim_hint));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_close_anim_hint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->close_anim_hint));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_move_focus_prev_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->move_focus_prev_key));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_move_focus_next_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->move_focus_next_key));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_move_focus_up_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->move_focus_up_key));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_move_focus_down_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->move_focus_down_key));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_move_focus_left_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->move_focus_left_key));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_move_focus_right_key(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->move_focus_right_key));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_single_instance(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->single_instance));

  return 0;
}

int awtk_TWindowBase_window_base_t_get_prop_strongly_focus(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_base_t* obj = (window_base_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->strongly_focus));

  return 0;
}

int awtk_TWindowManager_window_manager(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  ret = (widget_t*)window_manager();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)window_manager_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_get_top_main_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)window_manager_get_top_main_window(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_get_top_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)window_manager_get_top_window(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_get_prev_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)window_manager_get_prev_window(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_get_pointer_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  xy_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (xy_t)window_manager_get_pointer_x(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_get_pointer_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  xy_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (xy_t)window_manager_get_pointer_y(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_get_pointer_pressed(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)window_manager_get_pointer_pressed(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_is_animating(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)window_manager_is_animating(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_set_show_fps(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t show_fps = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)window_manager_set_show_fps(widget, show_fps);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_set_max_fps(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t max_fps = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)window_manager_set_max_fps(widget, max_fps);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_set_ignore_input_events(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t ignore_input_events = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)window_manager_set_ignore_input_events(widget, ignore_input_events);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_set_screen_saver_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t screen_saver_time = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)window_manager_set_screen_saver_time(widget, screen_saver_time);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_set_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* cursor = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)window_manager_set_cursor(widget, cursor);
  TKMEM_FREE(cursor);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_back(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)window_manager_back(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_back_to_home(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)window_manager_back_to_home(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_back_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* target = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)window_manager_back_to(widget, target);
  TKMEM_FREE(target);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_resize(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)window_manager_resize(widget, w, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindowManager_window_manager_close_all(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)window_manager_close_all(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCanvasWidget_canvas_widget_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)canvas_widget_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCanvasWidget_canvas_widget_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)canvas_widget_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColorComponent_color_component_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)color_component_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColorPicker_color_picker_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)color_picker_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColorPicker_color_picker_set_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* color = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)color_picker_set_color(widget, color);
  TKMEM_FREE(color);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TColorPicker_color_picker_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)color_picker_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColorPicker_color_picker_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_picker_t* obj = (color_picker_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->value));

  return 0;
}

int awtk_TDraggable_draggable_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)draggable_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDraggable_draggable_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)draggable_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDraggable_draggable_set_top(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t top = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)draggable_set_top(widget, top);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDraggable_draggable_set_bottom(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t bottom = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)draggable_set_bottom(widget, bottom);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDraggable_draggable_set_left(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t left = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)draggable_set_left(widget, left);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDraggable_draggable_set_right(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t right = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)draggable_set_right(widget, right);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDraggable_draggable_set_vertical_only(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t vertical_only = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)draggable_set_vertical_only(widget, vertical_only);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDraggable_draggable_set_horizontal_only(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t horizontal_only = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)draggable_set_horizontal_only(widget, horizontal_only);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDraggable_draggable_set_drag_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t drag_window = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)draggable_set_drag_window(widget, drag_window);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDraggable_draggable_t_get_prop_top(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  draggable_t* obj = (draggable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->top));

  return 0;
}

int awtk_TDraggable_draggable_t_get_prop_bottom(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  draggable_t* obj = (draggable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->bottom));

  return 0;
}

int awtk_TDraggable_draggable_t_get_prop_left(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  draggable_t* obj = (draggable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->left));

  return 0;
}

int awtk_TDraggable_draggable_t_get_prop_right(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  draggable_t* obj = (draggable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->right));

  return 0;
}

int awtk_TDraggable_draggable_t_get_prop_vertical_only(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  draggable_t* obj = (draggable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->vertical_only));

  return 0;
}

int awtk_TDraggable_draggable_t_get_prop_horizontal_only(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  draggable_t* obj = (draggable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->horizontal_only));

  return 0;
}

int awtk_TDraggable_draggable_t_get_prop_drag_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  draggable_t* obj = (draggable_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->drag_window));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)file_browser_view_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)file_browser_view_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_set_init_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* init_dir = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_browser_view_set_init_dir(widget, init_dir);
  TKMEM_FREE(init_dir);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_set_top_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* top_dir = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_browser_view_set_top_dir(widget, top_dir);
  TKMEM_FREE(top_dir);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_set_filter(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* filter = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_browser_view_set_filter(widget, filter);
  TKMEM_FREE(filter);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_reload(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)file_browser_view_reload(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_set_ignore_hidden_files(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t ignore_hidden_files = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)file_browser_view_set_ignore_hidden_files(widget, ignore_hidden_files);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_set_sort_ascending(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t sort_ascending = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)file_browser_view_set_sort_ascending(widget, sort_ascending);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_set_show_check_button(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t show_check_button = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)file_browser_view_set_show_check_button(widget, show_check_button);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_set_sort_by(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* sort_by = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_browser_view_set_sort_by(widget, sort_by);
  TKMEM_FREE(sort_by);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_get_cwd(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const char*)file_browser_view_get_cwd(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_create_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_browser_view_create_dir(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_create_file(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  const char* data = (const char*)jni_ctx_get_str(&actx);
  uint32_t size = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)file_browser_view_create_file(widget, name, data, size);
  TKMEM_FREE(name);
  TKMEM_FREE(data);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_t_get_prop_init_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_browser_view_t* obj = (file_browser_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->init_dir));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_t_get_prop_top_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_browser_view_t* obj = (file_browser_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->top_dir));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_t_get_prop_filter(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_browser_view_t* obj = (file_browser_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->filter));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_t_get_prop_ignore_hidden_files(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_browser_view_t* obj = (file_browser_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ignore_hidden_files));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_t_get_prop_sort_ascending(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_browser_view_t* obj = (file_browser_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->sort_ascending));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_t_get_prop_show_check_button(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_browser_view_t* obj = (file_browser_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->show_check_button));

  return 0;
}

int awtk_TFileBrowserView_file_browser_view_t_get_prop_sort_by(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_browser_view_t* obj = (file_browser_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->sort_by));

  return 0;
}

int awtk_TFileChooser_file_chooser_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_chooser_t* ret = NULL;
  ret = (file_chooser_t*)file_chooser_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_set_init_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  const char* init_dir = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_chooser_set_init_dir(chooser, init_dir);
  TKMEM_FREE(init_dir);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_set_top_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  const char* top_dir = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_chooser_set_top_dir(chooser, top_dir);
  TKMEM_FREE(top_dir);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_set_filter(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  const char* filter = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)file_chooser_set_filter(chooser, filter);
  TKMEM_FREE(filter);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  file_chooser_t* ret = NULL;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  ret = (file_chooser_t*)file_chooser_cast(chooser);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_choose_file_for_save(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)file_chooser_choose_file_for_save(chooser);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_choose_file_for_open(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)file_chooser_choose_file_for_open(chooser);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_choose_folder(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)file_chooser_choose_folder(chooser);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_get_dir(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  ret = (const char*)file_chooser_get_dir(chooser);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_get_filename(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  ret = (const char*)file_chooser_get_filename(chooser);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TFileChooser_file_chooser_is_aborted(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  file_chooser_t* chooser = (file_chooser_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)file_chooser_is_aborted(chooser);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)gauge_pointer_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)gauge_pointer_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_set_angle(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t angle = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)gauge_pointer_set_angle(widget, angle);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)gauge_pointer_set_image(widget, image);
  TKMEM_FREE(image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_set_anchor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* anchor_x = (const char*)jni_ctx_get_str(&actx);
  const char* anchor_y = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)gauge_pointer_set_anchor(widget, anchor_x, anchor_y);
  TKMEM_FREE(anchor_x);
  TKMEM_FREE(anchor_y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_t_get_prop_angle(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  gauge_pointer_t* obj = (gauge_pointer_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->angle));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_t_get_prop_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  gauge_pointer_t* obj = (gauge_pointer_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->image));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_t_get_prop_anchor_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  gauge_pointer_t* obj = (gauge_pointer_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->anchor_x));

  return 0;
}

int awtk_TGaugePointer_gauge_pointer_t_get_prop_anchor_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  gauge_pointer_t* obj = (gauge_pointer_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->anchor_y));

  return 0;
}

int awtk_TGauge_gauge_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)gauge_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGauge_gauge_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)gauge_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGauge_gauge_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)gauge_set_image(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGauge_gauge_set_draw_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  image_draw_type_t draw_type = (image_draw_type_t)jni_ctx_get_int(&actx);
  ret = (ret_t)gauge_set_draw_type(widget, draw_type);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGauge_gauge_t_get_prop_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  gauge_t* obj = (gauge_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->image));

  return 0;
}

int awtk_TGauge_gauge_t_get_prop_draw_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  gauge_t* obj = (gauge_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->draw_type));

  return 0;
}

int awtk_TImageAnimation_image_animation_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)image_animation_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_loop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t loop = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_loop(widget, loop);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)image_animation_set_image(widget, image);
  TKMEM_FREE(image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_interval(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t interval = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_interval(widget, interval);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_delay(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t delay = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_delay(widget, delay);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_auto_play(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t auto_play = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_auto_play(widget, auto_play);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_sequence(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* sequence = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)image_animation_set_sequence(widget, sequence);
  TKMEM_FREE(sequence);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_range_sequence(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t start_index = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t end_index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_range_sequence(widget, start_index, end_index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_play(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)image_animation_play(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_stop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)image_animation_stop(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_pause(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)image_animation_pause(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_next(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)image_animation_next(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)image_animation_set_format(widget, format);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_unload_after_paint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t unload_after_paint = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_unload_after_paint(widget, unload_after_paint);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_reverse(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t reverse = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_reverse(widget, reverse);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_set_show_when_done(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t show_when_done = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_animation_set_show_when_done(widget, show_when_done);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)image_animation_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_is_playing(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)image_animation_is_playing(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->image));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_sequence(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->sequence));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_start_index(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->start_index));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_end_index(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->end_index));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_reverse(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->reverse));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_loop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->loop));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_auto_play(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_play));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_unload_after_paint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->unload_after_paint));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->format));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_interval(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->interval));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_delay(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->delay));

  return 0;
}

int awtk_TImageAnimation_image_animation_t_get_prop_show_when_done(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_animation_t* obj = (image_animation_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->show_when_done));

  return 0;
}

int awtk_TImageValue_image_value_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)image_value_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImageValue_image_value_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)image_value_set_image(widget, image);
  TKMEM_FREE(image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageValue_image_value_set_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)image_value_set_format(widget, format);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageValue_image_value_set_click_add_delta(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double delta = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)image_value_set_click_add_delta(widget, delta);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageValue_image_value_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double value = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)image_value_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageValue_image_value_set_min(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double min = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)image_value_set_min(widget, min);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageValue_image_value_set_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double max = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)image_value_set_max(widget, max);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImageValue_image_value_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)image_value_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImageValue_image_value_t_get_prop_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_value_t* obj = (image_value_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->image));

  return 0;
}

int awtk_TImageValue_image_value_t_get_prop_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_value_t* obj = (image_value_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->format));

  return 0;
}

int awtk_TImageValue_image_value_t_get_prop_click_add_delta(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_value_t* obj = (image_value_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->click_add_delta));

  return 0;
}

int awtk_TImageValue_image_value_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_value_t* obj = (image_value_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->value));

  return 0;
}

int awtk_TImageValue_image_value_t_get_prop_min(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_value_t* obj = (image_value_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->min));

  return 0;
}

int awtk_TImageValue_image_value_t_get_prop_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_value_t* obj = (image_value_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->max));

  return 0;
}

int awtk_TCandidates_candidates_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)candidates_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCandidates_candidates_set_pre(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t pre = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)candidates_set_pre(widget, pre);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCandidates_candidates_set_select_by_num(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t select_by_num = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)candidates_set_select_by_num(widget, select_by_num);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCandidates_candidates_set_auto_hide(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t auto_hide = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)candidates_set_auto_hide(widget, auto_hide);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCandidates_candidates_set_button_style(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* button_style = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)candidates_set_button_style(widget, button_style);
  TKMEM_FREE(button_style);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCandidates_candidates_t_get_prop_pre(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  candidates_t* obj = (candidates_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->pre));

  return 0;
}

int awtk_TCandidates_candidates_t_get_prop_select_by_num(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  candidates_t* obj = (candidates_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->select_by_num));

  return 0;
}

int awtk_TCandidates_candidates_t_get_prop_auto_hide(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  candidates_t* obj = (candidates_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_hide));

  return 0;
}

int awtk_TCandidates_candidates_t_get_prop_button_style(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  candidates_t* obj = (candidates_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->button_style));

  return 0;
}

int awtk_TLangIndicator_lang_indicator_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)lang_indicator_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TLangIndicator_lang_indicator_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)lang_indicator_set_image(widget, image);
  TKMEM_FREE(image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLangIndicator_lang_indicator_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)lang_indicator_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TLangIndicator_lang_indicator_t_get_prop_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  lang_indicator_t* obj = (lang_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->image));

  return 0;
}

int awtk_TLineNumber_line_number_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)line_number_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TLineNumber_line_number_set_top_margin(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t top_margin = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)line_number_set_top_margin(widget, top_margin);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLineNumber_line_number_set_bottom_margin(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t bottom_margin = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)line_number_set_bottom_margin(widget, bottom_margin);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLineNumber_line_number_set_line_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t line_height = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)line_number_set_line_height(widget, line_height);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLineNumber_line_number_set_yoffset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t yoffset = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)line_number_set_yoffset(widget, yoffset);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLineNumber_line_number_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)line_number_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TMledit_mledit_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)mledit_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_readonly(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t readonly = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_readonly(widget, readonly);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_cancelable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t cancelable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_cancelable(widget, cancelable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_focus(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t focus = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_focus(widget, focus);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_wrap_word(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t wrap_word = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_wrap_word(widget, wrap_word);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_max_lines(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t max_lines = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_max_lines(widget, max_lines);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_max_chars(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t max_chars = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_max_chars(widget, max_chars);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* tips = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)mledit_set_tips(widget, tips);
  TKMEM_FREE(tips);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_tr_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* tr_tips = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)mledit_set_tr_tips(widget, tr_tips);
  TKMEM_FREE(tr_tips);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_keyboard(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* keyboard = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)mledit_set_keyboard(widget, keyboard);
  TKMEM_FREE(keyboard);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t cursor = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_cursor(widget, cursor);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_get_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)mledit_get_cursor(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_scroll_line(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t scroll_line = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_scroll_line(widget, scroll_line);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_scroll_to_offset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t offset = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_scroll_to_offset(widget, offset);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_open_im_when_focused(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t open_im_when_focused = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_open_im_when_focused(widget, open_im_when_focused);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_close_im_when_blured(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t close_im_when_blured = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_close_im_when_blured(widget, close_im_when_blured);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_set_select(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t start = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t end = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)mledit_set_select(widget, start, end);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TMledit_mledit_get_selected_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (char*)mledit_get_selected_text(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TMledit_mledit_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)mledit_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->tips));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_tr_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->tr_tips));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_keyboard(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->keyboard));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_max_lines(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->max_lines));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_max_chars(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->max_chars));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_wrap_word(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->wrap_word));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_scroll_line(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->scroll_line));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_readonly(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->readonly));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_cancelable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->cancelable));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_open_im_when_focused(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->open_im_when_focused));

  return 0;
}

int awtk_TMledit_mledit_t_get_prop_close_im_when_blured(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  mledit_t* obj = (mledit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->close_im_when_blured));

  return 0;
}

int awtk_TProgressCircle_progress_circle_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)progress_circle_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)progress_circle_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t value = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)progress_circle_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t max = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_circle_set_max(widget, max);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)progress_circle_set_format(widget, format);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_line_width(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t line_width = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_circle_set_line_width(widget, line_width);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_start_angle(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t start_angle = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_circle_set_start_angle(widget, start_angle);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_line_cap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* line_cap = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)progress_circle_set_line_cap(widget, line_cap);
  TKMEM_FREE(line_cap);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_show_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t show_text = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_circle_set_show_text(widget, show_text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_set_counter_clock_wise(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t counter_clock_wise = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_circle_set_counter_clock_wise(widget, counter_clock_wise);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->value));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->max));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->format));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_start_angle(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->start_angle));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_line_width(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->line_width));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_line_cap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->line_cap));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_counter_clock_wise(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->counter_clock_wise));

  return 0;
}

int awtk_TProgressCircle_progress_circle_t_get_prop_show_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_circle_t* obj = (progress_circle_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->show_text));

  return 0;
}

int awtk_TRichTextView_rich_text_view_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)rich_text_view_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRichTextView_rich_text_view_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)rich_text_view_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRichText_rich_text_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)rich_text_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRichText_rich_text_set_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* text = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)rich_text_set_text(widget, text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TRichText_rich_text_set_yslidable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t yslidable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)rich_text_set_yslidable(widget, yslidable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TRichText_rich_text_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)rich_text_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRichText_rich_text_t_get_prop_line_gap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rich_text_t* obj = (rich_text_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->line_gap));

  return 0;
}

int awtk_TRichText_rich_text_t_get_prop_yslidable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  rich_text_t* obj = (rich_text_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->yslidable));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)hscroll_label_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_lull(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t lull = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_lull(widget, lull);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_duration(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t duration = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_duration(widget, duration);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_only_focus(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t only_focus = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_only_focus(widget, only_focus);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_only_parent_focus(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t only_parent_focus = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_only_parent_focus(widget, only_parent_focus);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_loop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t loop = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_loop(widget, loop);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_yoyo(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t yoyo = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_yoyo(widget, yoyo);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_ellipses(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t ellipses = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_ellipses(widget, ellipses);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_set_xoffset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t xoffset = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)hscroll_label_set_xoffset(widget, xoffset);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_start(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)hscroll_label_start(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_stop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)hscroll_label_stop(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)hscroll_label_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_only_focus(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->only_focus));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_only_parent_focus(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->only_parent_focus));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_loop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->loop));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_yoyo(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->yoyo));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_ellipses(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->ellipses));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_lull(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->lull));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_duration(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->duration));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_xoffset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->xoffset));

  return 0;
}

int awtk_THscrollLabel_hscroll_label_t_get_prop_text_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  hscroll_label_t* obj = (hscroll_label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->text_w));

  return 0;
}

int awtk_TListItem_list_item_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)list_item_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TListItem_list_item_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)list_item_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TListViewH_list_view_h_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)list_view_h_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TListViewH_list_view_h_set_item_width(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t item_width = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)list_view_h_set_item_width(widget, item_width);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TListViewH_list_view_h_set_spacing(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t spacing = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)list_view_h_set_spacing(widget, spacing);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TListViewH_list_view_h_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)list_view_h_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TListViewH_list_view_h_t_get_prop_item_width(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  list_view_h_t* obj = (list_view_h_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->item_width));

  return 0;
}

int awtk_TListViewH_list_view_h_t_get_prop_spacing(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  list_view_h_t* obj = (list_view_h_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->spacing));

  return 0;
}

int awtk_TListView_list_view_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)list_view_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TListView_list_view_set_item_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t item_height = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)list_view_set_item_height(widget, item_height);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TListView_list_view_set_default_item_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t default_item_height = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)list_view_set_default_item_height(widget, default_item_height);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TListView_list_view_set_auto_hide_scroll_bar(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t auto_hide_scroll_bar = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)list_view_set_auto_hide_scroll_bar(widget, auto_hide_scroll_bar);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TListView_list_view_set_floating_scroll_bar(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t floating_scroll_bar = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)list_view_set_floating_scroll_bar(widget, floating_scroll_bar);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TListView_list_view_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)list_view_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TListView_list_view_reinit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)list_view_reinit(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TListView_list_view_t_get_prop_item_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  list_view_t* obj = (list_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->item_height));

  return 0;
}

int awtk_TListView_list_view_t_get_prop_default_item_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  list_view_t* obj = (list_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->default_item_height));

  return 0;
}

int awtk_TListView_list_view_t_get_prop_auto_hide_scroll_bar(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  list_view_t* obj = (list_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_hide_scroll_bar));

  return 0;
}

int awtk_TListView_list_view_t_get_prop_floating_scroll_bar(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  list_view_t* obj = (list_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->floating_scroll_bar));

  return 0;
}

int awtk_TScrollBar_scroll_bar_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)scroll_bar_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)scroll_bar_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_create_mobile(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)scroll_bar_create_mobile(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_create_desktop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)scroll_bar_create_desktop(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_set_params(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t virtual_size = (int32_t)jni_ctx_get_int(&actx);
  int32_t row = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_bar_set_params(widget, virtual_size, row);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_scroll_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  int32_t duration = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_bar_scroll_to(widget, value, duration);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_bar_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_add_delta(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t delta = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_bar_add_delta(widget, delta);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_scroll_delta(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t delta = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_bar_scroll_delta(widget, delta);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_set_value_only(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_bar_set_value_only(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_set_auto_hide(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t auto_hide = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_bar_set_auto_hide(widget, auto_hide);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_is_mobile(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)scroll_bar_is_mobile(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollBar_scroll_bar_t_get_prop_virtual_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_bar_t* obj = (scroll_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->virtual_size));

  return 0;
}

int awtk_TScrollBar_scroll_bar_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_bar_t* obj = (scroll_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TScrollBar_scroll_bar_t_get_prop_row(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_bar_t* obj = (scroll_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->row));

  return 0;
}

int awtk_TScrollBar_scroll_bar_t_get_prop_animatable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_bar_t* obj = (scroll_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->animatable));

  return 0;
}

int awtk_TScrollBar_scroll_bar_t_get_prop_auto_hide(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_bar_t* obj = (scroll_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_hide));

  return 0;
}

int awtk_TScrollView_scroll_view_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)scroll_view_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)scroll_view_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_virtual_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_virtual_w(widget, w);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_virtual_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_virtual_h(widget, h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_xslidable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t xslidable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_xslidable(widget, xslidable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_yslidable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t yslidable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_yslidable(widget, yslidable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_snap_to_page(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t snap_to_page = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_snap_to_page(widget, snap_to_page);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_move_to_page(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t move_to_page = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_move_to_page(widget, move_to_page);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_recursive(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t recursive = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_recursive(widget, recursive);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_recursive_only(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t recursive = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_recursive_only(widget, recursive);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_offset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t xoffset = (int32_t)jni_ctx_get_int(&actx);
  int32_t yoffset = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_set_offset(widget, xoffset, yoffset);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_set_speed_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t xspeed_scale = (float_t)jni_ctx_get_float(&actx);
  float_t yspeed_scale = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)scroll_view_set_speed_scale(widget, xspeed_scale, yspeed_scale);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_scroll_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t xoffset_end = (int32_t)jni_ctx_get_int(&actx);
  int32_t yoffset_end = (int32_t)jni_ctx_get_int(&actx);
  int32_t duration = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_scroll_to(widget, xoffset_end, yoffset_end, duration);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_scroll_delta_to(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t xoffset_delta = (int32_t)jni_ctx_get_int(&actx);
  int32_t yoffset_delta = (int32_t)jni_ctx_get_int(&actx);
  int32_t duration = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)scroll_view_scroll_delta_to(widget, xoffset_delta, yoffset_delta, duration);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_virtual_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->virtual_w));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_virtual_h(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->virtual_h));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_xoffset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->xoffset));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_yoffset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->yoffset));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_xspeed_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->xspeed_scale));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_yspeed_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->yspeed_scale));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_xslidable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->xslidable));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_yslidable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->yslidable));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_snap_to_page(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->snap_to_page));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_move_to_page(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->move_to_page));

  return 0;
}

int awtk_TScrollView_scroll_view_t_get_prop_recursive(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  scroll_view_t* obj = (scroll_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->recursive));

  return 0;
}

int awtk_TSlideMenu_slide_menu_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)slide_menu_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideMenu_slide_menu_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)slide_menu_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideMenu_slide_menu_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t value = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_menu_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideMenu_slide_menu_set_align_v(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  align_v_t align_v = (align_v_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_menu_set_align_v(widget, align_v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideMenu_slide_menu_set_min_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t min_scale = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)slide_menu_set_min_scale(widget, min_scale);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideMenu_slide_menu_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_menu_t* obj = (slide_menu_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TSlideMenu_slide_menu_t_get_prop_align_v(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_menu_t* obj = (slide_menu_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->align_v));

  return 0;
}

int awtk_TSlideMenu_slide_menu_t_get_prop_min_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_menu_t* obj = (slide_menu_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->min_scale));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)slide_indicator_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_create_linear(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)slide_indicator_create_linear(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_create_arc(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)slide_indicator_create_arc(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)slide_indicator_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t value = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_indicator_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t max = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_indicator_set_max(widget, max);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_default_paint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  indicator_default_paint_t default_paint = (indicator_default_paint_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_indicator_set_default_paint(widget, default_paint);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_auto_hide(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint16_t auto_hide = (uint16_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_indicator_set_auto_hide(widget, auto_hide);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_margin(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t margin = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_indicator_set_margin(widget, margin);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_spacing(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t spacing = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)slide_indicator_set_spacing(widget, spacing);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t size = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_indicator_set_size(widget, size);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_anchor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* anchor_x = (const char*)jni_ctx_get_str(&actx);
  const char* anchor_y = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)slide_indicator_set_anchor(widget, anchor_x, anchor_y);
  TKMEM_FREE(anchor_x);
  TKMEM_FREE(anchor_y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_set_indicated_target(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* target_name = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)slide_indicator_set_indicated_target(widget, target_name);
  TKMEM_FREE(target_name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->max));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_default_paint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->default_paint));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_auto_hide(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_hide));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_margin(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->margin));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_spacing(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->spacing));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->size));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_anchor_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->anchor_x));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_anchor_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->anchor_y));

  return 0;
}

int awtk_TSlideIndicator_slide_indicator_t_get_prop_indicated_target(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_indicator_t* obj = (slide_indicator_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->indicated_target));

  return 0;
}

int awtk_TSlideView_slide_view_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)slide_view_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)slide_view_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_set_auto_play(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint16_t auto_play = (uint16_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_view_set_auto_play(widget, auto_play);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_set_active(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_view_set_active(widget, index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_set_active_ex(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  bool_t animate = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_view_set_active_ex(widget, index, animate);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_set_vertical(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t vertical = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_view_set_vertical(widget, vertical);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_set_anim_hint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* anim_hint = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)slide_view_set_anim_hint(widget, anim_hint);
  TKMEM_FREE(anim_hint);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_set_loop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t loop = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_view_set_loop(widget, loop);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_remove_index(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slide_view_remove_index(widget, index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlideView_slide_view_t_get_prop_vertical(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_view_t* obj = (slide_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->vertical));

  return 0;
}

int awtk_TSlideView_slide_view_t_get_prop_auto_play(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_view_t* obj = (slide_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_play));

  return 0;
}

int awtk_TSlideView_slide_view_t_get_prop_loop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_view_t* obj = (slide_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->loop));

  return 0;
}

int awtk_TSlideView_slide_view_t_get_prop_anim_hint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slide_view_t* obj = (slide_view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->anim_hint));

  return 0;
}

int awtk_TSwitch_switch_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)switch_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSwitch_switch_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t value = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)switch_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSwitch_switch_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)switch_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSwitch_switch_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  switch_t* obj = (switch_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TSwitch_switch_t_get_prop_max_xoffset_ratio(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  switch_t* obj = (switch_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->max_xoffset_ratio));

  return 0;
}

int awtk_TTextSelector_text_selector_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)text_selector_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)text_selector_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_reset_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)text_selector_reset_options(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_count_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)text_selector_count_options(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_append_option(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  char* text = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)text_selector_append_option(widget, value, text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* options = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)text_selector_set_options(widget, options);
  TKMEM_FREE(options);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_range_options_ex(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t start = (int32_t)jni_ctx_get_int(&actx);
  uint32_t nr = (uint32_t)jni_ctx_get_int(&actx);
  int32_t step = (int32_t)jni_ctx_get_int(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)text_selector_set_range_options_ex(widget, start, nr, step, format);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_range_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t start = (int32_t)jni_ctx_get_int(&actx);
  uint32_t nr = (uint32_t)jni_ctx_get_int(&actx);
  int32_t step = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)text_selector_set_range_options(widget, start, nr, step);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_get_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)text_selector_get_value(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)text_selector_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_get_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const char*)text_selector_get_text(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)text_selector_set_text(widget, text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_selected_index(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)text_selector_set_selected_index(widget, index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_visible_nr(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t visible_nr = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)text_selector_set_visible_nr(widget, visible_nr);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_localize_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t localize_options = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)text_selector_set_localize_options(widget, localize_options);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_loop_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t loop_options = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)text_selector_set_loop_options(widget, loop_options);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_yspeed_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  float_t yspeed_scale = (float_t)jni_ctx_get_float(&actx);
  ret = (ret_t)text_selector_set_yspeed_scale(widget, yspeed_scale);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_set_animating_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t animating_time = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)text_selector_set_animating_time(widget, animating_time);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTextSelector_text_selector_t_get_prop_visible_nr(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  text_selector_t* obj = (text_selector_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->visible_nr));

  return 0;
}

int awtk_TTextSelector_text_selector_t_get_prop_selected_index(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  text_selector_t* obj = (text_selector_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->selected_index));

  return 0;
}

int awtk_TTextSelector_text_selector_t_get_prop_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  text_selector_t* obj = (text_selector_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->options));

  return 0;
}

int awtk_TTextSelector_text_selector_t_get_prop_yspeed_scale(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  text_selector_t* obj = (text_selector_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->yspeed_scale));

  return 0;
}

int awtk_TTextSelector_text_selector_t_get_prop_animating_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  text_selector_t* obj = (text_selector_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->animating_time));

  return 0;
}

int awtk_TTextSelector_text_selector_t_get_prop_localize_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  text_selector_t* obj = (text_selector_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->localize_options));

  return 0;
}

int awtk_TTextSelector_text_selector_t_get_prop_loop_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  text_selector_t* obj = (text_selector_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->loop_options));

  return 0;
}

int awtk_TTimeClock_time_clock_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)time_clock_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)time_clock_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_hour(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t hour = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)time_clock_set_hour(widget, hour);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_minute(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t minute = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)time_clock_set_minute(widget, minute);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_second(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t second = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)time_clock_set_second(widget, second);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_hour_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* hour = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_hour_image(widget, hour);
  TKMEM_FREE(hour);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_minute_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* minute_image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_minute_image(widget, minute_image);
  TKMEM_FREE(minute_image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_second_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* second_image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_second_image(widget, second_image);
  TKMEM_FREE(second_image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_bg_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* bg_image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_bg_image(widget, bg_image);
  TKMEM_FREE(bg_image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* image = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_image(widget, image);
  TKMEM_FREE(image);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_hour_anchor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* anchor_x = (const char*)jni_ctx_get_str(&actx);
  const char* anchor_y = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_hour_anchor(widget, anchor_x, anchor_y);
  TKMEM_FREE(anchor_x);
  TKMEM_FREE(anchor_y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_minute_anchor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* anchor_x = (const char*)jni_ctx_get_str(&actx);
  const char* anchor_y = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_minute_anchor(widget, anchor_x, anchor_y);
  TKMEM_FREE(anchor_x);
  TKMEM_FREE(anchor_y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_set_second_anchor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* anchor_x = (const char*)jni_ctx_get_str(&actx);
  const char* anchor_y = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)time_clock_set_second_anchor(widget, anchor_x, anchor_y);
  TKMEM_FREE(anchor_x);
  TKMEM_FREE(anchor_y);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_hour(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->hour));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_minute(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->minute));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_second(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->second));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->image));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_bg_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->bg_image));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_hour_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->hour_image));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_minute_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->minute_image));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_second_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->second_image));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_hour_anchor_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->hour_anchor_x));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_hour_anchor_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->hour_anchor_y));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_minute_anchor_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->minute_anchor_x));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_minute_anchor_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->minute_anchor_y));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_second_anchor_x(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->second_anchor_x));

  return 0;
}

int awtk_TTimeClock_time_clock_t_get_prop_second_anchor_y(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  time_clock_t* obj = (time_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->second_anchor_y));

  return 0;
}

int awtk_TVpage_vpage_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)vpage_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TVpage_vpage_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)vpage_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TVpage_vpage_set_ui_asset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* ui_asset = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vpage_set_ui_asset(widget, ui_asset);
  TKMEM_FREE(ui_asset);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVpage_vpage_set_anim_hint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* anim_hint = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)vpage_set_anim_hint(widget, anim_hint);
  TKMEM_FREE(anim_hint);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TVpage_vpage_t_get_prop_ui_asset(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vpage_t* obj = (vpage_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->ui_asset));

  return 0;
}

int awtk_TVpage_vpage_t_get_prop_anim_hint(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  vpage_t* obj = (vpage_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->anim_hint));

  return 0;
}

int awtk_TPropChangeEvent_prop_change_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  prop_change_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (prop_change_event_t*)prop_change_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPropChangeEvent_prop_change_event_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  prop_change_event_t* obj = (prop_change_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TPropChangeEvent_prop_change_event_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  prop_change_event_t* obj = (prop_change_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_object(&actx, (void*)(obj->value));

  return 0;
}

int awtk_TProgressEvent_progress_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (progress_event_t*)progress_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TProgressEvent_progress_event_t_get_prop_percent(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_event_t* obj = (progress_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->percent));

  return 0;
}

int awtk_TDoneEvent_done_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  done_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (done_event_t*)done_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDoneEvent_done_event_t_get_prop_result(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  done_event_t* obj = (done_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->result));

  return 0;
}

int awtk_TErrorEvent_error_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  error_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (error_event_t*)error_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TErrorEvent_error_event_t_get_prop_code(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  error_event_t* obj = (error_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->code));

  return 0;
}

int awtk_TErrorEvent_error_event_t_get_prop_message(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  error_event_t* obj = (error_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->message));

  return 0;
}

int awtk_TCmdExecEvent_cmd_exec_event_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  cmd_exec_event_t* ret = NULL;
  event_t* event = (event_t*)jni_ctx_get_object(&actx);
  ret = (cmd_exec_event_t*)cmd_exec_event_cast(event);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  cmd_exec_event_t* obj = (cmd_exec_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->name));

  return 0;
}

int awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_args(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  cmd_exec_event_t* obj = (cmd_exec_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->args));

  return 0;
}

int awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_result(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  cmd_exec_event_t* obj = (cmd_exec_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->result));

  return 0;
}

int awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_can_exec(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  cmd_exec_event_t* obj = (cmd_exec_event_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->can_exec));

  return 0;
}

int awtk_TAppBar_app_bar_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)app_bar_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TAppBar_app_bar_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)app_bar_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TButtonGroup_button_group_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)button_group_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TButtonGroup_button_group_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)button_group_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TButton_button_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)button_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TButton_button_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)button_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TButton_button_set_repeat(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t repeat = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)button_set_repeat(widget, repeat);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TButton_button_set_long_press_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t long_press_time = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)button_set_long_press_time(widget, long_press_time);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TButton_button_set_enable_long_press(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t enable_long_press = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)button_set_enable_long_press(widget, enable_long_press);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TButton_button_t_get_prop_repeat(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  button_t* obj = (button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->repeat));

  return 0;
}

int awtk_TButton_button_t_get_prop_enable_long_press(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  button_t* obj = (button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->enable_long_press));

  return 0;
}

int awtk_TButton_button_t_get_prop_long_press_time(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  button_t* obj = (button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->long_press_time));

  return 0;
}

int awtk_TCheckButton_check_button_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)check_button_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCheckButton_check_button_create_radio(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)check_button_create_radio(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCheckButton_check_button_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t value = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)check_button_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TCheckButton_check_button_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)check_button_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TCheckButton_check_button_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  check_button_t* obj = (check_button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TClipView_clip_view_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)clip_view_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TClipView_clip_view_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)clip_view_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColorTile_color_tile_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)color_tile_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColorTile_color_tile_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)color_tile_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColorTile_color_tile_set_bg_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* color = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)color_tile_set_bg_color(widget, color);
  TKMEM_FREE(color);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TColorTile_color_tile_get_bg_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const char*)color_tile_get_bg_color(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TColorTile_color_tile_get_border_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const char*)color_tile_get_border_color(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TColorTile_color_tile_t_get_prop_bg_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_tile_t* obj = (color_tile_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->bg_color));

  return 0;
}

int awtk_TColorTile_color_tile_t_get_prop_border_color(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  color_tile_t* obj = (color_tile_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->border_color));

  return 0;
}

int awtk_TColumn_column_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)column_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TColumn_column_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)column_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TComboBoxItem_combo_box_item_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)combo_box_item_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TComboBoxItem_combo_box_item_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)combo_box_item_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TComboBoxItem_combo_box_item_set_checked(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t checked = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)combo_box_item_set_checked(widget, checked);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBoxItem_combo_box_item_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)combo_box_item_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBoxItem_combo_box_item_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_item_t* obj = (combo_box_item_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TComboBoxItem_combo_box_item_t_get_prop_checked(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_item_t* obj = (combo_box_item_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->checked));

  return 0;
}

int awtk_TDialogClient_dialog_client_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)dialog_client_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialogClient_dialog_client_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)dialog_client_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialogTitle_dialog_title_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)dialog_title_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialogTitle_dialog_title_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)dialog_title_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDigitClock_digit_clock_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)digit_clock_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDigitClock_digit_clock_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)digit_clock_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDigitClock_digit_clock_set_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)digit_clock_set_format(widget, format);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDigitClock_digit_clock_t_get_prop_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  digit_clock_t* obj = (digit_clock_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->format));

  return 0;
}

int awtk_TDragger_dragger_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)dragger_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDragger_dragger_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)dragger_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDragger_dragger_set_range(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x_min = (xy_t)jni_ctx_get_int(&actx);
  xy_t y_min = (xy_t)jni_ctx_get_int(&actx);
  xy_t x_max = (xy_t)jni_ctx_get_int(&actx);
  xy_t y_max = (xy_t)jni_ctx_get_int(&actx);
  ret = (ret_t)dragger_set_range(widget, x_min, y_min, x_max, y_max);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDragger_dragger_t_get_prop_x_min(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  dragger_t* obj = (dragger_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->x_min));

  return 0;
}

int awtk_TDragger_dragger_t_get_prop_y_min(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  dragger_t* obj = (dragger_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->y_min));

  return 0;
}

int awtk_TDragger_dragger_t_get_prop_x_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  dragger_t* obj = (dragger_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->x_max));

  return 0;
}

int awtk_TDragger_dragger_t_get_prop_y_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  dragger_t* obj = (dragger_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->y_max));

  return 0;
}

int awtk_TEdit_edit_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)edit_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TEdit_edit_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)edit_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TEdit_edit_get_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)edit_get_int(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_get_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  double ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (double)edit_get_double(widget);
  jni_ctx_return_float(&actx, (float)(ret));

  return 0;
}

int awtk_TEdit_edit_set_int(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_int(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_double(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double value = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)edit_set_double(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_text_limit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t min = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t max = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_text_limit(widget, min, max);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_int_limit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t min = (int32_t)jni_ctx_get_int(&actx);
  int32_t max = (int32_t)jni_ctx_get_int(&actx);
  uint32_t step = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_int_limit(widget, min, max, step);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_float_limit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double min = (double)jni_ctx_get_float(&actx);
  double max = (double)jni_ctx_get_float(&actx);
  double step = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)edit_set_float_limit(widget, min, max, step);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_readonly(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t readonly = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_readonly(widget, readonly);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_cancelable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t cancelable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_cancelable(widget, cancelable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_auto_fix(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t auto_fix = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_auto_fix(widget, auto_fix);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_select_none_when_focused(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t select_none_when_focused = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_select_none_when_focused(widget, select_none_when_focused);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_open_im_when_focused(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t open_im_when_focused = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_open_im_when_focused(widget, open_im_when_focused);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_close_im_when_blured(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t close_im_when_blured = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_close_im_when_blured(widget, close_im_when_blured);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_input_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  input_type_t type = (input_type_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_input_type(widget, type);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_action_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* action_text = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)edit_set_action_text(widget, action_text);
  TKMEM_FREE(action_text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* tips = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)edit_set_tips(widget, tips);
  TKMEM_FREE(tips);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_tr_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* tr_tips = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)edit_set_tr_tips(widget, tr_tips);
  TKMEM_FREE(tr_tips);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_keyboard(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* keyboard = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)edit_set_keyboard(widget, keyboard);
  TKMEM_FREE(keyboard);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_password_visible(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t password_visible = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_password_visible(widget, password_visible);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_focus(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t focus = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_focus(widget, focus);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t cursor = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_cursor(widget, cursor);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_get_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)edit_get_cursor(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_set_select(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t start = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t end = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)edit_set_select(widget, start, end);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TEdit_edit_get_selected_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (char*)edit_get_selected_text(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->tips));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_tr_tips(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->tr_tips));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_action_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->action_text));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_keyboard(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->keyboard));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_min(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->min));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->max));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_step(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->step));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_input_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->input_type));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_readonly(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->readonly));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_password_visible(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->password_visible));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_auto_fix(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->auto_fix));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_select_none_when_focused(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->select_none_when_focused));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_open_im_when_focused(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->open_im_when_focused));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_close_im_when_blured(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->close_im_when_blured));

  return 0;
}

int awtk_TEdit_edit_t_get_prop_cancelable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  edit_t* obj = (edit_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->cancelable));

  return 0;
}

int awtk_TGridItem_grid_item_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)grid_item_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGridItem_grid_item_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)grid_item_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGrid_grid_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)grid_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGrid_grid_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)grid_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGroupBox_group_box_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)group_box_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGroupBox_group_box_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)group_box_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TLabel_label_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)label_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TLabel_label_set_length(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t length = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)label_set_length(widget, length);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLabel_label_set_max_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t max_w = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)label_set_max_w(widget, max_w);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLabel_label_set_line_wrap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t line_wrap = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)label_set_line_wrap(widget, line_wrap);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLabel_label_set_word_wrap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t word_wrap = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)label_set_word_wrap(widget, word_wrap);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLabel_label_resize_to_content(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t min_w = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t max_w = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t min_h = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t max_h = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)label_resize_to_content(widget, min_w, max_w, min_h, max_h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TLabel_label_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)label_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TLabel_label_t_get_prop_length(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  label_t* obj = (label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->length));

  return 0;
}

int awtk_TLabel_label_t_get_prop_line_wrap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  label_t* obj = (label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->line_wrap));

  return 0;
}

int awtk_TLabel_label_t_get_prop_word_wrap(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  label_t* obj = (label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->word_wrap));

  return 0;
}

int awtk_TLabel_label_t_get_prop_max_w(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  label_t* obj = (label_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->max_w));

  return 0;
}

int awtk_TPages_pages_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)pages_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPages_pages_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)pages_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPages_pages_set_active(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)pages_set_active(widget, index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TPages_pages_set_active_by_name(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)pages_set_active_by_name(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TPages_pages_t_get_prop_active(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  pages_t* obj = (pages_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->active));

  return 0;
}

int awtk_TProgressBar_progress_bar_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)progress_bar_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)progress_bar_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double value = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)progress_bar_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_set_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double max = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)progress_bar_set_max(widget, max);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_set_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* format = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)progress_bar_set_format(widget, format);
  TKMEM_FREE(format);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_set_vertical(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t vertical = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_bar_set_vertical(widget, vertical);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_set_show_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t show_text = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_bar_set_show_text(widget, show_text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_set_reverse(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t reverse = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)progress_bar_set_reverse(widget, reverse);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_get_percent(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  uint32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (uint32_t)progress_bar_get_percent(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TProgressBar_progress_bar_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_bar_t* obj = (progress_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->value));

  return 0;
}

int awtk_TProgressBar_progress_bar_t_get_prop_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_bar_t* obj = (progress_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->max));

  return 0;
}

int awtk_TProgressBar_progress_bar_t_get_prop_format(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_bar_t* obj = (progress_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->format));

  return 0;
}

int awtk_TProgressBar_progress_bar_t_get_prop_vertical(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_bar_t* obj = (progress_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->vertical));

  return 0;
}

int awtk_TProgressBar_progress_bar_t_get_prop_show_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_bar_t* obj = (progress_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->show_text));

  return 0;
}

int awtk_TProgressBar_progress_bar_t_get_prop_reverse(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  progress_bar_t* obj = (progress_bar_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->reverse));

  return 0;
}

int awtk_TRow_row_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)row_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TRow_row_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)row_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlider_slider_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)slider_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlider_slider_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)slider_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSlider_slider_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double value = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)slider_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlider_slider_set_min(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double min = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)slider_set_min(widget, min);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlider_slider_set_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double max = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)slider_set_max(widget, max);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlider_slider_set_step(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  double step = (double)jni_ctx_get_float(&actx);
  ret = (ret_t)slider_set_step(widget, step);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlider_slider_set_bar_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t bar_size = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slider_set_bar_size(widget, bar_size);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlider_slider_set_vertical(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t vertical = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)slider_set_vertical(widget, vertical);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->value));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_min(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->min));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_max(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->max));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_step(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_float(&actx, (float)(obj->step));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_vertical(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->vertical));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_bar_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->bar_size));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_dragger_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->dragger_size));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_dragger_adapt_to_icon(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->dragger_adapt_to_icon));

  return 0;
}

int awtk_TSlider_slider_t_get_prop_slide_with_bar(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  slider_t* obj = (slider_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->slide_with_bar));

  return 0;
}

int awtk_TTabButtonGroup_tab_button_group_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)tab_button_group_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTabButtonGroup_tab_button_group_set_compact(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t compact = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)tab_button_group_set_compact(widget, compact);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTabButtonGroup_tab_button_group_set_scrollable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t scrollable = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)tab_button_group_set_scrollable(widget, scrollable);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTabButtonGroup_tab_button_group_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)tab_button_group_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTabButtonGroup_tab_button_group_t_get_prop_compact(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  tab_button_group_t* obj = (tab_button_group_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->compact));

  return 0;
}

int awtk_TTabButtonGroup_tab_button_group_t_get_prop_scrollable(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  tab_button_group_t* obj = (tab_button_group_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->scrollable));

  return 0;
}

int awtk_TTabButton_tab_button_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)tab_button_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTabButton_tab_button_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)tab_button_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTabButton_tab_button_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t value = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)tab_button_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTabButton_tab_button_set_icon(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)tab_button_set_icon(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTabButton_tab_button_set_active_icon(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)tab_button_set_active_icon(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTabButton_tab_button_set_load_ui(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)tab_button_set_load_ui(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TTabButton_tab_button_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  tab_button_t* obj = (tab_button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TTabButton_tab_button_t_get_prop_load_ui(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  tab_button_t* obj = (tab_button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->load_ui));

  return 0;
}

int awtk_TTabButton_tab_button_t_get_prop_active_icon(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  tab_button_t* obj = (tab_button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->active_icon));

  return 0;
}

int awtk_TTabButton_tab_button_t_get_prop_icon(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  tab_button_t* obj = (tab_button_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->icon));

  return 0;
}

int awtk_TTabControl_tab_control_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)tab_control_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTabControl_tab_control_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)tab_control_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TView_view_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)view_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TView_view_set_default_focused_child(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* default_focused_child = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)view_set_default_focused_child(widget, default_focused_child);
  TKMEM_FREE(default_focused_child);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TView_view_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)view_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TView_view_t_get_prop_default_focused_child(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  view_t* obj = (view_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->default_focused_child));

  return 0;
}

int awtk_TDialog_dialog_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)dialog_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialog_dialog_create_simple(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)dialog_create_simple(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialog_dialog_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)dialog_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialog_dialog_get_title(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)dialog_get_title(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialog_dialog_get_client(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)dialog_get_client(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialog_dialog_open(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (widget_t*)dialog_open(name);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TDialog_dialog_set_title(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* title = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)dialog_set_title(widget, title);
  TKMEM_FREE(title);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_modal(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  dialog_quit_code_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (dialog_quit_code_t)dialog_modal(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_quit(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t code = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)dialog_quit(widget, code);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_is_quited(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)dialog_is_quited(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_is_modal(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  bool_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (bool_t)dialog_is_modal(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_toast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* text = (const char*)jni_ctx_get_str(&actx);
  uint32_t duration = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)dialog_toast(text, duration);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_info(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* title = (const char*)jni_ctx_get_str(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)dialog_info(title, text);
  TKMEM_FREE(title);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_warn(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* title = (const char*)jni_ctx_get_str(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)dialog_warn(title, text);
  TKMEM_FREE(title);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_confirm(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  const char* title = (const char*)jni_ctx_get_str(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)dialog_confirm(title, text);
  TKMEM_FREE(title);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TDialog_dialog_t_get_prop_highlight(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  dialog_t* obj = (dialog_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->highlight));

  return 0;
}

int awtk_TNativeWindow_native_window_move(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  bool_t force = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)native_window_move(win, x, y, force);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_resize(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  bool_t force = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)native_window_resize(win, w, h, force);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_minimize(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)native_window_minimize(win);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_maximize(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)native_window_maximize(win);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_restore(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)native_window_restore(win);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_center(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)native_window_center(win);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_show_border(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  bool_t show = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)native_window_show_border(win, show);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_set_fullscreen(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  bool_t fullscreen = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)native_window_set_fullscreen(win, fullscreen);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TNativeWindow_native_window_set_cursor(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  native_window_t* win = (native_window_t*)jni_ctx_get_object(&actx);
  const char* name = (const char*)jni_ctx_get_str(&actx);
  bitmap_t* img = (bitmap_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)native_window_set_cursor(win, name, img);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindow_window_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)window_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindow_window_create_default(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  ret = (widget_t*)window_create_default();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindow_window_set_fullscreen(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t fullscreen = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)window_set_fullscreen(widget, fullscreen);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindow_window_set_auto_scale_children(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t design_w = (uint32_t)jni_ctx_get_int(&actx);
  uint32_t design_h = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)window_set_auto_scale_children(widget, design_w, design_h);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindow_window_open(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  const char* name = (const char*)jni_ctx_get_str(&actx);
  ret = (widget_t*)window_open(name);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindow_window_open_and_close(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  const char* name = (const char*)jni_ctx_get_str(&actx);
  widget_t* to_close = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)window_open_and_close(name, to_close);
  TKMEM_FREE(name);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindow_window_close(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)window_close(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindow_window_close_force(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)window_close_force(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TWindow_window_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)window_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TWindow_window_t_get_prop_fullscreen(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  window_t* obj = (window_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->fullscreen));

  return 0;
}

int awtk_TGifImage_gif_image_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)gif_image_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TGifImage_gif_image_play(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)gif_image_play(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGifImage_gif_image_stop(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)gif_image_stop(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGifImage_gif_image_pause(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)gif_image_pause(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TGifImage_gif_image_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)gif_image_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TKeyboard_keyboard_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)keyboard_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TKeyboard_keyboard_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)keyboard_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSvgImage_svg_image_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)svg_image_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSvgImage_svg_image_set_image(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  char* name = (char*)jni_ctx_get_str(&actx);
  ret = (ret_t)svg_image_set_image(widget, name);
  TKMEM_FREE(name);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TSvgImage_svg_image_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)svg_image_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TIdleInfo_idle_info_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  idle_info_t* ret = NULL;
  idle_info_t* idle = (idle_info_t*)jni_ctx_get_object(&actx);
  ret = (idle_info_t*)idle_info_cast(idle);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TIdleInfo_idle_info_t_get_prop_ctx(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  idle_info_t* obj = (idle_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int64(&actx, (int64_t)(obj->ctx));

  return 0;
}

int awtk_TIdleInfo_idle_info_t_get_prop_extra_ctx(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  idle_info_t* obj = (idle_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int64(&actx, (int64_t)(obj->extra_ctx));

  return 0;
}

int awtk_TIdleInfo_idle_info_t_get_prop_id(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  idle_info_t* obj = (idle_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->id));

  return 0;
}

int awtk_TObjectArray_object_array_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* ret = NULL;
  ret = (object_t*)object_array_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_clear_props(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_array_clear_props(obj);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_insert(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  const value_t* v = (const value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_array_insert(obj, index, v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_push(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const value_t* v = (const value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_array_push(obj, v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_index_of(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const value_t* v = (const value_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)object_array_index_of(obj, v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_last_index_of(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  const value_t* v = (const value_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)object_array_last_index_of(obj, v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_remove(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)object_array_remove(obj, index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_get_and_remove(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  value_t* v = (value_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_array_get_and_remove(obj, index, v);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectArray_object_array_t_get_prop_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_array_t* obj = (object_array_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->size));

  return 0;
}

int awtk_TObjectDefault_object_default_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_t* ret = NULL;
  ret = (object_t*)object_default_create();
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TObjectDefault_object_default_clear_props(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  object_t* obj = (object_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)object_default_clear_props(obj);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TObjectDefault_object_default_t_get_prop_props_size(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  object_default_t* obj = (object_default_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->props_size));

  return 0;
}

int awtk_TTimerInfo_timer_info_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  timer_info_t* ret = NULL;
  timer_info_t* timer = (timer_info_t*)jni_ctx_get_object(&actx);
  ret = (timer_info_t*)timer_info_cast(timer);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TTimerInfo_timer_info_t_get_prop_ctx(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  timer_info_t* obj = (timer_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int64(&actx, (int64_t)(obj->ctx));

  return 0;
}

int awtk_TTimerInfo_timer_info_t_get_prop_extra_ctx(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  timer_info_t* obj = (timer_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int64(&actx, (int64_t)(obj->extra_ctx));

  return 0;
}

int awtk_TTimerInfo_timer_info_t_get_prop_id(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  timer_info_t* obj = (timer_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->id));

  return 0;
}

int awtk_TTimerInfo_timer_info_t_get_prop_now(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  timer_info_t* obj = (timer_info_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int64(&actx, (int64_t)(obj->now));

  return 0;
}

int awtk_TCalibrationWin_calibration_win_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)calibration_win_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)combo_box_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)combo_box_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_set_open_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* open_window = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)combo_box_set_open_window(widget, open_window);
  TKMEM_FREE(open_window);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_reset_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (ret_t)combo_box_reset_options(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_count_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)combo_box_count_options(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_set_selected_index(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t index = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)combo_box_set_selected_index(widget, index);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_set_localize_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t localize_options = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)combo_box_set_localize_options(widget, localize_options);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_set_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)combo_box_set_value(widget, value);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_set_item_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t item_height = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)combo_box_set_item_height(widget, item_height);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_append_option(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  int32_t value = (int32_t)jni_ctx_get_int(&actx);
  const char* text = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)combo_box_append_option(widget, value, text);
  TKMEM_FREE(text);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_set_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  const char* options = (const char*)jni_ctx_get_str(&actx);
  ret = (ret_t)combo_box_set_options(widget, options);
  TKMEM_FREE(options);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_get_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  int32_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (int32_t)combo_box_get_value(widget);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_get_text(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  const char* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (const char*)combo_box_get_text(widget);
  jni_ctx_return_str(&actx, (char*)(ret));

  return 0;
}

int awtk_TComboBox_combo_box_t_get_prop_open_window(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_t* obj = (combo_box_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->open_window));

  return 0;
}

int awtk_TComboBox_combo_box_t_get_prop_selected_index(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_t* obj = (combo_box_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->selected_index));

  return 0;
}

int awtk_TComboBox_combo_box_t_get_prop_value(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_t* obj = (combo_box_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->value));

  return 0;
}

int awtk_TComboBox_combo_box_t_get_prop_localize_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_t* obj = (combo_box_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->localize_options));

  return 0;
}

int awtk_TComboBox_combo_box_t_get_prop_options(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_t* obj = (combo_box_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_str(&actx, (char*)(obj->options));

  return 0;
}

int awtk_TComboBox_combo_box_t_get_prop_item_height(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  combo_box_t* obj = (combo_box_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->item_height));

  return 0;
}

int awtk_TImage_image_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)image_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImage_image_set_draw_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  image_draw_type_t draw_type = (image_draw_type_t)jni_ctx_get_int(&actx);
  ret = (ret_t)image_set_draw_type(widget, draw_type);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TImage_image_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)image_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TImage_image_t_get_prop_draw_type(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  image_t* obj = (image_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->draw_type));

  return 0;
}

int awtk_TOverlay_overlay_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)overlay_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TOverlay_overlay_set_click_through(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t click_through = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)overlay_set_click_through(widget, click_through);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TOverlay_overlay_set_always_on_top(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t always_on_top = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)overlay_set_always_on_top(widget, always_on_top);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TOverlay_overlay_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)overlay_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TOverlay_overlay_t_get_prop_click_through(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  overlay_t* obj = (overlay_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->click_through));

  return 0;
}

int awtk_TOverlay_overlay_t_get_prop_always_on_top(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  overlay_t* obj = (overlay_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->always_on_top));

  return 0;
}

int awtk_TPopup_popup_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)popup_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPopup_popup_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)popup_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TPopup_popup_set_close_when_click(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t close_when_click = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)popup_set_close_when_click(widget, close_when_click);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TPopup_popup_set_close_when_click_outside(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  bool_t close_when_click_outside = (bool_t)jni_ctx_get_int(&actx);
  ret = (ret_t)popup_set_close_when_click_outside(widget, close_when_click_outside);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TPopup_popup_set_close_when_timeout(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  ret_t ret = 0;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  uint32_t close_when_timeout = (uint32_t)jni_ctx_get_int(&actx);
  ret = (ret_t)popup_set_close_when_timeout(widget, close_when_timeout);
  jni_ctx_return_int(&actx, (int32_t)(ret));

  return 0;
}

int awtk_TPopup_popup_t_get_prop_close_when_click(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  popup_t* obj = (popup_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->close_when_click));

  return 0;
}

int awtk_TPopup_popup_t_get_prop_close_when_click_outside(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  popup_t* obj = (popup_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->close_when_click_outside));

  return 0;
}

int awtk_TPopup_popup_t_get_prop_close_when_timeout(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  popup_t* obj = (popup_t*)jni_ctx_get_object(&actx);
  jni_ctx_return_int(&actx, (int32_t)(obj->close_when_timeout));

  return 0;
}

int awtk_TSpinBox_spin_box_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)spin_box_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSpinBox_spin_box_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)spin_box_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSystemBar_system_bar_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)system_bar_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TSystemBar_system_bar_cast(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* widget = (widget_t*)jni_ctx_get_object(&actx);
  ret = (widget_t*)system_bar_cast(widget);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}

int awtk_TComboBoxEx_combo_box_ex_create(Runtime *runtime, JClass *clazz) {
  jni_ctx_t actx = jni_ctx_init(runtime, clazz);

  widget_t* ret = NULL;
  widget_t* parent = (widget_t*)jni_ctx_get_object(&actx);
  xy_t x = (xy_t)jni_ctx_get_int(&actx);
  xy_t y = (xy_t)jni_ctx_get_int(&actx);
  wh_t w = (wh_t)jni_ctx_get_int(&actx);
  wh_t h = (wh_t)jni_ctx_get_int(&actx);
  ret = (widget_t*)combo_box_ex_create(parent, x, y, w, h);
  jni_ctx_return_object(&actx, (void*)(ret));

  return 0;
}


static java_native_method s_metho_awtk_table[] = {
{"awtk/AWTK",  "init",  "(III)I",  awtk_AWTK_init},
{"awtk/AWTK",  "run",  "()I",  awtk_AWTK_run},

{"awtk/TEvent",  "event_cast",  "(J)J",  awtk_TEvent_event_cast},
{"awtk/TEvent",  "event_get_type",  "(J)I",  awtk_TEvent_event_get_type},
{"awtk/TEvent",  "event_create",  "(I)J",  awtk_TEvent_event_create},
{"awtk/TEvent",  "event_t_get_prop_type",  "(J)I",  awtk_TEvent_event_t_get_prop_type},
{"awtk/TEvent",  "event_t_get_prop_size",  "(J)I",  awtk_TEvent_event_t_get_prop_size},
{"awtk/TEvent",  "event_t_get_prop_time",  "(J)J",  awtk_TEvent_event_t_get_prop_time},
{"awtk/TEvent",  "event_t_get_prop_target",  "(J)J",  awtk_TEvent_event_t_get_prop_target},
{"awtk/TEmitter",  "emitter_create",  "()J",  awtk_TEmitter_emitter_create},
{"awtk/TEmitter",  "emitter_dispatch",  "(JJ)I",  awtk_TEmitter_emitter_dispatch},
{"awtk/TEmitter",  "emitter_dispatch_simple_event",  "(JI)I",  awtk_TEmitter_emitter_dispatch_simple_event},
{"awtk/TEmitter",  "emitter_on",  "(JILawtk/TOnEvent;J)I",  awtk_TEmitter_emitter_on},
{"awtk/TEmitter",  "emitter_off",  "(JI)I",  awtk_TEmitter_emitter_off},
{"awtk/TEmitter",  "emitter_enable",  "(J)I",  awtk_TEmitter_emitter_enable},
{"awtk/TEmitter",  "emitter_disable",  "(J)I",  awtk_TEmitter_emitter_disable},
{"awtk/TEmitter",  "emitter_cast",  "(J)J",  awtk_TEmitter_emitter_cast},
{"awtk/TRectf",  "rectf_t_get_prop_x",  "(J)F",  awtk_TRectf_rectf_t_get_prop_x},
{"awtk/TRectf",  "rectf_t_get_prop_y",  "(J)F",  awtk_TRectf_rectf_t_get_prop_y},
{"awtk/TRectf",  "rectf_t_get_prop_w",  "(J)F",  awtk_TRectf_rectf_t_get_prop_w},
{"awtk/TRectf",  "rectf_t_get_prop_h",  "(J)F",  awtk_TRectf_rectf_t_get_prop_h},
{"awtk/TRect",  "rect_create",  "(IIII)J",  awtk_TRect_rect_create},
{"awtk/TRect",  "rect_set",  "(JIIII)J",  awtk_TRect_rect_set},
{"awtk/TRect",  "rect_cast",  "(J)J",  awtk_TRect_rect_cast},
{"awtk/TRect",  "rect_t_get_prop_x",  "(J)I",  awtk_TRect_rect_t_get_prop_x},
{"awtk/TRect",  "rect_t_get_prop_y",  "(J)I",  awtk_TRect_rect_t_get_prop_y},
{"awtk/TRect",  "rect_t_get_prop_w",  "(J)I",  awtk_TRect_rect_t_get_prop_w},
{"awtk/TRect",  "rect_t_get_prop_h",  "(J)I",  awtk_TRect_rect_t_get_prop_h},
{"awtk/TBitmap",  "bitmap_create",  "()J",  awtk_TBitmap_bitmap_create},
{"awtk/TBitmap",  "bitmap_create_ex",  "(IIII)J",  awtk_TBitmap_bitmap_create_ex},
{"awtk/TBitmap",  "bitmap_get_bpp",  "(J)I",  awtk_TBitmap_bitmap_get_bpp},
{"awtk/TBitmap",  "bitmap_get_bpp_of_format",  "(I)I",  awtk_TBitmap_bitmap_get_bpp_of_format},
{"awtk/TBitmap",  "bitmap_t_get_prop_w",  "(J)I",  awtk_TBitmap_bitmap_t_get_prop_w},
{"awtk/TBitmap",  "bitmap_t_get_prop_h",  "(J)I",  awtk_TBitmap_bitmap_t_get_prop_h},
{"awtk/TBitmap",  "bitmap_t_get_prop_line_length",  "(J)I",  awtk_TBitmap_bitmap_t_get_prop_line_length},
{"awtk/TBitmap",  "bitmap_t_get_prop_flags",  "(J)I",  awtk_TBitmap_bitmap_t_get_prop_flags},
{"awtk/TBitmap",  "bitmap_t_get_prop_format",  "(J)I",  awtk_TBitmap_bitmap_t_get_prop_format},
{"awtk/TBitmap",  "bitmap_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TBitmap_bitmap_t_get_prop_name},
{"awtk/TObject",  "object_ref",  "(J)J",  awtk_TObject_object_ref},
{"awtk/TObject",  "object_get_type",  "(J)Ljava/lang/String;",  awtk_TObject_object_get_type},
{"awtk/TObject",  "object_get_desc",  "(J)Ljava/lang/String;",  awtk_TObject_object_get_desc},
{"awtk/TObject",  "object_get_size",  "(J)I",  awtk_TObject_object_get_size},
{"awtk/TObject",  "object_is_collection",  "(J)Z",  awtk_TObject_object_is_collection},
{"awtk/TObject",  "object_set_name",  "(JLjava/lang/String;)I",  awtk_TObject_object_set_name},
{"awtk/TObject",  "object_compare",  "(JJ)I",  awtk_TObject_object_compare},
{"awtk/TObject",  "object_get_prop",  "(JLjava/lang/String;J)I",  awtk_TObject_object_get_prop},
{"awtk/TObject",  "object_get_prop_str",  "(JLjava/lang/String;)Ljava/lang/String;",  awtk_TObject_object_get_prop_str},
{"awtk/TObject",  "object_get_prop_pointer",  "(JLjava/lang/String;)J",  awtk_TObject_object_get_prop_pointer},
{"awtk/TObject",  "object_get_prop_object",  "(JLjava/lang/String;)J",  awtk_TObject_object_get_prop_object},
{"awtk/TObject",  "object_get_prop_int",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_int},
{"awtk/TObject",  "object_get_prop_bool",  "(JLjava/lang/String;Z)Z",  awtk_TObject_object_get_prop_bool},
{"awtk/TObject",  "object_get_prop_float",  "(JLjava/lang/String;F)F",  awtk_TObject_object_get_prop_float},
{"awtk/TObject",  "object_get_prop_double",  "(JLjava/lang/String;F)F",  awtk_TObject_object_get_prop_double},
{"awtk/TObject",  "object_remove_prop",  "(JLjava/lang/String;)I",  awtk_TObject_object_remove_prop},
{"awtk/TObject",  "object_set_prop",  "(JLjava/lang/String;J)I",  awtk_TObject_object_set_prop},
{"awtk/TObject",  "object_set_prop_str",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TObject_object_set_prop_str},
{"awtk/TObject",  "object_set_prop_object",  "(JLjava/lang/String;J)I",  awtk_TObject_object_set_prop_object},
{"awtk/TObject",  "object_set_prop_int",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_int},
{"awtk/TObject",  "object_set_prop_bool",  "(JLjava/lang/String;Z)I",  awtk_TObject_object_set_prop_bool},
{"awtk/TObject",  "object_set_prop_float",  "(JLjava/lang/String;F)I",  awtk_TObject_object_set_prop_float},
{"awtk/TObject",  "object_set_prop_double",  "(JLjava/lang/String;F)I",  awtk_TObject_object_set_prop_double},
{"awtk/TObject",  "object_copy_prop",  "(JJLjava/lang/String;)I",  awtk_TObject_object_copy_prop},
{"awtk/TObject",  "object_has_prop",  "(JLjava/lang/String;)Z",  awtk_TObject_object_has_prop},
{"awtk/TObject",  "object_eval",  "(JLjava/lang/String;J)I",  awtk_TObject_object_eval},
{"awtk/TObject",  "object_can_exec",  "(JLjava/lang/String;Ljava/lang/String;)Z",  awtk_TObject_object_can_exec},
{"awtk/TObject",  "object_exec",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TObject_object_exec},
{"awtk/TObject",  "object_notify_changed",  "(J)I",  awtk_TObject_object_notify_changed},
{"awtk/TObject",  "object_has_prop_by_path",  "(JLjava/lang/String;)Z",  awtk_TObject_object_has_prop_by_path},
{"awtk/TObject",  "object_get_prop_str_by_path",  "(JLjava/lang/String;)Ljava/lang/String;",  awtk_TObject_object_get_prop_str_by_path},
{"awtk/TObject",  "object_get_prop_pointer_by_path",  "(JLjava/lang/String;)J",  awtk_TObject_object_get_prop_pointer_by_path},
{"awtk/TObject",  "object_get_prop_object_by_path",  "(JLjava/lang/String;)J",  awtk_TObject_object_get_prop_object_by_path},
{"awtk/TObject",  "object_get_prop_int_by_path",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_int_by_path},
{"awtk/TObject",  "object_get_prop_bool_by_path",  "(JLjava/lang/String;Z)Z",  awtk_TObject_object_get_prop_bool_by_path},
{"awtk/TObject",  "object_get_prop_float_by_path",  "(JLjava/lang/String;F)F",  awtk_TObject_object_get_prop_float_by_path},
{"awtk/TObject",  "object_set_prop_by_path",  "(JLjava/lang/String;J)I",  awtk_TObject_object_set_prop_by_path},
{"awtk/TObject",  "object_set_prop_str_by_path",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TObject_object_set_prop_str_by_path},
{"awtk/TObject",  "object_set_prop_object_by_path",  "(JLjava/lang/String;J)I",  awtk_TObject_object_set_prop_object_by_path},
{"awtk/TObject",  "object_set_prop_int_by_path",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_int_by_path},
{"awtk/TObject",  "object_set_prop_bool_by_path",  "(JLjava/lang/String;Z)I",  awtk_TObject_object_set_prop_bool_by_path},
{"awtk/TObject",  "object_set_prop_float_by_path",  "(JLjava/lang/String;F)I",  awtk_TObject_object_set_prop_float_by_path},
{"awtk/TObject",  "object_can_exec_by_path",  "(JLjava/lang/String;Ljava/lang/String;)Z",  awtk_TObject_object_can_exec_by_path},
{"awtk/TObject",  "object_exec_by_path",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TObject_object_exec_by_path},
{"awtk/TObject",  "object_get_prop_int8",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_int8},
{"awtk/TObject",  "object_set_prop_int8",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_int8},
{"awtk/TObject",  "object_get_prop_uint8",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_uint8},
{"awtk/TObject",  "object_set_prop_uint8",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_uint8},
{"awtk/TObject",  "object_get_prop_int16",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_int16},
{"awtk/TObject",  "object_set_prop_int16",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_int16},
{"awtk/TObject",  "object_get_prop_uint16",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_uint16},
{"awtk/TObject",  "object_set_prop_uint16",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_uint16},
{"awtk/TObject",  "object_get_prop_int32",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_int32},
{"awtk/TObject",  "object_set_prop_int32",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_int32},
{"awtk/TObject",  "object_get_prop_uint32",  "(JLjava/lang/String;I)I",  awtk_TObject_object_get_prop_uint32},
{"awtk/TObject",  "object_set_prop_uint32",  "(JLjava/lang/String;I)I",  awtk_TObject_object_set_prop_uint32},
{"awtk/TObject",  "object_get_prop_int64",  "(JLjava/lang/String;J)J",  awtk_TObject_object_get_prop_int64},
{"awtk/TObject",  "object_set_prop_int64",  "(JLjava/lang/String;J)I",  awtk_TObject_object_set_prop_int64},
{"awtk/TObject",  "object_get_prop_uint64",  "(JLjava/lang/String;J)J",  awtk_TObject_object_get_prop_uint64},
{"awtk/TObject",  "object_set_prop_uint64",  "(JLjava/lang/String;J)I",  awtk_TObject_object_set_prop_uint64},
{"awtk/TObject",  "object_t_get_prop_ref_count",  "(J)I",  awtk_TObject_object_t_get_prop_ref_count},
{"awtk/TObject",  "object_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TObject_object_t_get_prop_name},
{"awtk/TValue",  "value_set_bool",  "(JZ)J",  awtk_TValue_value_set_bool},
{"awtk/TValue",  "value_bool",  "(J)Z",  awtk_TValue_value_bool},
{"awtk/TValue",  "value_set_int8",  "(JI)J",  awtk_TValue_value_set_int8},
{"awtk/TValue",  "value_int8",  "(J)I",  awtk_TValue_value_int8},
{"awtk/TValue",  "value_set_uint8",  "(JI)J",  awtk_TValue_value_set_uint8},
{"awtk/TValue",  "value_uint8",  "(J)I",  awtk_TValue_value_uint8},
{"awtk/TValue",  "value_set_int16",  "(JI)J",  awtk_TValue_value_set_int16},
{"awtk/TValue",  "value_int16",  "(J)I",  awtk_TValue_value_int16},
{"awtk/TValue",  "value_set_uint16",  "(JI)J",  awtk_TValue_value_set_uint16},
{"awtk/TValue",  "value_uint16",  "(J)I",  awtk_TValue_value_uint16},
{"awtk/TValue",  "value_set_int32",  "(JI)J",  awtk_TValue_value_set_int32},
{"awtk/TValue",  "value_int32",  "(J)I",  awtk_TValue_value_int32},
{"awtk/TValue",  "value_set_uint32",  "(JI)J",  awtk_TValue_value_set_uint32},
{"awtk/TValue",  "value_set_int64",  "(JJ)J",  awtk_TValue_value_set_int64},
{"awtk/TValue",  "value_int64",  "(J)J",  awtk_TValue_value_int64},
{"awtk/TValue",  "value_set_uint64",  "(JJ)J",  awtk_TValue_value_set_uint64},
{"awtk/TValue",  "value_uint64",  "(J)J",  awtk_TValue_value_uint64},
{"awtk/TValue",  "value_set_float",  "(JF)J",  awtk_TValue_value_set_float},
{"awtk/TValue",  "value_float32",  "(J)F",  awtk_TValue_value_float32},
{"awtk/TValue",  "value_set_double",  "(JF)J",  awtk_TValue_value_set_double},
{"awtk/TValue",  "value_double",  "(J)F",  awtk_TValue_value_double},
{"awtk/TValue",  "value_dup_str",  "(JLjava/lang/String;)J",  awtk_TValue_value_dup_str},
{"awtk/TValue",  "value_str",  "(J)Ljava/lang/String;",  awtk_TValue_value_str},
{"awtk/TValue",  "value_str_ex",  "(JLjava/lang/String;I)Ljava/lang/String;",  awtk_TValue_value_str_ex},
{"awtk/TValue",  "value_is_null",  "(J)Z",  awtk_TValue_value_is_null},
{"awtk/TValue",  "value_set_int",  "(JI)J",  awtk_TValue_value_set_int},
{"awtk/TValue",  "value_set_object",  "(JJ)J",  awtk_TValue_value_set_object},
{"awtk/TValue",  "value_object",  "(J)J",  awtk_TValue_value_object},
{"awtk/TValue",  "value_set_token",  "(JI)J",  awtk_TValue_value_set_token},
{"awtk/TValue",  "value_token",  "(J)I",  awtk_TValue_value_token},
{"awtk/TValue",  "value_create",  "()J",  awtk_TValue_value_create},
{"awtk/TValue",  "value_reset",  "(J)I",  awtk_TValue_value_reset},
{"awtk/TValue",  "value_cast",  "(J)J",  awtk_TValue_value_cast},
{"awtk/TGlobal",  "tk_init",  "(IIILjava/lang/String;Ljava/lang/String;)I",  awtk_TGlobal_tk_init},
{"awtk/TGlobal",  "tk_run",  "()I",  awtk_TGlobal_tk_run},
{"awtk/TGlobal",  "tk_quit",  "()I",  awtk_TGlobal_tk_quit},
{"awtk/TGlobal",  "tk_get_pointer_x",  "()I",  awtk_TGlobal_tk_get_pointer_x},
{"awtk/TGlobal",  "tk_get_pointer_y",  "()I",  awtk_TGlobal_tk_get_pointer_y},
{"awtk/TGlobal",  "tk_is_pointer_pressed",  "()Z",  awtk_TGlobal_tk_is_pointer_pressed},
{"awtk/TBidiType",  "BIDI_TYPE_AUTO",  "()I",  awtk_TBidiType_BIDI_TYPE_AUTO},
{"awtk/TBidiType",  "BIDI_TYPE_LTR",  "()I",  awtk_TBidiType_BIDI_TYPE_LTR},
{"awtk/TBidiType",  "BIDI_TYPE_RTL",  "()I",  awtk_TBidiType_BIDI_TYPE_RTL},
{"awtk/TBidiType",  "BIDI_TYPE_LRO",  "()I",  awtk_TBidiType_BIDI_TYPE_LRO},
{"awtk/TBidiType",  "BIDI_TYPE_RLO",  "()I",  awtk_TBidiType_BIDI_TYPE_RLO},
{"awtk/TBidiType",  "BIDI_TYPE_WLTR",  "()I",  awtk_TBidiType_BIDI_TYPE_WLTR},
{"awtk/TBidiType",  "BIDI_TYPE_WRTL",  "()I",  awtk_TBidiType_BIDI_TYPE_WRTL},
{"awtk/TImageDrawType",  "IMAGE_DRAW_DEFAULT",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_DEFAULT},
{"awtk/TImageDrawType",  "IMAGE_DRAW_CENTER",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_CENTER},
{"awtk/TImageDrawType",  "IMAGE_DRAW_ICON",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_ICON},
{"awtk/TImageDrawType",  "IMAGE_DRAW_SCALE",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_SCALE},
{"awtk/TImageDrawType",  "IMAGE_DRAW_SCALE_AUTO",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_SCALE_AUTO},
{"awtk/TImageDrawType",  "IMAGE_DRAW_SCALE_DOWN",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_SCALE_DOWN},
{"awtk/TImageDrawType",  "IMAGE_DRAW_SCALE_W",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_SCALE_W},
{"awtk/TImageDrawType",  "IMAGE_DRAW_SCALE_H",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_SCALE_H},
{"awtk/TImageDrawType",  "IMAGE_DRAW_REPEAT",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_REPEAT},
{"awtk/TImageDrawType",  "IMAGE_DRAW_REPEAT_X",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_REPEAT_X},
{"awtk/TImageDrawType",  "IMAGE_DRAW_REPEAT_Y",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_REPEAT_Y},
{"awtk/TImageDrawType",  "IMAGE_DRAW_REPEAT_Y_INVERSE",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_REPEAT_Y_INVERSE},
{"awtk/TImageDrawType",  "IMAGE_DRAW_PATCH9",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_PATCH9},
{"awtk/TImageDrawType",  "IMAGE_DRAW_PATCH3_X",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_PATCH3_X},
{"awtk/TImageDrawType",  "IMAGE_DRAW_PATCH3_Y",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_PATCH3_Y},
{"awtk/TImageDrawType",  "IMAGE_DRAW_PATCH3_X_SCALE_Y",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_PATCH3_X_SCALE_Y},
{"awtk/TImageDrawType",  "IMAGE_DRAW_PATCH3_Y_SCALE_X",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_PATCH3_Y_SCALE_X},
{"awtk/TImageDrawType",  "IMAGE_DRAW_REPEAT9",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_REPEAT9},
{"awtk/TImageDrawType",  "IMAGE_DRAW_REPEAT3_X",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_REPEAT3_X},
{"awtk/TImageDrawType",  "IMAGE_DRAW_REPEAT3_Y",  "()I",  awtk_TImageDrawType_IMAGE_DRAW_REPEAT3_Y},
{"awtk/TCanvas",  "canvas_get_width",  "(J)I",  awtk_TCanvas_canvas_get_width},
{"awtk/TCanvas",  "canvas_get_height",  "(J)I",  awtk_TCanvas_canvas_get_height},
{"awtk/TCanvas",  "canvas_get_clip_rect",  "(JJ)I",  awtk_TCanvas_canvas_get_clip_rect},
{"awtk/TCanvas",  "canvas_set_clip_rect",  "(JJ)I",  awtk_TCanvas_canvas_set_clip_rect},
{"awtk/TCanvas",  "canvas_set_clip_rect_ex",  "(JJZ)I",  awtk_TCanvas_canvas_set_clip_rect_ex},
{"awtk/TCanvas",  "canvas_set_fill_color_str",  "(JLjava/lang/String;)I",  awtk_TCanvas_canvas_set_fill_color_str},
{"awtk/TCanvas",  "canvas_set_text_color_str",  "(JLjava/lang/String;)I",  awtk_TCanvas_canvas_set_text_color_str},
{"awtk/TCanvas",  "canvas_set_stroke_color_str",  "(JLjava/lang/String;)I",  awtk_TCanvas_canvas_set_stroke_color_str},
{"awtk/TCanvas",  "canvas_set_global_alpha",  "(JI)I",  awtk_TCanvas_canvas_set_global_alpha},
{"awtk/TCanvas",  "canvas_translate",  "(JII)I",  awtk_TCanvas_canvas_translate},
{"awtk/TCanvas",  "canvas_untranslate",  "(JII)I",  awtk_TCanvas_canvas_untranslate},
{"awtk/TCanvas",  "canvas_draw_vline",  "(JIII)I",  awtk_TCanvas_canvas_draw_vline},
{"awtk/TCanvas",  "canvas_draw_hline",  "(JIII)I",  awtk_TCanvas_canvas_draw_hline},
{"awtk/TCanvas",  "canvas_fill_rect",  "(JIIII)I",  awtk_TCanvas_canvas_fill_rect},
{"awtk/TCanvas",  "canvas_clear_rect",  "(JIIII)I",  awtk_TCanvas_canvas_clear_rect},
{"awtk/TCanvas",  "canvas_stroke_rect",  "(JIIII)I",  awtk_TCanvas_canvas_stroke_rect},
{"awtk/TCanvas",  "canvas_set_font",  "(JLjava/lang/String;I)I",  awtk_TCanvas_canvas_set_font},
{"awtk/TCanvas",  "canvas_measure_utf8",  "(JLjava/lang/String;)F",  awtk_TCanvas_canvas_measure_utf8},
{"awtk/TCanvas",  "canvas_draw_utf8",  "(JLjava/lang/String;II)I",  awtk_TCanvas_canvas_draw_utf8},
{"awtk/TCanvas",  "canvas_draw_utf8_in_rect",  "(JLjava/lang/String;J)I",  awtk_TCanvas_canvas_draw_utf8_in_rect},
{"awtk/TCanvas",  "canvas_draw_icon",  "(JJII)I",  awtk_TCanvas_canvas_draw_icon},
{"awtk/TCanvas",  "canvas_draw_image",  "(JJJJ)I",  awtk_TCanvas_canvas_draw_image},
{"awtk/TCanvas",  "canvas_draw_image_ex",  "(JJIJ)I",  awtk_TCanvas_canvas_draw_image_ex},
{"awtk/TCanvas",  "canvas_draw_image_ex2",  "(JJIJJ)I",  awtk_TCanvas_canvas_draw_image_ex2},
{"awtk/TCanvas",  "canvas_get_vgcanvas",  "(J)J",  awtk_TCanvas_canvas_get_vgcanvas},
{"awtk/TCanvas",  "canvas_cast",  "(J)J",  awtk_TCanvas_canvas_cast},
{"awtk/TCanvas",  "canvas_reset",  "(J)I",  awtk_TCanvas_canvas_reset},
{"awtk/TCanvas",  "canvas_t_get_prop_ox",  "(J)I",  awtk_TCanvas_canvas_t_get_prop_ox},
{"awtk/TCanvas",  "canvas_t_get_prop_oy",  "(J)I",  awtk_TCanvas_canvas_t_get_prop_oy},
{"awtk/TCanvas",  "canvas_t_get_prop_font_name",  "(J)Ljava/lang/String;",  awtk_TCanvas_canvas_t_get_prop_font_name},
{"awtk/TCanvas",  "canvas_t_get_prop_font_size",  "(J)I",  awtk_TCanvas_canvas_t_get_prop_font_size},
{"awtk/TCanvas",  "canvas_t_get_prop_global_alpha",  "(J)I",  awtk_TCanvas_canvas_t_get_prop_global_alpha},
{"awtk/TClipBoardDataType",  "CLIP_BOARD_DATA_TYPE_NONE",  "()I",  awtk_TClipBoardDataType_CLIP_BOARD_DATA_TYPE_NONE},
{"awtk/TClipBoardDataType",  "CLIP_BOARD_DATA_TYPE_TEXT",  "()I",  awtk_TClipBoardDataType_CLIP_BOARD_DATA_TYPE_TEXT},
{"awtk/TClipBoard",  "clip_board_set_text",  "(Ljava/lang/String;)I",  awtk_TClipBoard_clip_board_set_text},
{"awtk/TClipBoard",  "clip_board_get_text",  "()Ljava/lang/String;",  awtk_TClipBoard_clip_board_get_text},
{"awtk/TDialogQuitCode",  "DIALOG_QUIT_NONE",  "()I",  awtk_TDialogQuitCode_DIALOG_QUIT_NONE},
{"awtk/TDialogQuitCode",  "DIALOG_QUIT_OK",  "()I",  awtk_TDialogQuitCode_DIALOG_QUIT_OK},
{"awtk/TDialogQuitCode",  "DIALOG_QUIT_YES",  "()I",  awtk_TDialogQuitCode_DIALOG_QUIT_YES},
{"awtk/TDialogQuitCode",  "DIALOG_QUIT_CANCEL",  "()I",  awtk_TDialogQuitCode_DIALOG_QUIT_CANCEL},
{"awtk/TDialogQuitCode",  "DIALOG_QUIT_NO",  "()I",  awtk_TDialogQuitCode_DIALOG_QUIT_NO},
{"awtk/TDialogQuitCode",  "DIALOG_QUIT_OTHER",  "()I",  awtk_TDialogQuitCode_DIALOG_QUIT_OTHER},
{"awtk/TEventType",  "EVT_POINTER_DOWN",  "()I",  awtk_TEventType_EVT_POINTER_DOWN},
{"awtk/TEventType",  "EVT_POINTER_DOWN_BEFORE_CHILDREN",  "()I",  awtk_TEventType_EVT_POINTER_DOWN_BEFORE_CHILDREN},
{"awtk/TEventType",  "EVT_POINTER_MOVE",  "()I",  awtk_TEventType_EVT_POINTER_MOVE},
{"awtk/TEventType",  "EVT_POINTER_MOVE_BEFORE_CHILDREN",  "()I",  awtk_TEventType_EVT_POINTER_MOVE_BEFORE_CHILDREN},
{"awtk/TEventType",  "EVT_POINTER_UP",  "()I",  awtk_TEventType_EVT_POINTER_UP},
{"awtk/TEventType",  "EVT_POINTER_UP_BEFORE_CHILDREN",  "()I",  awtk_TEventType_EVT_POINTER_UP_BEFORE_CHILDREN},
{"awtk/TEventType",  "EVT_WHEEL",  "()I",  awtk_TEventType_EVT_WHEEL},
{"awtk/TEventType",  "EVT_WHEEL_BEFORE_CHILDREN",  "()I",  awtk_TEventType_EVT_WHEEL_BEFORE_CHILDREN},
{"awtk/TEventType",  "EVT_POINTER_DOWN_ABORT",  "()I",  awtk_TEventType_EVT_POINTER_DOWN_ABORT},
{"awtk/TEventType",  "EVT_CONTEXT_MENU",  "()I",  awtk_TEventType_EVT_CONTEXT_MENU},
{"awtk/TEventType",  "EVT_POINTER_ENTER",  "()I",  awtk_TEventType_EVT_POINTER_ENTER},
{"awtk/TEventType",  "EVT_POINTER_LEAVE",  "()I",  awtk_TEventType_EVT_POINTER_LEAVE},
{"awtk/TEventType",  "EVT_LONG_PRESS",  "()I",  awtk_TEventType_EVT_LONG_PRESS},
{"awtk/TEventType",  "EVT_CLICK",  "()I",  awtk_TEventType_EVT_CLICK},
{"awtk/TEventType",  "EVT_FOCUS",  "()I",  awtk_TEventType_EVT_FOCUS},
{"awtk/TEventType",  "EVT_BLUR",  "()I",  awtk_TEventType_EVT_BLUR},
{"awtk/TEventType",  "EVT_KEY_DOWN",  "()I",  awtk_TEventType_EVT_KEY_DOWN},
{"awtk/TEventType",  "EVT_KEY_LONG_PRESS",  "()I",  awtk_TEventType_EVT_KEY_LONG_PRESS},
{"awtk/TEventType",  "EVT_KEY_DOWN_BEFORE_CHILDREN",  "()I",  awtk_TEventType_EVT_KEY_DOWN_BEFORE_CHILDREN},
{"awtk/TEventType",  "EVT_KEY_REPEAT",  "()I",  awtk_TEventType_EVT_KEY_REPEAT},
{"awtk/TEventType",  "EVT_KEY_UP",  "()I",  awtk_TEventType_EVT_KEY_UP},
{"awtk/TEventType",  "EVT_KEY_UP_BEFORE_CHILDREN",  "()I",  awtk_TEventType_EVT_KEY_UP_BEFORE_CHILDREN},
{"awtk/TEventType",  "EVT_WILL_MOVE",  "()I",  awtk_TEventType_EVT_WILL_MOVE},
{"awtk/TEventType",  "EVT_MOVE",  "()I",  awtk_TEventType_EVT_MOVE},
{"awtk/TEventType",  "EVT_WILL_RESIZE",  "()I",  awtk_TEventType_EVT_WILL_RESIZE},
{"awtk/TEventType",  "EVT_RESIZE",  "()I",  awtk_TEventType_EVT_RESIZE},
{"awtk/TEventType",  "EVT_WILL_MOVE_RESIZE",  "()I",  awtk_TEventType_EVT_WILL_MOVE_RESIZE},
{"awtk/TEventType",  "EVT_MOVE_RESIZE",  "()I",  awtk_TEventType_EVT_MOVE_RESIZE},
{"awtk/TEventType",  "EVT_VALUE_WILL_CHANGE",  "()I",  awtk_TEventType_EVT_VALUE_WILL_CHANGE},
{"awtk/TEventType",  "EVT_VALUE_CHANGED",  "()I",  awtk_TEventType_EVT_VALUE_CHANGED},
{"awtk/TEventType",  "EVT_VALUE_CHANGING",  "()I",  awtk_TEventType_EVT_VALUE_CHANGING},
{"awtk/TEventType",  "EVT_PAINT",  "()I",  awtk_TEventType_EVT_PAINT},
{"awtk/TEventType",  "EVT_BEFORE_PAINT",  "()I",  awtk_TEventType_EVT_BEFORE_PAINT},
{"awtk/TEventType",  "EVT_AFTER_PAINT",  "()I",  awtk_TEventType_EVT_AFTER_PAINT},
{"awtk/TEventType",  "EVT_PAINT_DONE",  "()I",  awtk_TEventType_EVT_PAINT_DONE},
{"awtk/TEventType",  "EVT_LOCALE_CHANGED",  "()I",  awtk_TEventType_EVT_LOCALE_CHANGED},
{"awtk/TEventType",  "EVT_ANIM_START",  "()I",  awtk_TEventType_EVT_ANIM_START},
{"awtk/TEventType",  "EVT_ANIM_STOP",  "()I",  awtk_TEventType_EVT_ANIM_STOP},
{"awtk/TEventType",  "EVT_ANIM_PAUSE",  "()I",  awtk_TEventType_EVT_ANIM_PAUSE},
{"awtk/TEventType",  "EVT_ANIM_ONCE",  "()I",  awtk_TEventType_EVT_ANIM_ONCE},
{"awtk/TEventType",  "EVT_ANIM_END",  "()I",  awtk_TEventType_EVT_ANIM_END},
{"awtk/TEventType",  "EVT_WINDOW_LOAD",  "()I",  awtk_TEventType_EVT_WINDOW_LOAD},
{"awtk/TEventType",  "EVT_WIDGET_LOAD",  "()I",  awtk_TEventType_EVT_WIDGET_LOAD},
{"awtk/TEventType",  "EVT_WINDOW_WILL_OPEN",  "()I",  awtk_TEventType_EVT_WINDOW_WILL_OPEN},
{"awtk/TEventType",  "EVT_WINDOW_OPEN",  "()I",  awtk_TEventType_EVT_WINDOW_OPEN},
{"awtk/TEventType",  "EVT_WINDOW_TO_BACKGROUND",  "()I",  awtk_TEventType_EVT_WINDOW_TO_BACKGROUND},
{"awtk/TEventType",  "EVT_WINDOW_TO_FOREGROUND",  "()I",  awtk_TEventType_EVT_WINDOW_TO_FOREGROUND},
{"awtk/TEventType",  "EVT_WINDOW_CLOSE",  "()I",  awtk_TEventType_EVT_WINDOW_CLOSE},
{"awtk/TEventType",  "EVT_REQUEST_CLOSE_WINDOW",  "()I",  awtk_TEventType_EVT_REQUEST_CLOSE_WINDOW},
{"awtk/TEventType",  "EVT_TOP_WINDOW_CHANGED",  "()I",  awtk_TEventType_EVT_TOP_WINDOW_CHANGED},
{"awtk/TEventType",  "EVT_IM_START",  "()I",  awtk_TEventType_EVT_IM_START},
{"awtk/TEventType",  "EVT_IM_STOP",  "()I",  awtk_TEventType_EVT_IM_STOP},
{"awtk/TEventType",  "EVT_IM_COMMIT",  "()I",  awtk_TEventType_EVT_IM_COMMIT},
{"awtk/TEventType",  "EVT_IM_CLEAR",  "()I",  awtk_TEventType_EVT_IM_CLEAR},
{"awtk/TEventType",  "EVT_IM_CANCEL",  "()I",  awtk_TEventType_EVT_IM_CANCEL},
{"awtk/TEventType",  "EVT_IM_PREEDIT",  "()I",  awtk_TEventType_EVT_IM_PREEDIT},
{"awtk/TEventType",  "EVT_IM_PREEDIT_CONFIRM",  "()I",  awtk_TEventType_EVT_IM_PREEDIT_CONFIRM},
{"awtk/TEventType",  "EVT_IM_PREEDIT_ABORT",  "()I",  awtk_TEventType_EVT_IM_PREEDIT_ABORT},
{"awtk/TEventType",  "EVT_IM_SHOW_CANDIDATES",  "()I",  awtk_TEventType_EVT_IM_SHOW_CANDIDATES},
{"awtk/TEventType",  "EVT_IM_SHOW_PRE_CANDIDATES",  "()I",  awtk_TEventType_EVT_IM_SHOW_PRE_CANDIDATES},
{"awtk/TEventType",  "EVT_IM_LANG_CHANGED",  "()I",  awtk_TEventType_EVT_IM_LANG_CHANGED},
{"awtk/TEventType",  "EVT_IM_ACTION",  "()I",  awtk_TEventType_EVT_IM_ACTION},
{"awtk/TEventType",  "EVT_IM_ACTION_INFO",  "()I",  awtk_TEventType_EVT_IM_ACTION_INFO},
{"awtk/TEventType",  "EVT_DRAG_START",  "()I",  awtk_TEventType_EVT_DRAG_START},
{"awtk/TEventType",  "EVT_DRAG",  "()I",  awtk_TEventType_EVT_DRAG},
{"awtk/TEventType",  "EVT_DRAG_END",  "()I",  awtk_TEventType_EVT_DRAG_END},
{"awtk/TEventType",  "EVT_RESET",  "()I",  awtk_TEventType_EVT_RESET},
{"awtk/TEventType",  "EVT_SCREEN_SAVER",  "()I",  awtk_TEventType_EVT_SCREEN_SAVER},
{"awtk/TEventType",  "EVT_LOW_MEMORY",  "()I",  awtk_TEventType_EVT_LOW_MEMORY},
{"awtk/TEventType",  "EVT_OUT_OF_MEMORY",  "()I",  awtk_TEventType_EVT_OUT_OF_MEMORY},
{"awtk/TEventType",  "EVT_ORIENTATION_WILL_CHANGED",  "()I",  awtk_TEventType_EVT_ORIENTATION_WILL_CHANGED},
{"awtk/TEventType",  "EVT_ORIENTATION_CHANGED",  "()I",  awtk_TEventType_EVT_ORIENTATION_CHANGED},
{"awtk/TEventType",  "EVT_WIDGET_CREATED",  "()I",  awtk_TEventType_EVT_WIDGET_CREATED},
{"awtk/TEventType",  "EVT_REQUEST_QUIT_APP",  "()I",  awtk_TEventType_EVT_REQUEST_QUIT_APP},
{"awtk/TEventType",  "EVT_THEME_CHANGED",  "()I",  awtk_TEventType_EVT_THEME_CHANGED},
{"awtk/TEventType",  "EVT_WIDGET_ADD_CHILD",  "()I",  awtk_TEventType_EVT_WIDGET_ADD_CHILD},
{"awtk/TEventType",  "EVT_WIDGET_REMOVE_CHILD",  "()I",  awtk_TEventType_EVT_WIDGET_REMOVE_CHILD},
{"awtk/TEventType",  "EVT_SCROLL_START",  "()I",  awtk_TEventType_EVT_SCROLL_START},
{"awtk/TEventType",  "EVT_SCROLL",  "()I",  awtk_TEventType_EVT_SCROLL},
{"awtk/TEventType",  "EVT_SCROLL_END",  "()I",  awtk_TEventType_EVT_SCROLL_END},
{"awtk/TEventType",  "EVT_MULTI_GESTURE",  "()I",  awtk_TEventType_EVT_MULTI_GESTURE},
{"awtk/TEventType",  "EVT_PAGE_CHANGED",  "()I",  awtk_TEventType_EVT_PAGE_CHANGED},
{"awtk/TEventType",  "EVT_ASSET_MANAGER_LOAD_ASSET",  "()I",  awtk_TEventType_EVT_ASSET_MANAGER_LOAD_ASSET},
{"awtk/TEventType",  "EVT_ASSET_MANAGER_UNLOAD_ASSET",  "()I",  awtk_TEventType_EVT_ASSET_MANAGER_UNLOAD_ASSET},
{"awtk/TEventType",  "EVT_ASSET_MANAGER_CLEAR_CACHE",  "()I",  awtk_TEventType_EVT_ASSET_MANAGER_CLEAR_CACHE},
{"awtk/TEventType",  "EVT_TIMER",  "()I",  awtk_TEventType_EVT_TIMER},
{"awtk/TEventType",  "EVT_REQ_START",  "()I",  awtk_TEventType_EVT_REQ_START},
{"awtk/TEventType",  "EVT_USER_START",  "()I",  awtk_TEventType_EVT_USER_START},
{"awtk/TEventType",  "EVT_NONE",  "()I",  awtk_TEventType_EVT_NONE},
{"awtk/TEventType",  "EVT_PROP_WILL_CHANGE",  "()I",  awtk_TEventType_EVT_PROP_WILL_CHANGE},
{"awtk/TEventType",  "EVT_PROP_CHANGED",  "()I",  awtk_TEventType_EVT_PROP_CHANGED},
{"awtk/TEventType",  "EVT_CMD_WILL_EXEC",  "()I",  awtk_TEventType_EVT_CMD_WILL_EXEC},
{"awtk/TEventType",  "EVT_CMD_EXECED",  "()I",  awtk_TEventType_EVT_CMD_EXECED},
{"awtk/TEventType",  "EVT_CMD_CAN_EXEC",  "()I",  awtk_TEventType_EVT_CMD_CAN_EXEC},
{"awtk/TEventType",  "EVT_ITEMS_WILL_CHANGE",  "()I",  awtk_TEventType_EVT_ITEMS_WILL_CHANGE},
{"awtk/TEventType",  "EVT_ITEMS_CHANGED",  "()I",  awtk_TEventType_EVT_ITEMS_CHANGED},
{"awtk/TEventType",  "EVT_PROPS_CHANGED",  "()I",  awtk_TEventType_EVT_PROPS_CHANGED},
{"awtk/TEventType",  "EVT_PROGRESS",  "()I",  awtk_TEventType_EVT_PROGRESS},
{"awtk/TEventType",  "EVT_DONE",  "()I",  awtk_TEventType_EVT_DONE},
{"awtk/TEventType",  "EVT_ERROR",  "()I",  awtk_TEventType_EVT_ERROR},
{"awtk/TEventType",  "EVT_DESTROY",  "()I",  awtk_TEventType_EVT_DESTROY},
{"awtk/TFontManager",  "font_manager_unload_font",  "(JLjava/lang/String;I)I",  awtk_TFontManager_font_manager_unload_font},
{"awtk/TFontManager",  "font_manager_shrink_cache",  "(JI)I",  awtk_TFontManager_font_manager_shrink_cache},
{"awtk/TFontManager",  "font_manager_unload_all",  "(J)I",  awtk_TFontManager_font_manager_unload_all},
{"awtk/TGlyphFormat",  "GLYPH_FMT_ALPHA",  "()I",  awtk_TGlyphFormat_GLYPH_FMT_ALPHA},
{"awtk/TGlyphFormat",  "GLYPH_FMT_MONO",  "()I",  awtk_TGlyphFormat_GLYPH_FMT_MONO},
{"awtk/TGlyphFormat",  "GLYPH_FMT_RGBA",  "()I",  awtk_TGlyphFormat_GLYPH_FMT_RGBA},
{"awtk/TIdle",  "idle_add",  "(Lawtk/TOnIdle;J)I",  awtk_TIdle_idle_add},
{"awtk/TIdle",  "idle_remove",  "(I)I",  awtk_TIdle_idle_remove},
{"awtk/TIdle",  "idle_remove_all_by_ctx",  "(J)I",  awtk_TIdle_idle_remove_all_by_ctx},
{"awtk/TImageManager",  "image_manager",  "()J",  awtk_TImageManager_image_manager},
{"awtk/TImageManager",  "image_manager_get_bitmap",  "(JLjava/lang/String;J)I",  awtk_TImageManager_image_manager_get_bitmap},
{"awtk/TImageManager",  "image_manager_preload",  "(JLjava/lang/String;)I",  awtk_TImageManager_image_manager_preload},
{"awtk/TInputType",  "INPUT_TEXT",  "()I",  awtk_TInputType_INPUT_TEXT},
{"awtk/TInputType",  "INPUT_INT",  "()I",  awtk_TInputType_INPUT_INT},
{"awtk/TInputType",  "INPUT_UINT",  "()I",  awtk_TInputType_INPUT_UINT},
{"awtk/TInputType",  "INPUT_HEX",  "()I",  awtk_TInputType_INPUT_HEX},
{"awtk/TInputType",  "INPUT_FLOAT",  "()I",  awtk_TInputType_INPUT_FLOAT},
{"awtk/TInputType",  "INPUT_UFLOAT",  "()I",  awtk_TInputType_INPUT_UFLOAT},
{"awtk/TInputType",  "INPUT_EMAIL",  "()I",  awtk_TInputType_INPUT_EMAIL},
{"awtk/TInputType",  "INPUT_PASSWORD",  "()I",  awtk_TInputType_INPUT_PASSWORD},
{"awtk/TInputType",  "INPUT_PHONE",  "()I",  awtk_TInputType_INPUT_PHONE},
{"awtk/TInputType",  "INPUT_IPV4",  "()I",  awtk_TInputType_INPUT_IPV4},
{"awtk/TInputType",  "INPUT_DATE",  "()I",  awtk_TInputType_INPUT_DATE},
{"awtk/TInputType",  "INPUT_TIME",  "()I",  awtk_TInputType_INPUT_TIME},
{"awtk/TInputType",  "INPUT_TIME_FULL",  "()I",  awtk_TInputType_INPUT_TIME_FULL},
{"awtk/TInputType",  "INPUT_CUSTOM",  "()I",  awtk_TInputType_INPUT_CUSTOM},
{"awtk/TInputType",  "INPUT_CUSTOM_PASSWORD",  "()I",  awtk_TInputType_INPUT_CUSTOM_PASSWORD},
{"awtk/TInputType",  "INPUT_ASCII",  "()I",  awtk_TInputType_INPUT_ASCII},
{"awtk/TInputMethod",  "input_method_commit_text",  "(JLjava/lang/String;)I",  awtk_TInputMethod_input_method_commit_text},
{"awtk/TInputMethod",  "input_method_set_lang",  "(JLjava/lang/String;)I",  awtk_TInputMethod_input_method_set_lang},
{"awtk/TInputMethod",  "input_method_get_lang",  "(J)Ljava/lang/String;",  awtk_TInputMethod_input_method_get_lang},
{"awtk/TInputMethod",  "input_method_dispatch_key",  "(JI)I",  awtk_TInputMethod_input_method_dispatch_key},
{"awtk/TInputMethod",  "input_method_dispatch_keys",  "(JLjava/lang/String;)I",  awtk_TInputMethod_input_method_dispatch_keys},
{"awtk/TInputMethod",  "input_method_dispatch_preedit",  "(J)I",  awtk_TInputMethod_input_method_dispatch_preedit},
{"awtk/TInputMethod",  "input_method_dispatch_preedit_confirm",  "(J)I",  awtk_TInputMethod_input_method_dispatch_preedit_confirm},
{"awtk/TInputMethod",  "input_method_dispatch_preedit_abort",  "(J)I",  awtk_TInputMethod_input_method_dispatch_preedit_abort},
{"awtk/TInputMethod",  "input_method",  "()J",  awtk_TInputMethod_input_method},
{"awtk/TKeyCode",  "TK_KEY_RETURN",  "()I",  awtk_TKeyCode_TK_KEY_RETURN},
{"awtk/TKeyCode",  "TK_KEY_ESCAPE",  "()I",  awtk_TKeyCode_TK_KEY_ESCAPE},
{"awtk/TKeyCode",  "TK_KEY_BACKSPACE",  "()I",  awtk_TKeyCode_TK_KEY_BACKSPACE},
{"awtk/TKeyCode",  "TK_KEY_TAB",  "()I",  awtk_TKeyCode_TK_KEY_TAB},
{"awtk/TKeyCode",  "TK_KEY_SPACE",  "()I",  awtk_TKeyCode_TK_KEY_SPACE},
{"awtk/TKeyCode",  "TK_KEY_EXCLAIM",  "()I",  awtk_TKeyCode_TK_KEY_EXCLAIM},
{"awtk/TKeyCode",  "TK_KEY_QUOTEDBL",  "()I",  awtk_TKeyCode_TK_KEY_QUOTEDBL},
{"awtk/TKeyCode",  "TK_KEY_HASH",  "()I",  awtk_TKeyCode_TK_KEY_HASH},
{"awtk/TKeyCode",  "TK_KEY_PERCENT",  "()I",  awtk_TKeyCode_TK_KEY_PERCENT},
{"awtk/TKeyCode",  "TK_KEY_DOLLAR",  "()I",  awtk_TKeyCode_TK_KEY_DOLLAR},
{"awtk/TKeyCode",  "TK_KEY_AMPERSAND",  "()I",  awtk_TKeyCode_TK_KEY_AMPERSAND},
{"awtk/TKeyCode",  "TK_KEY_QUOTE",  "()I",  awtk_TKeyCode_TK_KEY_QUOTE},
{"awtk/TKeyCode",  "TK_KEY_LEFTPAREN",  "()I",  awtk_TKeyCode_TK_KEY_LEFTPAREN},
{"awtk/TKeyCode",  "TK_KEY_RIGHTPAREN",  "()I",  awtk_TKeyCode_TK_KEY_RIGHTPAREN},
{"awtk/TKeyCode",  "TK_KEY_ASTERISK",  "()I",  awtk_TKeyCode_TK_KEY_ASTERISK},
{"awtk/TKeyCode",  "TK_KEY_PLUS",  "()I",  awtk_TKeyCode_TK_KEY_PLUS},
{"awtk/TKeyCode",  "TK_KEY_COMMA",  "()I",  awtk_TKeyCode_TK_KEY_COMMA},
{"awtk/TKeyCode",  "TK_KEY_MINUS",  "()I",  awtk_TKeyCode_TK_KEY_MINUS},
{"awtk/TKeyCode",  "TK_KEY_PERIOD",  "()I",  awtk_TKeyCode_TK_KEY_PERIOD},
{"awtk/TKeyCode",  "TK_KEY_SLASH",  "()I",  awtk_TKeyCode_TK_KEY_SLASH},
{"awtk/TKeyCode",  "TK_KEY_0",  "()I",  awtk_TKeyCode_TK_KEY_0},
{"awtk/TKeyCode",  "TK_KEY_1",  "()I",  awtk_TKeyCode_TK_KEY_1},
{"awtk/TKeyCode",  "TK_KEY_2",  "()I",  awtk_TKeyCode_TK_KEY_2},
{"awtk/TKeyCode",  "TK_KEY_3",  "()I",  awtk_TKeyCode_TK_KEY_3},
{"awtk/TKeyCode",  "TK_KEY_4",  "()I",  awtk_TKeyCode_TK_KEY_4},
{"awtk/TKeyCode",  "TK_KEY_5",  "()I",  awtk_TKeyCode_TK_KEY_5},
{"awtk/TKeyCode",  "TK_KEY_6",  "()I",  awtk_TKeyCode_TK_KEY_6},
{"awtk/TKeyCode",  "TK_KEY_7",  "()I",  awtk_TKeyCode_TK_KEY_7},
{"awtk/TKeyCode",  "TK_KEY_8",  "()I",  awtk_TKeyCode_TK_KEY_8},
{"awtk/TKeyCode",  "TK_KEY_9",  "()I",  awtk_TKeyCode_TK_KEY_9},
{"awtk/TKeyCode",  "TK_KEY_COLON",  "()I",  awtk_TKeyCode_TK_KEY_COLON},
{"awtk/TKeyCode",  "TK_KEY_SEMICOLON",  "()I",  awtk_TKeyCode_TK_KEY_SEMICOLON},
{"awtk/TKeyCode",  "TK_KEY_LESS",  "()I",  awtk_TKeyCode_TK_KEY_LESS},
{"awtk/TKeyCode",  "TK_KEY_EQUAL",  "()I",  awtk_TKeyCode_TK_KEY_EQUAL},
{"awtk/TKeyCode",  "TK_KEY_GREATER",  "()I",  awtk_TKeyCode_TK_KEY_GREATER},
{"awtk/TKeyCode",  "TK_KEY_QUESTION",  "()I",  awtk_TKeyCode_TK_KEY_QUESTION},
{"awtk/TKeyCode",  "TK_KEY_AT",  "()I",  awtk_TKeyCode_TK_KEY_AT},
{"awtk/TKeyCode",  "TK_KEY_LEFTBRACKET",  "()I",  awtk_TKeyCode_TK_KEY_LEFTBRACKET},
{"awtk/TKeyCode",  "TK_KEY_BACKSLASH",  "()I",  awtk_TKeyCode_TK_KEY_BACKSLASH},
{"awtk/TKeyCode",  "TK_KEY_RIGHTBRACKET",  "()I",  awtk_TKeyCode_TK_KEY_RIGHTBRACKET},
{"awtk/TKeyCode",  "TK_KEY_CARET",  "()I",  awtk_TKeyCode_TK_KEY_CARET},
{"awtk/TKeyCode",  "TK_KEY_UNDERSCORE",  "()I",  awtk_TKeyCode_TK_KEY_UNDERSCORE},
{"awtk/TKeyCode",  "TK_KEY_BACKQUOTE",  "()I",  awtk_TKeyCode_TK_KEY_BACKQUOTE},
{"awtk/TKeyCode",  "TK_KEY_a",  "()I",  awtk_TKeyCode_TK_KEY_a},
{"awtk/TKeyCode",  "TK_KEY_b",  "()I",  awtk_TKeyCode_TK_KEY_b},
{"awtk/TKeyCode",  "TK_KEY_c",  "()I",  awtk_TKeyCode_TK_KEY_c},
{"awtk/TKeyCode",  "TK_KEY_d",  "()I",  awtk_TKeyCode_TK_KEY_d},
{"awtk/TKeyCode",  "TK_KEY_e",  "()I",  awtk_TKeyCode_TK_KEY_e},
{"awtk/TKeyCode",  "TK_KEY_f",  "()I",  awtk_TKeyCode_TK_KEY_f},
{"awtk/TKeyCode",  "TK_KEY_g",  "()I",  awtk_TKeyCode_TK_KEY_g},
{"awtk/TKeyCode",  "TK_KEY_h",  "()I",  awtk_TKeyCode_TK_KEY_h},
{"awtk/TKeyCode",  "TK_KEY_i",  "()I",  awtk_TKeyCode_TK_KEY_i},
{"awtk/TKeyCode",  "TK_KEY_j",  "()I",  awtk_TKeyCode_TK_KEY_j},
{"awtk/TKeyCode",  "TK_KEY_k",  "()I",  awtk_TKeyCode_TK_KEY_k},
{"awtk/TKeyCode",  "TK_KEY_l",  "()I",  awtk_TKeyCode_TK_KEY_l},
{"awtk/TKeyCode",  "TK_KEY_m",  "()I",  awtk_TKeyCode_TK_KEY_m},
{"awtk/TKeyCode",  "TK_KEY_n",  "()I",  awtk_TKeyCode_TK_KEY_n},
{"awtk/TKeyCode",  "TK_KEY_o",  "()I",  awtk_TKeyCode_TK_KEY_o},
{"awtk/TKeyCode",  "TK_KEY_p",  "()I",  awtk_TKeyCode_TK_KEY_p},
{"awtk/TKeyCode",  "TK_KEY_q",  "()I",  awtk_TKeyCode_TK_KEY_q},
{"awtk/TKeyCode",  "TK_KEY_r",  "()I",  awtk_TKeyCode_TK_KEY_r},
{"awtk/TKeyCode",  "TK_KEY_s",  "()I",  awtk_TKeyCode_TK_KEY_s},
{"awtk/TKeyCode",  "TK_KEY_t",  "()I",  awtk_TKeyCode_TK_KEY_t},
{"awtk/TKeyCode",  "TK_KEY_u",  "()I",  awtk_TKeyCode_TK_KEY_u},
{"awtk/TKeyCode",  "TK_KEY_v",  "()I",  awtk_TKeyCode_TK_KEY_v},
{"awtk/TKeyCode",  "TK_KEY_w",  "()I",  awtk_TKeyCode_TK_KEY_w},
{"awtk/TKeyCode",  "TK_KEY_x",  "()I",  awtk_TKeyCode_TK_KEY_x},
{"awtk/TKeyCode",  "TK_KEY_y",  "()I",  awtk_TKeyCode_TK_KEY_y},
{"awtk/TKeyCode",  "TK_KEY_z",  "()I",  awtk_TKeyCode_TK_KEY_z},
{"awtk/TKeyCode",  "TK_KEY_A",  "()I",  awtk_TKeyCode_TK_KEY_A},
{"awtk/TKeyCode",  "TK_KEY_B",  "()I",  awtk_TKeyCode_TK_KEY_B},
{"awtk/TKeyCode",  "TK_KEY_C",  "()I",  awtk_TKeyCode_TK_KEY_C},
{"awtk/TKeyCode",  "TK_KEY_D",  "()I",  awtk_TKeyCode_TK_KEY_D},
{"awtk/TKeyCode",  "TK_KEY_E",  "()I",  awtk_TKeyCode_TK_KEY_E},
{"awtk/TKeyCode",  "TK_KEY_F",  "()I",  awtk_TKeyCode_TK_KEY_F},
{"awtk/TKeyCode",  "TK_KEY_G",  "()I",  awtk_TKeyCode_TK_KEY_G},
{"awtk/TKeyCode",  "TK_KEY_H",  "()I",  awtk_TKeyCode_TK_KEY_H},
{"awtk/TKeyCode",  "TK_KEY_I",  "()I",  awtk_TKeyCode_TK_KEY_I},
{"awtk/TKeyCode",  "TK_KEY_J",  "()I",  awtk_TKeyCode_TK_KEY_J},
{"awtk/TKeyCode",  "TK_KEY_K",  "()I",  awtk_TKeyCode_TK_KEY_K},
{"awtk/TKeyCode",  "TK_KEY_L",  "()I",  awtk_TKeyCode_TK_KEY_L},
{"awtk/TKeyCode",  "TK_KEY_M",  "()I",  awtk_TKeyCode_TK_KEY_M},
{"awtk/TKeyCode",  "TK_KEY_N",  "()I",  awtk_TKeyCode_TK_KEY_N},
{"awtk/TKeyCode",  "TK_KEY_O",  "()I",  awtk_TKeyCode_TK_KEY_O},
{"awtk/TKeyCode",  "TK_KEY_P",  "()I",  awtk_TKeyCode_TK_KEY_P},
{"awtk/TKeyCode",  "TK_KEY_Q",  "()I",  awtk_TKeyCode_TK_KEY_Q},
{"awtk/TKeyCode",  "TK_KEY_R",  "()I",  awtk_TKeyCode_TK_KEY_R},
{"awtk/TKeyCode",  "TK_KEY_S",  "()I",  awtk_TKeyCode_TK_KEY_S},
{"awtk/TKeyCode",  "TK_KEY_T",  "()I",  awtk_TKeyCode_TK_KEY_T},
{"awtk/TKeyCode",  "TK_KEY_U",  "()I",  awtk_TKeyCode_TK_KEY_U},
{"awtk/TKeyCode",  "TK_KEY_V",  "()I",  awtk_TKeyCode_TK_KEY_V},
{"awtk/TKeyCode",  "TK_KEY_W",  "()I",  awtk_TKeyCode_TK_KEY_W},
{"awtk/TKeyCode",  "TK_KEY_X",  "()I",  awtk_TKeyCode_TK_KEY_X},
{"awtk/TKeyCode",  "TK_KEY_Y",  "()I",  awtk_TKeyCode_TK_KEY_Y},
{"awtk/TKeyCode",  "TK_KEY_Z",  "()I",  awtk_TKeyCode_TK_KEY_Z},
{"awtk/TKeyCode",  "TK_KEY_DOT",  "()I",  awtk_TKeyCode_TK_KEY_DOT},
{"awtk/TKeyCode",  "TK_KEY_DELETE",  "()I",  awtk_TKeyCode_TK_KEY_DELETE},
{"awtk/TKeyCode",  "TK_KEY_LEFTBRACE",  "()I",  awtk_TKeyCode_TK_KEY_LEFTBRACE},
{"awtk/TKeyCode",  "TK_KEY_RIGHTBRACE",  "()I",  awtk_TKeyCode_TK_KEY_RIGHTBRACE},
{"awtk/TKeyCode",  "TK_KEY_LSHIFT",  "()I",  awtk_TKeyCode_TK_KEY_LSHIFT},
{"awtk/TKeyCode",  "TK_KEY_RSHIFT",  "()I",  awtk_TKeyCode_TK_KEY_RSHIFT},
{"awtk/TKeyCode",  "TK_KEY_LCTRL",  "()I",  awtk_TKeyCode_TK_KEY_LCTRL},
{"awtk/TKeyCode",  "TK_KEY_RCTRL",  "()I",  awtk_TKeyCode_TK_KEY_RCTRL},
{"awtk/TKeyCode",  "TK_KEY_LALT",  "()I",  awtk_TKeyCode_TK_KEY_LALT},
{"awtk/TKeyCode",  "TK_KEY_RALT",  "()I",  awtk_TKeyCode_TK_KEY_RALT},
{"awtk/TKeyCode",  "TK_KEY_CAPSLOCK",  "()I",  awtk_TKeyCode_TK_KEY_CAPSLOCK},
{"awtk/TKeyCode",  "TK_KEY_HOME",  "()I",  awtk_TKeyCode_TK_KEY_HOME},
{"awtk/TKeyCode",  "TK_KEY_END",  "()I",  awtk_TKeyCode_TK_KEY_END},
{"awtk/TKeyCode",  "TK_KEY_INSERT",  "()I",  awtk_TKeyCode_TK_KEY_INSERT},
{"awtk/TKeyCode",  "TK_KEY_UP",  "()I",  awtk_TKeyCode_TK_KEY_UP},
{"awtk/TKeyCode",  "TK_KEY_DOWN",  "()I",  awtk_TKeyCode_TK_KEY_DOWN},
{"awtk/TKeyCode",  "TK_KEY_LEFT",  "()I",  awtk_TKeyCode_TK_KEY_LEFT},
{"awtk/TKeyCode",  "TK_KEY_RIGHT",  "()I",  awtk_TKeyCode_TK_KEY_RIGHT},
{"awtk/TKeyCode",  "TK_KEY_PAGEUP",  "()I",  awtk_TKeyCode_TK_KEY_PAGEUP},
{"awtk/TKeyCode",  "TK_KEY_PAGEDOWN",  "()I",  awtk_TKeyCode_TK_KEY_PAGEDOWN},
{"awtk/TKeyCode",  "TK_KEY_F1",  "()I",  awtk_TKeyCode_TK_KEY_F1},
{"awtk/TKeyCode",  "TK_KEY_F2",  "()I",  awtk_TKeyCode_TK_KEY_F2},
{"awtk/TKeyCode",  "TK_KEY_F3",  "()I",  awtk_TKeyCode_TK_KEY_F3},
{"awtk/TKeyCode",  "TK_KEY_F4",  "()I",  awtk_TKeyCode_TK_KEY_F4},
{"awtk/TKeyCode",  "TK_KEY_F5",  "()I",  awtk_TKeyCode_TK_KEY_F5},
{"awtk/TKeyCode",  "TK_KEY_F6",  "()I",  awtk_TKeyCode_TK_KEY_F6},
{"awtk/TKeyCode",  "TK_KEY_F7",  "()I",  awtk_TKeyCode_TK_KEY_F7},
{"awtk/TKeyCode",  "TK_KEY_F8",  "()I",  awtk_TKeyCode_TK_KEY_F8},
{"awtk/TKeyCode",  "TK_KEY_F9",  "()I",  awtk_TKeyCode_TK_KEY_F9},
{"awtk/TKeyCode",  "TK_KEY_F10",  "()I",  awtk_TKeyCode_TK_KEY_F10},
{"awtk/TKeyCode",  "TK_KEY_F11",  "()I",  awtk_TKeyCode_TK_KEY_F11},
{"awtk/TKeyCode",  "TK_KEY_F12",  "()I",  awtk_TKeyCode_TK_KEY_F12},
{"awtk/TKeyCode",  "TK_KEY_MENU",  "()I",  awtk_TKeyCode_TK_KEY_MENU},
{"awtk/TKeyCode",  "TK_KEY_COMMAND",  "()I",  awtk_TKeyCode_TK_KEY_COMMAND},
{"awtk/TKeyCode",  "TK_KEY_BACK",  "()I",  awtk_TKeyCode_TK_KEY_BACK},
{"awtk/TKeyCode",  "TK_KEY_CANCEL",  "()I",  awtk_TKeyCode_TK_KEY_CANCEL},
{"awtk/TKeyCode",  "TK_KEY_WHEEL",  "()I",  awtk_TKeyCode_TK_KEY_WHEEL},
{"awtk/TLocaleInfo",  "locale_info",  "()J",  awtk_TLocaleInfo_locale_info},
{"awtk/TLocaleInfo",  "locale_info_tr",  "(JLjava/lang/String;)Ljava/lang/String;",  awtk_TLocaleInfo_locale_info_tr},
{"awtk/TLocaleInfo",  "locale_info_change",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TLocaleInfo_locale_info_change},
{"awtk/TLocaleInfo",  "locale_info_off",  "(JI)I",  awtk_TLocaleInfo_locale_info_off},
{"awtk/TStyleId",  "STYLE_ID_BG_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_BG_COLOR},
{"awtk/TStyleId",  "STYLE_ID_FG_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FG_COLOR},
{"awtk/TStyleId",  "STYLE_ID_MASK_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_MASK_COLOR},
{"awtk/TStyleId",  "STYLE_ID_FONT_NAME",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FONT_NAME},
{"awtk/TStyleId",  "STYLE_ID_FONT_SIZE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FONT_SIZE},
{"awtk/TStyleId",  "STYLE_ID_FONT_STYLE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FONT_STYLE},
{"awtk/TStyleId",  "STYLE_ID_TEXT_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_TEXT_COLOR},
{"awtk/TStyleId",  "STYLE_ID_HIGHLIGHT_FONT_NAME",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_HIGHLIGHT_FONT_NAME},
{"awtk/TStyleId",  "STYLE_ID_HIGHLIGHT_FONT_SIZE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_HIGHLIGHT_FONT_SIZE},
{"awtk/TStyleId",  "STYLE_ID_HIGHLIGHT_TEXT_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_HIGHLIGHT_TEXT_COLOR},
{"awtk/TStyleId",  "STYLE_ID_TIPS_TEXT_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_TIPS_TEXT_COLOR},
{"awtk/TStyleId",  "STYLE_ID_TEXT_ALIGN_H",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_TEXT_ALIGN_H},
{"awtk/TStyleId",  "STYLE_ID_TEXT_ALIGN_V",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_TEXT_ALIGN_V},
{"awtk/TStyleId",  "STYLE_ID_BORDER_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_BORDER_COLOR},
{"awtk/TStyleId",  "STYLE_ID_BORDER_WIDTH",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_BORDER_WIDTH},
{"awtk/TStyleId",  "STYLE_ID_BORDER",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_BORDER},
{"awtk/TStyleId",  "STYLE_ID_BG_IMAGE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_BG_IMAGE},
{"awtk/TStyleId",  "STYLE_ID_BG_IMAGE_DRAW_TYPE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_BG_IMAGE_DRAW_TYPE},
{"awtk/TStyleId",  "STYLE_ID_ICON",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ICON},
{"awtk/TStyleId",  "STYLE_ID_FG_IMAGE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FG_IMAGE},
{"awtk/TStyleId",  "STYLE_ID_FG_IMAGE_DRAW_TYPE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FG_IMAGE_DRAW_TYPE},
{"awtk/TStyleId",  "STYLE_ID_SPACER",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_SPACER},
{"awtk/TStyleId",  "STYLE_ID_MARGIN",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_MARGIN},
{"awtk/TStyleId",  "STYLE_ID_MARGIN_LEFT",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_MARGIN_LEFT},
{"awtk/TStyleId",  "STYLE_ID_MARGIN_RIGHT",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_MARGIN_RIGHT},
{"awtk/TStyleId",  "STYLE_ID_MARGIN_TOP",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_MARGIN_TOP},
{"awtk/TStyleId",  "STYLE_ID_MARGIN_BOTTOM",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_MARGIN_BOTTOM},
{"awtk/TStyleId",  "STYLE_ID_ICON_AT",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ICON_AT},
{"awtk/TStyleId",  "STYLE_ID_ACTIVE_ICON",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ACTIVE_ICON},
{"awtk/TStyleId",  "STYLE_ID_X_OFFSET",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_X_OFFSET},
{"awtk/TStyleId",  "STYLE_ID_Y_OFFSET",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_Y_OFFSET},
{"awtk/TStyleId",  "STYLE_ID_SELECTED_BG_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_SELECTED_BG_COLOR},
{"awtk/TStyleId",  "STYLE_ID_SELECTED_FG_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_SELECTED_FG_COLOR},
{"awtk/TStyleId",  "STYLE_ID_SELECTED_TEXT_COLOR",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_SELECTED_TEXT_COLOR},
{"awtk/TStyleId",  "STYLE_ID_ROUND_RADIUS",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ROUND_RADIUS},
{"awtk/TStyleId",  "STYLE_ID_ROUND_RADIUS_TOP_LETF",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ROUND_RADIUS_TOP_LETF},
{"awtk/TStyleId",  "STYLE_ID_ROUND_RADIUS_TOP_RIGHT",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ROUND_RADIUS_TOP_RIGHT},
{"awtk/TStyleId",  "STYLE_ID_ROUND_RADIUS_BOTTOM_LETF",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ROUND_RADIUS_BOTTOM_LETF},
{"awtk/TStyleId",  "STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_ROUND_RADIUS_BOTTOM_RIGHT},
{"awtk/TStyleId",  "STYLE_ID_CHILDREN_LAYOUT",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_CHILDREN_LAYOUT},
{"awtk/TStyleId",  "STYLE_ID_SELF_LAYOUT",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_SELF_LAYOUT},
{"awtk/TStyleId",  "STYLE_ID_FOCUSABLE",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FOCUSABLE},
{"awtk/TStyleId",  "STYLE_ID_FEEDBACK",  "()Ljava/lang/String;",  awtk_TStyleId_STYLE_ID_FEEDBACK},
{"awtk/TStyle",  "style_notify_widget_state_changed",  "(JJ)I",  awtk_TStyle_style_notify_widget_state_changed},
{"awtk/TStyle",  "style_is_valid",  "(J)Z",  awtk_TStyle_style_is_valid},
{"awtk/TStyle",  "style_get_int",  "(JLjava/lang/String;I)I",  awtk_TStyle_style_get_int},
{"awtk/TStyle",  "style_get_uint",  "(JLjava/lang/String;I)I",  awtk_TStyle_style_get_uint},
{"awtk/TStyle",  "style_get_str",  "(JLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;",  awtk_TStyle_style_get_str},
{"awtk/TStyle",  "style_set",  "(JLjava/lang/String;Ljava/lang/String;J)I",  awtk_TStyle_style_set},
{"awtk/TStyle",  "style_update_state",  "(JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",  awtk_TStyle_style_update_state},
{"awtk/TStyle",  "style_get_style_state",  "(J)Ljava/lang/String;",  awtk_TStyle_style_get_style_state},
{"awtk/TStyle",  "style_is_mutable",  "(J)Z",  awtk_TStyle_style_is_mutable},
{"awtk/TStyle",  "style_get_style_type",  "(J)Ljava/lang/String;",  awtk_TStyle_style_get_style_type},
{"awtk/TTheme",  "theme",  "()J",  awtk_TTheme_theme},
{"awtk/TTimer",  "timer_add",  "(Lawtk/TOnTimer;JI)I",  awtk_TTimer_timer_add},
{"awtk/TTimer",  "timer_remove",  "(I)I",  awtk_TTimer_timer_remove},
{"awtk/TTimer",  "timer_remove_all_by_ctx",  "(J)I",  awtk_TTimer_timer_remove_all_by_ctx},
{"awtk/TTimer",  "timer_reset",  "(I)I",  awtk_TTimer_timer_reset},
{"awtk/TTimer",  "timer_suspend",  "(I)I",  awtk_TTimer_timer_suspend},
{"awtk/TTimer",  "timer_resume",  "(I)I",  awtk_TTimer_timer_resume},
{"awtk/TTimer",  "timer_modify",  "(II)I",  awtk_TTimer_timer_modify},
{"awtk/TAlignV",  "ALIGN_V_NONE",  "()I",  awtk_TAlignV_ALIGN_V_NONE},
{"awtk/TAlignV",  "ALIGN_V_MIDDLE",  "()I",  awtk_TAlignV_ALIGN_V_MIDDLE},
{"awtk/TAlignV",  "ALIGN_V_TOP",  "()I",  awtk_TAlignV_ALIGN_V_TOP},
{"awtk/TAlignV",  "ALIGN_V_BOTTOM",  "()I",  awtk_TAlignV_ALIGN_V_BOTTOM},
{"awtk/TAlignH",  "ALIGN_H_NONE",  "()I",  awtk_TAlignH_ALIGN_H_NONE},
{"awtk/TAlignH",  "ALIGN_H_CENTER",  "()I",  awtk_TAlignH_ALIGN_H_CENTER},
{"awtk/TAlignH",  "ALIGN_H_LEFT",  "()I",  awtk_TAlignH_ALIGN_H_LEFT},
{"awtk/TAlignH",  "ALIGN_H_RIGHT",  "()I",  awtk_TAlignH_ALIGN_H_RIGHT},
{"awtk/TAppType",  "APP_MOBILE",  "()I",  awtk_TAppType_APP_MOBILE},
{"awtk/TAppType",  "APP_SIMULATOR",  "()I",  awtk_TAppType_APP_SIMULATOR},
{"awtk/TAppType",  "APP_DESKTOP",  "()I",  awtk_TAppType_APP_DESKTOP},
{"awtk/TBitmapFormat",  "BITMAP_FMT_NONE",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_NONE},
{"awtk/TBitmapFormat",  "BITMAP_FMT_RGBA8888",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_RGBA8888},
{"awtk/TBitmapFormat",  "BITMAP_FMT_ABGR8888",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_ABGR8888},
{"awtk/TBitmapFormat",  "BITMAP_FMT_BGRA8888",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_BGRA8888},
{"awtk/TBitmapFormat",  "BITMAP_FMT_ARGB8888",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_ARGB8888},
{"awtk/TBitmapFormat",  "BITMAP_FMT_RGB565",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_RGB565},
{"awtk/TBitmapFormat",  "BITMAP_FMT_BGR565",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_BGR565},
{"awtk/TBitmapFormat",  "BITMAP_FMT_RGB888",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_RGB888},
{"awtk/TBitmapFormat",  "BITMAP_FMT_BGR888",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_BGR888},
{"awtk/TBitmapFormat",  "BITMAP_FMT_GRAY",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_GRAY},
{"awtk/TBitmapFormat",  "BITMAP_FMT_MONO",  "()I",  awtk_TBitmapFormat_BITMAP_FMT_MONO},
{"awtk/TBitmapFlag",  "BITMAP_FLAG_NONE",  "()I",  awtk_TBitmapFlag_BITMAP_FLAG_NONE},
{"awtk/TBitmapFlag",  "BITMAP_FLAG_OPAQUE",  "()I",  awtk_TBitmapFlag_BITMAP_FLAG_OPAQUE},
{"awtk/TBitmapFlag",  "BITMAP_FLAG_IMMUTABLE",  "()I",  awtk_TBitmapFlag_BITMAP_FLAG_IMMUTABLE},
{"awtk/TBitmapFlag",  "BITMAP_FLAG_TEXTURE",  "()I",  awtk_TBitmapFlag_BITMAP_FLAG_TEXTURE},
{"awtk/TBitmapFlag",  "BITMAP_FLAG_CHANGED",  "()I",  awtk_TBitmapFlag_BITMAP_FLAG_CHANGED},
{"awtk/TBitmapFlag",  "BITMAP_FLAG_PREMULTI_ALPHA",  "()I",  awtk_TBitmapFlag_BITMAP_FLAG_PREMULTI_ALPHA},
{"awtk/TVgcanvas",  "vgcanvas_cast",  "(J)J",  awtk_TVgcanvas_vgcanvas_cast},
{"awtk/TVgcanvas",  "vgcanvas_flush",  "(J)I",  awtk_TVgcanvas_vgcanvas_flush},
{"awtk/TVgcanvas",  "vgcanvas_begin_path",  "(J)I",  awtk_TVgcanvas_vgcanvas_begin_path},
{"awtk/TVgcanvas",  "vgcanvas_move_to",  "(JFF)I",  awtk_TVgcanvas_vgcanvas_move_to},
{"awtk/TVgcanvas",  "vgcanvas_line_to",  "(JFF)I",  awtk_TVgcanvas_vgcanvas_line_to},
{"awtk/TVgcanvas",  "vgcanvas_quad_to",  "(JFFFF)I",  awtk_TVgcanvas_vgcanvas_quad_to},
{"awtk/TVgcanvas",  "vgcanvas_bezier_to",  "(JFFFFFF)I",  awtk_TVgcanvas_vgcanvas_bezier_to},
{"awtk/TVgcanvas",  "vgcanvas_arc_to",  "(JFFFFF)I",  awtk_TVgcanvas_vgcanvas_arc_to},
{"awtk/TVgcanvas",  "vgcanvas_arc",  "(JFFFFFZ)I",  awtk_TVgcanvas_vgcanvas_arc},
{"awtk/TVgcanvas",  "vgcanvas_is_point_in_path",  "(JFF)Z",  awtk_TVgcanvas_vgcanvas_is_point_in_path},
{"awtk/TVgcanvas",  "vgcanvas_rect",  "(JFFFF)I",  awtk_TVgcanvas_vgcanvas_rect},
{"awtk/TVgcanvas",  "vgcanvas_rounded_rect",  "(JFFFFF)I",  awtk_TVgcanvas_vgcanvas_rounded_rect},
{"awtk/TVgcanvas",  "vgcanvas_ellipse",  "(JFFFF)I",  awtk_TVgcanvas_vgcanvas_ellipse},
{"awtk/TVgcanvas",  "vgcanvas_close_path",  "(J)I",  awtk_TVgcanvas_vgcanvas_close_path},
{"awtk/TVgcanvas",  "vgcanvas_path_winding",  "(JZ)I",  awtk_TVgcanvas_vgcanvas_path_winding},
{"awtk/TVgcanvas",  "vgcanvas_rotate",  "(JF)I",  awtk_TVgcanvas_vgcanvas_rotate},
{"awtk/TVgcanvas",  "vgcanvas_scale",  "(JFF)I",  awtk_TVgcanvas_vgcanvas_scale},
{"awtk/TVgcanvas",  "vgcanvas_translate",  "(JFF)I",  awtk_TVgcanvas_vgcanvas_translate},
{"awtk/TVgcanvas",  "vgcanvas_transform",  "(JFFFFFF)I",  awtk_TVgcanvas_vgcanvas_transform},
{"awtk/TVgcanvas",  "vgcanvas_set_transform",  "(JFFFFFF)I",  awtk_TVgcanvas_vgcanvas_set_transform},
{"awtk/TVgcanvas",  "vgcanvas_clip_path",  "(J)I",  awtk_TVgcanvas_vgcanvas_clip_path},
{"awtk/TVgcanvas",  "vgcanvas_clip_rect",  "(JFFFF)I",  awtk_TVgcanvas_vgcanvas_clip_rect},
{"awtk/TVgcanvas",  "vgcanvas_intersect_clip_rect",  "(JFFFF)I",  awtk_TVgcanvas_vgcanvas_intersect_clip_rect},
{"awtk/TVgcanvas",  "vgcanvas_fill",  "(J)I",  awtk_TVgcanvas_vgcanvas_fill},
{"awtk/TVgcanvas",  "vgcanvas_stroke",  "(J)I",  awtk_TVgcanvas_vgcanvas_stroke},
{"awtk/TVgcanvas",  "vgcanvas_paint",  "(JZJ)I",  awtk_TVgcanvas_vgcanvas_paint},
{"awtk/TVgcanvas",  "vgcanvas_set_font",  "(JLjava/lang/String;)I",  awtk_TVgcanvas_vgcanvas_set_font},
{"awtk/TVgcanvas",  "vgcanvas_set_font_size",  "(JF)I",  awtk_TVgcanvas_vgcanvas_set_font_size},
{"awtk/TVgcanvas",  "vgcanvas_set_text_align",  "(JLjava/lang/String;)I",  awtk_TVgcanvas_vgcanvas_set_text_align},
{"awtk/TVgcanvas",  "vgcanvas_set_text_baseline",  "(JLjava/lang/String;)I",  awtk_TVgcanvas_vgcanvas_set_text_baseline},
{"awtk/TVgcanvas",  "vgcanvas_fill_text",  "(JLjava/lang/String;FFF)I",  awtk_TVgcanvas_vgcanvas_fill_text},
{"awtk/TVgcanvas",  "vgcanvas_measure_text",  "(JLjava/lang/String;)F",  awtk_TVgcanvas_vgcanvas_measure_text},
{"awtk/TVgcanvas",  "vgcanvas_draw_image",  "(JJFFFFFFFF)I",  awtk_TVgcanvas_vgcanvas_draw_image},
{"awtk/TVgcanvas",  "vgcanvas_draw_icon",  "(JJFFFFFFFF)I",  awtk_TVgcanvas_vgcanvas_draw_icon},
{"awtk/TVgcanvas",  "vgcanvas_set_antialias",  "(JZ)I",  awtk_TVgcanvas_vgcanvas_set_antialias},
{"awtk/TVgcanvas",  "vgcanvas_set_global_alpha",  "(JF)I",  awtk_TVgcanvas_vgcanvas_set_global_alpha},
{"awtk/TVgcanvas",  "vgcanvas_set_line_width",  "(JF)I",  awtk_TVgcanvas_vgcanvas_set_line_width},
{"awtk/TVgcanvas",  "vgcanvas_set_fill_color_str",  "(JLjava/lang/String;)I",  awtk_TVgcanvas_vgcanvas_set_fill_color_str},
{"awtk/TVgcanvas",  "vgcanvas_set_stroke_color_str",  "(JLjava/lang/String;)I",  awtk_TVgcanvas_vgcanvas_set_stroke_color_str},
{"awtk/TVgcanvas",  "vgcanvas_set_line_cap",  "(JLjava/lang/String;)I",  awtk_TVgcanvas_vgcanvas_set_line_cap},
{"awtk/TVgcanvas",  "vgcanvas_set_line_join",  "(JLjava/lang/String;)I",  awtk_TVgcanvas_vgcanvas_set_line_join},
{"awtk/TVgcanvas",  "vgcanvas_set_miter_limit",  "(JF)I",  awtk_TVgcanvas_vgcanvas_set_miter_limit},
{"awtk/TVgcanvas",  "vgcanvas_save",  "(J)I",  awtk_TVgcanvas_vgcanvas_save},
{"awtk/TVgcanvas",  "vgcanvas_restore",  "(J)I",  awtk_TVgcanvas_vgcanvas_restore},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_w",  "(J)I",  awtk_TVgcanvas_vgcanvas_t_get_prop_w},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_h",  "(J)I",  awtk_TVgcanvas_vgcanvas_t_get_prop_h},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_stride",  "(J)I",  awtk_TVgcanvas_vgcanvas_t_get_prop_stride},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_ratio",  "(J)F",  awtk_TVgcanvas_vgcanvas_t_get_prop_ratio},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_anti_alias",  "(J)Z",  awtk_TVgcanvas_vgcanvas_t_get_prop_anti_alias},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_line_width",  "(J)F",  awtk_TVgcanvas_vgcanvas_t_get_prop_line_width},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_global_alpha",  "(J)F",  awtk_TVgcanvas_vgcanvas_t_get_prop_global_alpha},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_miter_limit",  "(J)F",  awtk_TVgcanvas_vgcanvas_t_get_prop_miter_limit},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_line_cap",  "(J)Ljava/lang/String;",  awtk_TVgcanvas_vgcanvas_t_get_prop_line_cap},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_line_join",  "(J)Ljava/lang/String;",  awtk_TVgcanvas_vgcanvas_t_get_prop_line_join},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_font",  "(J)Ljava/lang/String;",  awtk_TVgcanvas_vgcanvas_t_get_prop_font},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_font_size",  "(J)F",  awtk_TVgcanvas_vgcanvas_t_get_prop_font_size},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_text_align",  "(J)Ljava/lang/String;",  awtk_TVgcanvas_vgcanvas_t_get_prop_text_align},
{"awtk/TVgcanvas",  "vgcanvas_t_get_prop_text_baseline",  "(J)Ljava/lang/String;",  awtk_TVgcanvas_vgcanvas_t_get_prop_text_baseline},
{"awtk/TVgcanvasLineCap",  "VGCANVAS_LINE_CAP_ROUND",  "()Ljava/lang/String;",  awtk_TVgcanvasLineCap_VGCANVAS_LINE_CAP_ROUND},
{"awtk/TVgcanvasLineCap",  "VGCANVAS_LINE_CAP_SQUARE",  "()Ljava/lang/String;",  awtk_TVgcanvasLineCap_VGCANVAS_LINE_CAP_SQUARE},
{"awtk/TVgcanvasLineCap",  "VGCANVAS_LINE_CAP_BUTT",  "()Ljava/lang/String;",  awtk_TVgcanvasLineCap_VGCANVAS_LINE_CAP_BUTT},
{"awtk/TVgcanvasLineJoin",  "VGCANVAS_LINE_JOIN_ROUND",  "()Ljava/lang/String;",  awtk_TVgcanvasLineJoin_VGCANVAS_LINE_JOIN_ROUND},
{"awtk/TVgcanvasLineJoin",  "VGCANVAS_LINE_JOIN_BEVEL",  "()Ljava/lang/String;",  awtk_TVgcanvasLineJoin_VGCANVAS_LINE_JOIN_BEVEL},
{"awtk/TVgcanvasLineJoin",  "VGCANVAS_LINE_JOIN_MITTER",  "()Ljava/lang/String;",  awtk_TVgcanvasLineJoin_VGCANVAS_LINE_JOIN_MITTER},
{"awtk/TWidgetProp",  "WIDGET_PROP_EXEC",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_EXEC},
{"awtk/TWidgetProp",  "WIDGET_PROP_X",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_X},
{"awtk/TWidgetProp",  "WIDGET_PROP_Y",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_Y},
{"awtk/TWidgetProp",  "WIDGET_PROP_W",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_W},
{"awtk/TWidgetProp",  "WIDGET_PROP_H",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_H},
{"awtk/TWidgetProp",  "WIDGET_PROP_MAX_H",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MAX_H},
{"awtk/TWidgetProp",  "WIDGET_PROP_DESIGN_W",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DESIGN_W},
{"awtk/TWidgetProp",  "WIDGET_PROP_DESIGN_H",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DESIGN_H},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_SCALE_CHILDREN_X",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_X},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_SCALE_CHILDREN_Y",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_Y},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_SCALE_CHILDREN_W",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_W},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_SCALE_CHILDREN_H",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_SCALE_CHILDREN_H},
{"awtk/TWidgetProp",  "WIDGET_PROP_INPUTING",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_INPUTING},
{"awtk/TWidgetProp",  "WIDGET_PROP_ALWAYS_ON_TOP",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ALWAYS_ON_TOP},
{"awtk/TWidgetProp",  "WIDGET_PROP_CARET_X",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CARET_X},
{"awtk/TWidgetProp",  "WIDGET_PROP_CARET_Y",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CARET_Y},
{"awtk/TWidgetProp",  "WIDGET_PROP_DIRTY_RECT_TOLERANCE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DIRTY_RECT_TOLERANCE},
{"awtk/TWidgetProp",  "WIDGET_PROP_BIDI",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_BIDI},
{"awtk/TWidgetProp",  "WIDGET_PROP_CANVAS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CANVAS},
{"awtk/TWidgetProp",  "WIDGET_PROP_LOCALIZE_OPTIONS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LOCALIZE_OPTIONS},
{"awtk/TWidgetProp",  "WIDGET_PROP_NATIVE_WINDOW",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_NATIVE_WINDOW},
{"awtk/TWidgetProp",  "WIDGET_PROP_HIGHLIGHT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_HIGHLIGHT},
{"awtk/TWidgetProp",  "WIDGET_PROP_BAR_SIZE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_BAR_SIZE},
{"awtk/TWidgetProp",  "WIDGET_PROP_OPACITY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_OPACITY},
{"awtk/TWidgetProp",  "WIDGET_PROP_MIN_W",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MIN_W},
{"awtk/TWidgetProp",  "WIDGET_PROP_MAX_W",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MAX_W},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_ADJUST_SIZE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_ADJUST_SIZE},
{"awtk/TWidgetProp",  "WIDGET_PROP_SINGLE_INSTANCE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SINGLE_INSTANCE},
{"awtk/TWidgetProp",  "WIDGET_PROP_STRONGLY_FOCUS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_STRONGLY_FOCUS},
{"awtk/TWidgetProp",  "WIDGET_PROP_CHILDREN_LAYOUT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CHILDREN_LAYOUT},
{"awtk/TWidgetProp",  "WIDGET_PROP_LAYOUT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LAYOUT},
{"awtk/TWidgetProp",  "WIDGET_PROP_SELF_LAYOUT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SELF_LAYOUT},
{"awtk/TWidgetProp",  "WIDGET_PROP_LAYOUT_W",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LAYOUT_W},
{"awtk/TWidgetProp",  "WIDGET_PROP_LAYOUT_H",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LAYOUT_H},
{"awtk/TWidgetProp",  "WIDGET_PROP_VIRTUAL_W",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_VIRTUAL_W},
{"awtk/TWidgetProp",  "WIDGET_PROP_VIRTUAL_H",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_VIRTUAL_H},
{"awtk/TWidgetProp",  "WIDGET_PROP_NAME",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_NAME},
{"awtk/TWidgetProp",  "WIDGET_PROP_TYPE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_TYPE},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLOSABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLOSABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_POINTER_CURSOR",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_POINTER_CURSOR},
{"awtk/TWidgetProp",  "WIDGET_PROP_VALUE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_VALUE},
{"awtk/TWidgetProp",  "WIDGET_PROP_REVERSE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_REVERSE},
{"awtk/TWidgetProp",  "WIDGET_PROP_LENGTH",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LENGTH},
{"awtk/TWidgetProp",  "WIDGET_PROP_LINE_WRAP",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LINE_WRAP},
{"awtk/TWidgetProp",  "WIDGET_PROP_WORD_WRAP",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_WORD_WRAP},
{"awtk/TWidgetProp",  "WIDGET_PROP_TEXT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_TEXT},
{"awtk/TWidgetProp",  "WIDGET_PROP_TR_TEXT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_TR_TEXT},
{"awtk/TWidgetProp",  "WIDGET_PROP_STYLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_STYLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_ENABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ENABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_FEEDBACK",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FEEDBACK},
{"awtk/TWidgetProp",  "WIDGET_PROP_FLOATING",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FLOATING},
{"awtk/TWidgetProp",  "WIDGET_PROP_MARGIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MARGIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_SPACING",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SPACING},
{"awtk/TWidgetProp",  "WIDGET_PROP_LEFT_MARGIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LEFT_MARGIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_RIGHT_MARGIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_RIGHT_MARGIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_TOP_MARGIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_TOP_MARGIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_BOTTOM_MARGIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_BOTTOM_MARGIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_STEP",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_STEP},
{"awtk/TWidgetProp",  "WIDGET_PROP_VISIBLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_VISIBLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_SENSITIVE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SENSITIVE},
{"awtk/TWidgetProp",  "WIDGET_PROP_ANIMATION",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ANIMATION},
{"awtk/TWidgetProp",  "WIDGET_PROP_ANIM_HINT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ANIM_HINT},
{"awtk/TWidgetProp",  "WIDGET_PROP_FULLSCREEN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FULLSCREEN},
{"awtk/TWidgetProp",  "WIDGET_PROP_DISABLE_ANIM",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DISABLE_ANIM},
{"awtk/TWidgetProp",  "WIDGET_PROP_OPEN_ANIM_HINT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_OPEN_ANIM_HINT},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLOSE_ANIM_HINT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLOSE_ANIM_HINT},
{"awtk/TWidgetProp",  "WIDGET_PROP_MIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_ACTION_TEXT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ACTION_TEXT},
{"awtk/TWidgetProp",  "WIDGET_PROP_TIPS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_TIPS},
{"awtk/TWidgetProp",  "WIDGET_PROP_TR_TIPS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_TR_TIPS},
{"awtk/TWidgetProp",  "WIDGET_PROP_INPUT_TYPE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_INPUT_TYPE},
{"awtk/TWidgetProp",  "WIDGET_PROP_KEYBOARD",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_KEYBOARD},
{"awtk/TWidgetProp",  "WIDGET_PROP_DEFAULT_FOCUSED_CHILD",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DEFAULT_FOCUSED_CHILD},
{"awtk/TWidgetProp",  "WIDGET_PROP_READONLY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_READONLY},
{"awtk/TWidgetProp",  "WIDGET_PROP_CANCELABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CANCELABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_PASSWORD_VISIBLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_PASSWORD_VISIBLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_ACTIVE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ACTIVE},
{"awtk/TWidgetProp",  "WIDGET_PROP_CURR_PAGE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CURR_PAGE},
{"awtk/TWidgetProp",  "WIDGET_PROP_PAGE_MAX_NUMBER",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_PAGE_MAX_NUMBER},
{"awtk/TWidgetProp",  "WIDGET_PROP_VERTICAL",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_VERTICAL},
{"awtk/TWidgetProp",  "WIDGET_PROP_SHOW_TEXT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SHOW_TEXT},
{"awtk/TWidgetProp",  "WIDGET_PROP_XOFFSET",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_XOFFSET},
{"awtk/TWidgetProp",  "WIDGET_PROP_YOFFSET",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_YOFFSET},
{"awtk/TWidgetProp",  "WIDGET_PROP_ALIGN_V",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ALIGN_V},
{"awtk/TWidgetProp",  "WIDGET_PROP_ALIGN_H",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ALIGN_H},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_PLAY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_PLAY},
{"awtk/TWidgetProp",  "WIDGET_PROP_LOOP",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LOOP},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_FIX",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_FIX},
{"awtk/TWidgetProp",  "WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SELECT_NONE_WHEN_FOCUSED},
{"awtk/TWidgetProp",  "WIDGET_PROP_OPEN_IM_WHEN_FOCUSED",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_OPEN_IM_WHEN_FOCUSED},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLOSE_IM_WHEN_BLURED",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLOSE_IM_WHEN_BLURED},
{"awtk/TWidgetProp",  "WIDGET_PROP_X_MIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_X_MIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_X_MAX",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_X_MAX},
{"awtk/TWidgetProp",  "WIDGET_PROP_Y_MIN",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_Y_MIN},
{"awtk/TWidgetProp",  "WIDGET_PROP_Y_MAX",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_Y_MAX},
{"awtk/TWidgetProp",  "WIDGET_PROP_MAX",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MAX},
{"awtk/TWidgetProp",  "WIDGET_PROP_GRAB_KEYS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_GRAB_KEYS},
{"awtk/TWidgetProp",  "WIDGET_PROP_ROW",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ROW},
{"awtk/TWidgetProp",  "WIDGET_PROP_STATE_FOR_STYLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_STATE_FOR_STYLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_THEME",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_THEME},
{"awtk/TWidgetProp",  "WIDGET_PROP_STAGE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_STAGE},
{"awtk/TWidgetProp",  "WIDGET_PROP_IMAGE_MANAGER",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_IMAGE_MANAGER},
{"awtk/TWidgetProp",  "WIDGET_PROP_ASSETS_MANAGER",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ASSETS_MANAGER},
{"awtk/TWidgetProp",  "WIDGET_PROP_LOCALE_INFO",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LOCALE_INFO},
{"awtk/TWidgetProp",  "WIDGET_PROP_FONT_MANAGER",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FONT_MANAGER},
{"awtk/TWidgetProp",  "WIDGET_PROP_THEME_OBJ",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_THEME_OBJ},
{"awtk/TWidgetProp",  "WIDGET_PROP_DEFAULT_THEME_OBJ",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DEFAULT_THEME_OBJ},
{"awtk/TWidgetProp",  "WIDGET_PROP_ITEM_WIDTH",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ITEM_WIDTH},
{"awtk/TWidgetProp",  "WIDGET_PROP_ITEM_HEIGHT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ITEM_HEIGHT},
{"awtk/TWidgetProp",  "WIDGET_PROP_DEFAULT_ITEM_HEIGHT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DEFAULT_ITEM_HEIGHT},
{"awtk/TWidgetProp",  "WIDGET_PROP_XSLIDABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_XSLIDABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_YSLIDABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_YSLIDABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_REPEAT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_REPEAT},
{"awtk/TWidgetProp",  "WIDGET_PROP_LONG_PRESS_TIME",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LONG_PRESS_TIME},
{"awtk/TWidgetProp",  "WIDGET_PROP_ENABLE_LONG_PRESS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ENABLE_LONG_PRESS},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLICK_THROUGH",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLICK_THROUGH},
{"awtk/TWidgetProp",  "WIDGET_PROP_ANIMATABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ANIMATABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_HIDE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_HIDE},
{"awtk/TWidgetProp",  "WIDGET_PROP_AUTO_HIDE_SCROLL_BAR",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_AUTO_HIDE_SCROLL_BAR},
{"awtk/TWidgetProp",  "WIDGET_PROP_IMAGE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_IMAGE},
{"awtk/TWidgetProp",  "WIDGET_PROP_FORMAT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FORMAT},
{"awtk/TWidgetProp",  "WIDGET_PROP_DRAW_TYPE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DRAW_TYPE},
{"awtk/TWidgetProp",  "WIDGET_PROP_SELECTABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SELECTABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLICKABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLICKABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_SCALE_X",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SCALE_X},
{"awtk/TWidgetProp",  "WIDGET_PROP_SCALE_Y",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SCALE_Y},
{"awtk/TWidgetProp",  "WIDGET_PROP_ANCHOR_X",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ANCHOR_X},
{"awtk/TWidgetProp",  "WIDGET_PROP_ANCHOR_Y",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ANCHOR_Y},
{"awtk/TWidgetProp",  "WIDGET_PROP_ROTATION",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ROTATION},
{"awtk/TWidgetProp",  "WIDGET_PROP_COMPACT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_COMPACT},
{"awtk/TWidgetProp",  "WIDGET_PROP_SCROLLABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SCROLLABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_ICON",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ICON},
{"awtk/TWidgetProp",  "WIDGET_PROP_OPTIONS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_OPTIONS},
{"awtk/TWidgetProp",  "WIDGET_PROP_SELECTED",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SELECTED},
{"awtk/TWidgetProp",  "WIDGET_PROP_CHECKED",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CHECKED},
{"awtk/TWidgetProp",  "WIDGET_PROP_ACTIVE_ICON",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_ACTIVE_ICON},
{"awtk/TWidgetProp",  "WIDGET_PROP_LOAD_UI",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LOAD_UI},
{"awtk/TWidgetProp",  "WIDGET_PROP_OPEN_WINDOW",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_OPEN_WINDOW},
{"awtk/TWidgetProp",  "WIDGET_PROP_SELECTED_INDEX",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_SELECTED_INDEX},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLOSE_WHEN_CLICK",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLOSE_WHEN_CLICK},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLOSE_WHEN_CLICK_OUTSIDE},
{"awtk/TWidgetProp",  "WIDGET_PROP_CLOSE_WHEN_TIMEOUT",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_CLOSE_WHEN_TIMEOUT},
{"awtk/TWidgetProp",  "WIDGET_PROP_LINE_GAP",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_LINE_GAP},
{"awtk/TWidgetProp",  "WIDGET_PROP_BG_COLOR",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_BG_COLOR},
{"awtk/TWidgetProp",  "WIDGET_PROP_BORDER_COLOR",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_BORDER_COLOR},
{"awtk/TWidgetProp",  "WIDGET_PROP_DELAY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_DELAY},
{"awtk/TWidgetProp",  "WIDGET_PROP_IS_KEYBOARD",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_IS_KEYBOARD},
{"awtk/TWidgetProp",  "WIDGET_PROP_FOCUSED",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FOCUSED},
{"awtk/TWidgetProp",  "WIDGET_PROP_FOCUS",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FOCUS},
{"awtk/TWidgetProp",  "WIDGET_PROP_FOCUSABLE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_FOCUSABLE},
{"awtk/TWidgetProp",  "WIDGET_PROP_WITH_FOCUS_STATE",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_WITH_FOCUS_STATE},
{"awtk/TWidgetProp",  "WIDGET_PROP_MOVE_FOCUS_PREV_KEY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_PREV_KEY},
{"awtk/TWidgetProp",  "WIDGET_PROP_MOVE_FOCUS_NEXT_KEY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_NEXT_KEY},
{"awtk/TWidgetProp",  "WIDGET_PROP_MOVE_FOCUS_UP_KEY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_UP_KEY},
{"awtk/TWidgetProp",  "WIDGET_PROP_MOVE_FOCUS_DOWN_KEY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_DOWN_KEY},
{"awtk/TWidgetProp",  "WIDGET_PROP_MOVE_FOCUS_LEFT_KEY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_LEFT_KEY},
{"awtk/TWidgetProp",  "WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY",  "()Ljava/lang/String;",  awtk_TWidgetProp_WIDGET_PROP_MOVE_FOCUS_RIGHT_KEY},
{"awtk/TWidgetType",  "WIDGET_TYPE_NONE",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_NONE},
{"awtk/TWidgetType",  "WIDGET_TYPE_WINDOW_MANAGER",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_WINDOW_MANAGER},
{"awtk/TWidgetType",  "WIDGET_TYPE_NORMAL_WINDOW",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_NORMAL_WINDOW},
{"awtk/TWidgetType",  "WIDGET_TYPE_OVERLAY",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_OVERLAY},
{"awtk/TWidgetType",  "WIDGET_TYPE_TOOL_BAR",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_TOOL_BAR},
{"awtk/TWidgetType",  "WIDGET_TYPE_DIALOG",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_DIALOG},
{"awtk/TWidgetType",  "WIDGET_TYPE_POPUP",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_POPUP},
{"awtk/TWidgetType",  "WIDGET_TYPE_SYSTEM_BAR",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SYSTEM_BAR},
{"awtk/TWidgetType",  "WIDGET_TYPE_SYSTEM_BAR_BOTTOM",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SYSTEM_BAR_BOTTOM},
{"awtk/TWidgetType",  "WIDGET_TYPE_SPRITE",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SPRITE},
{"awtk/TWidgetType",  "WIDGET_TYPE_KEYBOARD",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_KEYBOARD},
{"awtk/TWidgetType",  "WIDGET_TYPE_DND",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_DND},
{"awtk/TWidgetType",  "WIDGET_TYPE_LABEL",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_LABEL},
{"awtk/TWidgetType",  "WIDGET_TYPE_BUTTON",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_BUTTON},
{"awtk/TWidgetType",  "WIDGET_TYPE_IMAGE",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_IMAGE},
{"awtk/TWidgetType",  "WIDGET_TYPE_EDIT",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_EDIT},
{"awtk/TWidgetType",  "WIDGET_TYPE_PROGRESS_BAR",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_PROGRESS_BAR},
{"awtk/TWidgetType",  "WIDGET_TYPE_GROUP_BOX",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_GROUP_BOX},
{"awtk/TWidgetType",  "WIDGET_TYPE_CHECK_BUTTON",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_CHECK_BUTTON},
{"awtk/TWidgetType",  "WIDGET_TYPE_RADIO_BUTTON",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_RADIO_BUTTON},
{"awtk/TWidgetType",  "WIDGET_TYPE_DIALOG_TITLE",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_DIALOG_TITLE},
{"awtk/TWidgetType",  "WIDGET_TYPE_DIALOG_CLIENT",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_DIALOG_CLIENT},
{"awtk/TWidgetType",  "WIDGET_TYPE_SLIDER",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SLIDER},
{"awtk/TWidgetType",  "WIDGET_TYPE_VIEW",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_VIEW},
{"awtk/TWidgetType",  "WIDGET_TYPE_COMBO_BOX",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_COMBO_BOX},
{"awtk/TWidgetType",  "WIDGET_TYPE_COMBO_BOX_ITEM",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_COMBO_BOX_ITEM},
{"awtk/TWidgetType",  "WIDGET_TYPE_SLIDE_VIEW",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SLIDE_VIEW},
{"awtk/TWidgetType",  "WIDGET_TYPE_SLIDE_INDICATOR",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SLIDE_INDICATOR},
{"awtk/TWidgetType",  "WIDGET_TYPE_SLIDE_INDICATOR_ARC",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SLIDE_INDICATOR_ARC},
{"awtk/TWidgetType",  "WIDGET_TYPE_PAGES",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_PAGES},
{"awtk/TWidgetType",  "WIDGET_TYPE_TAB_BUTTON",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_TAB_BUTTON},
{"awtk/TWidgetType",  "WIDGET_TYPE_TAB_CONTROL",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_TAB_CONTROL},
{"awtk/TWidgetType",  "WIDGET_TYPE_TAB_BUTTON_GROUP",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_TAB_BUTTON_GROUP},
{"awtk/TWidgetType",  "WIDGET_TYPE_BUTTON_GROUP",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_BUTTON_GROUP},
{"awtk/TWidgetType",  "WIDGET_TYPE_CANDIDATES",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_CANDIDATES},
{"awtk/TWidgetType",  "WIDGET_TYPE_SPIN_BOX",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SPIN_BOX},
{"awtk/TWidgetType",  "WIDGET_TYPE_DRAGGER",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_DRAGGER},
{"awtk/TWidgetType",  "WIDGET_TYPE_SCROLL_BAR",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SCROLL_BAR},
{"awtk/TWidgetType",  "WIDGET_TYPE_SCROLL_BAR_DESKTOP",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SCROLL_BAR_DESKTOP},
{"awtk/TWidgetType",  "WIDGET_TYPE_SCROLL_BAR_MOBILE",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SCROLL_BAR_MOBILE},
{"awtk/TWidgetType",  "WIDGET_TYPE_SCROLL_VIEW",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_SCROLL_VIEW},
{"awtk/TWidgetType",  "WIDGET_TYPE_LIST_VIEW",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_LIST_VIEW},
{"awtk/TWidgetType",  "WIDGET_TYPE_LIST_VIEW_H",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_LIST_VIEW_H},
{"awtk/TWidgetType",  "WIDGET_TYPE_LIST_ITEM",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_LIST_ITEM},
{"awtk/TWidgetType",  "WIDGET_TYPE_COLOR_PICKER",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_COLOR_PICKER},
{"awtk/TWidgetType",  "WIDGET_TYPE_COLOR_COMPONENT",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_COLOR_COMPONENT},
{"awtk/TWidgetType",  "WIDGET_TYPE_COLOR_TILE",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_COLOR_TILE},
{"awtk/TWidgetType",  "WIDGET_TYPE_CLIP_VIEW",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_CLIP_VIEW},
{"awtk/TWidgetType",  "WIDGET_TYPE_RICH_TEXT",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_RICH_TEXT},
{"awtk/TWidgetType",  "WIDGET_TYPE_APP_BAR",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_APP_BAR},
{"awtk/TWidgetType",  "WIDGET_TYPE_GRID",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_GRID},
{"awtk/TWidgetType",  "WIDGET_TYPE_GRID_ITEM",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_GRID_ITEM},
{"awtk/TWidgetType",  "WIDGET_TYPE_ROW",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_ROW},
{"awtk/TWidgetType",  "WIDGET_TYPE_COLUMN",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_COLUMN},
{"awtk/TWidgetType",  "WIDGET_TYPE_CALIBRATION_WIN",  "()Ljava/lang/String;",  awtk_TWidgetType_WIDGET_TYPE_CALIBRATION_WIN},
{"awtk/TWindowStage",  "WINDOW_STAGE_NONE",  "()I",  awtk_TWindowStage_WINDOW_STAGE_NONE},
{"awtk/TWindowStage",  "WINDOW_STAGE_LOADED",  "()I",  awtk_TWindowStage_WINDOW_STAGE_LOADED},
{"awtk/TWindowStage",  "WINDOW_STAGE_CREATED",  "()I",  awtk_TWindowStage_WINDOW_STAGE_CREATED},
{"awtk/TWindowStage",  "WINDOW_STAGE_OPENED",  "()I",  awtk_TWindowStage_WINDOW_STAGE_OPENED},
{"awtk/TWindowStage",  "WINDOW_STAGE_CLOSED",  "()I",  awtk_TWindowStage_WINDOW_STAGE_CLOSED},
{"awtk/TWindowStage",  "WINDOW_STAGE_SUSPEND",  "()I",  awtk_TWindowStage_WINDOW_STAGE_SUSPEND},
{"awtk/TWindowClosable",  "WINDOW_CLOSABLE_YES",  "()I",  awtk_TWindowClosable_WINDOW_CLOSABLE_YES},
{"awtk/TWindowClosable",  "WINDOW_CLOSABLE_NO",  "()I",  awtk_TWindowClosable_WINDOW_CLOSABLE_NO},
{"awtk/TWindowClosable",  "WINDOW_CLOSABLE_CONFIRM",  "()I",  awtk_TWindowClosable_WINDOW_CLOSABLE_CONFIRM},
{"awtk/TWidgetState",  "WIDGET_STATE_NONE",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_NONE},
{"awtk/TWidgetState",  "WIDGET_STATE_NORMAL",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_NORMAL},
{"awtk/TWidgetState",  "WIDGET_STATE_CHANGED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_CHANGED},
{"awtk/TWidgetState",  "WIDGET_STATE_PRESSED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_PRESSED},
{"awtk/TWidgetState",  "WIDGET_STATE_OVER",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_OVER},
{"awtk/TWidgetState",  "WIDGET_STATE_DISABLE",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_DISABLE},
{"awtk/TWidgetState",  "WIDGET_STATE_FOCUSED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_FOCUSED},
{"awtk/TWidgetState",  "WIDGET_STATE_CHECKED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_CHECKED},
{"awtk/TWidgetState",  "WIDGET_STATE_UNCHECKED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_UNCHECKED},
{"awtk/TWidgetState",  "WIDGET_STATE_EMPTY",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_EMPTY},
{"awtk/TWidgetState",  "WIDGET_STATE_EMPTY_FOCUS",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_EMPTY_FOCUS},
{"awtk/TWidgetState",  "WIDGET_STATE_ERROR",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_ERROR},
{"awtk/TWidgetState",  "WIDGET_STATE_SELECTED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_SELECTED},
{"awtk/TWidgetState",  "WIDGET_STATE_NORMAL_OF_CHECKED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_NORMAL_OF_CHECKED},
{"awtk/TWidgetState",  "WIDGET_STATE_PRESSED_OF_CHECKED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_PRESSED_OF_CHECKED},
{"awtk/TWidgetState",  "WIDGET_STATE_OVER_OF_CHECKED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_OVER_OF_CHECKED},
{"awtk/TWidgetState",  "WIDGET_STATE_DISABLE_OF_CHECKED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_DISABLE_OF_CHECKED},
{"awtk/TWidgetState",  "WIDGET_STATE_FOCUSED_OF_CHECKED",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_FOCUSED_OF_CHECKED},
{"awtk/TWidgetState",  "WIDGET_STATE_NORMAL_OF_ACTIVE",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_NORMAL_OF_ACTIVE},
{"awtk/TWidgetState",  "WIDGET_STATE_PRESSED_OF_ACTIVE",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_PRESSED_OF_ACTIVE},
{"awtk/TWidgetState",  "WIDGET_STATE_OVER_OF_ACTIVE",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_OVER_OF_ACTIVE},
{"awtk/TWidgetState",  "WIDGET_STATE_DISABLE_OF_ACTIVE",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_DISABLE_OF_ACTIVE},
{"awtk/TWidgetState",  "WIDGET_STATE_FOCUSED_OF_ACTIVE",  "()Ljava/lang/String;",  awtk_TWidgetState_WIDGET_STATE_FOCUSED_OF_ACTIVE},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_DEFAULT",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_DEFAULT},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_EDIT",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_EDIT},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_HAND",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_HAND},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_WAIT",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_WAIT},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_CROSS",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_CROSS},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_NO",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_NO},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_SIZENWSE",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_SIZENWSE},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_SIZENESW",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_SIZENESW},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_SIZEWE",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_SIZEWE},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_SIZENS",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_SIZENS},
{"awtk/TWidgetCursor",  "WIDGET_CURSOR_SIZEALL",  "()Ljava/lang/String;",  awtk_TWidgetCursor_WIDGET_CURSOR_SIZEALL},
{"awtk/TWidget",  "widget_count_children",  "(J)I",  awtk_TWidget_widget_count_children},
{"awtk/TWidget",  "widget_get_child",  "(JI)J",  awtk_TWidget_widget_get_child},
{"awtk/TWidget",  "widget_get_focused_widget",  "(J)J",  awtk_TWidget_widget_get_focused_widget},
{"awtk/TWidget",  "widget_get_native_window",  "(J)J",  awtk_TWidget_widget_get_native_window},
{"awtk/TWidget",  "widget_index_of",  "(J)I",  awtk_TWidget_widget_index_of},
{"awtk/TWidget",  "widget_close_window",  "(J)I",  awtk_TWidget_widget_close_window},
{"awtk/TWidget",  "widget_back",  "(J)I",  awtk_TWidget_widget_back},
{"awtk/TWidget",  "widget_back_to_home",  "(J)I",  awtk_TWidget_widget_back_to_home},
{"awtk/TWidget",  "widget_move",  "(JII)I",  awtk_TWidget_widget_move},
{"awtk/TWidget",  "widget_resize",  "(JII)I",  awtk_TWidget_widget_resize},
{"awtk/TWidget",  "widget_move_resize",  "(JIIII)I",  awtk_TWidget_widget_move_resize},
{"awtk/TWidget",  "widget_set_value",  "(JI)I",  awtk_TWidget_widget_set_value},
{"awtk/TWidget",  "widget_animate_value_to",  "(JII)I",  awtk_TWidget_widget_animate_value_to},
{"awtk/TWidget",  "widget_add_value",  "(JI)I",  awtk_TWidget_widget_add_value},
{"awtk/TWidget",  "widget_is_style_exist",  "(JLjava/lang/String;Ljava/lang/String;)Z",  awtk_TWidget_widget_is_style_exist},
{"awtk/TWidget",  "widget_use_style",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_use_style},
{"awtk/TWidget",  "widget_set_text_utf8",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_text_utf8},
{"awtk/TWidget",  "widget_set_child_text_utf8",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TWidget_widget_set_child_text_utf8},
{"awtk/TWidget",  "widget_set_child_text_with_double",  "(JLjava/lang/String;Ljava/lang/String;F)I",  awtk_TWidget_widget_set_child_text_with_double},
{"awtk/TWidget",  "widget_set_child_text_with_int",  "(JLjava/lang/String;Ljava/lang/String;I)I",  awtk_TWidget_widget_set_child_text_with_int},
{"awtk/TWidget",  "widget_set_tr_text",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_tr_text},
{"awtk/TWidget",  "widget_get_value",  "(J)I",  awtk_TWidget_widget_get_value},
{"awtk/TWidget",  "widget_get_enable",  "(J)Z",  awtk_TWidget_widget_get_enable},
{"awtk/TWidget",  "widget_get_floating",  "(J)Z",  awtk_TWidget_widget_get_floating},
{"awtk/TWidget",  "widget_get_auto_adjust_size",  "(J)Z",  awtk_TWidget_widget_get_auto_adjust_size},
{"awtk/TWidget",  "widget_get_with_focus_state",  "(J)Z",  awtk_TWidget_widget_get_with_focus_state},
{"awtk/TWidget",  "widget_get_focusable",  "(J)Z",  awtk_TWidget_widget_get_focusable},
{"awtk/TWidget",  "widget_get_sensitive",  "(J)Z",  awtk_TWidget_widget_get_sensitive},
{"awtk/TWidget",  "widget_get_visible",  "(J)Z",  awtk_TWidget_widget_get_visible},
{"awtk/TWidget",  "widget_get_feedback",  "(J)Z",  awtk_TWidget_widget_get_feedback},
{"awtk/TWidget",  "widget_get_text",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_get_text},
{"awtk/TWidget",  "widget_set_name",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_name},
{"awtk/TWidget",  "widget_set_theme",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_theme},
{"awtk/TWidget",  "widget_set_pointer_cursor",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_pointer_cursor},
{"awtk/TWidget",  "widget_set_animation",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_animation},
{"awtk/TWidget",  "widget_create_animator",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_create_animator},
{"awtk/TWidget",  "widget_start_animator",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_start_animator},
{"awtk/TWidget",  "widget_set_animator_time_scale",  "(JLjava/lang/String;F)I",  awtk_TWidget_widget_set_animator_time_scale},
{"awtk/TWidget",  "widget_pause_animator",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_pause_animator},
{"awtk/TWidget",  "widget_stop_animator",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_stop_animator},
{"awtk/TWidget",  "widget_destroy_animator",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_destroy_animator},
{"awtk/TWidget",  "widget_set_enable",  "(JZ)I",  awtk_TWidget_widget_set_enable},
{"awtk/TWidget",  "widget_set_feedback",  "(JZ)I",  awtk_TWidget_widget_set_feedback},
{"awtk/TWidget",  "widget_set_auto_adjust_size",  "(JZ)I",  awtk_TWidget_widget_set_auto_adjust_size},
{"awtk/TWidget",  "widget_set_floating",  "(JZ)I",  awtk_TWidget_widget_set_floating},
{"awtk/TWidget",  "widget_set_focused",  "(JZ)I",  awtk_TWidget_widget_set_focused},
{"awtk/TWidget",  "widget_set_focusable",  "(JZ)I",  awtk_TWidget_widget_set_focusable},
{"awtk/TWidget",  "widget_set_state",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_state},
{"awtk/TWidget",  "widget_set_opacity",  "(JI)I",  awtk_TWidget_widget_set_opacity},
{"awtk/TWidget",  "widget_set_dirty_rect_tolerance",  "(JI)I",  awtk_TWidget_widget_set_dirty_rect_tolerance},
{"awtk/TWidget",  "widget_destroy_children",  "(J)I",  awtk_TWidget_widget_destroy_children},
{"awtk/TWidget",  "widget_add_child",  "(JJ)I",  awtk_TWidget_widget_add_child},
{"awtk/TWidget",  "widget_remove_child",  "(JJ)I",  awtk_TWidget_widget_remove_child},
{"awtk/TWidget",  "widget_insert_child",  "(JIJ)I",  awtk_TWidget_widget_insert_child},
{"awtk/TWidget",  "widget_restack",  "(JI)I",  awtk_TWidget_widget_restack},
{"awtk/TWidget",  "widget_child",  "(JLjava/lang/String;)J",  awtk_TWidget_widget_child},
{"awtk/TWidget",  "widget_lookup",  "(JLjava/lang/String;Z)J",  awtk_TWidget_widget_lookup},
{"awtk/TWidget",  "widget_lookup_by_type",  "(JLjava/lang/String;Z)J",  awtk_TWidget_widget_lookup_by_type},
{"awtk/TWidget",  "widget_set_visible",  "(JZ)I",  awtk_TWidget_widget_set_visible},
{"awtk/TWidget",  "widget_set_visible_only",  "(JZ)I",  awtk_TWidget_widget_set_visible_only},
{"awtk/TWidget",  "widget_set_sensitive",  "(JZ)I",  awtk_TWidget_widget_set_sensitive},
{"awtk/TWidget",  "widget_on",  "(JILawtk/TOnEvent;J)I",  awtk_TWidget_widget_on},
{"awtk/TWidget",  "widget_off",  "(JI)I",  awtk_TWidget_widget_off},
{"awtk/TWidget",  "widget_invalidate_force",  "(JJ)I",  awtk_TWidget_widget_invalidate_force},
{"awtk/TWidget",  "widget_set_prop_str",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TWidget_widget_set_prop_str},
{"awtk/TWidget",  "widget_get_prop_str",  "(JLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;",  awtk_TWidget_widget_get_prop_str},
{"awtk/TWidget",  "widget_set_prop_pointer",  "(JLjava/lang/String;J)I",  awtk_TWidget_widget_set_prop_pointer},
{"awtk/TWidget",  "widget_get_prop_pointer",  "(JLjava/lang/String;)J",  awtk_TWidget_widget_get_prop_pointer},
{"awtk/TWidget",  "widget_set_prop_int",  "(JLjava/lang/String;I)I",  awtk_TWidget_widget_set_prop_int},
{"awtk/TWidget",  "widget_get_prop_int",  "(JLjava/lang/String;I)I",  awtk_TWidget_widget_get_prop_int},
{"awtk/TWidget",  "widget_set_prop_bool",  "(JLjava/lang/String;Z)I",  awtk_TWidget_widget_set_prop_bool},
{"awtk/TWidget",  "widget_get_prop_bool",  "(JLjava/lang/String;Z)Z",  awtk_TWidget_widget_get_prop_bool},
{"awtk/TWidget",  "widget_is_window_opened",  "(J)Z",  awtk_TWidget_widget_is_window_opened},
{"awtk/TWidget",  "widget_is_window_created",  "(J)Z",  awtk_TWidget_widget_is_window_created},
{"awtk/TWidget",  "widget_is_parent_of",  "(JJ)Z",  awtk_TWidget_widget_is_parent_of},
{"awtk/TWidget",  "widget_is_direct_parent_of",  "(JJ)Z",  awtk_TWidget_widget_is_direct_parent_of},
{"awtk/TWidget",  "widget_is_window",  "(J)Z",  awtk_TWidget_widget_is_window},
{"awtk/TWidget",  "widget_is_system_bar",  "(J)Z",  awtk_TWidget_widget_is_system_bar},
{"awtk/TWidget",  "widget_is_normal_window",  "(J)Z",  awtk_TWidget_widget_is_normal_window},
{"awtk/TWidget",  "widget_is_dialog",  "(J)Z",  awtk_TWidget_widget_is_dialog},
{"awtk/TWidget",  "widget_is_popup",  "(J)Z",  awtk_TWidget_widget_is_popup},
{"awtk/TWidget",  "widget_is_overlay",  "(J)Z",  awtk_TWidget_widget_is_overlay},
{"awtk/TWidget",  "widget_is_opened_dialog",  "(J)Z",  awtk_TWidget_widget_is_opened_dialog},
{"awtk/TWidget",  "widget_is_opened_popup",  "(J)Z",  awtk_TWidget_widget_is_opened_popup},
{"awtk/TWidget",  "widget_is_keyboard",  "(J)Z",  awtk_TWidget_widget_is_keyboard},
{"awtk/TWidget",  "widget_is_designing_window",  "(J)Z",  awtk_TWidget_widget_is_designing_window},
{"awtk/TWidget",  "widget_is_window_manager",  "(J)Z",  awtk_TWidget_widget_is_window_manager},
{"awtk/TWidget",  "widget_foreach",  "(JLawtk/TOnWidget;J)I",  awtk_TWidget_widget_foreach},
{"awtk/TWidget",  "widget_get_window",  "(J)J",  awtk_TWidget_widget_get_window},
{"awtk/TWidget",  "widget_get_window_manager",  "(J)J",  awtk_TWidget_widget_get_window_manager},
{"awtk/TWidget",  "widget_get_type",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_get_type},
{"awtk/TWidget",  "widget_clone",  "(JJ)J",  awtk_TWidget_widget_clone},
{"awtk/TWidget",  "widget_equal",  "(JJ)Z",  awtk_TWidget_widget_equal},
{"awtk/TWidget",  "widget_cast",  "(J)J",  awtk_TWidget_widget_cast},
{"awtk/TWidget",  "widget_destroy",  "(J)I",  awtk_TWidget_widget_destroy},
{"awtk/TWidget",  "widget_destroy_async",  "(J)I",  awtk_TWidget_widget_destroy_async},
{"awtk/TWidget",  "widget_unref",  "(J)I",  awtk_TWidget_widget_unref},
{"awtk/TWidget",  "widget_stroke_border_rect",  "(JJJ)I",  awtk_TWidget_widget_stroke_border_rect},
{"awtk/TWidget",  "widget_fill_bg_rect",  "(JJJI)I",  awtk_TWidget_widget_fill_bg_rect},
{"awtk/TWidget",  "widget_fill_fg_rect",  "(JJJI)I",  awtk_TWidget_widget_fill_fg_rect},
{"awtk/TWidget",  "widget_dispatch_to_target",  "(JJ)I",  awtk_TWidget_widget_dispatch_to_target},
{"awtk/TWidget",  "widget_dispatch_to_key_target",  "(JJ)I",  awtk_TWidget_widget_dispatch_to_key_target},
{"awtk/TWidget",  "widget_get_style_type",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_get_style_type},
{"awtk/TWidget",  "widget_update_style",  "(J)I",  awtk_TWidget_widget_update_style},
{"awtk/TWidget",  "widget_update_style_recursive",  "(J)I",  awtk_TWidget_widget_update_style_recursive},
{"awtk/TWidget",  "widget_set_as_key_target",  "(J)I",  awtk_TWidget_widget_set_as_key_target},
{"awtk/TWidget",  "widget_focus_next",  "(J)I",  awtk_TWidget_widget_focus_next},
{"awtk/TWidget",  "widget_focus_prev",  "(J)I",  awtk_TWidget_widget_focus_prev},
{"awtk/TWidget",  "widget_get_state_for_style",  "(JZZ)Ljava/lang/String;",  awtk_TWidget_widget_get_state_for_style},
{"awtk/TWidget",  "widget_layout",  "(J)I",  awtk_TWidget_widget_layout},
{"awtk/TWidget",  "widget_set_self_layout",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_self_layout},
{"awtk/TWidget",  "widget_set_children_layout",  "(JLjava/lang/String;)I",  awtk_TWidget_widget_set_children_layout},
{"awtk/TWidget",  "widget_set_self_layout_params",  "(JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",  awtk_TWidget_widget_set_self_layout_params},
{"awtk/TWidget",  "widget_set_style_int",  "(JLjava/lang/String;I)I",  awtk_TWidget_widget_set_style_int},
{"awtk/TWidget",  "widget_set_style_str",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TWidget_widget_set_style_str},
{"awtk/TWidget",  "widget_set_style_color",  "(JLjava/lang/String;I)I",  awtk_TWidget_widget_set_style_color},
{"awtk/TWidget",  "widget_t_get_prop_x",  "(J)I",  awtk_TWidget_widget_t_get_prop_x},
{"awtk/TWidget",  "widget_t_get_prop_y",  "(J)I",  awtk_TWidget_widget_t_get_prop_y},
{"awtk/TWidget",  "widget_t_get_prop_w",  "(J)I",  awtk_TWidget_widget_t_get_prop_w},
{"awtk/TWidget",  "widget_t_get_prop_h",  "(J)I",  awtk_TWidget_widget_t_get_prop_h},
{"awtk/TWidget",  "widget_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_t_get_prop_name},
{"awtk/TWidget",  "widget_t_get_prop_pointer_cursor",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_t_get_prop_pointer_cursor},
{"awtk/TWidget",  "widget_t_get_prop_tr_text",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_t_get_prop_tr_text},
{"awtk/TWidget",  "widget_t_get_prop_style",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_t_get_prop_style},
{"awtk/TWidget",  "widget_t_get_prop_animation",  "(J)Ljava/lang/String;",  awtk_TWidget_widget_t_get_prop_animation},
{"awtk/TWidget",  "widget_t_get_prop_enable",  "(J)Z",  awtk_TWidget_widget_t_get_prop_enable},
{"awtk/TWidget",  "widget_t_get_prop_feedback",  "(J)Z",  awtk_TWidget_widget_t_get_prop_feedback},
{"awtk/TWidget",  "widget_t_get_prop_visible",  "(J)Z",  awtk_TWidget_widget_t_get_prop_visible},
{"awtk/TWidget",  "widget_t_get_prop_sensitive",  "(J)Z",  awtk_TWidget_widget_t_get_prop_sensitive},
{"awtk/TWidget",  "widget_t_get_prop_focusable",  "(J)Z",  awtk_TWidget_widget_t_get_prop_focusable},
{"awtk/TWidget",  "widget_t_get_prop_with_focus_state",  "(J)Z",  awtk_TWidget_widget_t_get_prop_with_focus_state},
{"awtk/TWidget",  "widget_t_get_prop_auto_adjust_size",  "(J)Z",  awtk_TWidget_widget_t_get_prop_auto_adjust_size},
{"awtk/TWidget",  "widget_t_get_prop_floating",  "(J)Z",  awtk_TWidget_widget_t_get_prop_floating},
{"awtk/TWidget",  "widget_t_get_prop_dirty_rect_tolerance",  "(J)I",  awtk_TWidget_widget_t_get_prop_dirty_rect_tolerance},
{"awtk/TWidget",  "widget_t_get_prop_parent",  "(J)J",  awtk_TWidget_widget_t_get_prop_parent},
{"awtk/TAppConf",  "app_conf_save",  "()I",  awtk_TAppConf_app_conf_save},
{"awtk/TAppConf",  "app_conf_reload",  "()I",  awtk_TAppConf_app_conf_reload},
{"awtk/TAppConf",  "app_conf_deinit",  "()I",  awtk_TAppConf_app_conf_deinit},
{"awtk/TAppConf",  "app_conf_exist",  "(Ljava/lang/String;)Z",  awtk_TAppConf_app_conf_exist},
{"awtk/TAppConf",  "app_conf_set_int",  "(Ljava/lang/String;I)I",  awtk_TAppConf_app_conf_set_int},
{"awtk/TAppConf",  "app_conf_set_int64",  "(Ljava/lang/String;J)I",  awtk_TAppConf_app_conf_set_int64},
{"awtk/TAppConf",  "app_conf_set_bool",  "(Ljava/lang/String;Z)I",  awtk_TAppConf_app_conf_set_bool},
{"awtk/TAppConf",  "app_conf_set_double",  "(Ljava/lang/String;F)I",  awtk_TAppConf_app_conf_set_double},
{"awtk/TAppConf",  "app_conf_set_str",  "(Ljava/lang/String;Ljava/lang/String;)I",  awtk_TAppConf_app_conf_set_str},
{"awtk/TAppConf",  "app_conf_get_int",  "(Ljava/lang/String;I)I",  awtk_TAppConf_app_conf_get_int},
{"awtk/TAppConf",  "app_conf_get_int64",  "(Ljava/lang/String;J)J",  awtk_TAppConf_app_conf_get_int64},
{"awtk/TAppConf",  "app_conf_get_bool",  "(Ljava/lang/String;Z)Z",  awtk_TAppConf_app_conf_get_bool},
{"awtk/TAppConf",  "app_conf_get_double",  "(Ljava/lang/String;F)F",  awtk_TAppConf_app_conf_get_double},
{"awtk/TAppConf",  "app_conf_get_str",  "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",  awtk_TAppConf_app_conf_get_str},
{"awtk/TAppConf",  "app_conf_remove",  "(Ljava/lang/String;)I",  awtk_TAppConf_app_conf_remove},
{"awtk/TIndicatorDefaultPaint",  "INDICATOR_DEFAULT_PAINT_AUTO",  "()I",  awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_AUTO},
{"awtk/TIndicatorDefaultPaint",  "INDICATOR_DEFAULT_PAINT_FILL_DOT",  "()I",  awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_FILL_DOT},
{"awtk/TIndicatorDefaultPaint",  "INDICATOR_DEFAULT_PAINT_STROKE_DOT",  "()I",  awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_STROKE_DOT},
{"awtk/TIndicatorDefaultPaint",  "INDICATOR_DEFAULT_PAINT_FILL_RECT",  "()I",  awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_FILL_RECT},
{"awtk/TIndicatorDefaultPaint",  "INDICATOR_DEFAULT_PAINT_STROKE_RECT",  "()I",  awtk_TIndicatorDefaultPaint_INDICATOR_DEFAULT_PAINT_STROKE_RECT},
{"awtk/TVpageEvent",  "EVT_VPAGE_WILL_OPEN",  "()I",  awtk_TVpageEvent_EVT_VPAGE_WILL_OPEN},
{"awtk/TVpageEvent",  "EVT_VPAGE_OPEN",  "()I",  awtk_TVpageEvent_EVT_VPAGE_OPEN},
{"awtk/TVpageEvent",  "EVT_VPAGE_CLOSE",  "()I",  awtk_TVpageEvent_EVT_VPAGE_CLOSE},
{"awtk/TAssetType",  "ASSET_TYPE_NONE",  "()I",  awtk_TAssetType_ASSET_TYPE_NONE},
{"awtk/TAssetType",  "ASSET_TYPE_FONT",  "()I",  awtk_TAssetType_ASSET_TYPE_FONT},
{"awtk/TAssetType",  "ASSET_TYPE_IMAGE",  "()I",  awtk_TAssetType_ASSET_TYPE_IMAGE},
{"awtk/TAssetType",  "ASSET_TYPE_STYLE",  "()I",  awtk_TAssetType_ASSET_TYPE_STYLE},
{"awtk/TAssetType",  "ASSET_TYPE_UI",  "()I",  awtk_TAssetType_ASSET_TYPE_UI},
{"awtk/TAssetType",  "ASSET_TYPE_XML",  "()I",  awtk_TAssetType_ASSET_TYPE_XML},
{"awtk/TAssetType",  "ASSET_TYPE_STRINGS",  "()I",  awtk_TAssetType_ASSET_TYPE_STRINGS},
{"awtk/TAssetType",  "ASSET_TYPE_SCRIPT",  "()I",  awtk_TAssetType_ASSET_TYPE_SCRIPT},
{"awtk/TAssetType",  "ASSET_TYPE_FLOW",  "()I",  awtk_TAssetType_ASSET_TYPE_FLOW},
{"awtk/TAssetType",  "ASSET_TYPE_DATA",  "()I",  awtk_TAssetType_ASSET_TYPE_DATA},
{"awtk/TAssetInfo",  "asset_info_get_type",  "(J)I",  awtk_TAssetInfo_asset_info_get_type},
{"awtk/TAssetInfo",  "asset_info_get_name",  "(J)Ljava/lang/String;",  awtk_TAssetInfo_asset_info_get_name},
{"awtk/TAssetInfo",  "asset_info_t_get_prop_type",  "(J)I",  awtk_TAssetInfo_asset_info_t_get_prop_type},
{"awtk/TAssetInfo",  "asset_info_t_get_prop_subtype",  "(J)I",  awtk_TAssetInfo_asset_info_t_get_prop_subtype},
{"awtk/TAssetInfo",  "asset_info_t_get_prop_is_in_rom",  "(J)I",  awtk_TAssetInfo_asset_info_t_get_prop_is_in_rom},
{"awtk/TAssetInfo",  "asset_info_t_get_prop_size",  "(J)I",  awtk_TAssetInfo_asset_info_t_get_prop_size},
{"awtk/TAssetInfo",  "asset_info_t_get_prop_refcount",  "(J)I",  awtk_TAssetInfo_asset_info_t_get_prop_refcount},
{"awtk/TAssetInfo",  "asset_info_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TAssetInfo_asset_info_t_get_prop_name},
{"awtk/TColor",  "color_create",  "(IIII)J",  awtk_TColor_color_create},
{"awtk/TColor",  "color_from_str",  "(JLjava/lang/String;)J",  awtk_TColor_color_from_str},
{"awtk/TColor",  "color_r",  "(J)I",  awtk_TColor_color_r},
{"awtk/TColor",  "color_g",  "(J)I",  awtk_TColor_color_g},
{"awtk/TColor",  "color_b",  "(J)I",  awtk_TColor_color_b},
{"awtk/TColor",  "color_a",  "(J)I",  awtk_TColor_color_a},
{"awtk/TColor",  "color_get_color",  "(J)I",  awtk_TColor_color_get_color},
{"awtk/TColor",  "color_cast",  "(J)J",  awtk_TColor_color_cast},
{"awtk/TColor",  "color_t_set_prop_color",  "(JI)I",  awtk_TColor_color_t_set_prop_color},
{"awtk/TColor",  "color_t_get_prop_color",  "(J)I",  awtk_TColor_color_t_get_prop_color},
{"awtk/TDateTime",  "date_time_create",  "()J",  awtk_TDateTime_date_time_create},
{"awtk/TDateTime",  "date_time_set_year",  "(JI)I",  awtk_TDateTime_date_time_set_year},
{"awtk/TDateTime",  "date_time_set_month",  "(JI)I",  awtk_TDateTime_date_time_set_month},
{"awtk/TDateTime",  "date_time_set_day",  "(JI)I",  awtk_TDateTime_date_time_set_day},
{"awtk/TDateTime",  "date_time_set_hour",  "(JI)I",  awtk_TDateTime_date_time_set_hour},
{"awtk/TDateTime",  "date_time_set_minute",  "(JI)I",  awtk_TDateTime_date_time_set_minute},
{"awtk/TDateTime",  "date_time_set_second",  "(JI)I",  awtk_TDateTime_date_time_set_second},
{"awtk/TDateTime",  "date_time_set",  "(J)I",  awtk_TDateTime_date_time_set},
{"awtk/TDateTime",  "date_time_from_time",  "(JJ)I",  awtk_TDateTime_date_time_from_time},
{"awtk/TDateTime",  "date_time_to_time",  "(J)J",  awtk_TDateTime_date_time_to_time},
{"awtk/TDateTime",  "date_time_add_delta",  "(JJ)I",  awtk_TDateTime_date_time_add_delta},
{"awtk/TDateTime",  "date_time_is_leap",  "(I)Z",  awtk_TDateTime_date_time_is_leap},
{"awtk/TDateTime",  "date_time_get_days",  "(II)I",  awtk_TDateTime_date_time_get_days},
{"awtk/TDateTime",  "date_time_get_wday",  "(III)I",  awtk_TDateTime_date_time_get_wday},
{"awtk/TDateTime",  "date_time_get_month_name",  "(I)Ljava/lang/String;",  awtk_TDateTime_date_time_get_month_name},
{"awtk/TDateTime",  "date_time_get_wday_name",  "(I)Ljava/lang/String;",  awtk_TDateTime_date_time_get_wday_name},
{"awtk/TDateTime",  "date_time_t_get_prop_second",  "(J)I",  awtk_TDateTime_date_time_t_get_prop_second},
{"awtk/TDateTime",  "date_time_t_get_prop_minute",  "(J)I",  awtk_TDateTime_date_time_t_get_prop_minute},
{"awtk/TDateTime",  "date_time_t_get_prop_hour",  "(J)I",  awtk_TDateTime_date_time_t_get_prop_hour},
{"awtk/TDateTime",  "date_time_t_get_prop_day",  "(J)I",  awtk_TDateTime_date_time_t_get_prop_day},
{"awtk/TDateTime",  "date_time_t_get_prop_wday",  "(J)I",  awtk_TDateTime_date_time_t_get_prop_wday},
{"awtk/TDateTime",  "date_time_t_get_prop_month",  "(J)I",  awtk_TDateTime_date_time_t_get_prop_month},
{"awtk/TDateTime",  "date_time_t_get_prop_year",  "(J)I",  awtk_TDateTime_date_time_t_get_prop_year},
{"awtk/TEasingType",  "EASING_LINEAR",  "()I",  awtk_TEasingType_EASING_LINEAR},
{"awtk/TEasingType",  "EASING_QUADRATIC_IN",  "()I",  awtk_TEasingType_EASING_QUADRATIC_IN},
{"awtk/TEasingType",  "EASING_QUADRATIC_OUT",  "()I",  awtk_TEasingType_EASING_QUADRATIC_OUT},
{"awtk/TEasingType",  "EASING_QUADRATIC_INOUT",  "()I",  awtk_TEasingType_EASING_QUADRATIC_INOUT},
{"awtk/TEasingType",  "EASING_CUBIC_IN",  "()I",  awtk_TEasingType_EASING_CUBIC_IN},
{"awtk/TEasingType",  "EASING_CUBIC_OUT",  "()I",  awtk_TEasingType_EASING_CUBIC_OUT},
{"awtk/TEasingType",  "EASING_SIN_IN",  "()I",  awtk_TEasingType_EASING_SIN_IN},
{"awtk/TEasingType",  "EASING_SIN_OUT",  "()I",  awtk_TEasingType_EASING_SIN_OUT},
{"awtk/TEasingType",  "EASING_SIN_INOUT",  "()I",  awtk_TEasingType_EASING_SIN_INOUT},
{"awtk/TEasingType",  "EASING_POW_IN",  "()I",  awtk_TEasingType_EASING_POW_IN},
{"awtk/TEasingType",  "EASING_POW_OUT",  "()I",  awtk_TEasingType_EASING_POW_OUT},
{"awtk/TEasingType",  "EASING_POW_INOUT",  "()I",  awtk_TEasingType_EASING_POW_INOUT},
{"awtk/TEasingType",  "EASING_CIRCULAR_IN",  "()I",  awtk_TEasingType_EASING_CIRCULAR_IN},
{"awtk/TEasingType",  "EASING_CIRCULAR_OUT",  "()I",  awtk_TEasingType_EASING_CIRCULAR_OUT},
{"awtk/TEasingType",  "EASING_CIRCULAR_INOUT",  "()I",  awtk_TEasingType_EASING_CIRCULAR_INOUT},
{"awtk/TEasingType",  "EASING_ELASTIC_IN",  "()I",  awtk_TEasingType_EASING_ELASTIC_IN},
{"awtk/TEasingType",  "EASING_ELASTIC_OUT",  "()I",  awtk_TEasingType_EASING_ELASTIC_OUT},
{"awtk/TEasingType",  "EASING_ELASTIC_INOUT",  "()I",  awtk_TEasingType_EASING_ELASTIC_INOUT},
{"awtk/TEasingType",  "EASING_BACK_IN",  "()I",  awtk_TEasingType_EASING_BACK_IN},
{"awtk/TEasingType",  "EASING_BACK_OUT",  "()I",  awtk_TEasingType_EASING_BACK_OUT},
{"awtk/TEasingType",  "EASING_BACK_INOUT",  "()I",  awtk_TEasingType_EASING_BACK_INOUT},
{"awtk/TEasingType",  "EASING_BOUNCE_IN",  "()I",  awtk_TEasingType_EASING_BOUNCE_IN},
{"awtk/TEasingType",  "EASING_BOUNCE_OUT",  "()I",  awtk_TEasingType_EASING_BOUNCE_OUT},
{"awtk/TEasingType",  "EASING_BOUNCE_INOUT",  "()I",  awtk_TEasingType_EASING_BOUNCE_INOUT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_ENVOY",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_ENVOY},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_FRACTALS",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_FRACTALS},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_FUTURESPLASH",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_FUTURESPLASH},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_HTA",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_HTA},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_JSON",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_JSON},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_UBJSON",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_UBJSON},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_MAC_BINHEX40",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_MAC_BINHEX40},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_MSWORD",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_MSWORD},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_OCTET_STREAM",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_OCTET_STREAM},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_ODA",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_ODA},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_OLESCRIPT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_OLESCRIPT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_PDF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PDF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_PICS_RULES",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PICS_RULES},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_PKCS10",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PKCS10},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_PKIX_CRL",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_PKIX_CRL},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_POSTSCRIPT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_POSTSCRIPT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_RTF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_RTF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_EXCEL",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_EXCEL},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_OUTLOOK",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_OUTLOOK},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKICERTSTORE},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_PKISECCAT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKISECCAT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_PKISTL",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PKISTL},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_POWERPOINT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_POWERPOINT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_PROJECT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_PROJECT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_VND_MS_WORKS",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_VND_MS_WORKS},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_WINHLP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_WINHLP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_BCPIO",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_BCPIO},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_CDF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_CDF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_COMPRESS",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_COMPRESS},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_COMPRESSED",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_COMPRESSED},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_CPIO",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_CPIO},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_CSH",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_CSH},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_DIRECTOR",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_DIRECTOR},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_DVI",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_DVI},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_GTAR",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_GTAR},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_GZIP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_GZIP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_HDF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_HDF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_IPHONE",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_IPHONE},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_JAVASCRIPT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_JAVASCRIPT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_LATEX",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_LATEX},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSACCESS",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSACCESS},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSCARDFILE",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSCARDFILE},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSCLIP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSCLIP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSDOWNLOAD",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSDOWNLOAD},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSMEDIAVIEW",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSMEDIAVIEW},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSMETAFILE",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSMETAFILE},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSMONEY",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSMONEY},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSPUBLISHER",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSPUBLISHER},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSSCHEDULE",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSSCHEDULE},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSTERMINAL",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSTERMINAL},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_MSWRITE",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_MSWRITE},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_NETCDF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_NETCDF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_PERFMON",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_PERFMON},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_PKCS12",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_PKCS12},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_SH",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SH},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_SHAR",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SHAR},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SHOCKWAVE_FLASH},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_STUFFIT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_STUFFIT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_SV4CPIO",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SV4CPIO},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_SV4CRC",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_SV4CRC},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_TAR",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TAR},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_TCL",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TCL},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_TEX",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TEX},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_TEXINFO",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TEXINFO},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_TROFF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_TROFF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_X_USTAR",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_X_USTAR},
{"awtk/TMIME_TYPE",  "MIME_TYPE_APPLICATION_ZIP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_APPLICATION_ZIP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_AUDIO_BASIC",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_AUDIO_BASIC},
{"awtk/TMIME_TYPE",  "MIME_TYPE_AUDIO_MID",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_AUDIO_MID},
{"awtk/TMIME_TYPE",  "MIME_TYPE_AUDIO_MPEG",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_AUDIO_MPEG},
{"awtk/TMIME_TYPE",  "MIME_TYPE_AUDIO_X_AIFF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_AUDIO_X_AIFF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_AUDIO_X_MPEGURL",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_AUDIO_X_MPEGURL},
{"awtk/TMIME_TYPE",  "MIME_TYPE_AUDIO_X_WAV",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_AUDIO_X_WAV},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_BMP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_BMP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_CIS_COD",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_CIS_COD},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_GIF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_GIF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_IEF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_IEF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_JPEG",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_JPEG},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_PIPEG",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_PIPEG},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_SVG_XML",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_SVG_XML},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_TIFF",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_TIFF},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_X_CMX",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_CMX},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_X_ICON",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_ICON},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_X_RGB",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_RGB},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_X_XBITMAP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_XBITMAP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_X_XPIXMAP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_XPIXMAP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_IMAGE_X_XWINDOWDUMP",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_IMAGE_X_XWINDOWDUMP},
{"awtk/TMIME_TYPE",  "MIME_TYPE_MESSAGE_RFC822",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_MESSAGE_RFC822},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_CSS",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_CSS},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_H323",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_H323},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_HTML",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_HTML},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_IULS",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_IULS},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_PLAIN",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_PLAIN},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_RICHTEXT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_RICHTEXT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_SCRIPTLET",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_SCRIPTLET},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_WEBVIEWHTML",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_WEBVIEWHTML},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_X_COMPONENT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_X_COMPONENT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_X_SETEXT",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_X_SETEXT},
{"awtk/TMIME_TYPE",  "MIME_TYPE_TEXT_X_VCARD",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_TEXT_X_VCARD},
{"awtk/TMIME_TYPE",  "MIME_TYPE_VIDEO_MPEG",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_VIDEO_MPEG},
{"awtk/TMIME_TYPE",  "MIME_TYPE_VIDEO_QUICKTIME",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_VIDEO_QUICKTIME},
{"awtk/TMIME_TYPE",  "MIME_TYPE_VIDEO_X_MSVIDEO",  "()Ljava/lang/String;",  awtk_TMIME_TYPE_MIME_TYPE_VIDEO_X_MSVIDEO},
{"awtk/TNamedValue",  "named_value_create",  "()J",  awtk_TNamedValue_named_value_create},
{"awtk/TNamedValue",  "named_value_cast",  "(J)J",  awtk_TNamedValue_named_value_cast},
{"awtk/TNamedValue",  "named_value_set_name",  "(JLjava/lang/String;)I",  awtk_TNamedValue_named_value_set_name},
{"awtk/TNamedValue",  "named_value_set_value",  "(JJ)I",  awtk_TNamedValue_named_value_set_value},
{"awtk/TNamedValue",  "named_value_get_value",  "(J)J",  awtk_TNamedValue_named_value_get_value},
{"awtk/TNamedValue",  "named_value_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TNamedValue_named_value_t_get_prop_name},
{"awtk/TObjectCmd",  "OBJECT_CMD_SAVE",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_SAVE},
{"awtk/TObjectCmd",  "OBJECT_CMD_RELOAD",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_RELOAD},
{"awtk/TObjectCmd",  "OBJECT_CMD_MOVE_UP",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_MOVE_UP},
{"awtk/TObjectCmd",  "OBJECT_CMD_MOVE_DOWN",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_MOVE_DOWN},
{"awtk/TObjectCmd",  "OBJECT_CMD_REMOVE",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_REMOVE},
{"awtk/TObjectCmd",  "OBJECT_CMD_REMOVE_CHECKED",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_REMOVE_CHECKED},
{"awtk/TObjectCmd",  "OBJECT_CMD_CLEAR",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_CLEAR},
{"awtk/TObjectCmd",  "OBJECT_CMD_ADD",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_ADD},
{"awtk/TObjectCmd",  "OBJECT_CMD_DETAIL",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_DETAIL},
{"awtk/TObjectCmd",  "OBJECT_CMD_EDIT",  "()Ljava/lang/String;",  awtk_TObjectCmd_OBJECT_CMD_EDIT},
{"awtk/TObjectProp",  "OBJECT_PROP_SIZE",  "()Ljava/lang/String;",  awtk_TObjectProp_OBJECT_PROP_SIZE},
{"awtk/TObjectProp",  "OBJECT_PROP_CHECKED",  "()Ljava/lang/String;",  awtk_TObjectProp_OBJECT_PROP_CHECKED},
{"awtk/TRlog",  "rlog_create",  "(Ljava/lang/String;II)J",  awtk_TRlog_rlog_create},
{"awtk/TRlog",  "rlog_write",  "(JLjava/lang/String;)I",  awtk_TRlog_rlog_write},
{"awtk/TTimeNow",  "time_now_s",  "()J",  awtk_TTimeNow_time_now_s},
{"awtk/TTimeNow",  "time_now_ms",  "()J",  awtk_TTimeNow_time_now_ms},
{"awtk/TTimeNow",  "time_now_us",  "()J",  awtk_TTimeNow_time_now_us},
{"awtk/TRet",  "RET_OK",  "()I",  awtk_TRet_RET_OK},
{"awtk/TRet",  "RET_OOM",  "()I",  awtk_TRet_RET_OOM},
{"awtk/TRet",  "RET_FAIL",  "()I",  awtk_TRet_RET_FAIL},
{"awtk/TRet",  "RET_NOT_IMPL",  "()I",  awtk_TRet_RET_NOT_IMPL},
{"awtk/TRet",  "RET_QUIT",  "()I",  awtk_TRet_RET_QUIT},
{"awtk/TRet",  "RET_FOUND",  "()I",  awtk_TRet_RET_FOUND},
{"awtk/TRet",  "RET_BUSY",  "()I",  awtk_TRet_RET_BUSY},
{"awtk/TRet",  "RET_REMOVE",  "()I",  awtk_TRet_RET_REMOVE},
{"awtk/TRet",  "RET_REPEAT",  "()I",  awtk_TRet_RET_REPEAT},
{"awtk/TRet",  "RET_NOT_FOUND",  "()I",  awtk_TRet_RET_NOT_FOUND},
{"awtk/TRet",  "RET_DONE",  "()I",  awtk_TRet_RET_DONE},
{"awtk/TRet",  "RET_STOP",  "()I",  awtk_TRet_RET_STOP},
{"awtk/TRet",  "RET_SKIP",  "()I",  awtk_TRet_RET_SKIP},
{"awtk/TRet",  "RET_CONTINUE",  "()I",  awtk_TRet_RET_CONTINUE},
{"awtk/TRet",  "RET_OBJECT_CHANGED",  "()I",  awtk_TRet_RET_OBJECT_CHANGED},
{"awtk/TRet",  "RET_ITEMS_CHANGED",  "()I",  awtk_TRet_RET_ITEMS_CHANGED},
{"awtk/TRet",  "RET_BAD_PARAMS",  "()I",  awtk_TRet_RET_BAD_PARAMS},
{"awtk/TRet",  "RET_TIMEOUT",  "()I",  awtk_TRet_RET_TIMEOUT},
{"awtk/TRet",  "RET_CRC",  "()I",  awtk_TRet_RET_CRC},
{"awtk/TRet",  "RET_IO",  "()I",  awtk_TRet_RET_IO},
{"awtk/TRet",  "RET_EOS",  "()I",  awtk_TRet_RET_EOS},
{"awtk/TRet",  "RET_NOT_MODIFIED",  "()I",  awtk_TRet_RET_NOT_MODIFIED},
{"awtk/TValueType",  "VALUE_TYPE_INVALID",  "()I",  awtk_TValueType_VALUE_TYPE_INVALID},
{"awtk/TValueType",  "VALUE_TYPE_BOOL",  "()I",  awtk_TValueType_VALUE_TYPE_BOOL},
{"awtk/TValueType",  "VALUE_TYPE_INT8",  "()I",  awtk_TValueType_VALUE_TYPE_INT8},
{"awtk/TValueType",  "VALUE_TYPE_UINT8",  "()I",  awtk_TValueType_VALUE_TYPE_UINT8},
{"awtk/TValueType",  "VALUE_TYPE_INT16",  "()I",  awtk_TValueType_VALUE_TYPE_INT16},
{"awtk/TValueType",  "VALUE_TYPE_UINT16",  "()I",  awtk_TValueType_VALUE_TYPE_UINT16},
{"awtk/TValueType",  "VALUE_TYPE_INT32",  "()I",  awtk_TValueType_VALUE_TYPE_INT32},
{"awtk/TValueType",  "VALUE_TYPE_UINT32",  "()I",  awtk_TValueType_VALUE_TYPE_UINT32},
{"awtk/TValueType",  "VALUE_TYPE_INT64",  "()I",  awtk_TValueType_VALUE_TYPE_INT64},
{"awtk/TValueType",  "VALUE_TYPE_UINT64",  "()I",  awtk_TValueType_VALUE_TYPE_UINT64},
{"awtk/TValueType",  "VALUE_TYPE_POINTER",  "()I",  awtk_TValueType_VALUE_TYPE_POINTER},
{"awtk/TValueType",  "VALUE_TYPE_FLOAT",  "()I",  awtk_TValueType_VALUE_TYPE_FLOAT},
{"awtk/TValueType",  "VALUE_TYPE_FLOAT32",  "()I",  awtk_TValueType_VALUE_TYPE_FLOAT32},
{"awtk/TValueType",  "VALUE_TYPE_DOUBLE",  "()I",  awtk_TValueType_VALUE_TYPE_DOUBLE},
{"awtk/TValueType",  "VALUE_TYPE_STRING",  "()I",  awtk_TValueType_VALUE_TYPE_STRING},
{"awtk/TValueType",  "VALUE_TYPE_WSTRING",  "()I",  awtk_TValueType_VALUE_TYPE_WSTRING},
{"awtk/TValueType",  "VALUE_TYPE_OBJECT",  "()I",  awtk_TValueType_VALUE_TYPE_OBJECT},
{"awtk/TValueType",  "VALUE_TYPE_SIZED_STRING",  "()I",  awtk_TValueType_VALUE_TYPE_SIZED_STRING},
{"awtk/TValueType",  "VALUE_TYPE_BINARY",  "()I",  awtk_TValueType_VALUE_TYPE_BINARY},
{"awtk/TValueType",  "VALUE_TYPE_UBJSON",  "()I",  awtk_TValueType_VALUE_TYPE_UBJSON},
{"awtk/TValueType",  "VALUE_TYPE_TOKEN",  "()I",  awtk_TValueType_VALUE_TYPE_TOKEN},
{"awtk/TAssetsManager",  "assets_manager",  "()J",  awtk_TAssetsManager_assets_manager},
{"awtk/TAssetsManager",  "assets_manager_set_theme",  "(JLjava/lang/String;)I",  awtk_TAssetsManager_assets_manager_set_theme},
{"awtk/TAssetsManager",  "assets_manager_ref",  "(JILjava/lang/String;)J",  awtk_TAssetsManager_assets_manager_ref},
{"awtk/TAssetsManager",  "assets_manager_ref_ex",  "(JIILjava/lang/String;)J",  awtk_TAssetsManager_assets_manager_ref_ex},
{"awtk/TAssetsManager",  "assets_manager_unref",  "(JJ)I",  awtk_TAssetsManager_assets_manager_unref},
{"awtk/TWheelEvent",  "wheel_event_cast",  "(J)J",  awtk_TWheelEvent_wheel_event_cast},
{"awtk/TWheelEvent",  "wheel_event_t_get_prop_dy",  "(J)I",  awtk_TWheelEvent_wheel_event_t_get_prop_dy},
{"awtk/TWheelEvent",  "wheel_event_t_get_prop_alt",  "(J)Z",  awtk_TWheelEvent_wheel_event_t_get_prop_alt},
{"awtk/TWheelEvent",  "wheel_event_t_get_prop_ctrl",  "(J)Z",  awtk_TWheelEvent_wheel_event_t_get_prop_ctrl},
{"awtk/TWheelEvent",  "wheel_event_t_get_prop_shift",  "(J)Z",  awtk_TWheelEvent_wheel_event_t_get_prop_shift},
{"awtk/TOrientationEvent",  "orientation_event_cast",  "(J)J",  awtk_TOrientationEvent_orientation_event_cast},
{"awtk/TOrientationEvent",  "orientation_event_t_get_prop_orientation",  "(J)I",  awtk_TOrientationEvent_orientation_event_t_get_prop_orientation},
{"awtk/TValueChangeEvent",  "value_change_event_cast",  "(J)J",  awtk_TValueChangeEvent_value_change_event_cast},
{"awtk/TPointerEvent",  "pointer_event_cast",  "(J)J",  awtk_TPointerEvent_pointer_event_cast},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_x",  "(J)I",  awtk_TPointerEvent_pointer_event_t_get_prop_x},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_y",  "(J)I",  awtk_TPointerEvent_pointer_event_t_get_prop_y},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_button",  "(J)I",  awtk_TPointerEvent_pointer_event_t_get_prop_button},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_pressed",  "(J)Z",  awtk_TPointerEvent_pointer_event_t_get_prop_pressed},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_alt",  "(J)Z",  awtk_TPointerEvent_pointer_event_t_get_prop_alt},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_ctrl",  "(J)Z",  awtk_TPointerEvent_pointer_event_t_get_prop_ctrl},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_cmd",  "(J)Z",  awtk_TPointerEvent_pointer_event_t_get_prop_cmd},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_menu",  "(J)Z",  awtk_TPointerEvent_pointer_event_t_get_prop_menu},
{"awtk/TPointerEvent",  "pointer_event_t_get_prop_shift",  "(J)Z",  awtk_TPointerEvent_pointer_event_t_get_prop_shift},
{"awtk/TKeyEvent",  "key_event_cast",  "(J)J",  awtk_TKeyEvent_key_event_cast},
{"awtk/TKeyEvent",  "key_event_t_get_prop_key",  "(J)I",  awtk_TKeyEvent_key_event_t_get_prop_key},
{"awtk/TKeyEvent",  "key_event_t_get_prop_alt",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_alt},
{"awtk/TKeyEvent",  "key_event_t_get_prop_lalt",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_lalt},
{"awtk/TKeyEvent",  "key_event_t_get_prop_ralt",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_ralt},
{"awtk/TKeyEvent",  "key_event_t_get_prop_ctrl",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_ctrl},
{"awtk/TKeyEvent",  "key_event_t_get_prop_lctrl",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_lctrl},
{"awtk/TKeyEvent",  "key_event_t_get_prop_rctrl",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_rctrl},
{"awtk/TKeyEvent",  "key_event_t_get_prop_shift",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_shift},
{"awtk/TKeyEvent",  "key_event_t_get_prop_lshift",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_lshift},
{"awtk/TKeyEvent",  "key_event_t_get_prop_rshift",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_rshift},
{"awtk/TKeyEvent",  "key_event_t_get_prop_cmd",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_cmd},
{"awtk/TKeyEvent",  "key_event_t_get_prop_menu",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_menu},
{"awtk/TKeyEvent",  "key_event_t_get_prop_capslock",  "(J)Z",  awtk_TKeyEvent_key_event_t_get_prop_capslock},
{"awtk/TPaintEvent",  "paint_event_cast",  "(J)J",  awtk_TPaintEvent_paint_event_cast},
{"awtk/TPaintEvent",  "paint_event_t_get_prop_c",  "(J)J",  awtk_TPaintEvent_paint_event_t_get_prop_c},
{"awtk/TWindowEvent",  "window_event_cast",  "(J)J",  awtk_TWindowEvent_window_event_cast},
{"awtk/TWindowEvent",  "window_event_t_get_prop_window",  "(J)J",  awtk_TWindowEvent_window_event_t_get_prop_window},
{"awtk/TMultiGestureEvent",  "multi_gesture_event_cast",  "(J)J",  awtk_TMultiGestureEvent_multi_gesture_event_cast},
{"awtk/TMultiGestureEvent",  "multi_gesture_event_t_get_prop_x",  "(J)I",  awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_x},
{"awtk/TMultiGestureEvent",  "multi_gesture_event_t_get_prop_y",  "(J)I",  awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_y},
{"awtk/TMultiGestureEvent",  "multi_gesture_event_t_get_prop_rotation",  "(J)F",  awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_rotation},
{"awtk/TMultiGestureEvent",  "multi_gesture_event_t_get_prop_distance",  "(J)F",  awtk_TMultiGestureEvent_multi_gesture_event_t_get_prop_distance},
{"awtk/TImageBase",  "image_base_set_image",  "(JLjava/lang/String;)I",  awtk_TImageBase_image_base_set_image},
{"awtk/TImageBase",  "image_base_set_rotation",  "(JF)I",  awtk_TImageBase_image_base_set_rotation},
{"awtk/TImageBase",  "image_base_set_scale",  "(JFF)I",  awtk_TImageBase_image_base_set_scale},
{"awtk/TImageBase",  "image_base_set_anchor",  "(JFF)I",  awtk_TImageBase_image_base_set_anchor},
{"awtk/TImageBase",  "image_base_set_selected",  "(JZ)I",  awtk_TImageBase_image_base_set_selected},
{"awtk/TImageBase",  "image_base_set_selectable",  "(JZ)I",  awtk_TImageBase_image_base_set_selectable},
{"awtk/TImageBase",  "image_base_set_clickable",  "(JZ)I",  awtk_TImageBase_image_base_set_clickable},
{"awtk/TImageBase",  "image_base_cast",  "(J)J",  awtk_TImageBase_image_base_cast},
{"awtk/TImageBase",  "image_base_t_get_prop_image",  "(J)Ljava/lang/String;",  awtk_TImageBase_image_base_t_get_prop_image},
{"awtk/TImageBase",  "image_base_t_get_prop_anchor_x",  "(J)F",  awtk_TImageBase_image_base_t_get_prop_anchor_x},
{"awtk/TImageBase",  "image_base_t_get_prop_anchor_y",  "(J)F",  awtk_TImageBase_image_base_t_get_prop_anchor_y},
{"awtk/TImageBase",  "image_base_t_get_prop_scale_x",  "(J)F",  awtk_TImageBase_image_base_t_get_prop_scale_x},
{"awtk/TImageBase",  "image_base_t_get_prop_scale_y",  "(J)F",  awtk_TImageBase_image_base_t_get_prop_scale_y},
{"awtk/TImageBase",  "image_base_t_get_prop_rotation",  "(J)F",  awtk_TImageBase_image_base_t_get_prop_rotation},
{"awtk/TImageBase",  "image_base_t_get_prop_clickable",  "(J)Z",  awtk_TImageBase_image_base_t_get_prop_clickable},
{"awtk/TImageBase",  "image_base_t_get_prop_selectable",  "(J)Z",  awtk_TImageBase_image_base_t_get_prop_selectable},
{"awtk/TImageBase",  "image_base_t_get_prop_selected",  "(J)Z",  awtk_TImageBase_image_base_t_get_prop_selected},
{"awtk/TStyleMutable",  "style_mutable_set_name",  "(JLjava/lang/String;)I",  awtk_TStyleMutable_style_mutable_set_name},
{"awtk/TStyleMutable",  "style_mutable_set_int",  "(JLjava/lang/String;Ljava/lang/String;I)I",  awtk_TStyleMutable_style_mutable_set_int},
{"awtk/TStyleMutable",  "style_mutable_cast",  "(J)J",  awtk_TStyleMutable_style_mutable_cast},
{"awtk/TStyleMutable",  "style_mutable_create",  "(J)J",  awtk_TStyleMutable_style_mutable_create},
{"awtk/TStyleMutable",  "style_mutable_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TStyleMutable_style_mutable_t_get_prop_name},
{"awtk/TWindowBase",  "window_base_cast",  "(J)J",  awtk_TWindowBase_window_base_cast},
{"awtk/TWindowBase",  "window_base_t_get_prop_theme",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_theme},
{"awtk/TWindowBase",  "window_base_t_get_prop_design_w",  "(J)I",  awtk_TWindowBase_window_base_t_get_prop_design_w},
{"awtk/TWindowBase",  "window_base_t_get_prop_design_h",  "(J)I",  awtk_TWindowBase_window_base_t_get_prop_design_h},
{"awtk/TWindowBase",  "window_base_t_get_prop_auto_scale_children_x",  "(J)Z",  awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_x},
{"awtk/TWindowBase",  "window_base_t_get_prop_auto_scale_children_y",  "(J)Z",  awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_y},
{"awtk/TWindowBase",  "window_base_t_get_prop_auto_scale_children_w",  "(J)Z",  awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_w},
{"awtk/TWindowBase",  "window_base_t_get_prop_auto_scale_children_h",  "(J)Z",  awtk_TWindowBase_window_base_t_get_prop_auto_scale_children_h},
{"awtk/TWindowBase",  "window_base_t_get_prop_disable_anim",  "(J)Z",  awtk_TWindowBase_window_base_t_get_prop_disable_anim},
{"awtk/TWindowBase",  "window_base_t_get_prop_closable",  "(J)I",  awtk_TWindowBase_window_base_t_get_prop_closable},
{"awtk/TWindowBase",  "window_base_t_get_prop_open_anim_hint",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_open_anim_hint},
{"awtk/TWindowBase",  "window_base_t_get_prop_close_anim_hint",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_close_anim_hint},
{"awtk/TWindowBase",  "window_base_t_get_prop_move_focus_prev_key",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_move_focus_prev_key},
{"awtk/TWindowBase",  "window_base_t_get_prop_move_focus_next_key",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_move_focus_next_key},
{"awtk/TWindowBase",  "window_base_t_get_prop_move_focus_up_key",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_move_focus_up_key},
{"awtk/TWindowBase",  "window_base_t_get_prop_move_focus_down_key",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_move_focus_down_key},
{"awtk/TWindowBase",  "window_base_t_get_prop_move_focus_left_key",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_move_focus_left_key},
{"awtk/TWindowBase",  "window_base_t_get_prop_move_focus_right_key",  "(J)Ljava/lang/String;",  awtk_TWindowBase_window_base_t_get_prop_move_focus_right_key},
{"awtk/TWindowBase",  "window_base_t_get_prop_single_instance",  "(J)Z",  awtk_TWindowBase_window_base_t_get_prop_single_instance},
{"awtk/TWindowBase",  "window_base_t_get_prop_strongly_focus",  "(J)Z",  awtk_TWindowBase_window_base_t_get_prop_strongly_focus},
{"awtk/TWindowManager",  "window_manager",  "()J",  awtk_TWindowManager_window_manager},
{"awtk/TWindowManager",  "window_manager_cast",  "(J)J",  awtk_TWindowManager_window_manager_cast},
{"awtk/TWindowManager",  "window_manager_get_top_main_window",  "(J)J",  awtk_TWindowManager_window_manager_get_top_main_window},
{"awtk/TWindowManager",  "window_manager_get_top_window",  "(J)J",  awtk_TWindowManager_window_manager_get_top_window},
{"awtk/TWindowManager",  "window_manager_get_prev_window",  "(J)J",  awtk_TWindowManager_window_manager_get_prev_window},
{"awtk/TWindowManager",  "window_manager_get_pointer_x",  "(J)I",  awtk_TWindowManager_window_manager_get_pointer_x},
{"awtk/TWindowManager",  "window_manager_get_pointer_y",  "(J)I",  awtk_TWindowManager_window_manager_get_pointer_y},
{"awtk/TWindowManager",  "window_manager_get_pointer_pressed",  "(J)Z",  awtk_TWindowManager_window_manager_get_pointer_pressed},
{"awtk/TWindowManager",  "window_manager_is_animating",  "(J)Z",  awtk_TWindowManager_window_manager_is_animating},
{"awtk/TWindowManager",  "window_manager_set_show_fps",  "(JZ)I",  awtk_TWindowManager_window_manager_set_show_fps},
{"awtk/TWindowManager",  "window_manager_set_max_fps",  "(JI)I",  awtk_TWindowManager_window_manager_set_max_fps},
{"awtk/TWindowManager",  "window_manager_set_ignore_input_events",  "(JZ)I",  awtk_TWindowManager_window_manager_set_ignore_input_events},
{"awtk/TWindowManager",  "window_manager_set_screen_saver_time",  "(JI)I",  awtk_TWindowManager_window_manager_set_screen_saver_time},
{"awtk/TWindowManager",  "window_manager_set_cursor",  "(JLjava/lang/String;)I",  awtk_TWindowManager_window_manager_set_cursor},
{"awtk/TWindowManager",  "window_manager_back",  "(J)I",  awtk_TWindowManager_window_manager_back},
{"awtk/TWindowManager",  "window_manager_back_to_home",  "(J)I",  awtk_TWindowManager_window_manager_back_to_home},
{"awtk/TWindowManager",  "window_manager_back_to",  "(JLjava/lang/String;)I",  awtk_TWindowManager_window_manager_back_to},
{"awtk/TWindowManager",  "window_manager_resize",  "(JII)I",  awtk_TWindowManager_window_manager_resize},
{"awtk/TWindowManager",  "window_manager_close_all",  "(J)I",  awtk_TWindowManager_window_manager_close_all},
{"awtk/TCanvasWidget",  "canvas_widget_create",  "(JIIII)J",  awtk_TCanvasWidget_canvas_widget_create},
{"awtk/TCanvasWidget",  "canvas_widget_cast",  "(J)J",  awtk_TCanvasWidget_canvas_widget_cast},
{"awtk/TColorComponent",  "color_component_cast",  "(J)J",  awtk_TColorComponent_color_component_cast},
{"awtk/TColorPicker",  "color_picker_create",  "(JIIII)J",  awtk_TColorPicker_color_picker_create},
{"awtk/TColorPicker",  "color_picker_set_color",  "(JLjava/lang/String;)I",  awtk_TColorPicker_color_picker_set_color},
{"awtk/TColorPicker",  "color_picker_cast",  "(J)J",  awtk_TColorPicker_color_picker_cast},
{"awtk/TColorPicker",  "color_picker_t_get_prop_value",  "(J)Ljava/lang/String;",  awtk_TColorPicker_color_picker_t_get_prop_value},
{"awtk/TDraggable",  "draggable_create",  "(JIIII)J",  awtk_TDraggable_draggable_create},
{"awtk/TDraggable",  "draggable_cast",  "(J)J",  awtk_TDraggable_draggable_cast},
{"awtk/TDraggable",  "draggable_set_top",  "(JI)I",  awtk_TDraggable_draggable_set_top},
{"awtk/TDraggable",  "draggable_set_bottom",  "(JI)I",  awtk_TDraggable_draggable_set_bottom},
{"awtk/TDraggable",  "draggable_set_left",  "(JI)I",  awtk_TDraggable_draggable_set_left},
{"awtk/TDraggable",  "draggable_set_right",  "(JI)I",  awtk_TDraggable_draggable_set_right},
{"awtk/TDraggable",  "draggable_set_vertical_only",  "(JZ)I",  awtk_TDraggable_draggable_set_vertical_only},
{"awtk/TDraggable",  "draggable_set_horizontal_only",  "(JZ)I",  awtk_TDraggable_draggable_set_horizontal_only},
{"awtk/TDraggable",  "draggable_set_drag_window",  "(JZ)I",  awtk_TDraggable_draggable_set_drag_window},
{"awtk/TDraggable",  "draggable_t_get_prop_top",  "(J)I",  awtk_TDraggable_draggable_t_get_prop_top},
{"awtk/TDraggable",  "draggable_t_get_prop_bottom",  "(J)I",  awtk_TDraggable_draggable_t_get_prop_bottom},
{"awtk/TDraggable",  "draggable_t_get_prop_left",  "(J)I",  awtk_TDraggable_draggable_t_get_prop_left},
{"awtk/TDraggable",  "draggable_t_get_prop_right",  "(J)I",  awtk_TDraggable_draggable_t_get_prop_right},
{"awtk/TDraggable",  "draggable_t_get_prop_vertical_only",  "(J)Z",  awtk_TDraggable_draggable_t_get_prop_vertical_only},
{"awtk/TDraggable",  "draggable_t_get_prop_horizontal_only",  "(J)Z",  awtk_TDraggable_draggable_t_get_prop_horizontal_only},
{"awtk/TDraggable",  "draggable_t_get_prop_drag_window",  "(J)Z",  awtk_TDraggable_draggable_t_get_prop_drag_window},
{"awtk/TFileBrowserView",  "file_browser_view_create",  "(JIIII)J",  awtk_TFileBrowserView_file_browser_view_create},
{"awtk/TFileBrowserView",  "file_browser_view_cast",  "(J)J",  awtk_TFileBrowserView_file_browser_view_cast},
{"awtk/TFileBrowserView",  "file_browser_view_set_init_dir",  "(JLjava/lang/String;)I",  awtk_TFileBrowserView_file_browser_view_set_init_dir},
{"awtk/TFileBrowserView",  "file_browser_view_set_top_dir",  "(JLjava/lang/String;)I",  awtk_TFileBrowserView_file_browser_view_set_top_dir},
{"awtk/TFileBrowserView",  "file_browser_view_set_filter",  "(JLjava/lang/String;)I",  awtk_TFileBrowserView_file_browser_view_set_filter},
{"awtk/TFileBrowserView",  "file_browser_view_reload",  "(J)I",  awtk_TFileBrowserView_file_browser_view_reload},
{"awtk/TFileBrowserView",  "file_browser_view_set_ignore_hidden_files",  "(JZ)I",  awtk_TFileBrowserView_file_browser_view_set_ignore_hidden_files},
{"awtk/TFileBrowserView",  "file_browser_view_set_sort_ascending",  "(JZ)I",  awtk_TFileBrowserView_file_browser_view_set_sort_ascending},
{"awtk/TFileBrowserView",  "file_browser_view_set_show_check_button",  "(JZ)I",  awtk_TFileBrowserView_file_browser_view_set_show_check_button},
{"awtk/TFileBrowserView",  "file_browser_view_set_sort_by",  "(JLjava/lang/String;)I",  awtk_TFileBrowserView_file_browser_view_set_sort_by},
{"awtk/TFileBrowserView",  "file_browser_view_get_cwd",  "(J)Ljava/lang/String;",  awtk_TFileBrowserView_file_browser_view_get_cwd},
{"awtk/TFileBrowserView",  "file_browser_view_create_dir",  "(JLjava/lang/String;)I",  awtk_TFileBrowserView_file_browser_view_create_dir},
{"awtk/TFileBrowserView",  "file_browser_view_create_file",  "(JLjava/lang/String;Ljava/lang/String;I)I",  awtk_TFileBrowserView_file_browser_view_create_file},
{"awtk/TFileBrowserView",  "file_browser_view_t_get_prop_init_dir",  "(J)Ljava/lang/String;",  awtk_TFileBrowserView_file_browser_view_t_get_prop_init_dir},
{"awtk/TFileBrowserView",  "file_browser_view_t_get_prop_top_dir",  "(J)Ljava/lang/String;",  awtk_TFileBrowserView_file_browser_view_t_get_prop_top_dir},
{"awtk/TFileBrowserView",  "file_browser_view_t_get_prop_filter",  "(J)Ljava/lang/String;",  awtk_TFileBrowserView_file_browser_view_t_get_prop_filter},
{"awtk/TFileBrowserView",  "file_browser_view_t_get_prop_ignore_hidden_files",  "(J)Z",  awtk_TFileBrowserView_file_browser_view_t_get_prop_ignore_hidden_files},
{"awtk/TFileBrowserView",  "file_browser_view_t_get_prop_sort_ascending",  "(J)Z",  awtk_TFileBrowserView_file_browser_view_t_get_prop_sort_ascending},
{"awtk/TFileBrowserView",  "file_browser_view_t_get_prop_show_check_button",  "(J)Z",  awtk_TFileBrowserView_file_browser_view_t_get_prop_show_check_button},
{"awtk/TFileBrowserView",  "file_browser_view_t_get_prop_sort_by",  "(J)Ljava/lang/String;",  awtk_TFileBrowserView_file_browser_view_t_get_prop_sort_by},
{"awtk/TFileChooser",  "file_chooser_create",  "()J",  awtk_TFileChooser_file_chooser_create},
{"awtk/TFileChooser",  "file_chooser_set_init_dir",  "(JLjava/lang/String;)I",  awtk_TFileChooser_file_chooser_set_init_dir},
{"awtk/TFileChooser",  "file_chooser_set_top_dir",  "(JLjava/lang/String;)I",  awtk_TFileChooser_file_chooser_set_top_dir},
{"awtk/TFileChooser",  "file_chooser_set_filter",  "(JLjava/lang/String;)I",  awtk_TFileChooser_file_chooser_set_filter},
{"awtk/TFileChooser",  "file_chooser_cast",  "(J)J",  awtk_TFileChooser_file_chooser_cast},
{"awtk/TFileChooser",  "file_chooser_choose_file_for_save",  "(J)I",  awtk_TFileChooser_file_chooser_choose_file_for_save},
{"awtk/TFileChooser",  "file_chooser_choose_file_for_open",  "(J)I",  awtk_TFileChooser_file_chooser_choose_file_for_open},
{"awtk/TFileChooser",  "file_chooser_choose_folder",  "(J)I",  awtk_TFileChooser_file_chooser_choose_folder},
{"awtk/TFileChooser",  "file_chooser_get_dir",  "(J)Ljava/lang/String;",  awtk_TFileChooser_file_chooser_get_dir},
{"awtk/TFileChooser",  "file_chooser_get_filename",  "(J)Ljava/lang/String;",  awtk_TFileChooser_file_chooser_get_filename},
{"awtk/TFileChooser",  "file_chooser_is_aborted",  "(J)Z",  awtk_TFileChooser_file_chooser_is_aborted},
{"awtk/TGaugePointer",  "gauge_pointer_create",  "(JIIII)J",  awtk_TGaugePointer_gauge_pointer_create},
{"awtk/TGaugePointer",  "gauge_pointer_cast",  "(J)J",  awtk_TGaugePointer_gauge_pointer_cast},
{"awtk/TGaugePointer",  "gauge_pointer_set_angle",  "(JF)I",  awtk_TGaugePointer_gauge_pointer_set_angle},
{"awtk/TGaugePointer",  "gauge_pointer_set_image",  "(JLjava/lang/String;)I",  awtk_TGaugePointer_gauge_pointer_set_image},
{"awtk/TGaugePointer",  "gauge_pointer_set_anchor",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TGaugePointer_gauge_pointer_set_anchor},
{"awtk/TGaugePointer",  "gauge_pointer_t_get_prop_angle",  "(J)F",  awtk_TGaugePointer_gauge_pointer_t_get_prop_angle},
{"awtk/TGaugePointer",  "gauge_pointer_t_get_prop_image",  "(J)Ljava/lang/String;",  awtk_TGaugePointer_gauge_pointer_t_get_prop_image},
{"awtk/TGaugePointer",  "gauge_pointer_t_get_prop_anchor_x",  "(J)Ljava/lang/String;",  awtk_TGaugePointer_gauge_pointer_t_get_prop_anchor_x},
{"awtk/TGaugePointer",  "gauge_pointer_t_get_prop_anchor_y",  "(J)Ljava/lang/String;",  awtk_TGaugePointer_gauge_pointer_t_get_prop_anchor_y},
{"awtk/TGauge",  "gauge_create",  "(JIIII)J",  awtk_TGauge_gauge_create},
{"awtk/TGauge",  "gauge_cast",  "(J)J",  awtk_TGauge_gauge_cast},
{"awtk/TGauge",  "gauge_set_image",  "(JLjava/lang/String;)I",  awtk_TGauge_gauge_set_image},
{"awtk/TGauge",  "gauge_set_draw_type",  "(JI)I",  awtk_TGauge_gauge_set_draw_type},
{"awtk/TGauge",  "gauge_t_get_prop_image",  "(J)Ljava/lang/String;",  awtk_TGauge_gauge_t_get_prop_image},
{"awtk/TGauge",  "gauge_t_get_prop_draw_type",  "(J)I",  awtk_TGauge_gauge_t_get_prop_draw_type},
{"awtk/TImageAnimation",  "image_animation_create",  "(JIIII)J",  awtk_TImageAnimation_image_animation_create},
{"awtk/TImageAnimation",  "image_animation_set_loop",  "(JZ)I",  awtk_TImageAnimation_image_animation_set_loop},
{"awtk/TImageAnimation",  "image_animation_set_image",  "(JLjava/lang/String;)I",  awtk_TImageAnimation_image_animation_set_image},
{"awtk/TImageAnimation",  "image_animation_set_interval",  "(JI)I",  awtk_TImageAnimation_image_animation_set_interval},
{"awtk/TImageAnimation",  "image_animation_set_delay",  "(JI)I",  awtk_TImageAnimation_image_animation_set_delay},
{"awtk/TImageAnimation",  "image_animation_set_auto_play",  "(JZ)I",  awtk_TImageAnimation_image_animation_set_auto_play},
{"awtk/TImageAnimation",  "image_animation_set_sequence",  "(JLjava/lang/String;)I",  awtk_TImageAnimation_image_animation_set_sequence},
{"awtk/TImageAnimation",  "image_animation_set_range_sequence",  "(JII)I",  awtk_TImageAnimation_image_animation_set_range_sequence},
{"awtk/TImageAnimation",  "image_animation_play",  "(J)I",  awtk_TImageAnimation_image_animation_play},
{"awtk/TImageAnimation",  "image_animation_stop",  "(J)I",  awtk_TImageAnimation_image_animation_stop},
{"awtk/TImageAnimation",  "image_animation_pause",  "(J)I",  awtk_TImageAnimation_image_animation_pause},
{"awtk/TImageAnimation",  "image_animation_next",  "(J)I",  awtk_TImageAnimation_image_animation_next},
{"awtk/TImageAnimation",  "image_animation_set_format",  "(JLjava/lang/String;)I",  awtk_TImageAnimation_image_animation_set_format},
{"awtk/TImageAnimation",  "image_animation_set_unload_after_paint",  "(JZ)I",  awtk_TImageAnimation_image_animation_set_unload_after_paint},
{"awtk/TImageAnimation",  "image_animation_set_reverse",  "(JZ)I",  awtk_TImageAnimation_image_animation_set_reverse},
{"awtk/TImageAnimation",  "image_animation_set_show_when_done",  "(JZ)I",  awtk_TImageAnimation_image_animation_set_show_when_done},
{"awtk/TImageAnimation",  "image_animation_cast",  "(J)J",  awtk_TImageAnimation_image_animation_cast},
{"awtk/TImageAnimation",  "image_animation_is_playing",  "(J)Z",  awtk_TImageAnimation_image_animation_is_playing},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_image",  "(J)Ljava/lang/String;",  awtk_TImageAnimation_image_animation_t_get_prop_image},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_sequence",  "(J)Ljava/lang/String;",  awtk_TImageAnimation_image_animation_t_get_prop_sequence},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_start_index",  "(J)I",  awtk_TImageAnimation_image_animation_t_get_prop_start_index},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_end_index",  "(J)I",  awtk_TImageAnimation_image_animation_t_get_prop_end_index},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_reverse",  "(J)Z",  awtk_TImageAnimation_image_animation_t_get_prop_reverse},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_loop",  "(J)Z",  awtk_TImageAnimation_image_animation_t_get_prop_loop},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_auto_play",  "(J)Z",  awtk_TImageAnimation_image_animation_t_get_prop_auto_play},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_unload_after_paint",  "(J)Z",  awtk_TImageAnimation_image_animation_t_get_prop_unload_after_paint},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_format",  "(J)Ljava/lang/String;",  awtk_TImageAnimation_image_animation_t_get_prop_format},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_interval",  "(J)I",  awtk_TImageAnimation_image_animation_t_get_prop_interval},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_delay",  "(J)I",  awtk_TImageAnimation_image_animation_t_get_prop_delay},
{"awtk/TImageAnimation",  "image_animation_t_get_prop_show_when_done",  "(J)Z",  awtk_TImageAnimation_image_animation_t_get_prop_show_when_done},
{"awtk/TImageValue",  "image_value_create",  "(JIIII)J",  awtk_TImageValue_image_value_create},
{"awtk/TImageValue",  "image_value_set_image",  "(JLjava/lang/String;)I",  awtk_TImageValue_image_value_set_image},
{"awtk/TImageValue",  "image_value_set_format",  "(JLjava/lang/String;)I",  awtk_TImageValue_image_value_set_format},
{"awtk/TImageValue",  "image_value_set_click_add_delta",  "(JF)I",  awtk_TImageValue_image_value_set_click_add_delta},
{"awtk/TImageValue",  "image_value_set_value",  "(JF)I",  awtk_TImageValue_image_value_set_value},
{"awtk/TImageValue",  "image_value_set_min",  "(JF)I",  awtk_TImageValue_image_value_set_min},
{"awtk/TImageValue",  "image_value_set_max",  "(JF)I",  awtk_TImageValue_image_value_set_max},
{"awtk/TImageValue",  "image_value_cast",  "(J)J",  awtk_TImageValue_image_value_cast},
{"awtk/TImageValue",  "image_value_t_get_prop_image",  "(J)Ljava/lang/String;",  awtk_TImageValue_image_value_t_get_prop_image},
{"awtk/TImageValue",  "image_value_t_get_prop_format",  "(J)Ljava/lang/String;",  awtk_TImageValue_image_value_t_get_prop_format},
{"awtk/TImageValue",  "image_value_t_get_prop_click_add_delta",  "(J)F",  awtk_TImageValue_image_value_t_get_prop_click_add_delta},
{"awtk/TImageValue",  "image_value_t_get_prop_value",  "(J)F",  awtk_TImageValue_image_value_t_get_prop_value},
{"awtk/TImageValue",  "image_value_t_get_prop_min",  "(J)F",  awtk_TImageValue_image_value_t_get_prop_min},
{"awtk/TImageValue",  "image_value_t_get_prop_max",  "(J)F",  awtk_TImageValue_image_value_t_get_prop_max},
{"awtk/TCandidates",  "candidates_cast",  "(J)J",  awtk_TCandidates_candidates_cast},
{"awtk/TCandidates",  "candidates_set_pre",  "(JZ)I",  awtk_TCandidates_candidates_set_pre},
{"awtk/TCandidates",  "candidates_set_select_by_num",  "(JZ)I",  awtk_TCandidates_candidates_set_select_by_num},
{"awtk/TCandidates",  "candidates_set_auto_hide",  "(JZ)I",  awtk_TCandidates_candidates_set_auto_hide},
{"awtk/TCandidates",  "candidates_set_button_style",  "(JLjava/lang/String;)I",  awtk_TCandidates_candidates_set_button_style},
{"awtk/TCandidates",  "candidates_t_get_prop_pre",  "(J)Z",  awtk_TCandidates_candidates_t_get_prop_pre},
{"awtk/TCandidates",  "candidates_t_get_prop_select_by_num",  "(J)Z",  awtk_TCandidates_candidates_t_get_prop_select_by_num},
{"awtk/TCandidates",  "candidates_t_get_prop_auto_hide",  "(J)Z",  awtk_TCandidates_candidates_t_get_prop_auto_hide},
{"awtk/TCandidates",  "candidates_t_get_prop_button_style",  "(J)Ljava/lang/String;",  awtk_TCandidates_candidates_t_get_prop_button_style},
{"awtk/TLangIndicator",  "lang_indicator_create",  "(JIIII)J",  awtk_TLangIndicator_lang_indicator_create},
{"awtk/TLangIndicator",  "lang_indicator_set_image",  "(JLjava/lang/String;)I",  awtk_TLangIndicator_lang_indicator_set_image},
{"awtk/TLangIndicator",  "lang_indicator_cast",  "(J)J",  awtk_TLangIndicator_lang_indicator_cast},
{"awtk/TLangIndicator",  "lang_indicator_t_get_prop_image",  "(J)Ljava/lang/String;",  awtk_TLangIndicator_lang_indicator_t_get_prop_image},
{"awtk/TLineNumber",  "line_number_create",  "(JIIII)J",  awtk_TLineNumber_line_number_create},
{"awtk/TLineNumber",  "line_number_set_top_margin",  "(JI)I",  awtk_TLineNumber_line_number_set_top_margin},
{"awtk/TLineNumber",  "line_number_set_bottom_margin",  "(JI)I",  awtk_TLineNumber_line_number_set_bottom_margin},
{"awtk/TLineNumber",  "line_number_set_line_height",  "(JI)I",  awtk_TLineNumber_line_number_set_line_height},
{"awtk/TLineNumber",  "line_number_set_yoffset",  "(JI)I",  awtk_TLineNumber_line_number_set_yoffset},
{"awtk/TLineNumber",  "line_number_cast",  "(J)J",  awtk_TLineNumber_line_number_cast},
{"awtk/TMledit",  "mledit_create",  "(JIIII)J",  awtk_TMledit_mledit_create},
{"awtk/TMledit",  "mledit_set_readonly",  "(JZ)I",  awtk_TMledit_mledit_set_readonly},
{"awtk/TMledit",  "mledit_set_cancelable",  "(JZ)I",  awtk_TMledit_mledit_set_cancelable},
{"awtk/TMledit",  "mledit_set_focus",  "(JZ)I",  awtk_TMledit_mledit_set_focus},
{"awtk/TMledit",  "mledit_set_wrap_word",  "(JZ)I",  awtk_TMledit_mledit_set_wrap_word},
{"awtk/TMledit",  "mledit_set_max_lines",  "(JI)I",  awtk_TMledit_mledit_set_max_lines},
{"awtk/TMledit",  "mledit_set_max_chars",  "(JI)I",  awtk_TMledit_mledit_set_max_chars},
{"awtk/TMledit",  "mledit_set_tips",  "(JLjava/lang/String;)I",  awtk_TMledit_mledit_set_tips},
{"awtk/TMledit",  "mledit_set_tr_tips",  "(JLjava/lang/String;)I",  awtk_TMledit_mledit_set_tr_tips},
{"awtk/TMledit",  "mledit_set_keyboard",  "(JLjava/lang/String;)I",  awtk_TMledit_mledit_set_keyboard},
{"awtk/TMledit",  "mledit_set_cursor",  "(JI)I",  awtk_TMledit_mledit_set_cursor},
{"awtk/TMledit",  "mledit_get_cursor",  "(J)I",  awtk_TMledit_mledit_get_cursor},
{"awtk/TMledit",  "mledit_set_scroll_line",  "(JI)I",  awtk_TMledit_mledit_set_scroll_line},
{"awtk/TMledit",  "mledit_scroll_to_offset",  "(JI)I",  awtk_TMledit_mledit_scroll_to_offset},
{"awtk/TMledit",  "mledit_set_open_im_when_focused",  "(JZ)I",  awtk_TMledit_mledit_set_open_im_when_focused},
{"awtk/TMledit",  "mledit_set_close_im_when_blured",  "(JZ)I",  awtk_TMledit_mledit_set_close_im_when_blured},
{"awtk/TMledit",  "mledit_set_select",  "(JII)I",  awtk_TMledit_mledit_set_select},
{"awtk/TMledit",  "mledit_get_selected_text",  "(J)Ljava/lang/String;",  awtk_TMledit_mledit_get_selected_text},
{"awtk/TMledit",  "mledit_cast",  "(J)J",  awtk_TMledit_mledit_cast},
{"awtk/TMledit",  "mledit_t_get_prop_tips",  "(J)Ljava/lang/String;",  awtk_TMledit_mledit_t_get_prop_tips},
{"awtk/TMledit",  "mledit_t_get_prop_tr_tips",  "(J)Ljava/lang/String;",  awtk_TMledit_mledit_t_get_prop_tr_tips},
{"awtk/TMledit",  "mledit_t_get_prop_keyboard",  "(J)Ljava/lang/String;",  awtk_TMledit_mledit_t_get_prop_keyboard},
{"awtk/TMledit",  "mledit_t_get_prop_max_lines",  "(J)I",  awtk_TMledit_mledit_t_get_prop_max_lines},
{"awtk/TMledit",  "mledit_t_get_prop_max_chars",  "(J)I",  awtk_TMledit_mledit_t_get_prop_max_chars},
{"awtk/TMledit",  "mledit_t_get_prop_wrap_word",  "(J)Z",  awtk_TMledit_mledit_t_get_prop_wrap_word},
{"awtk/TMledit",  "mledit_t_get_prop_scroll_line",  "(J)I",  awtk_TMledit_mledit_t_get_prop_scroll_line},
{"awtk/TMledit",  "mledit_t_get_prop_readonly",  "(J)Z",  awtk_TMledit_mledit_t_get_prop_readonly},
{"awtk/TMledit",  "mledit_t_get_prop_cancelable",  "(J)Z",  awtk_TMledit_mledit_t_get_prop_cancelable},
{"awtk/TMledit",  "mledit_t_get_prop_open_im_when_focused",  "(J)Z",  awtk_TMledit_mledit_t_get_prop_open_im_when_focused},
{"awtk/TMledit",  "mledit_t_get_prop_close_im_when_blured",  "(J)Z",  awtk_TMledit_mledit_t_get_prop_close_im_when_blured},
{"awtk/TProgressCircle",  "progress_circle_create",  "(JIIII)J",  awtk_TProgressCircle_progress_circle_create},
{"awtk/TProgressCircle",  "progress_circle_cast",  "(J)J",  awtk_TProgressCircle_progress_circle_cast},
{"awtk/TProgressCircle",  "progress_circle_set_value",  "(JF)I",  awtk_TProgressCircle_progress_circle_set_value},
{"awtk/TProgressCircle",  "progress_circle_set_max",  "(JI)I",  awtk_TProgressCircle_progress_circle_set_max},
{"awtk/TProgressCircle",  "progress_circle_set_format",  "(JLjava/lang/String;)I",  awtk_TProgressCircle_progress_circle_set_format},
{"awtk/TProgressCircle",  "progress_circle_set_line_width",  "(JI)I",  awtk_TProgressCircle_progress_circle_set_line_width},
{"awtk/TProgressCircle",  "progress_circle_set_start_angle",  "(JI)I",  awtk_TProgressCircle_progress_circle_set_start_angle},
{"awtk/TProgressCircle",  "progress_circle_set_line_cap",  "(JLjava/lang/String;)I",  awtk_TProgressCircle_progress_circle_set_line_cap},
{"awtk/TProgressCircle",  "progress_circle_set_show_text",  "(JZ)I",  awtk_TProgressCircle_progress_circle_set_show_text},
{"awtk/TProgressCircle",  "progress_circle_set_counter_clock_wise",  "(JZ)I",  awtk_TProgressCircle_progress_circle_set_counter_clock_wise},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_value",  "(J)F",  awtk_TProgressCircle_progress_circle_t_get_prop_value},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_max",  "(J)F",  awtk_TProgressCircle_progress_circle_t_get_prop_max},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_format",  "(J)Ljava/lang/String;",  awtk_TProgressCircle_progress_circle_t_get_prop_format},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_start_angle",  "(J)I",  awtk_TProgressCircle_progress_circle_t_get_prop_start_angle},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_line_width",  "(J)I",  awtk_TProgressCircle_progress_circle_t_get_prop_line_width},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_line_cap",  "(J)Ljava/lang/String;",  awtk_TProgressCircle_progress_circle_t_get_prop_line_cap},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_counter_clock_wise",  "(J)Z",  awtk_TProgressCircle_progress_circle_t_get_prop_counter_clock_wise},
{"awtk/TProgressCircle",  "progress_circle_t_get_prop_show_text",  "(J)Z",  awtk_TProgressCircle_progress_circle_t_get_prop_show_text},
{"awtk/TRichTextView",  "rich_text_view_create",  "(JIIII)J",  awtk_TRichTextView_rich_text_view_create},
{"awtk/TRichTextView",  "rich_text_view_cast",  "(J)J",  awtk_TRichTextView_rich_text_view_cast},
{"awtk/TRichText",  "rich_text_create",  "(JIIII)J",  awtk_TRichText_rich_text_create},
{"awtk/TRichText",  "rich_text_set_text",  "(JLjava/lang/String;)I",  awtk_TRichText_rich_text_set_text},
{"awtk/TRichText",  "rich_text_set_yslidable",  "(JZ)I",  awtk_TRichText_rich_text_set_yslidable},
{"awtk/TRichText",  "rich_text_cast",  "(J)J",  awtk_TRichText_rich_text_cast},
{"awtk/TRichText",  "rich_text_t_get_prop_line_gap",  "(J)I",  awtk_TRichText_rich_text_t_get_prop_line_gap},
{"awtk/TRichText",  "rich_text_t_get_prop_yslidable",  "(J)Z",  awtk_TRichText_rich_text_t_get_prop_yslidable},
{"awtk/THscrollLabel",  "hscroll_label_create",  "(JIIII)J",  awtk_THscrollLabel_hscroll_label_create},
{"awtk/THscrollLabel",  "hscroll_label_set_lull",  "(JI)I",  awtk_THscrollLabel_hscroll_label_set_lull},
{"awtk/THscrollLabel",  "hscroll_label_set_duration",  "(JI)I",  awtk_THscrollLabel_hscroll_label_set_duration},
{"awtk/THscrollLabel",  "hscroll_label_set_only_focus",  "(JZ)I",  awtk_THscrollLabel_hscroll_label_set_only_focus},
{"awtk/THscrollLabel",  "hscroll_label_set_only_parent_focus",  "(JZ)I",  awtk_THscrollLabel_hscroll_label_set_only_parent_focus},
{"awtk/THscrollLabel",  "hscroll_label_set_loop",  "(JZ)I",  awtk_THscrollLabel_hscroll_label_set_loop},
{"awtk/THscrollLabel",  "hscroll_label_set_yoyo",  "(JZ)I",  awtk_THscrollLabel_hscroll_label_set_yoyo},
{"awtk/THscrollLabel",  "hscroll_label_set_ellipses",  "(JZ)I",  awtk_THscrollLabel_hscroll_label_set_ellipses},
{"awtk/THscrollLabel",  "hscroll_label_set_xoffset",  "(JI)I",  awtk_THscrollLabel_hscroll_label_set_xoffset},
{"awtk/THscrollLabel",  "hscroll_label_start",  "(J)I",  awtk_THscrollLabel_hscroll_label_start},
{"awtk/THscrollLabel",  "hscroll_label_stop",  "(J)I",  awtk_THscrollLabel_hscroll_label_stop},
{"awtk/THscrollLabel",  "hscroll_label_cast",  "(J)J",  awtk_THscrollLabel_hscroll_label_cast},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_only_focus",  "(J)Z",  awtk_THscrollLabel_hscroll_label_t_get_prop_only_focus},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_only_parent_focus",  "(J)Z",  awtk_THscrollLabel_hscroll_label_t_get_prop_only_parent_focus},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_loop",  "(J)Z",  awtk_THscrollLabel_hscroll_label_t_get_prop_loop},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_yoyo",  "(J)Z",  awtk_THscrollLabel_hscroll_label_t_get_prop_yoyo},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_ellipses",  "(J)Z",  awtk_THscrollLabel_hscroll_label_t_get_prop_ellipses},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_lull",  "(J)I",  awtk_THscrollLabel_hscroll_label_t_get_prop_lull},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_duration",  "(J)I",  awtk_THscrollLabel_hscroll_label_t_get_prop_duration},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_xoffset",  "(J)I",  awtk_THscrollLabel_hscroll_label_t_get_prop_xoffset},
{"awtk/THscrollLabel",  "hscroll_label_t_get_prop_text_w",  "(J)I",  awtk_THscrollLabel_hscroll_label_t_get_prop_text_w},
{"awtk/TListItem",  "list_item_create",  "(JIIII)J",  awtk_TListItem_list_item_create},
{"awtk/TListItem",  "list_item_cast",  "(J)J",  awtk_TListItem_list_item_cast},
{"awtk/TListViewH",  "list_view_h_create",  "(JIIII)J",  awtk_TListViewH_list_view_h_create},
{"awtk/TListViewH",  "list_view_h_set_item_width",  "(JI)I",  awtk_TListViewH_list_view_h_set_item_width},
{"awtk/TListViewH",  "list_view_h_set_spacing",  "(JI)I",  awtk_TListViewH_list_view_h_set_spacing},
{"awtk/TListViewH",  "list_view_h_cast",  "(J)J",  awtk_TListViewH_list_view_h_cast},
{"awtk/TListViewH",  "list_view_h_t_get_prop_item_width",  "(J)I",  awtk_TListViewH_list_view_h_t_get_prop_item_width},
{"awtk/TListViewH",  "list_view_h_t_get_prop_spacing",  "(J)I",  awtk_TListViewH_list_view_h_t_get_prop_spacing},
{"awtk/TListView",  "list_view_create",  "(JIIII)J",  awtk_TListView_list_view_create},
{"awtk/TListView",  "list_view_set_item_height",  "(JI)I",  awtk_TListView_list_view_set_item_height},
{"awtk/TListView",  "list_view_set_default_item_height",  "(JI)I",  awtk_TListView_list_view_set_default_item_height},
{"awtk/TListView",  "list_view_set_auto_hide_scroll_bar",  "(JZ)I",  awtk_TListView_list_view_set_auto_hide_scroll_bar},
{"awtk/TListView",  "list_view_set_floating_scroll_bar",  "(JZ)I",  awtk_TListView_list_view_set_floating_scroll_bar},
{"awtk/TListView",  "list_view_cast",  "(J)J",  awtk_TListView_list_view_cast},
{"awtk/TListView",  "list_view_reinit",  "(J)I",  awtk_TListView_list_view_reinit},
{"awtk/TListView",  "list_view_t_get_prop_item_height",  "(J)I",  awtk_TListView_list_view_t_get_prop_item_height},
{"awtk/TListView",  "list_view_t_get_prop_default_item_height",  "(J)I",  awtk_TListView_list_view_t_get_prop_default_item_height},
{"awtk/TListView",  "list_view_t_get_prop_auto_hide_scroll_bar",  "(J)Z",  awtk_TListView_list_view_t_get_prop_auto_hide_scroll_bar},
{"awtk/TListView",  "list_view_t_get_prop_floating_scroll_bar",  "(J)Z",  awtk_TListView_list_view_t_get_prop_floating_scroll_bar},
{"awtk/TScrollBar",  "scroll_bar_create",  "(JIIII)J",  awtk_TScrollBar_scroll_bar_create},
{"awtk/TScrollBar",  "scroll_bar_cast",  "(J)J",  awtk_TScrollBar_scroll_bar_cast},
{"awtk/TScrollBar",  "scroll_bar_create_mobile",  "(JIIII)J",  awtk_TScrollBar_scroll_bar_create_mobile},
{"awtk/TScrollBar",  "scroll_bar_create_desktop",  "(JIIII)J",  awtk_TScrollBar_scroll_bar_create_desktop},
{"awtk/TScrollBar",  "scroll_bar_set_params",  "(JII)I",  awtk_TScrollBar_scroll_bar_set_params},
{"awtk/TScrollBar",  "scroll_bar_scroll_to",  "(JII)I",  awtk_TScrollBar_scroll_bar_scroll_to},
{"awtk/TScrollBar",  "scroll_bar_set_value",  "(JI)I",  awtk_TScrollBar_scroll_bar_set_value},
{"awtk/TScrollBar",  "scroll_bar_add_delta",  "(JI)I",  awtk_TScrollBar_scroll_bar_add_delta},
{"awtk/TScrollBar",  "scroll_bar_scroll_delta",  "(JI)I",  awtk_TScrollBar_scroll_bar_scroll_delta},
{"awtk/TScrollBar",  "scroll_bar_set_value_only",  "(JI)I",  awtk_TScrollBar_scroll_bar_set_value_only},
{"awtk/TScrollBar",  "scroll_bar_set_auto_hide",  "(JZ)I",  awtk_TScrollBar_scroll_bar_set_auto_hide},
{"awtk/TScrollBar",  "scroll_bar_is_mobile",  "(J)Z",  awtk_TScrollBar_scroll_bar_is_mobile},
{"awtk/TScrollBar",  "scroll_bar_t_get_prop_virtual_size",  "(J)I",  awtk_TScrollBar_scroll_bar_t_get_prop_virtual_size},
{"awtk/TScrollBar",  "scroll_bar_t_get_prop_value",  "(J)I",  awtk_TScrollBar_scroll_bar_t_get_prop_value},
{"awtk/TScrollBar",  "scroll_bar_t_get_prop_row",  "(J)I",  awtk_TScrollBar_scroll_bar_t_get_prop_row},
{"awtk/TScrollBar",  "scroll_bar_t_get_prop_animatable",  "(J)Z",  awtk_TScrollBar_scroll_bar_t_get_prop_animatable},
{"awtk/TScrollBar",  "scroll_bar_t_get_prop_auto_hide",  "(J)Z",  awtk_TScrollBar_scroll_bar_t_get_prop_auto_hide},
{"awtk/TScrollView",  "scroll_view_create",  "(JIIII)J",  awtk_TScrollView_scroll_view_create},
{"awtk/TScrollView",  "scroll_view_cast",  "(J)J",  awtk_TScrollView_scroll_view_cast},
{"awtk/TScrollView",  "scroll_view_set_virtual_w",  "(JI)I",  awtk_TScrollView_scroll_view_set_virtual_w},
{"awtk/TScrollView",  "scroll_view_set_virtual_h",  "(JI)I",  awtk_TScrollView_scroll_view_set_virtual_h},
{"awtk/TScrollView",  "scroll_view_set_xslidable",  "(JZ)I",  awtk_TScrollView_scroll_view_set_xslidable},
{"awtk/TScrollView",  "scroll_view_set_yslidable",  "(JZ)I",  awtk_TScrollView_scroll_view_set_yslidable},
{"awtk/TScrollView",  "scroll_view_set_snap_to_page",  "(JZ)I",  awtk_TScrollView_scroll_view_set_snap_to_page},
{"awtk/TScrollView",  "scroll_view_set_move_to_page",  "(JZ)I",  awtk_TScrollView_scroll_view_set_move_to_page},
{"awtk/TScrollView",  "scroll_view_set_recursive",  "(JZ)I",  awtk_TScrollView_scroll_view_set_recursive},
{"awtk/TScrollView",  "scroll_view_set_recursive_only",  "(JZ)I",  awtk_TScrollView_scroll_view_set_recursive_only},
{"awtk/TScrollView",  "scroll_view_set_offset",  "(JII)I",  awtk_TScrollView_scroll_view_set_offset},
{"awtk/TScrollView",  "scroll_view_set_speed_scale",  "(JFF)I",  awtk_TScrollView_scroll_view_set_speed_scale},
{"awtk/TScrollView",  "scroll_view_scroll_to",  "(JIII)I",  awtk_TScrollView_scroll_view_scroll_to},
{"awtk/TScrollView",  "scroll_view_scroll_delta_to",  "(JIII)I",  awtk_TScrollView_scroll_view_scroll_delta_to},
{"awtk/TScrollView",  "scroll_view_t_get_prop_virtual_w",  "(J)I",  awtk_TScrollView_scroll_view_t_get_prop_virtual_w},
{"awtk/TScrollView",  "scroll_view_t_get_prop_virtual_h",  "(J)I",  awtk_TScrollView_scroll_view_t_get_prop_virtual_h},
{"awtk/TScrollView",  "scroll_view_t_get_prop_xoffset",  "(J)I",  awtk_TScrollView_scroll_view_t_get_prop_xoffset},
{"awtk/TScrollView",  "scroll_view_t_get_prop_yoffset",  "(J)I",  awtk_TScrollView_scroll_view_t_get_prop_yoffset},
{"awtk/TScrollView",  "scroll_view_t_get_prop_xspeed_scale",  "(J)F",  awtk_TScrollView_scroll_view_t_get_prop_xspeed_scale},
{"awtk/TScrollView",  "scroll_view_t_get_prop_yspeed_scale",  "(J)F",  awtk_TScrollView_scroll_view_t_get_prop_yspeed_scale},
{"awtk/TScrollView",  "scroll_view_t_get_prop_xslidable",  "(J)Z",  awtk_TScrollView_scroll_view_t_get_prop_xslidable},
{"awtk/TScrollView",  "scroll_view_t_get_prop_yslidable",  "(J)Z",  awtk_TScrollView_scroll_view_t_get_prop_yslidable},
{"awtk/TScrollView",  "scroll_view_t_get_prop_snap_to_page",  "(J)Z",  awtk_TScrollView_scroll_view_t_get_prop_snap_to_page},
{"awtk/TScrollView",  "scroll_view_t_get_prop_move_to_page",  "(J)Z",  awtk_TScrollView_scroll_view_t_get_prop_move_to_page},
{"awtk/TScrollView",  "scroll_view_t_get_prop_recursive",  "(J)Z",  awtk_TScrollView_scroll_view_t_get_prop_recursive},
{"awtk/TSlideMenu",  "slide_menu_create",  "(JIIII)J",  awtk_TSlideMenu_slide_menu_create},
{"awtk/TSlideMenu",  "slide_menu_cast",  "(J)J",  awtk_TSlideMenu_slide_menu_cast},
{"awtk/TSlideMenu",  "slide_menu_set_value",  "(JI)I",  awtk_TSlideMenu_slide_menu_set_value},
{"awtk/TSlideMenu",  "slide_menu_set_align_v",  "(JI)I",  awtk_TSlideMenu_slide_menu_set_align_v},
{"awtk/TSlideMenu",  "slide_menu_set_min_scale",  "(JF)I",  awtk_TSlideMenu_slide_menu_set_min_scale},
{"awtk/TSlideMenu",  "slide_menu_t_get_prop_value",  "(J)I",  awtk_TSlideMenu_slide_menu_t_get_prop_value},
{"awtk/TSlideMenu",  "slide_menu_t_get_prop_align_v",  "(J)I",  awtk_TSlideMenu_slide_menu_t_get_prop_align_v},
{"awtk/TSlideMenu",  "slide_menu_t_get_prop_min_scale",  "(J)F",  awtk_TSlideMenu_slide_menu_t_get_prop_min_scale},
{"awtk/TSlideIndicator",  "slide_indicator_create",  "(JIIII)J",  awtk_TSlideIndicator_slide_indicator_create},
{"awtk/TSlideIndicator",  "slide_indicator_create_linear",  "(JIIII)J",  awtk_TSlideIndicator_slide_indicator_create_linear},
{"awtk/TSlideIndicator",  "slide_indicator_create_arc",  "(JIIII)J",  awtk_TSlideIndicator_slide_indicator_create_arc},
{"awtk/TSlideIndicator",  "slide_indicator_cast",  "(J)J",  awtk_TSlideIndicator_slide_indicator_cast},
{"awtk/TSlideIndicator",  "slide_indicator_set_value",  "(JI)I",  awtk_TSlideIndicator_slide_indicator_set_value},
{"awtk/TSlideIndicator",  "slide_indicator_set_max",  "(JI)I",  awtk_TSlideIndicator_slide_indicator_set_max},
{"awtk/TSlideIndicator",  "slide_indicator_set_default_paint",  "(JI)I",  awtk_TSlideIndicator_slide_indicator_set_default_paint},
{"awtk/TSlideIndicator",  "slide_indicator_set_auto_hide",  "(JI)I",  awtk_TSlideIndicator_slide_indicator_set_auto_hide},
{"awtk/TSlideIndicator",  "slide_indicator_set_margin",  "(JI)I",  awtk_TSlideIndicator_slide_indicator_set_margin},
{"awtk/TSlideIndicator",  "slide_indicator_set_spacing",  "(JF)I",  awtk_TSlideIndicator_slide_indicator_set_spacing},
{"awtk/TSlideIndicator",  "slide_indicator_set_size",  "(JI)I",  awtk_TSlideIndicator_slide_indicator_set_size},
{"awtk/TSlideIndicator",  "slide_indicator_set_anchor",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TSlideIndicator_slide_indicator_set_anchor},
{"awtk/TSlideIndicator",  "slide_indicator_set_indicated_target",  "(JLjava/lang/String;)I",  awtk_TSlideIndicator_slide_indicator_set_indicated_target},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_value",  "(J)I",  awtk_TSlideIndicator_slide_indicator_t_get_prop_value},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_max",  "(J)I",  awtk_TSlideIndicator_slide_indicator_t_get_prop_max},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_default_paint",  "(J)I",  awtk_TSlideIndicator_slide_indicator_t_get_prop_default_paint},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_auto_hide",  "(J)I",  awtk_TSlideIndicator_slide_indicator_t_get_prop_auto_hide},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_margin",  "(J)I",  awtk_TSlideIndicator_slide_indicator_t_get_prop_margin},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_spacing",  "(J)F",  awtk_TSlideIndicator_slide_indicator_t_get_prop_spacing},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_size",  "(J)I",  awtk_TSlideIndicator_slide_indicator_t_get_prop_size},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_anchor_x",  "(J)F",  awtk_TSlideIndicator_slide_indicator_t_get_prop_anchor_x},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_anchor_y",  "(J)F",  awtk_TSlideIndicator_slide_indicator_t_get_prop_anchor_y},
{"awtk/TSlideIndicator",  "slide_indicator_t_get_prop_indicated_target",  "(J)Ljava/lang/String;",  awtk_TSlideIndicator_slide_indicator_t_get_prop_indicated_target},
{"awtk/TSlideView",  "slide_view_create",  "(JIIII)J",  awtk_TSlideView_slide_view_create},
{"awtk/TSlideView",  "slide_view_cast",  "(J)J",  awtk_TSlideView_slide_view_cast},
{"awtk/TSlideView",  "slide_view_set_auto_play",  "(JI)I",  awtk_TSlideView_slide_view_set_auto_play},
{"awtk/TSlideView",  "slide_view_set_active",  "(JI)I",  awtk_TSlideView_slide_view_set_active},
{"awtk/TSlideView",  "slide_view_set_active_ex",  "(JIZ)I",  awtk_TSlideView_slide_view_set_active_ex},
{"awtk/TSlideView",  "slide_view_set_vertical",  "(JZ)I",  awtk_TSlideView_slide_view_set_vertical},
{"awtk/TSlideView",  "slide_view_set_anim_hint",  "(JLjava/lang/String;)I",  awtk_TSlideView_slide_view_set_anim_hint},
{"awtk/TSlideView",  "slide_view_set_loop",  "(JZ)I",  awtk_TSlideView_slide_view_set_loop},
{"awtk/TSlideView",  "slide_view_remove_index",  "(JI)I",  awtk_TSlideView_slide_view_remove_index},
{"awtk/TSlideView",  "slide_view_t_get_prop_vertical",  "(J)Z",  awtk_TSlideView_slide_view_t_get_prop_vertical},
{"awtk/TSlideView",  "slide_view_t_get_prop_auto_play",  "(J)I",  awtk_TSlideView_slide_view_t_get_prop_auto_play},
{"awtk/TSlideView",  "slide_view_t_get_prop_loop",  "(J)Z",  awtk_TSlideView_slide_view_t_get_prop_loop},
{"awtk/TSlideView",  "slide_view_t_get_prop_anim_hint",  "(J)Ljava/lang/String;",  awtk_TSlideView_slide_view_t_get_prop_anim_hint},
{"awtk/TSwitch",  "switch_create",  "(JIIII)J",  awtk_TSwitch_switch_create},
{"awtk/TSwitch",  "switch_set_value",  "(JZ)I",  awtk_TSwitch_switch_set_value},
{"awtk/TSwitch",  "switch_cast",  "(J)J",  awtk_TSwitch_switch_cast},
{"awtk/TSwitch",  "switch_t_get_prop_value",  "(J)Z",  awtk_TSwitch_switch_t_get_prop_value},
{"awtk/TSwitch",  "switch_t_get_prop_max_xoffset_ratio",  "(J)F",  awtk_TSwitch_switch_t_get_prop_max_xoffset_ratio},
{"awtk/TTextSelector",  "text_selector_create",  "(JIIII)J",  awtk_TTextSelector_text_selector_create},
{"awtk/TTextSelector",  "text_selector_cast",  "(J)J",  awtk_TTextSelector_text_selector_cast},
{"awtk/TTextSelector",  "text_selector_reset_options",  "(J)I",  awtk_TTextSelector_text_selector_reset_options},
{"awtk/TTextSelector",  "text_selector_count_options",  "(J)I",  awtk_TTextSelector_text_selector_count_options},
{"awtk/TTextSelector",  "text_selector_append_option",  "(JILjava/lang/String;)I",  awtk_TTextSelector_text_selector_append_option},
{"awtk/TTextSelector",  "text_selector_set_options",  "(JLjava/lang/String;)I",  awtk_TTextSelector_text_selector_set_options},
{"awtk/TTextSelector",  "text_selector_set_range_options_ex",  "(JIIILjava/lang/String;)I",  awtk_TTextSelector_text_selector_set_range_options_ex},
{"awtk/TTextSelector",  "text_selector_set_range_options",  "(JIII)I",  awtk_TTextSelector_text_selector_set_range_options},
{"awtk/TTextSelector",  "text_selector_get_value",  "(J)I",  awtk_TTextSelector_text_selector_get_value},
{"awtk/TTextSelector",  "text_selector_set_value",  "(JI)I",  awtk_TTextSelector_text_selector_set_value},
{"awtk/TTextSelector",  "text_selector_get_text",  "(J)Ljava/lang/String;",  awtk_TTextSelector_text_selector_get_text},
{"awtk/TTextSelector",  "text_selector_set_text",  "(JLjava/lang/String;)I",  awtk_TTextSelector_text_selector_set_text},
{"awtk/TTextSelector",  "text_selector_set_selected_index",  "(JI)I",  awtk_TTextSelector_text_selector_set_selected_index},
{"awtk/TTextSelector",  "text_selector_set_visible_nr",  "(JI)I",  awtk_TTextSelector_text_selector_set_visible_nr},
{"awtk/TTextSelector",  "text_selector_set_localize_options",  "(JZ)I",  awtk_TTextSelector_text_selector_set_localize_options},
{"awtk/TTextSelector",  "text_selector_set_loop_options",  "(JZ)I",  awtk_TTextSelector_text_selector_set_loop_options},
{"awtk/TTextSelector",  "text_selector_set_yspeed_scale",  "(JF)I",  awtk_TTextSelector_text_selector_set_yspeed_scale},
{"awtk/TTextSelector",  "text_selector_set_animating_time",  "(JI)I",  awtk_TTextSelector_text_selector_set_animating_time},
{"awtk/TTextSelector",  "text_selector_t_get_prop_visible_nr",  "(J)I",  awtk_TTextSelector_text_selector_t_get_prop_visible_nr},
{"awtk/TTextSelector",  "text_selector_t_get_prop_selected_index",  "(J)I",  awtk_TTextSelector_text_selector_t_get_prop_selected_index},
{"awtk/TTextSelector",  "text_selector_t_get_prop_options",  "(J)Ljava/lang/String;",  awtk_TTextSelector_text_selector_t_get_prop_options},
{"awtk/TTextSelector",  "text_selector_t_get_prop_yspeed_scale",  "(J)F",  awtk_TTextSelector_text_selector_t_get_prop_yspeed_scale},
{"awtk/TTextSelector",  "text_selector_t_get_prop_animating_time",  "(J)I",  awtk_TTextSelector_text_selector_t_get_prop_animating_time},
{"awtk/TTextSelector",  "text_selector_t_get_prop_localize_options",  "(J)Z",  awtk_TTextSelector_text_selector_t_get_prop_localize_options},
{"awtk/TTextSelector",  "text_selector_t_get_prop_loop_options",  "(J)Z",  awtk_TTextSelector_text_selector_t_get_prop_loop_options},
{"awtk/TTimeClock",  "time_clock_create",  "(JIIII)J",  awtk_TTimeClock_time_clock_create},
{"awtk/TTimeClock",  "time_clock_cast",  "(J)J",  awtk_TTimeClock_time_clock_cast},
{"awtk/TTimeClock",  "time_clock_set_hour",  "(JI)I",  awtk_TTimeClock_time_clock_set_hour},
{"awtk/TTimeClock",  "time_clock_set_minute",  "(JI)I",  awtk_TTimeClock_time_clock_set_minute},
{"awtk/TTimeClock",  "time_clock_set_second",  "(JI)I",  awtk_TTimeClock_time_clock_set_second},
{"awtk/TTimeClock",  "time_clock_set_hour_image",  "(JLjava/lang/String;)I",  awtk_TTimeClock_time_clock_set_hour_image},
{"awtk/TTimeClock",  "time_clock_set_minute_image",  "(JLjava/lang/String;)I",  awtk_TTimeClock_time_clock_set_minute_image},
{"awtk/TTimeClock",  "time_clock_set_second_image",  "(JLjava/lang/String;)I",  awtk_TTimeClock_time_clock_set_second_image},
{"awtk/TTimeClock",  "time_clock_set_bg_image",  "(JLjava/lang/String;)I",  awtk_TTimeClock_time_clock_set_bg_image},
{"awtk/TTimeClock",  "time_clock_set_image",  "(JLjava/lang/String;)I",  awtk_TTimeClock_time_clock_set_image},
{"awtk/TTimeClock",  "time_clock_set_hour_anchor",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TTimeClock_time_clock_set_hour_anchor},
{"awtk/TTimeClock",  "time_clock_set_minute_anchor",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TTimeClock_time_clock_set_minute_anchor},
{"awtk/TTimeClock",  "time_clock_set_second_anchor",  "(JLjava/lang/String;Ljava/lang/String;)I",  awtk_TTimeClock_time_clock_set_second_anchor},
{"awtk/TTimeClock",  "time_clock_t_get_prop_hour",  "(J)I",  awtk_TTimeClock_time_clock_t_get_prop_hour},
{"awtk/TTimeClock",  "time_clock_t_get_prop_minute",  "(J)I",  awtk_TTimeClock_time_clock_t_get_prop_minute},
{"awtk/TTimeClock",  "time_clock_t_get_prop_second",  "(J)I",  awtk_TTimeClock_time_clock_t_get_prop_second},
{"awtk/TTimeClock",  "time_clock_t_get_prop_image",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_image},
{"awtk/TTimeClock",  "time_clock_t_get_prop_bg_image",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_bg_image},
{"awtk/TTimeClock",  "time_clock_t_get_prop_hour_image",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_hour_image},
{"awtk/TTimeClock",  "time_clock_t_get_prop_minute_image",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_minute_image},
{"awtk/TTimeClock",  "time_clock_t_get_prop_second_image",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_second_image},
{"awtk/TTimeClock",  "time_clock_t_get_prop_hour_anchor_x",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_hour_anchor_x},
{"awtk/TTimeClock",  "time_clock_t_get_prop_hour_anchor_y",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_hour_anchor_y},
{"awtk/TTimeClock",  "time_clock_t_get_prop_minute_anchor_x",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_minute_anchor_x},
{"awtk/TTimeClock",  "time_clock_t_get_prop_minute_anchor_y",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_minute_anchor_y},
{"awtk/TTimeClock",  "time_clock_t_get_prop_second_anchor_x",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_second_anchor_x},
{"awtk/TTimeClock",  "time_clock_t_get_prop_second_anchor_y",  "(J)Ljava/lang/String;",  awtk_TTimeClock_time_clock_t_get_prop_second_anchor_y},
{"awtk/TVpage",  "vpage_create",  "(JIIII)J",  awtk_TVpage_vpage_create},
{"awtk/TVpage",  "vpage_cast",  "(J)J",  awtk_TVpage_vpage_cast},
{"awtk/TVpage",  "vpage_set_ui_asset",  "(JLjava/lang/String;)I",  awtk_TVpage_vpage_set_ui_asset},
{"awtk/TVpage",  "vpage_set_anim_hint",  "(JLjava/lang/String;)I",  awtk_TVpage_vpage_set_anim_hint},
{"awtk/TVpage",  "vpage_t_get_prop_ui_asset",  "(J)Ljava/lang/String;",  awtk_TVpage_vpage_t_get_prop_ui_asset},
{"awtk/TVpage",  "vpage_t_get_prop_anim_hint",  "(J)Ljava/lang/String;",  awtk_TVpage_vpage_t_get_prop_anim_hint},
{"awtk/TPropChangeEvent",  "prop_change_event_cast",  "(J)J",  awtk_TPropChangeEvent_prop_change_event_cast},
{"awtk/TPropChangeEvent",  "prop_change_event_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TPropChangeEvent_prop_change_event_t_get_prop_name},
{"awtk/TPropChangeEvent",  "prop_change_event_t_get_prop_value",  "(J)J",  awtk_TPropChangeEvent_prop_change_event_t_get_prop_value},
{"awtk/TProgressEvent",  "progress_event_cast",  "(J)J",  awtk_TProgressEvent_progress_event_cast},
{"awtk/TProgressEvent",  "progress_event_t_get_prop_percent",  "(J)I",  awtk_TProgressEvent_progress_event_t_get_prop_percent},
{"awtk/TDoneEvent",  "done_event_cast",  "(J)J",  awtk_TDoneEvent_done_event_cast},
{"awtk/TDoneEvent",  "done_event_t_get_prop_result",  "(J)I",  awtk_TDoneEvent_done_event_t_get_prop_result},
{"awtk/TErrorEvent",  "error_event_cast",  "(J)J",  awtk_TErrorEvent_error_event_cast},
{"awtk/TErrorEvent",  "error_event_t_get_prop_code",  "(J)I",  awtk_TErrorEvent_error_event_t_get_prop_code},
{"awtk/TErrorEvent",  "error_event_t_get_prop_message",  "(J)Ljava/lang/String;",  awtk_TErrorEvent_error_event_t_get_prop_message},
{"awtk/TCmdExecEvent",  "cmd_exec_event_cast",  "(J)J",  awtk_TCmdExecEvent_cmd_exec_event_cast},
{"awtk/TCmdExecEvent",  "cmd_exec_event_t_get_prop_name",  "(J)Ljava/lang/String;",  awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_name},
{"awtk/TCmdExecEvent",  "cmd_exec_event_t_get_prop_args",  "(J)Ljava/lang/String;",  awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_args},
{"awtk/TCmdExecEvent",  "cmd_exec_event_t_get_prop_result",  "(J)I",  awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_result},
{"awtk/TCmdExecEvent",  "cmd_exec_event_t_get_prop_can_exec",  "(J)Z",  awtk_TCmdExecEvent_cmd_exec_event_t_get_prop_can_exec},
{"awtk/TAppBar",  "app_bar_create",  "(JIIII)J",  awtk_TAppBar_app_bar_create},
{"awtk/TAppBar",  "app_bar_cast",  "(J)J",  awtk_TAppBar_app_bar_cast},
{"awtk/TButtonGroup",  "button_group_create",  "(JIIII)J",  awtk_TButtonGroup_button_group_create},
{"awtk/TButtonGroup",  "button_group_cast",  "(J)J",  awtk_TButtonGroup_button_group_cast},
{"awtk/TButton",  "button_create",  "(JIIII)J",  awtk_TButton_button_create},
{"awtk/TButton",  "button_cast",  "(J)J",  awtk_TButton_button_cast},
{"awtk/TButton",  "button_set_repeat",  "(JI)I",  awtk_TButton_button_set_repeat},
{"awtk/TButton",  "button_set_long_press_time",  "(JI)I",  awtk_TButton_button_set_long_press_time},
{"awtk/TButton",  "button_set_enable_long_press",  "(JZ)I",  awtk_TButton_button_set_enable_long_press},
{"awtk/TButton",  "button_t_get_prop_repeat",  "(J)I",  awtk_TButton_button_t_get_prop_repeat},
{"awtk/TButton",  "button_t_get_prop_enable_long_press",  "(J)Z",  awtk_TButton_button_t_get_prop_enable_long_press},
{"awtk/TButton",  "button_t_get_prop_long_press_time",  "(J)I",  awtk_TButton_button_t_get_prop_long_press_time},
{"awtk/TCheckButton",  "check_button_create",  "(JIIII)J",  awtk_TCheckButton_check_button_create},
{"awtk/TCheckButton",  "check_button_create_radio",  "(JIIII)J",  awtk_TCheckButton_check_button_create_radio},
{"awtk/TCheckButton",  "check_button_set_value",  "(JZ)I",  awtk_TCheckButton_check_button_set_value},
{"awtk/TCheckButton",  "check_button_cast",  "(J)J",  awtk_TCheckButton_check_button_cast},
{"awtk/TCheckButton",  "check_button_t_get_prop_value",  "(J)Z",  awtk_TCheckButton_check_button_t_get_prop_value},
{"awtk/TClipView",  "clip_view_create",  "(JIIII)J",  awtk_TClipView_clip_view_create},
{"awtk/TClipView",  "clip_view_cast",  "(J)J",  awtk_TClipView_clip_view_cast},
{"awtk/TColorTile",  "color_tile_create",  "(JIIII)J",  awtk_TColorTile_color_tile_create},
{"awtk/TColorTile",  "color_tile_cast",  "(J)J",  awtk_TColorTile_color_tile_cast},
{"awtk/TColorTile",  "color_tile_set_bg_color",  "(JLjava/lang/String;)I",  awtk_TColorTile_color_tile_set_bg_color},
{"awtk/TColorTile",  "color_tile_get_bg_color",  "(J)Ljava/lang/String;",  awtk_TColorTile_color_tile_get_bg_color},
{"awtk/TColorTile",  "color_tile_get_border_color",  "(J)Ljava/lang/String;",  awtk_TColorTile_color_tile_get_border_color},
{"awtk/TColorTile",  "color_tile_t_get_prop_bg_color",  "(J)Ljava/lang/String;",  awtk_TColorTile_color_tile_t_get_prop_bg_color},
{"awtk/TColorTile",  "color_tile_t_get_prop_border_color",  "(J)Ljava/lang/String;",  awtk_TColorTile_color_tile_t_get_prop_border_color},
{"awtk/TColumn",  "column_create",  "(JIIII)J",  awtk_TColumn_column_create},
{"awtk/TColumn",  "column_cast",  "(J)J",  awtk_TColumn_column_cast},
{"awtk/TComboBoxItem",  "combo_box_item_create",  "(JIIII)J",  awtk_TComboBoxItem_combo_box_item_create},
{"awtk/TComboBoxItem",  "combo_box_item_cast",  "(J)J",  awtk_TComboBoxItem_combo_box_item_cast},
{"awtk/TComboBoxItem",  "combo_box_item_set_checked",  "(JZ)I",  awtk_TComboBoxItem_combo_box_item_set_checked},
{"awtk/TComboBoxItem",  "combo_box_item_set_value",  "(JI)I",  awtk_TComboBoxItem_combo_box_item_set_value},
{"awtk/TComboBoxItem",  "combo_box_item_t_get_prop_value",  "(J)I",  awtk_TComboBoxItem_combo_box_item_t_get_prop_value},
{"awtk/TComboBoxItem",  "combo_box_item_t_get_prop_checked",  "(J)Z",  awtk_TComboBoxItem_combo_box_item_t_get_prop_checked},
{"awtk/TDialogClient",  "dialog_client_create",  "(JIIII)J",  awtk_TDialogClient_dialog_client_create},
{"awtk/TDialogClient",  "dialog_client_cast",  "(J)J",  awtk_TDialogClient_dialog_client_cast},
{"awtk/TDialogTitle",  "dialog_title_create",  "(JIIII)J",  awtk_TDialogTitle_dialog_title_create},
{"awtk/TDialogTitle",  "dialog_title_cast",  "(J)J",  awtk_TDialogTitle_dialog_title_cast},
{"awtk/TDigitClock",  "digit_clock_create",  "(JIIII)J",  awtk_TDigitClock_digit_clock_create},
{"awtk/TDigitClock",  "digit_clock_cast",  "(J)J",  awtk_TDigitClock_digit_clock_cast},
{"awtk/TDigitClock",  "digit_clock_set_format",  "(JLjava/lang/String;)I",  awtk_TDigitClock_digit_clock_set_format},
{"awtk/TDigitClock",  "digit_clock_t_get_prop_format",  "(J)Ljava/lang/String;",  awtk_TDigitClock_digit_clock_t_get_prop_format},
{"awtk/TDragger",  "dragger_create",  "(JIIII)J",  awtk_TDragger_dragger_create},
{"awtk/TDragger",  "dragger_cast",  "(J)J",  awtk_TDragger_dragger_cast},
{"awtk/TDragger",  "dragger_set_range",  "(JIIII)I",  awtk_TDragger_dragger_set_range},
{"awtk/TDragger",  "dragger_t_get_prop_x_min",  "(J)I",  awtk_TDragger_dragger_t_get_prop_x_min},
{"awtk/TDragger",  "dragger_t_get_prop_y_min",  "(J)I",  awtk_TDragger_dragger_t_get_prop_y_min},
{"awtk/TDragger",  "dragger_t_get_prop_x_max",  "(J)I",  awtk_TDragger_dragger_t_get_prop_x_max},
{"awtk/TDragger",  "dragger_t_get_prop_y_max",  "(J)I",  awtk_TDragger_dragger_t_get_prop_y_max},
{"awtk/TEdit",  "edit_create",  "(JIIII)J",  awtk_TEdit_edit_create},
{"awtk/TEdit",  "edit_cast",  "(J)J",  awtk_TEdit_edit_cast},
{"awtk/TEdit",  "edit_get_int",  "(J)I",  awtk_TEdit_edit_get_int},
{"awtk/TEdit",  "edit_get_double",  "(J)F",  awtk_TEdit_edit_get_double},
{"awtk/TEdit",  "edit_set_int",  "(JI)I",  awtk_TEdit_edit_set_int},
{"awtk/TEdit",  "edit_set_double",  "(JF)I",  awtk_TEdit_edit_set_double},
{"awtk/TEdit",  "edit_set_text_limit",  "(JII)I",  awtk_TEdit_edit_set_text_limit},
{"awtk/TEdit",  "edit_set_int_limit",  "(JIII)I",  awtk_TEdit_edit_set_int_limit},
{"awtk/TEdit",  "edit_set_float_limit",  "(JFFF)I",  awtk_TEdit_edit_set_float_limit},
{"awtk/TEdit",  "edit_set_readonly",  "(JZ)I",  awtk_TEdit_edit_set_readonly},
{"awtk/TEdit",  "edit_set_cancelable",  "(JZ)I",  awtk_TEdit_edit_set_cancelable},
{"awtk/TEdit",  "edit_set_auto_fix",  "(JZ)I",  awtk_TEdit_edit_set_auto_fix},
{"awtk/TEdit",  "edit_set_select_none_when_focused",  "(JZ)I",  awtk_TEdit_edit_set_select_none_when_focused},
{"awtk/TEdit",  "edit_set_open_im_when_focused",  "(JZ)I",  awtk_TEdit_edit_set_open_im_when_focused},
{"awtk/TEdit",  "edit_set_close_im_when_blured",  "(JZ)I",  awtk_TEdit_edit_set_close_im_when_blured},
{"awtk/TEdit",  "edit_set_input_type",  "(JI)I",  awtk_TEdit_edit_set_input_type},
{"awtk/TEdit",  "edit_set_action_text",  "(JLjava/lang/String;)I",  awtk_TEdit_edit_set_action_text},
{"awtk/TEdit",  "edit_set_tips",  "(JLjava/lang/String;)I",  awtk_TEdit_edit_set_tips},
{"awtk/TEdit",  "edit_set_tr_tips",  "(JLjava/lang/String;)I",  awtk_TEdit_edit_set_tr_tips},
{"awtk/TEdit",  "edit_set_keyboard",  "(JLjava/lang/String;)I",  awtk_TEdit_edit_set_keyboard},
{"awtk/TEdit",  "edit_set_password_visible",  "(JZ)I",  awtk_TEdit_edit_set_password_visible},
{"awtk/TEdit",  "edit_set_focus",  "(JZ)I",  awtk_TEdit_edit_set_focus},
{"awtk/TEdit",  "edit_set_cursor",  "(JI)I",  awtk_TEdit_edit_set_cursor},
{"awtk/TEdit",  "edit_get_cursor",  "(J)I",  awtk_TEdit_edit_get_cursor},
{"awtk/TEdit",  "edit_set_select",  "(JII)I",  awtk_TEdit_edit_set_select},
{"awtk/TEdit",  "edit_get_selected_text",  "(J)Ljava/lang/String;",  awtk_TEdit_edit_get_selected_text},
{"awtk/TEdit",  "edit_t_get_prop_tips",  "(J)Ljava/lang/String;",  awtk_TEdit_edit_t_get_prop_tips},
{"awtk/TEdit",  "edit_t_get_prop_tr_tips",  "(J)Ljava/lang/String;",  awtk_TEdit_edit_t_get_prop_tr_tips},
{"awtk/TEdit",  "edit_t_get_prop_action_text",  "(J)Ljava/lang/String;",  awtk_TEdit_edit_t_get_prop_action_text},
{"awtk/TEdit",  "edit_t_get_prop_keyboard",  "(J)Ljava/lang/String;",  awtk_TEdit_edit_t_get_prop_keyboard},
{"awtk/TEdit",  "edit_t_get_prop_min",  "(J)F",  awtk_TEdit_edit_t_get_prop_min},
{"awtk/TEdit",  "edit_t_get_prop_max",  "(J)F",  awtk_TEdit_edit_t_get_prop_max},
{"awtk/TEdit",  "edit_t_get_prop_step",  "(J)F",  awtk_TEdit_edit_t_get_prop_step},
{"awtk/TEdit",  "edit_t_get_prop_input_type",  "(J)I",  awtk_TEdit_edit_t_get_prop_input_type},
{"awtk/TEdit",  "edit_t_get_prop_readonly",  "(J)Z",  awtk_TEdit_edit_t_get_prop_readonly},
{"awtk/TEdit",  "edit_t_get_prop_password_visible",  "(J)Z",  awtk_TEdit_edit_t_get_prop_password_visible},
{"awtk/TEdit",  "edit_t_get_prop_auto_fix",  "(J)Z",  awtk_TEdit_edit_t_get_prop_auto_fix},
{"awtk/TEdit",  "edit_t_get_prop_select_none_when_focused",  "(J)Z",  awtk_TEdit_edit_t_get_prop_select_none_when_focused},
{"awtk/TEdit",  "edit_t_get_prop_open_im_when_focused",  "(J)Z",  awtk_TEdit_edit_t_get_prop_open_im_when_focused},
{"awtk/TEdit",  "edit_t_get_prop_close_im_when_blured",  "(J)Z",  awtk_TEdit_edit_t_get_prop_close_im_when_blured},
{"awtk/TEdit",  "edit_t_get_prop_cancelable",  "(J)Z",  awtk_TEdit_edit_t_get_prop_cancelable},
{"awtk/TGridItem",  "grid_item_create",  "(JIIII)J",  awtk_TGridItem_grid_item_create},
{"awtk/TGridItem",  "grid_item_cast",  "(J)J",  awtk_TGridItem_grid_item_cast},
{"awtk/TGrid",  "grid_create",  "(JIIII)J",  awtk_TGrid_grid_create},
{"awtk/TGrid",  "grid_cast",  "(J)J",  awtk_TGrid_grid_cast},
{"awtk/TGroupBox",  "group_box_create",  "(JIIII)J",  awtk_TGroupBox_group_box_create},
{"awtk/TGroupBox",  "group_box_cast",  "(J)J",  awtk_TGroupBox_group_box_cast},
{"awtk/TLabel",  "label_create",  "(JIIII)J",  awtk_TLabel_label_create},
{"awtk/TLabel",  "label_set_length",  "(JI)I",  awtk_TLabel_label_set_length},
{"awtk/TLabel",  "label_set_max_w",  "(JI)I",  awtk_TLabel_label_set_max_w},
{"awtk/TLabel",  "label_set_line_wrap",  "(JZ)I",  awtk_TLabel_label_set_line_wrap},
{"awtk/TLabel",  "label_set_word_wrap",  "(JZ)I",  awtk_TLabel_label_set_word_wrap},
{"awtk/TLabel",  "label_resize_to_content",  "(JIIII)I",  awtk_TLabel_label_resize_to_content},
{"awtk/TLabel",  "label_cast",  "(J)J",  awtk_TLabel_label_cast},
{"awtk/TLabel",  "label_t_get_prop_length",  "(J)I",  awtk_TLabel_label_t_get_prop_length},
{"awtk/TLabel",  "label_t_get_prop_line_wrap",  "(J)Z",  awtk_TLabel_label_t_get_prop_line_wrap},
{"awtk/TLabel",  "label_t_get_prop_word_wrap",  "(J)Z",  awtk_TLabel_label_t_get_prop_word_wrap},
{"awtk/TLabel",  "label_t_get_prop_max_w",  "(J)I",  awtk_TLabel_label_t_get_prop_max_w},
{"awtk/TPages",  "pages_create",  "(JIIII)J",  awtk_TPages_pages_create},
{"awtk/TPages",  "pages_cast",  "(J)J",  awtk_TPages_pages_cast},
{"awtk/TPages",  "pages_set_active",  "(JI)I",  awtk_TPages_pages_set_active},
{"awtk/TPages",  "pages_set_active_by_name",  "(JLjava/lang/String;)I",  awtk_TPages_pages_set_active_by_name},
{"awtk/TPages",  "pages_t_get_prop_active",  "(J)I",  awtk_TPages_pages_t_get_prop_active},
{"awtk/TProgressBar",  "progress_bar_create",  "(JIIII)J",  awtk_TProgressBar_progress_bar_create},
{"awtk/TProgressBar",  "progress_bar_cast",  "(J)J",  awtk_TProgressBar_progress_bar_cast},
{"awtk/TProgressBar",  "progress_bar_set_value",  "(JF)I",  awtk_TProgressBar_progress_bar_set_value},
{"awtk/TProgressBar",  "progress_bar_set_max",  "(JF)I",  awtk_TProgressBar_progress_bar_set_max},
{"awtk/TProgressBar",  "progress_bar_set_format",  "(JLjava/lang/String;)I",  awtk_TProgressBar_progress_bar_set_format},
{"awtk/TProgressBar",  "progress_bar_set_vertical",  "(JZ)I",  awtk_TProgressBar_progress_bar_set_vertical},
{"awtk/TProgressBar",  "progress_bar_set_show_text",  "(JZ)I",  awtk_TProgressBar_progress_bar_set_show_text},
{"awtk/TProgressBar",  "progress_bar_set_reverse",  "(JZ)I",  awtk_TProgressBar_progress_bar_set_reverse},
{"awtk/TProgressBar",  "progress_bar_get_percent",  "(J)I",  awtk_TProgressBar_progress_bar_get_percent},
{"awtk/TProgressBar",  "progress_bar_t_get_prop_value",  "(J)F",  awtk_TProgressBar_progress_bar_t_get_prop_value},
{"awtk/TProgressBar",  "progress_bar_t_get_prop_max",  "(J)F",  awtk_TProgressBar_progress_bar_t_get_prop_max},
{"awtk/TProgressBar",  "progress_bar_t_get_prop_format",  "(J)Ljava/lang/String;",  awtk_TProgressBar_progress_bar_t_get_prop_format},
{"awtk/TProgressBar",  "progress_bar_t_get_prop_vertical",  "(J)Z",  awtk_TProgressBar_progress_bar_t_get_prop_vertical},
{"awtk/TProgressBar",  "progress_bar_t_get_prop_show_text",  "(J)Z",  awtk_TProgressBar_progress_bar_t_get_prop_show_text},
{"awtk/TProgressBar",  "progress_bar_t_get_prop_reverse",  "(J)Z",  awtk_TProgressBar_progress_bar_t_get_prop_reverse},
{"awtk/TRow",  "row_create",  "(JIIII)J",  awtk_TRow_row_create},
{"awtk/TRow",  "row_cast",  "(J)J",  awtk_TRow_row_cast},
{"awtk/TSlider",  "slider_create",  "(JIIII)J",  awtk_TSlider_slider_create},
{"awtk/TSlider",  "slider_cast",  "(J)J",  awtk_TSlider_slider_cast},
{"awtk/TSlider",  "slider_set_value",  "(JF)I",  awtk_TSlider_slider_set_value},
{"awtk/TSlider",  "slider_set_min",  "(JF)I",  awtk_TSlider_slider_set_min},
{"awtk/TSlider",  "slider_set_max",  "(JF)I",  awtk_TSlider_slider_set_max},
{"awtk/TSlider",  "slider_set_step",  "(JF)I",  awtk_TSlider_slider_set_step},
{"awtk/TSlider",  "slider_set_bar_size",  "(JI)I",  awtk_TSlider_slider_set_bar_size},
{"awtk/TSlider",  "slider_set_vertical",  "(JZ)I",  awtk_TSlider_slider_set_vertical},
{"awtk/TSlider",  "slider_t_get_prop_value",  "(J)F",  awtk_TSlider_slider_t_get_prop_value},
{"awtk/TSlider",  "slider_t_get_prop_min",  "(J)F",  awtk_TSlider_slider_t_get_prop_min},
{"awtk/TSlider",  "slider_t_get_prop_max",  "(J)F",  awtk_TSlider_slider_t_get_prop_max},
{"awtk/TSlider",  "slider_t_get_prop_step",  "(J)F",  awtk_TSlider_slider_t_get_prop_step},
{"awtk/TSlider",  "slider_t_get_prop_vertical",  "(J)Z",  awtk_TSlider_slider_t_get_prop_vertical},
{"awtk/TSlider",  "slider_t_get_prop_bar_size",  "(J)I",  awtk_TSlider_slider_t_get_prop_bar_size},
{"awtk/TSlider",  "slider_t_get_prop_dragger_size",  "(J)I",  awtk_TSlider_slider_t_get_prop_dragger_size},
{"awtk/TSlider",  "slider_t_get_prop_dragger_adapt_to_icon",  "(J)Z",  awtk_TSlider_slider_t_get_prop_dragger_adapt_to_icon},
{"awtk/TSlider",  "slider_t_get_prop_slide_with_bar",  "(J)Z",  awtk_TSlider_slider_t_get_prop_slide_with_bar},
{"awtk/TTabButtonGroup",  "tab_button_group_create",  "(JIIII)J",  awtk_TTabButtonGroup_tab_button_group_create},
{"awtk/TTabButtonGroup",  "tab_button_group_set_compact",  "(JZ)I",  awtk_TTabButtonGroup_tab_button_group_set_compact},
{"awtk/TTabButtonGroup",  "tab_button_group_set_scrollable",  "(JZ)I",  awtk_TTabButtonGroup_tab_button_group_set_scrollable},
{"awtk/TTabButtonGroup",  "tab_button_group_cast",  "(J)J",  awtk_TTabButtonGroup_tab_button_group_cast},
{"awtk/TTabButtonGroup",  "tab_button_group_t_get_prop_compact",  "(J)Z",  awtk_TTabButtonGroup_tab_button_group_t_get_prop_compact},
{"awtk/TTabButtonGroup",  "tab_button_group_t_get_prop_scrollable",  "(J)Z",  awtk_TTabButtonGroup_tab_button_group_t_get_prop_scrollable},
{"awtk/TTabButton",  "tab_button_create",  "(JIIII)J",  awtk_TTabButton_tab_button_create},
{"awtk/TTabButton",  "tab_button_cast",  "(J)J",  awtk_TTabButton_tab_button_cast},
{"awtk/TTabButton",  "tab_button_set_value",  "(JZ)I",  awtk_TTabButton_tab_button_set_value},
{"awtk/TTabButton",  "tab_button_set_icon",  "(JLjava/lang/String;)I",  awtk_TTabButton_tab_button_set_icon},
{"awtk/TTabButton",  "tab_button_set_active_icon",  "(JLjava/lang/String;)I",  awtk_TTabButton_tab_button_set_active_icon},
{"awtk/TTabButton",  "tab_button_set_load_ui",  "(JLjava/lang/String;)I",  awtk_TTabButton_tab_button_set_load_ui},
{"awtk/TTabButton",  "tab_button_t_get_prop_value",  "(J)Z",  awtk_TTabButton_tab_button_t_get_prop_value},
{"awtk/TTabButton",  "tab_button_t_get_prop_load_ui",  "(J)Ljava/lang/String;",  awtk_TTabButton_tab_button_t_get_prop_load_ui},
{"awtk/TTabButton",  "tab_button_t_get_prop_active_icon",  "(J)Ljava/lang/String;",  awtk_TTabButton_tab_button_t_get_prop_active_icon},
{"awtk/TTabButton",  "tab_button_t_get_prop_icon",  "(J)Ljava/lang/String;",  awtk_TTabButton_tab_button_t_get_prop_icon},
{"awtk/TTabControl",  "tab_control_create",  "(JIIII)J",  awtk_TTabControl_tab_control_create},
{"awtk/TTabControl",  "tab_control_cast",  "(J)J",  awtk_TTabControl_tab_control_cast},
{"awtk/TView",  "view_create",  "(JIIII)J",  awtk_TView_view_create},
{"awtk/TView",  "view_set_default_focused_child",  "(JLjava/lang/String;)I",  awtk_TView_view_set_default_focused_child},
{"awtk/TView",  "view_cast",  "(J)J",  awtk_TView_view_cast},
{"awtk/TView",  "view_t_get_prop_default_focused_child",  "(J)Ljava/lang/String;",  awtk_TView_view_t_get_prop_default_focused_child},
{"awtk/TDialog",  "dialog_create",  "(JIIII)J",  awtk_TDialog_dialog_create},
{"awtk/TDialog",  "dialog_create_simple",  "(JIIII)J",  awtk_TDialog_dialog_create_simple},
{"awtk/TDialog",  "dialog_cast",  "(J)J",  awtk_TDialog_dialog_cast},
{"awtk/TDialog",  "dialog_get_title",  "(J)J",  awtk_TDialog_dialog_get_title},
{"awtk/TDialog",  "dialog_get_client",  "(J)J",  awtk_TDialog_dialog_get_client},
{"awtk/TDialog",  "dialog_open",  "(Ljava/lang/String;)J",  awtk_TDialog_dialog_open},
{"awtk/TDialog",  "dialog_set_title",  "(JLjava/lang/String;)I",  awtk_TDialog_dialog_set_title},
{"awtk/TDialog",  "dialog_modal",  "(J)I",  awtk_TDialog_dialog_modal},
{"awtk/TDialog",  "dialog_quit",  "(JI)I",  awtk_TDialog_dialog_quit},
{"awtk/TDialog",  "dialog_is_quited",  "(J)Z",  awtk_TDialog_dialog_is_quited},
{"awtk/TDialog",  "dialog_is_modal",  "(J)Z",  awtk_TDialog_dialog_is_modal},
{"awtk/TDialog",  "dialog_toast",  "(Ljava/lang/String;I)I",  awtk_TDialog_dialog_toast},
{"awtk/TDialog",  "dialog_info",  "(Ljava/lang/String;Ljava/lang/String;)I",  awtk_TDialog_dialog_info},
{"awtk/TDialog",  "dialog_warn",  "(Ljava/lang/String;Ljava/lang/String;)I",  awtk_TDialog_dialog_warn},
{"awtk/TDialog",  "dialog_confirm",  "(Ljava/lang/String;Ljava/lang/String;)I",  awtk_TDialog_dialog_confirm},
{"awtk/TDialog",  "dialog_t_get_prop_highlight",  "(J)Ljava/lang/String;",  awtk_TDialog_dialog_t_get_prop_highlight},
{"awtk/TNativeWindow",  "native_window_move",  "(JIIZ)I",  awtk_TNativeWindow_native_window_move},
{"awtk/TNativeWindow",  "native_window_resize",  "(JIIZ)I",  awtk_TNativeWindow_native_window_resize},
{"awtk/TNativeWindow",  "native_window_minimize",  "(J)I",  awtk_TNativeWindow_native_window_minimize},
{"awtk/TNativeWindow",  "native_window_maximize",  "(J)I",  awtk_TNativeWindow_native_window_maximize},
{"awtk/TNativeWindow",  "native_window_restore",  "(J)I",  awtk_TNativeWindow_native_window_restore},
{"awtk/TNativeWindow",  "native_window_center",  "(J)I",  awtk_TNativeWindow_native_window_center},
{"awtk/TNativeWindow",  "native_window_show_border",  "(JZ)I",  awtk_TNativeWindow_native_window_show_border},
{"awtk/TNativeWindow",  "native_window_set_fullscreen",  "(JZ)I",  awtk_TNativeWindow_native_window_set_fullscreen},
{"awtk/TNativeWindow",  "native_window_set_cursor",  "(JLjava/lang/String;J)I",  awtk_TNativeWindow_native_window_set_cursor},
{"awtk/TWindow",  "window_create",  "(JIIII)J",  awtk_TWindow_window_create},
{"awtk/TWindow",  "window_create_default",  "()J",  awtk_TWindow_window_create_default},
{"awtk/TWindow",  "window_set_fullscreen",  "(JZ)I",  awtk_TWindow_window_set_fullscreen},
{"awtk/TWindow",  "window_set_auto_scale_children",  "(JII)I",  awtk_TWindow_window_set_auto_scale_children},
{"awtk/TWindow",  "window_open",  "(Ljava/lang/String;)J",  awtk_TWindow_window_open},
{"awtk/TWindow",  "window_open_and_close",  "(Ljava/lang/String;J)J",  awtk_TWindow_window_open_and_close},
{"awtk/TWindow",  "window_close",  "(J)I",  awtk_TWindow_window_close},
{"awtk/TWindow",  "window_close_force",  "(J)I",  awtk_TWindow_window_close_force},
{"awtk/TWindow",  "window_cast",  "(J)J",  awtk_TWindow_window_cast},
{"awtk/TWindow",  "window_t_get_prop_fullscreen",  "(J)Z",  awtk_TWindow_window_t_get_prop_fullscreen},
{"awtk/TGifImage",  "gif_image_create",  "(JIIII)J",  awtk_TGifImage_gif_image_create},
{"awtk/TGifImage",  "gif_image_play",  "(J)I",  awtk_TGifImage_gif_image_play},
{"awtk/TGifImage",  "gif_image_stop",  "(J)I",  awtk_TGifImage_gif_image_stop},
{"awtk/TGifImage",  "gif_image_pause",  "(J)I",  awtk_TGifImage_gif_image_pause},
{"awtk/TGifImage",  "gif_image_cast",  "(J)J",  awtk_TGifImage_gif_image_cast},
{"awtk/TKeyboard",  "keyboard_create",  "(JIIII)J",  awtk_TKeyboard_keyboard_create},
{"awtk/TKeyboard",  "keyboard_cast",  "(J)J",  awtk_TKeyboard_keyboard_cast},
{"awtk/TSvgImage",  "svg_image_create",  "(JIIII)J",  awtk_TSvgImage_svg_image_create},
{"awtk/TSvgImage",  "svg_image_set_image",  "(JLjava/lang/String;)I",  awtk_TSvgImage_svg_image_set_image},
{"awtk/TSvgImage",  "svg_image_cast",  "(J)J",  awtk_TSvgImage_svg_image_cast},
{"awtk/TIdleInfo",  "idle_info_cast",  "(J)J",  awtk_TIdleInfo_idle_info_cast},
{"awtk/TIdleInfo",  "idle_info_t_get_prop_ctx",  "(J)J",  awtk_TIdleInfo_idle_info_t_get_prop_ctx},
{"awtk/TIdleInfo",  "idle_info_t_get_prop_extra_ctx",  "(J)J",  awtk_TIdleInfo_idle_info_t_get_prop_extra_ctx},
{"awtk/TIdleInfo",  "idle_info_t_get_prop_id",  "(J)I",  awtk_TIdleInfo_idle_info_t_get_prop_id},
{"awtk/TObjectArray",  "object_array_create",  "()J",  awtk_TObjectArray_object_array_create},
{"awtk/TObjectArray",  "object_array_clear_props",  "(J)I",  awtk_TObjectArray_object_array_clear_props},
{"awtk/TObjectArray",  "object_array_insert",  "(JIJ)I",  awtk_TObjectArray_object_array_insert},
{"awtk/TObjectArray",  "object_array_push",  "(JJ)I",  awtk_TObjectArray_object_array_push},
{"awtk/TObjectArray",  "object_array_index_of",  "(JJ)I",  awtk_TObjectArray_object_array_index_of},
{"awtk/TObjectArray",  "object_array_last_index_of",  "(JJ)I",  awtk_TObjectArray_object_array_last_index_of},
{"awtk/TObjectArray",  "object_array_remove",  "(JI)I",  awtk_TObjectArray_object_array_remove},
{"awtk/TObjectArray",  "object_array_get_and_remove",  "(JIJ)I",  awtk_TObjectArray_object_array_get_and_remove},
{"awtk/TObjectArray",  "object_array_t_get_prop_size",  "(J)I",  awtk_TObjectArray_object_array_t_get_prop_size},
{"awtk/TObjectDefault",  "object_default_create",  "()J",  awtk_TObjectDefault_object_default_create},
{"awtk/TObjectDefault",  "object_default_clear_props",  "(J)I",  awtk_TObjectDefault_object_default_clear_props},
{"awtk/TObjectDefault",  "object_default_t_get_prop_props_size",  "(J)I",  awtk_TObjectDefault_object_default_t_get_prop_props_size},
{"awtk/TTimerInfo",  "timer_info_cast",  "(J)J",  awtk_TTimerInfo_timer_info_cast},
{"awtk/TTimerInfo",  "timer_info_t_get_prop_ctx",  "(J)J",  awtk_TTimerInfo_timer_info_t_get_prop_ctx},
{"awtk/TTimerInfo",  "timer_info_t_get_prop_extra_ctx",  "(J)J",  awtk_TTimerInfo_timer_info_t_get_prop_extra_ctx},
{"awtk/TTimerInfo",  "timer_info_t_get_prop_id",  "(J)I",  awtk_TTimerInfo_timer_info_t_get_prop_id},
{"awtk/TTimerInfo",  "timer_info_t_get_prop_now",  "(J)J",  awtk_TTimerInfo_timer_info_t_get_prop_now},
{"awtk/TCalibrationWin",  "calibration_win_cast",  "(J)J",  awtk_TCalibrationWin_calibration_win_cast},
{"awtk/TComboBox",  "combo_box_create",  "(JIIII)J",  awtk_TComboBox_combo_box_create},
{"awtk/TComboBox",  "combo_box_cast",  "(J)J",  awtk_TComboBox_combo_box_cast},
{"awtk/TComboBox",  "combo_box_set_open_window",  "(JLjava/lang/String;)I",  awtk_TComboBox_combo_box_set_open_window},
{"awtk/TComboBox",  "combo_box_reset_options",  "(J)I",  awtk_TComboBox_combo_box_reset_options},
{"awtk/TComboBox",  "combo_box_count_options",  "(J)I",  awtk_TComboBox_combo_box_count_options},
{"awtk/TComboBox",  "combo_box_set_selected_index",  "(JI)I",  awtk_TComboBox_combo_box_set_selected_index},
{"awtk/TComboBox",  "combo_box_set_localize_options",  "(JZ)I",  awtk_TComboBox_combo_box_set_localize_options},
{"awtk/TComboBox",  "combo_box_set_value",  "(JI)I",  awtk_TComboBox_combo_box_set_value},
{"awtk/TComboBox",  "combo_box_set_item_height",  "(JI)I",  awtk_TComboBox_combo_box_set_item_height},
{"awtk/TComboBox",  "combo_box_append_option",  "(JILjava/lang/String;)I",  awtk_TComboBox_combo_box_append_option},
{"awtk/TComboBox",  "combo_box_set_options",  "(JLjava/lang/String;)I",  awtk_TComboBox_combo_box_set_options},
{"awtk/TComboBox",  "combo_box_get_value",  "(J)I",  awtk_TComboBox_combo_box_get_value},
{"awtk/TComboBox",  "combo_box_get_text",  "(J)Ljava/lang/String;",  awtk_TComboBox_combo_box_get_text},
{"awtk/TComboBox",  "combo_box_t_get_prop_open_window",  "(J)Ljava/lang/String;",  awtk_TComboBox_combo_box_t_get_prop_open_window},
{"awtk/TComboBox",  "combo_box_t_get_prop_selected_index",  "(J)I",  awtk_TComboBox_combo_box_t_get_prop_selected_index},
{"awtk/TComboBox",  "combo_box_t_get_prop_value",  "(J)I",  awtk_TComboBox_combo_box_t_get_prop_value},
{"awtk/TComboBox",  "combo_box_t_get_prop_localize_options",  "(J)Z",  awtk_TComboBox_combo_box_t_get_prop_localize_options},
{"awtk/TComboBox",  "combo_box_t_get_prop_options",  "(J)Ljava/lang/String;",  awtk_TComboBox_combo_box_t_get_prop_options},
{"awtk/TComboBox",  "combo_box_t_get_prop_item_height",  "(J)I",  awtk_TComboBox_combo_box_t_get_prop_item_height},
{"awtk/TImage",  "image_create",  "(JIIII)J",  awtk_TImage_image_create},
{"awtk/TImage",  "image_set_draw_type",  "(JI)I",  awtk_TImage_image_set_draw_type},
{"awtk/TImage",  "image_cast",  "(J)J",  awtk_TImage_image_cast},
{"awtk/TImage",  "image_t_get_prop_draw_type",  "(J)I",  awtk_TImage_image_t_get_prop_draw_type},
{"awtk/TOverlay",  "overlay_create",  "(JIIII)J",  awtk_TOverlay_overlay_create},
{"awtk/TOverlay",  "overlay_set_click_through",  "(JZ)I",  awtk_TOverlay_overlay_set_click_through},
{"awtk/TOverlay",  "overlay_set_always_on_top",  "(JZ)I",  awtk_TOverlay_overlay_set_always_on_top},
{"awtk/TOverlay",  "overlay_cast",  "(J)J",  awtk_TOverlay_overlay_cast},
{"awtk/TOverlay",  "overlay_t_get_prop_click_through",  "(J)Z",  awtk_TOverlay_overlay_t_get_prop_click_through},
{"awtk/TOverlay",  "overlay_t_get_prop_always_on_top",  "(J)Z",  awtk_TOverlay_overlay_t_get_prop_always_on_top},
{"awtk/TPopup",  "popup_create",  "(JIIII)J",  awtk_TPopup_popup_create},
{"awtk/TPopup",  "popup_cast",  "(J)J",  awtk_TPopup_popup_cast},
{"awtk/TPopup",  "popup_set_close_when_click",  "(JZ)I",  awtk_TPopup_popup_set_close_when_click},
{"awtk/TPopup",  "popup_set_close_when_click_outside",  "(JZ)I",  awtk_TPopup_popup_set_close_when_click_outside},
{"awtk/TPopup",  "popup_set_close_when_timeout",  "(JI)I",  awtk_TPopup_popup_set_close_when_timeout},
{"awtk/TPopup",  "popup_t_get_prop_close_when_click",  "(J)Z",  awtk_TPopup_popup_t_get_prop_close_when_click},
{"awtk/TPopup",  "popup_t_get_prop_close_when_click_outside",  "(J)Z",  awtk_TPopup_popup_t_get_prop_close_when_click_outside},
{"awtk/TPopup",  "popup_t_get_prop_close_when_timeout",  "(J)I",  awtk_TPopup_popup_t_get_prop_close_when_timeout},
{"awtk/TSpinBox",  "spin_box_create",  "(JIIII)J",  awtk_TSpinBox_spin_box_create},
{"awtk/TSpinBox",  "spin_box_cast",  "(J)J",  awtk_TSpinBox_spin_box_cast},
{"awtk/TSystemBar",  "system_bar_create",  "(JIIII)J",  awtk_TSystemBar_system_bar_create},
{"awtk/TSystemBar",  "system_bar_cast",  "(J)J",  awtk_TSystemBar_system_bar_cast},
{"awtk/TComboBoxEx",  "combo_box_ex_create",  "(JIIII)J",  awtk_TComboBoxEx_combo_box_ex_create}
};

s32 count_AwtkFuncTable() {
  return sizeof(s_metho_awtk_table) / sizeof(s_metho_awtk_table[0]);
}

__refer ptr_AwtkFuncTable() {
  return &s_metho_awtk_table[0];
}

void JNI_OnLoad(MiniJVM *jvm) {
  JniEnv *env = jvm->env;
  env->native_reg_lib(jvm, ptr_AwtkFuncTable(), count_AwtkFuncTable());
}
