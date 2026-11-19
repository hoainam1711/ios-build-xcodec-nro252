#ifndef HEADER_com_badlogic_gdx_utils_Select
#define HEADER_com_badlogic_gdx_utils_Select

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Select {
	java_lang_Object parent;
	jref F_quickSelect;
} com_badlogic_gdx_utils_Select;

extern Class class_com_badlogic_gdx_utils_Select;

extern jobject SF_com_badlogic_gdx_utils_Select_instance;

#define VTABLE_com_badlogic_gdx_utils_Select_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Select_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Select_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Select_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Select_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Select_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Select_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Select_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_notify 6
typedef void (*func_com_badlogic_gdx_utils_Select_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Select_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_wait 8
typedef void (*func_com_badlogic_gdx_utils_Select_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Select_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Select_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Select_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Select_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object 11
typedef jobject (*func_com_badlogic_gdx_utils_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int 12
typedef jint (*func_com_badlogic_gdx_utils_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int 13
typedef jint (*func_com_badlogic_gdx_utils_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);

void mark_com_badlogic_gdx_utils_Select(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Select(jcontext ctx);
void init_com_badlogic_gdx_utils_Select(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_utils_Select_instance_R_com_badlogic_gdx_utils_Select(jcontext ctx);
jobject M_com_badlogic_gdx_utils_Select_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jint M_com_badlogic_gdx_utils_Select_selectIndex_Array1_java_lang_Object_java_util_Comparator_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jint M_com_badlogic_gdx_utils_Select_fastMin_Array1_java_lang_Object_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jint M_com_badlogic_gdx_utils_Select_fastMax_Array1_java_lang_Object_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
