#ifndef HEADER_com_badlogic_gdx_math_RandomXS128
#define HEADER_com_badlogic_gdx_math_RandomXS128

#include "Clearwing.h"
#include "java/util/Random.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_RandomXS128 {
	java_util_Random parent;
	jlong F_seed0;
	jlong F_seed1;
} com_badlogic_gdx_math_RandomXS128;

extern Class class_com_badlogic_gdx_math_RandomXS128;

extern jdouble SF_com_badlogic_gdx_math_RandomXS128_NORM_DOUBLE;
extern jdouble SF_com_badlogic_gdx_math_RandomXS128_NORM_FLOAT;

#define VTABLE_com_badlogic_gdx_math_RandomXS128_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_RandomXS128_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_RandomXS128_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_RandomXS128_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_RandomXS128_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_RandomXS128_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_finalize 5
typedef void (*func_com_badlogic_gdx_math_RandomXS128_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_notify 6
typedef void (*func_com_badlogic_gdx_math_RandomXS128_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_RandomXS128_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_wait 8
typedef void (*func_com_badlogic_gdx_math_RandomXS128_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_wait_long 9
typedef void (*func_com_badlogic_gdx_math_RandomXS128_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_RandomXS128_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_next_int_R_int 11
typedef jint (*func_com_badlogic_gdx_math_RandomXS128_next_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextDouble_R_double 12
typedef jdouble (*func_com_badlogic_gdx_math_RandomXS128_nextDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextFloat_R_float 13
typedef jfloat (*func_com_badlogic_gdx_math_RandomXS128_nextFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextInt_R_int 14
typedef jint (*func_com_badlogic_gdx_math_RandomXS128_nextInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextInt_int_R_int 15
typedef jint (*func_com_badlogic_gdx_math_RandomXS128_nextInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_R_long 16
typedef jlong (*func_com_badlogic_gdx_math_RandomXS128_nextLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_setSeed_long 17
typedef void (*func_com_badlogic_gdx_math_RandomXS128_setSeed_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextBoolean_R_boolean 18
typedef jbool (*func_com_badlogic_gdx_math_RandomXS128_nextBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextBytes_Array1_byte 19
typedef void (*func_com_badlogic_gdx_math_RandomXS128_nextBytes_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long 20
typedef jlong (*func_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_setState_long_long 21
typedef void (*func_com_badlogic_gdx_math_RandomXS128_setState_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_com_badlogic_gdx_math_RandomXS128_getState_int_R_long 22
typedef jlong (*func_com_badlogic_gdx_math_RandomXS128_getState_int_R_long)(jcontext ctx, jobject self, jint param0);

void mark_com_badlogic_gdx_math_RandomXS128(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_RandomXS128(jcontext ctx);
void init_com_badlogic_gdx_math_RandomXS128(jcontext ctx, jobject self);
void init_com_badlogic_gdx_math_RandomXS128_long(jcontext ctx, jobject self, jlong param0);
void init_com_badlogic_gdx_math_RandomXS128_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
jlong M_com_badlogic_gdx_math_RandomXS128_nextLong_R_long(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_math_RandomXS128_next_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_math_RandomXS128_nextInt_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_math_RandomXS128_nextInt_int_R_int(jcontext ctx, jobject self, jint param0);
jlong M_com_badlogic_gdx_math_RandomXS128_nextLong_long_R_long(jcontext ctx, jobject self, jlong param0);
jdouble M_com_badlogic_gdx_math_RandomXS128_nextDouble_R_double(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_math_RandomXS128_nextFloat_R_float(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_math_RandomXS128_nextBoolean_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_math_RandomXS128_nextBytes_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_math_RandomXS128_setSeed_long(jcontext ctx, jobject self, jlong param0);
void M_com_badlogic_gdx_math_RandomXS128_setState_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
jlong M_com_badlogic_gdx_math_RandomXS128_getState_int_R_long(jcontext ctx, jobject self, jint param0);
jlong SM_com_badlogic_gdx_math_RandomXS128_murmurHash3_long_R_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
