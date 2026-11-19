#ifndef HEADER_com_badlogic_gdx_utils_Timer$Task
#define HEADER_com_badlogic_gdx_utils_Timer$Task

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Timer$Task {
	java_lang_Object parent;
	jlong F_executeTimeMillis;
	jlong F_intervalMillis;
	jint F_repeatCount;
	volatile jref F_timer;
} com_badlogic_gdx_utils_Timer$Task;

extern Class class_com_badlogic_gdx_utils_Timer$Task;


#define VTABLE_com_badlogic_gdx_utils_Timer$Task_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Timer$Task_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Timer$Task_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Timer$Task_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Timer$Task_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Timer$Task_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_notify 6
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_wait 8
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_run 11
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_run)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel 12
typedef void (*func_com_badlogic_gdx_utils_Timer$Task_cancel)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean 13
typedef jbool (*func_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer$Task_getExecuteTimeMillis_R_long 14
typedef jlong (*func_com_badlogic_gdx_utils_Timer$Task_getExecuteTimeMillis_R_long)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Timer$Task(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Timer$Task(jcontext ctx);
void init_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Timer$Task_cancel(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean(jcontext ctx, jobject self);
jlong M_com_badlogic_gdx_utils_Timer$Task_getExecuteTimeMillis_R_long(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
