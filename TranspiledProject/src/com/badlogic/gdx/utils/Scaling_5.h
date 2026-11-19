#ifndef HEADER_com_badlogic_gdx_utils_Scaling$5
#define HEADER_com_badlogic_gdx_utils_Scaling$5

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/Scaling.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Scaling$5 {
	com_badlogic_gdx_utils_Scaling parent;
} com_badlogic_gdx_utils_Scaling$5;

extern Class class_com_badlogic_gdx_utils_Scaling$5;


#define VTABLE_com_badlogic_gdx_utils_Scaling$5_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Scaling$5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Scaling$5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Scaling$5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Scaling$5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Scaling$5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Scaling$5_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_notify 6
typedef void (*func_com_badlogic_gdx_utils_Scaling$5_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Scaling$5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_wait 8
typedef void (*func_com_badlogic_gdx_utils_Scaling$5_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Scaling$5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Scaling$5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Scaling$5_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2 11
typedef jobject (*func_com_badlogic_gdx_utils_Scaling$5_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_com_badlogic_gdx_utils_Scaling$5(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Scaling$5(jcontext ctx);
void init_com_badlogic_gdx_utils_Scaling$5(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Scaling$5_apply_float_float_float_float_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
