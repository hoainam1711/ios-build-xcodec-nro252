#ifndef HEADER_com_badlogic_gdx_utils_Timer
#define HEADER_com_badlogic_gdx_utils_Timer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Timer {
	java_lang_Object parent;
	jref F_tasks;
	jbool F_stopped;
} com_badlogic_gdx_utils_Timer;

extern Class class_com_badlogic_gdx_utils_Timer;

extern jobject SF_com_badlogic_gdx_utils_Timer_instance;

#define VTABLE_com_badlogic_gdx_utils_Timer_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Timer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Timer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Timer_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Timer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Timer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Timer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Timer_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_notify 6
typedef void (*func_com_badlogic_gdx_utils_Timer_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Timer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_wait 8
typedef void (*func_com_badlogic_gdx_utils_Timer_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Timer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Timer_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Timer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task 11
typedef jobject (*func_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task 12
typedef jobject (*func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task 13
typedef jobject (*func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task 14
typedef jobject (*func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_Timer_stop 15
typedef void (*func_com_badlogic_gdx_utils_Timer_stop)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_start 16
typedef void (*func_com_badlogic_gdx_utils_Timer_start)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_clear 17
typedef void (*func_com_badlogic_gdx_utils_Timer_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_isEmpty_R_boolean 18
typedef jbool (*func_com_badlogic_gdx_utils_Timer_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_update 19
typedef void (*func_com_badlogic_gdx_utils_Timer_update)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Timer_delay_long 20
typedef void (*func_com_badlogic_gdx_utils_Timer_delay_long)(jcontext ctx, jobject self, jlong param0);

void mark_com_badlogic_gdx_utils_Timer(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Timer(jcontext ctx);
void init_com_badlogic_gdx_utils_Timer(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer(jcontext ctx);
jobject M_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
void M_com_badlogic_gdx_utils_Timer_stop(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Timer_start(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Timer_clear(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Timer_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Timer_update(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Timer_delay_long(jcontext ctx, jobject self, jlong param0);
jobject SM_com_badlogic_gdx_utils_Timer_post_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0, jfloat param1);
jobject SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jobject SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
