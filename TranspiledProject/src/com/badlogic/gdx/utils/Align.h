#ifndef HEADER_com_badlogic_gdx_utils_Align
#define HEADER_com_badlogic_gdx_utils_Align

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Align {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Align;

extern Class class_com_badlogic_gdx_utils_Align;

extern jint SF_com_badlogic_gdx_utils_Align_center;
extern jint SF_com_badlogic_gdx_utils_Align_top;
extern jint SF_com_badlogic_gdx_utils_Align_bottom;
extern jint SF_com_badlogic_gdx_utils_Align_left;
extern jint SF_com_badlogic_gdx_utils_Align_right;
extern jint SF_com_badlogic_gdx_utils_Align_topLeft;
extern jint SF_com_badlogic_gdx_utils_Align_topRight;
extern jint SF_com_badlogic_gdx_utils_Align_bottomLeft;
extern jint SF_com_badlogic_gdx_utils_Align_bottomRight;

#define VTABLE_com_badlogic_gdx_utils_Align_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Align_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Align_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Align_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Align_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Align_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Align_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Align_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_notify 6
typedef void (*func_com_badlogic_gdx_utils_Align_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Align_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_wait 8
typedef void (*func_com_badlogic_gdx_utils_Align_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Align_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Align_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Align_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Align_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_badlogic_gdx_utils_Align(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Align(jcontext ctx);
void init_com_badlogic_gdx_utils_Align(jcontext ctx, jobject self);
jbool SM_com_badlogic_gdx_utils_Align_isLeft_int_R_boolean(jcontext ctx, jint param0);
jbool SM_com_badlogic_gdx_utils_Align_isRight_int_R_boolean(jcontext ctx, jint param0);
jbool SM_com_badlogic_gdx_utils_Align_isTop_int_R_boolean(jcontext ctx, jint param0);
jbool SM_com_badlogic_gdx_utils_Align_isBottom_int_R_boolean(jcontext ctx, jint param0);
jbool SM_com_badlogic_gdx_utils_Align_isCenterVertical_int_R_boolean(jcontext ctx, jint param0);
jbool SM_com_badlogic_gdx_utils_Align_isCenterHorizontal_int_R_boolean(jcontext ctx, jint param0);
jobject SM_com_badlogic_gdx_utils_Align_toString_int_R_java_lang_String(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
