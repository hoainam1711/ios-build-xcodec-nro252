#ifndef HEADER_nro_InfoDlg
#define HEADER_nro_InfoDlg

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_InfoDlg {
	java_lang_Object parent;
} nro_InfoDlg;

extern Class class_nro_InfoDlg;

extern jbool SF_nro_InfoDlg_isShow;
extern jobject SF_nro_InfoDlg_title;
extern jobject SF_nro_InfoDlg_subtitke;
extern jint SF_nro_InfoDlg_delay;
extern jbool SF_nro_InfoDlg_isLock;

#define VTABLE_nro_InfoDlg_hashCode_R_int 0
typedef jint (*func_nro_InfoDlg_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_InfoDlg_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_InfoDlg_clone_R_java_lang_Object 2
typedef jobject (*func_nro_InfoDlg_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_InfoDlg_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_toString_R_java_lang_String 4
typedef jobject (*func_nro_InfoDlg_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_finalize 5
typedef void (*func_nro_InfoDlg_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_notify 6
typedef void (*func_nro_InfoDlg_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_notifyAll 7
typedef void (*func_nro_InfoDlg_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_wait 8
typedef void (*func_nro_InfoDlg_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoDlg_wait_long 9
typedef void (*func_nro_InfoDlg_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_InfoDlg_wait_long_int 10
typedef void (*func_nro_InfoDlg_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_InfoDlg(jobject object, jint mark, jint depth);
void clinit_nro_InfoDlg(jcontext ctx);
void init_nro_InfoDlg(jcontext ctx, jobject self);
void SM_nro_InfoDlg_show_java_lang_String_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_nro_InfoDlg_showWait(jcontext ctx);
void SM_nro_InfoDlg_paint_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_InfoDlg_update(jcontext ctx);
void SM_nro_InfoDlg_hide(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
