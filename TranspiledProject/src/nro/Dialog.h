#ifndef HEADER_nro_Dialog
#define HEADER_nro_Dialog

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Dialog {
	java_lang_Object parent;
	jref F_left;
	jref F_center;
	jref F_right;
} nro_Dialog;

extern Class class_nro_Dialog;


#define VTABLE_nro_Dialog_hashCode_R_int 0
typedef jint (*func_nro_Dialog_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Dialog_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Dialog_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Dialog_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Dialog_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_toString_R_java_lang_String 4
typedef jobject (*func_nro_Dialog_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_finalize 5
typedef void (*func_nro_Dialog_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_notify 6
typedef void (*func_nro_Dialog_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_notifyAll 7
typedef void (*func_nro_Dialog_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_wait 8
typedef void (*func_nro_Dialog_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Dialog_wait_long 9
typedef void (*func_nro_Dialog_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Dialog_wait_long_int 10
typedef void (*func_nro_Dialog_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Dialog_paint_lib_mGraphics 11
typedef void (*func_nro_Dialog_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Dialog_keyPress_int 12
typedef void (*func_nro_Dialog_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Dialog_update 13
typedef void (*func_nro_Dialog_update)(jcontext ctx, jobject self);

void mark_nro_Dialog(jobject object, jint mark, jint depth);
void clinit_nro_Dialog(jcontext ctx);
void init_nro_Dialog(jcontext ctx, jobject self);
void M_nro_Dialog_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Dialog_keyPress_int(jcontext ctx, jobject self, jint param0);
void M_nro_Dialog_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
