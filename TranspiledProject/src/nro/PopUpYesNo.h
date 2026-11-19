#ifndef HEADER_nro_PopUpYesNo
#define HEADER_nro_PopUpYesNo

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_PopUpYesNo {
	java_lang_Object parent;
	jref F_cmdYes;
	jref F_cmdNo;
	jref F_info;
	jint F_X;
	jint F_Y;
	jint F_W;
	jint F_H;
	jint F_dem;
	jlong F_last;
	jlong F_curr;
} nro_PopUpYesNo;

extern Class class_nro_PopUpYesNo;


#define VTABLE_nro_PopUpYesNo_hashCode_R_int 0
typedef jint (*func_nro_PopUpYesNo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_PopUpYesNo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PopUpYesNo_clone_R_java_lang_Object 2
typedef jobject (*func_nro_PopUpYesNo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_PopUpYesNo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_toString_R_java_lang_String 4
typedef jobject (*func_nro_PopUpYesNo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_finalize 5
typedef void (*func_nro_PopUpYesNo_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_notify 6
typedef void (*func_nro_PopUpYesNo_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_notifyAll 7
typedef void (*func_nro_PopUpYesNo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_wait 8
typedef void (*func_nro_PopUpYesNo_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_PopUpYesNo_wait_long 9
typedef void (*func_nro_PopUpYesNo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_PopUpYesNo_wait_long_int 10
typedef void (*func_nro_PopUpYesNo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_PopUpYesNo_perform_int_java_lang_Object 11
typedef void (*func_nro_PopUpYesNo_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_PopUpYesNo_setPopUp_java_lang_String_nro_Command_nro_Command 12
typedef void (*func_nro_PopUpYesNo_setPopUp_java_lang_String_nro_Command_nro_Command)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_nro_PopUpYesNo_paint_lib_mGraphics 13
typedef void (*func_nro_PopUpYesNo_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PopUpYesNo_update 14
typedef void (*func_nro_PopUpYesNo_update)(jcontext ctx, jobject self);

void mark_nro_PopUpYesNo(jobject object, jint mark, jint depth);
void clinit_nro_PopUpYesNo(jcontext ctx);
void init_nro_PopUpYesNo(jcontext ctx, jobject self);
void M_nro_PopUpYesNo_setPopUp_java_lang_String_nro_Command_nro_Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_nro_PopUpYesNo_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_PopUpYesNo_update(jcontext ctx, jobject self);
void M_nro_PopUpYesNo_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
