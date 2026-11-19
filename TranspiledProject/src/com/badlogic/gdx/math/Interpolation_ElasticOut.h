#ifndef HEADER_com_badlogic_gdx_math_Interpolation$ElasticOut
#define HEADER_com_badlogic_gdx_math_Interpolation$ElasticOut

#include "Clearwing.h"
#include "com/badlogic/gdx/math/Interpolation_Elastic.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Interpolation$ElasticOut {
	com_badlogic_gdx_math_Interpolation$Elastic parent;
} com_badlogic_gdx_math_Interpolation$ElasticOut;

extern Class class_com_badlogic_gdx_math_Interpolation$ElasticOut;


#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_finalize 5
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_notify 6
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_wait 8
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_apply_float_R_float 11
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ElasticOut_apply_float_float_float_R_float 12
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$ElasticOut_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_com_badlogic_gdx_math_Interpolation$ElasticOut(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Interpolation$ElasticOut(jcontext ctx);
void init_com_badlogic_gdx_math_Interpolation$ElasticOut_float_float_int_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3);
jfloat M_com_badlogic_gdx_math_Interpolation$ElasticOut_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
