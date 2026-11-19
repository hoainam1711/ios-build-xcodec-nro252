#ifndef HEADER_com_badlogic_gdx_math_Interpolation$BounceIn
#define HEADER_com_badlogic_gdx_math_Interpolation$BounceIn

#include "Clearwing.h"
#include "com/badlogic/gdx/math/Interpolation_BounceOut.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Interpolation$BounceIn {
	com_badlogic_gdx_math_Interpolation$BounceOut parent;
} com_badlogic_gdx_math_Interpolation$BounceIn;

extern Class class_com_badlogic_gdx_math_Interpolation$BounceIn;


#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Interpolation$BounceIn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Interpolation$BounceIn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$BounceIn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$BounceIn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$BounceIn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_finalize 5
typedef void (*func_com_badlogic_gdx_math_Interpolation$BounceIn_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_notify 6
typedef void (*func_com_badlogic_gdx_math_Interpolation$BounceIn_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Interpolation$BounceIn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_wait 8
typedef void (*func_com_badlogic_gdx_math_Interpolation$BounceIn_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Interpolation$BounceIn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Interpolation$BounceIn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_R_float 11
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_float_float_R_float 12
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_com_badlogic_gdx_math_Interpolation$BounceIn(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Interpolation$BounceIn(jcontext ctx);
void init_com_badlogic_gdx_math_Interpolation$BounceIn_Array1_float_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_math_Interpolation$BounceIn_int(jcontext ctx, jobject self, jint param0);
jfloat M_com_badlogic_gdx_math_Interpolation$BounceIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
