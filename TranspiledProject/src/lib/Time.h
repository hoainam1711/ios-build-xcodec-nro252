#ifndef HEADER_lib_Time
#define HEADER_lib_Time

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_Time {
	java_lang_Object parent;
} lib_Time;

extern Class class_lib_Time;

extern jfloat SF_lib_Time_timeScale;

#define VTABLE_lib_Time_hashCode_R_int 0
typedef jint (*func_lib_Time_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_Time_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_Time_clone_R_java_lang_Object 2
typedef jobject (*func_lib_Time_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_Time_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_toString_R_java_lang_String 4
typedef jobject (*func_lib_Time_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_finalize 5
typedef void (*func_lib_Time_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_notify 6
typedef void (*func_lib_Time_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_notifyAll 7
typedef void (*func_lib_Time_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_wait 8
typedef void (*func_lib_Time_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_Time_wait_long 9
typedef void (*func_lib_Time_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_Time_wait_long_int 10
typedef void (*func_lib_Time_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_lib_Time(jobject object, jint mark, jint depth);
void clinit_lib_Time(jcontext ctx);
void init_lib_Time(jcontext ctx, jobject self);
void SM_lib_Time_setTimeScale_float(jcontext ctx, jfloat param0);
jfloat SM_lib_Time_getTimeScale_R_float(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
