#ifndef HEADER_com_nro_GameMain$MyInputProcessor
#define HEADER_com_nro_GameMain$MyInputProcessor

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain$MyInputProcessor {
	java_lang_Object parent;
	jint F_lastPhysicalKeyDown;
	jbool F_suppressNextTypedBackspace;
	jbool F_suppressNextTypedForwardDel;
	jref F_this$0;
} com_nro_GameMain$MyInputProcessor;

extern Class class_com_nro_GameMain$MyInputProcessor;


#define VTABLE_com_nro_GameMain$MyInputProcessor_hashCode_R_int 0
typedef jint (*func_com_nro_GameMain$MyInputProcessor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_GameMain$MyInputProcessor_clone_R_java_lang_Object 2
typedef jobject (*func_com_nro_GameMain$MyInputProcessor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_getClass_R_java_lang_Class 3
typedef jobject (*func_com_nro_GameMain$MyInputProcessor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_toString_R_java_lang_String 4
typedef jobject (*func_com_nro_GameMain$MyInputProcessor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_finalize 5
typedef void (*func_com_nro_GameMain$MyInputProcessor_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_notify 6
typedef void (*func_com_nro_GameMain$MyInputProcessor_notify)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_notifyAll 7
typedef void (*func_com_nro_GameMain$MyInputProcessor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_wait 8
typedef void (*func_com_nro_GameMain$MyInputProcessor_wait)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_wait_long 9
typedef void (*func_com_nro_GameMain$MyInputProcessor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_nro_GameMain$MyInputProcessor_wait_long_int 10
typedef void (*func_com_nro_GameMain$MyInputProcessor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_nro_GameMain$MyInputProcessor_keyDown_int_R_boolean 11
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_keyDown_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_nro_GameMain$MyInputProcessor_keyUp_int_R_boolean 12
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_keyUp_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_nro_GameMain$MyInputProcessor_keyTyped_char_R_boolean 13
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_com_nro_GameMain$MyInputProcessor_touchDown_int_int_int_int_R_boolean 14
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_touchDown_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain$MyInputProcessor_touchUp_int_int_int_int_R_boolean 15
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_touchUp_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain$MyInputProcessor_touchCancelled_int_int_int_int_R_boolean 16
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_touchCancelled_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_nro_GameMain$MyInputProcessor_touchDragged_int_int_int_R_boolean 17
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_nro_GameMain$MyInputProcessor_mouseMoved_int_int_R_boolean 18
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_nro_GameMain$MyInputProcessor_scrolled_float_float_R_boolean 19
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean 20
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean 21
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_nro_GameMain$MyInputProcessor_scrolled_int_R_boolean 22
typedef jbool (*func_com_nro_GameMain$MyInputProcessor_scrolled_int_R_boolean)(jcontext ctx, jobject self, jint param0);

void mark_com_nro_GameMain$MyInputProcessor(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain$MyInputProcessor(jcontext ctx);
void init_com_nro_GameMain$MyInputProcessor_com_nro_GameMain(jcontext ctx, jobject self, jobject param0);
jbool M_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean(jcontext ctx, jobject self);
jbool M_com_nro_GameMain$MyInputProcessor_scrolled_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_nro_GameMain$MyInputProcessor_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_nro_GameMain$MyInputProcessor_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_nro_GameMain$MyInputProcessor_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_com_nro_GameMain$MyInputProcessor_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_nro_GameMain$MyInputProcessor_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_nro_GameMain$MyInputProcessor_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_com_nro_GameMain$MyInputProcessor_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_com_nro_GameMain$MyInputProcessor_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_nro_GameMain$MyInputProcessor_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
