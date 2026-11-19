#ifndef HEADER_com_badlogic_gdx_InputAdapter
#define HEADER_com_badlogic_gdx_InputAdapter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_InputAdapter {
	java_lang_Object parent;
} com_badlogic_gdx_InputAdapter;

extern Class class_com_badlogic_gdx_InputAdapter;


#define VTABLE_com_badlogic_gdx_InputAdapter_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_InputAdapter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_InputAdapter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_InputAdapter_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_InputAdapter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_InputAdapter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_InputAdapter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_finalize 5
typedef void (*func_com_badlogic_gdx_InputAdapter_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_notify 6
typedef void (*func_com_badlogic_gdx_InputAdapter_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_notifyAll 7
typedef void (*func_com_badlogic_gdx_InputAdapter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_wait 8
typedef void (*func_com_badlogic_gdx_InputAdapter_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_InputAdapter_wait_long 9
typedef void (*func_com_badlogic_gdx_InputAdapter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_InputAdapter_wait_long_int 10
typedef void (*func_com_badlogic_gdx_InputAdapter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean 11
typedef jbool (*func_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean 12
typedef jbool (*func_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean 13
typedef jbool (*func_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_com_badlogic_gdx_InputAdapter_touchDown_int_int_int_int_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_InputAdapter_touchDown_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_InputAdapter_touchUp_int_int_int_int_R_boolean 15
typedef jbool (*func_com_badlogic_gdx_InputAdapter_touchUp_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean 16
typedef jbool (*func_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_InputAdapter_touchDragged_int_int_int_R_boolean 17
typedef jbool (*func_com_badlogic_gdx_InputAdapter_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean 18
typedef jbool (*func_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean 19
typedef jbool (*func_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_com_badlogic_gdx_InputAdapter(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_InputAdapter(jcontext ctx);
void init_com_badlogic_gdx_InputAdapter(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_InputAdapter_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_InputAdapter_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_InputAdapter_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_com_badlogic_gdx_InputAdapter_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_badlogic_gdx_InputAdapter_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_badlogic_gdx_InputAdapter_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_badlogic_gdx_InputAdapter_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_com_badlogic_gdx_InputAdapter_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_InputAdapter_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
