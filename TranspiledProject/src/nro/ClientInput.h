#ifndef HEADER_nro_ClientInput
#define HEADER_nro_ClientInput

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ClientInput {
	nro_mScreen parent;
	jref F_tf;
	jint F_x;
	jint F_y;
	jint F_w;
	jint F_h;
	jref F_strPaint;
	jref F_string1;
	jref F_i;
	jint F_focus;
	jint F_nTf;
} nro_ClientInput;

extern Class class_nro_ClientInput;

extern jobject SF_nro_ClientInput_instance;

#define VTABLE_nro_ClientInput_hashCode_R_int 0
typedef jint (*func_nro_ClientInput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ClientInput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ClientInput_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ClientInput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ClientInput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_toString_R_java_lang_String 4
typedef jobject (*func_nro_ClientInput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_finalize 5
typedef void (*func_nro_ClientInput_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_notify 6
typedef void (*func_nro_ClientInput_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_notifyAll 7
typedef void (*func_nro_ClientInput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_wait 8
typedef void (*func_nro_ClientInput_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_wait_long 9
typedef void (*func_nro_ClientInput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ClientInput_wait_long_int 10
typedef void (*func_nro_ClientInput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ClientInput_switchToMe 11
typedef void (*func_nro_ClientInput_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_keyPress_int 12
typedef void (*func_nro_ClientInput_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_ClientInput_update 13
typedef void (*func_nro_ClientInput_update)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_updateKey 14
typedef void (*func_nro_ClientInput_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_paint_lib_mGraphics 15
typedef void (*func_nro_ClientInput_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ClientInput_perform_int_java_lang_Object 16
typedef void (*func_nro_ClientInput_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_ClientInput_getActiveField_R_lib_input_TField 17
typedef jobject (*func_nro_ClientInput_getActiveField_R_lib_input_TField)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientInput_cycleFocus_boolean 18
typedef void (*func_nro_ClientInput_cycleFocus_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_ClientInput_setInput_int_java_lang_String 19
typedef void (*func_nro_ClientInput_setInput_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_nro_ClientInput(jobject object, jint mark, jint depth);
void clinit_nro_ClientInput(jcontext ctx);
void init_nro_ClientInput(jcontext ctx, jobject self);
jobject SM_nro_ClientInput_gI_R_nro_ClientInput(jcontext ctx);
void M_nro_ClientInput_switchToMe(jcontext ctx, jobject self);
jobject M_nro_ClientInput_getActiveField_R_lib_input_TField(jcontext ctx, jobject self);
void M_nro_ClientInput_cycleFocus_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_ClientInput_setInput_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_ClientInput_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_ClientInput_update(jcontext ctx, jobject self);
void M_nro_ClientInput_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_ClientInput_updateKey(jcontext ctx, jobject self);
void M_nro_ClientInput_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
