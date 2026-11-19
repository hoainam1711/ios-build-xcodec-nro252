#ifndef HEADER_nro_MoneyCharge
#define HEADER_nro_MoneyCharge

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MoneyCharge {
	nro_mScreen parent;
	jref F_tfSerial;
	jref F_tfCode;
	jint F_x;
	jint F_y;
	jint F_w;
	jint F_h;
	jref F_strPaint;
	jint F_focus;
} nro_MoneyCharge;

extern Class class_nro_MoneyCharge;

extern jobject SF_nro_MoneyCharge_instance;

#define VTABLE_nro_MoneyCharge_hashCode_R_int 0
typedef jint (*func_nro_MoneyCharge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MoneyCharge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MoneyCharge_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MoneyCharge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MoneyCharge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_toString_R_java_lang_String 4
typedef jobject (*func_nro_MoneyCharge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_finalize 5
typedef void (*func_nro_MoneyCharge_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_notify 6
typedef void (*func_nro_MoneyCharge_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_notifyAll 7
typedef void (*func_nro_MoneyCharge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_wait 8
typedef void (*func_nro_MoneyCharge_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_wait_long 9
typedef void (*func_nro_MoneyCharge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MoneyCharge_wait_long_int 10
typedef void (*func_nro_MoneyCharge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_MoneyCharge_switchToMe 11
typedef void (*func_nro_MoneyCharge_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_keyPress_int 12
typedef void (*func_nro_MoneyCharge_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MoneyCharge_update 13
typedef void (*func_nro_MoneyCharge_update)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_updateKey 14
typedef void (*func_nro_MoneyCharge_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_paint_lib_mGraphics 15
typedef void (*func_nro_MoneyCharge_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MoneyCharge_perform_int_java_lang_Object 16
typedef void (*func_nro_MoneyCharge_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_MoneyCharge_getActiveField_R_lib_input_TField 17
typedef jobject (*func_nro_MoneyCharge_getActiveField_R_lib_input_TField)(jcontext ctx, jobject self);
#define VTABLE_nro_MoneyCharge_cycleFocus 18
typedef void (*func_nro_MoneyCharge_cycleFocus)(jcontext ctx, jobject self);

void mark_nro_MoneyCharge(jobject object, jint mark, jint depth);
void clinit_nro_MoneyCharge(jcontext ctx);
void init_nro_MoneyCharge(jcontext ctx, jobject self);
jobject SM_nro_MoneyCharge_gI_R_nro_MoneyCharge(jcontext ctx);
jobject M_nro_MoneyCharge_getActiveField_R_lib_input_TField(jcontext ctx, jobject self);
void M_nro_MoneyCharge_cycleFocus(jcontext ctx, jobject self);
void M_nro_MoneyCharge_switchToMe(jcontext ctx, jobject self);
void M_nro_MoneyCharge_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_MoneyCharge_update(jcontext ctx, jobject self);
void M_nro_MoneyCharge_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_MoneyCharge_updateKey(jcontext ctx, jobject self);
void M_nro_MoneyCharge_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
