#ifndef HEADER_com_badlogic_gdx_math_Interpolation$SwingIn
#define HEADER_com_badlogic_gdx_math_Interpolation$SwingIn

#include "Clearwing.h"
#include "com/badlogic/gdx/math/Interpolation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_math_Interpolation$SwingIn {
	com_badlogic_gdx_math_Interpolation parent;
	jfloat F_scale;
} com_badlogic_gdx_math_Interpolation$SwingIn;

extern Class class_com_badlogic_gdx_math_Interpolation$SwingIn;


#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_math_Interpolation$SwingIn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_math_Interpolation$SwingIn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$SwingIn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$SwingIn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_math_Interpolation$SwingIn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_finalize 5
typedef void (*func_com_badlogic_gdx_math_Interpolation$SwingIn_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_notify 6
typedef void (*func_com_badlogic_gdx_math_Interpolation$SwingIn_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_notifyAll 7
typedef void (*func_com_badlogic_gdx_math_Interpolation$SwingIn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_wait 8
typedef void (*func_com_badlogic_gdx_math_Interpolation$SwingIn_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_wait_long 9
typedef void (*func_com_badlogic_gdx_math_Interpolation$SwingIn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_wait_long_int 10
typedef void (*func_com_badlogic_gdx_math_Interpolation$SwingIn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_apply_float_R_float 11
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$SwingIn_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_math_Interpolation$SwingIn_apply_float_float_float_R_float 12
typedef jfloat (*func_com_badlogic_gdx_math_Interpolation$SwingIn_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_com_badlogic_gdx_math_Interpolation$SwingIn(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_math_Interpolation$SwingIn(jcontext ctx);
void init_com_badlogic_gdx_math_Interpolation$SwingIn_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_com_badlogic_gdx_math_Interpolation$SwingIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
