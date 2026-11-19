#ifndef HEADER_com_badlogic_gdx_math_Interpolation$ElasticIn
#define HEADER_com_badlogic_gdx_math_Interpolation$ElasticIn

#include "Clearwing.h"
#include "com/badlogic/gdx/math/Interpolation_Elastic.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Interpolation$ElasticIn {
	com_badlogic_gdx_math_Interpolation$Elastic parent;
} com_badlogic_gdx_math_Interpolation$ElasticIn;

extern Class class_com_badlogic_gdx_math_Interpolation$ElasticIn;


#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_finalize 5
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_notify 6
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_wait 8
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_apply_float_R_float 11
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticIn_apply_float_float_float_R_float 12
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$ElasticIn_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_com_badlogic_gdx_math_Interpolation$ElasticIn(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Interpolation$ElasticIn(jcontext ctx);
void init_com_badlogic_gdx_math_Interpolation$ElasticIn_float_float_int_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3);
jfloat M_com_badlogic_gdx_math_Interpolation$ElasticIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
