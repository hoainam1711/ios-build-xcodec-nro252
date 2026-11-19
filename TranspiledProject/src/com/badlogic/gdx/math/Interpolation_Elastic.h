#ifndef HEADER_com_badlogic_gdx_math_Interpolation$Elastic
#define HEADER_com_badlogic_gdx_math_Interpolation$Elastic

#include "Clearwing.h"
#include "com/badlogic/gdx/math/Interpolation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Interpolation$Elastic {
	com_badlogic_gdx_math_Interpolation parent;
	jfloat F_value;
	jfloat F_power;
	jfloat F_scale;
	jfloat F_bounces;
} com_badlogic_gdx_math_Interpolation$Elastic;

extern Class class_com_badlogic_gdx_math_Interpolation$Elastic;


#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Interpolation$Elastic_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Interpolation$Elastic_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$Elastic_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$Elastic_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$Elastic_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_finalize 5
typedef void (*func_com_badlogic_gdx_math_Interpolation$Elastic_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_notify 6
typedef void (*func_com_badlogic_gdx_math_Interpolation$Elastic_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Interpolation$Elastic_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_wait 8
typedef void (*func_com_badlogic_gdx_math_Interpolation$Elastic_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Interpolation$Elastic_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Interpolation$Elastic_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_R_float 11
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_float_float_R_float 12
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_com_badlogic_gdx_math_Interpolation$Elastic(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Interpolation$Elastic(jcontext ctx);
void init_com_badlogic_gdx_math_Interpolation$Elastic_float_float_int_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3);
jfloat M_com_badlogic_gdx_math_Interpolation$Elastic_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
