#ifndef HEADER_com_nro_GameMain$MyGestureHandler
#define HEADER_com_nro_GameMain$MyGestureHandler

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain$MyGestureHandler {
	java_lang_Object parent;
	jfloat F_initialScale;
	jref F_this$0;
} com_nro_GameMain$MyGestureHandler;

extern Class class_com_nro_GameMain$MyGestureHandler;


#define VTABLE_com_nro_GameMain$MyGestureHandler_hashCode_R_int 0
typedef jint (*func_com_nro_GameMain$MyGestureHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_GameMain$MyGestureHandler_clone_R_java_lang_Object 2
typedef jobject (*func_com_nro_GameMain$MyGestureHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_com_nro_GameMain$MyGestureHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_toString_R_java_lang_String 4
typedef jobject (*func_com_nro_GameMain$MyGestureHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_finalize 5
typedef void (*func_com_nro_GameMain$MyGestureHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_notify 6
typedef void (*func_com_nro_GameMain$MyGestureHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_notifyAll 7
typedef void (*func_com_nro_GameMain$MyGestureHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_wait 8
typedef void (*func_com_nro_GameMain$MyGestureHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyGestureHandler_wait_long 9
typedef void (*func_com_nro_GameMain$MyGestureHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_nro_GameMain$MyGestureHandler_wait_long_int 10
typedef void (*func_com_nro_GameMain$MyGestureHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_nro_GameMain$MyGestureHandler_touchDown_float_float_int_int_R_boolean 11
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_touchDown_float_float_int_int_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain$MyGestureHandler_tap_float_float_int_int_R_boolean 12
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_tap_float_float_int_int_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain$MyGestureHandler_longPress_float_float_R_boolean 13
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_longPress_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_nro_GameMain$MyGestureHandler_fling_float_float_int_R_boolean 14
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_fling_float_float_int_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_com_nro_GameMain$MyGestureHandler_pan_float_float_float_float_R_boolean 15
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_pan_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_nro_GameMain$MyGestureHandler_panStop_float_float_int_int_R_boolean 16
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_panStop_float_float_int_int_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain$MyGestureHandler_zoom_float_float_R_boolean 17
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_zoom_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_nro_GameMain$MyGestureHandler_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean 18
typedef jbool (*func_com_nro_GameMain$MyGestureHandler_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_com_nro_GameMain$MyGestureHandler_pinchStop 19
typedef void (*func_com_nro_GameMain$MyGestureHandler_pinchStop)(jcontext ctx, jobject self);

void mark_com_nro_GameMain$MyGestureHandler(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain$MyGestureHandler(jcontext ctx);
void init_com_nro_GameMain$MyGestureHandler_com_nro_GameMain(jcontext ctx, jobject self, jobject param0);
jbool M_com_nro_GameMain$MyGestureHandler_touchDown_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3);
jbool M_com_nro_GameMain$MyGestureHandler_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_com_nro_GameMain$MyGestureHandler_tap_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3);
jbool M_com_nro_GameMain$MyGestureHandler_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_com_nro_GameMain$MyGestureHandler_fling_float_float_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
jbool M_com_nro_GameMain$MyGestureHandler_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_com_nro_GameMain$MyGestureHandler_panStop_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3);
jbool M_com_nro_GameMain$MyGestureHandler_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_com_nro_GameMain$MyGestureHandler_pinchStop(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
