#ifndef HEADER_com_nro_clearwing_IOSClearwingLauncher
#define HEADER_com_nro_clearwing_IOSClearwingLauncher

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_clearwing_IOSClearwingLauncher {
	java_lang_Object parent;
} com_nro_clearwing_IOSClearwingLauncher;

extern Class class_com_nro_clearwing_IOSClearwingLauncher;


#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_hashCode_R_int 0
typedef jint (*func_com_nro_clearwing_IOSClearwingLauncher_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_nro_clearwing_IOSClearwingLauncher_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_clone_R_java_lang_Object 2
typedef jobject (*func_com_nro_clearwing_IOSClearwingLauncher_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_getClass_R_java_lang_Class 3
typedef jobject (*func_com_nro_clearwing_IOSClearwingLauncher_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_toString_R_java_lang_String 4
typedef jobject (*func_com_nro_clearwing_IOSClearwingLauncher_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_finalize 5
typedef void (*func_com_nro_clearwing_IOSClearwingLauncher_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_notify 6
typedef void (*func_com_nro_clearwing_IOSClearwingLauncher_notify)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_notifyAll 7
typedef void (*func_com_nro_clearwing_IOSClearwingLauncher_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_wait 8
typedef void (*func_com_nro_clearwing_IOSClearwingLauncher_wait)(jcontext ctx, jobject self);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_wait_long 9
typedef void (*func_com_nro_clearwing_IOSClearwingLauncher_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_nro_clearwing_IOSClearwingLauncher_wait_long_int 10
typedef void (*func_com_nro_clearwing_IOSClearwingLauncher_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_nro_clearwing_IOSClearwingLauncher(jobject object, jint mark, jint depth);
void clinit_com_nro_clearwing_IOSClearwingLauncher(jcontext ctx);
void init_com_nro_clearwing_IOSClearwingLauncher(jcontext ctx, jobject self);
void SM_com_nro_clearwing_IOSClearwingLauncher_main_Array1_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
