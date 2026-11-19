#ifndef HEADER_com_badlogic_gdx_math_Interpolation$ExpIn
#define HEADER_com_badlogic_gdx_math_Interpolation$ExpIn

#include "Clearwing.h"
#include "com/badlogic/gdx/math/Interpolation_Exp.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Interpolation$ExpIn {
	com_badlogic_gdx_math_Interpolation$Exp parent;
} com_badlogic_gdx_math_Interpolation$ExpIn;

extern Class class_com_badlogic_gdx_math_Interpolation$ExpIn;


#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Interpolation$ExpIn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Interpolation$ExpIn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ExpIn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ExpIn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$ExpIn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_finalize 5
typedef void (*func_com_badlogic_gdx_math_Interpolation$ExpIn_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_notify 6
typedef void (*func_com_badlogic_gdx_math_Interpolation$ExpIn_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Interpolation$ExpIn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_wait 8
typedef void (*func_com_badlogic_gdx_math_Interpolation$ExpIn_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Interpolation$ExpIn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Interpolation$ExpIn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_apply_float_R_float 11
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$ExpIn_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$ExpIn_apply_float_float_float_R_float 12
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$ExpIn_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_com_badlogic_gdx_math_Interpolation$ExpIn(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Interpolation$ExpIn(jcontext ctx);
void init_com_badlogic_gdx_math_Interpolation$ExpIn_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_com_badlogic_gdx_math_Interpolation$ExpIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
