#ifndef HEADER_nro_MsgDlg
#define HEADER_nro_MsgDlg

#include "Clearwing.h"
#include "nro/Dialog.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MsgDlg {
	nro_Dialog parent;
	jref F_info;
	jbool F_isWait;
	jint F_h;
	jint F_padLeft;
	jlong F_time;
} nro_MsgDlg;

extern Class class_nro_MsgDlg;


#define VTABLE_nro_MsgDlg_hashCode_R_int 0
typedef jint (*func_nro_MsgDlg_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MsgDlg_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MsgDlg_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MsgDlg_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MsgDlg_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_toString_R_java_lang_String 4
typedef jobject (*func_nro_MsgDlg_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_finalize 5
typedef void (*func_nro_MsgDlg_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_notify 6
typedef void (*func_nro_MsgDlg_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_notifyAll 7
typedef void (*func_nro_MsgDlg_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_wait 8
typedef void (*func_nro_MsgDlg_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_wait_long 9
typedef void (*func_nro_MsgDlg_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MsgDlg_wait_long_int 10
typedef void (*func_nro_MsgDlg_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_MsgDlg_paint_lib_mGraphics 11
typedef void (*func_nro_MsgDlg_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MsgDlg_keyPress_int 12
typedef void (*func_nro_MsgDlg_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_MsgDlg_update 13
typedef void (*func_nro_MsgDlg_update)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_pleasewait 14
typedef void (*func_nro_MsgDlg_pleasewait)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_show 15
typedef void (*func_nro_MsgDlg_show)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_getInfo_R_Array1_java_lang_String 16
typedef jobject (*func_nro_MsgDlg_getInfo_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MsgDlg_setInfo_java_lang_String 17
typedef void (*func_nro_MsgDlg_setInfo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command 18
typedef void (*func_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

void mark_nro_MsgDlg(jobject object, jint mark, jint depth);
void clinit_nro_MsgDlg(jcontext ctx);
void init_nro_MsgDlg(jcontext ctx, jobject self);
void M_nro_MsgDlg_pleasewait(jcontext ctx, jobject self);
void M_nro_MsgDlg_show(jcontext ctx, jobject self);
jobject M_nro_MsgDlg_getInfo_R_Array1_java_lang_String(jcontext ctx, jobject self);
void M_nro_MsgDlg_setInfo_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_MsgDlg_setInfo_java_lang_String_nro_Command_nro_Command_nro_Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_nro_MsgDlg_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_MsgDlg_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
