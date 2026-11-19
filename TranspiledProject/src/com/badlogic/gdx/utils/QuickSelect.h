#ifndef HEADER_com_badlogic_gdx_utils_QuickSelect
#define HEADER_com_badlogic_gdx_utils_QuickSelect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_QuickSelect {
	java_lang_Object parent;
	jref F_array;
	jref F_comp;
} com_badlogic_gdx_utils_QuickSelect;

extern Class class_com_badlogic_gdx_utils_QuickSelect;


#define VTABLE_com_badlogic_gdx_utils_QuickSelect_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_QuickSelect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_QuickSelect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_QuickSelect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_QuickSelect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_QuickSelect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_finalize 5
typedef void (*func_com_badlogic_gdx_utils_QuickSelect_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_notify 6
typedef void (*func_com_badlogic_gdx_utils_QuickSelect_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_QuickSelect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_wait 8
typedef void (*func_com_badlogic_gdx_utils_QuickSelect_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_QuickSelect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_QuickSelect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int 11
typedef jint (*func_com_badlogic_gdx_utils_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_partition_int_int_int_R_int 12
typedef jint (*func_com_badlogic_gdx_utils_QuickSelect_partition_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_recursiveSelect_int_int_int_R_int 13
typedef jint (*func_com_badlogic_gdx_utils_QuickSelect_recursiveSelect_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_medianOfThreePivot_int_int_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_QuickSelect_medianOfThreePivot_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_QuickSelect_swap_int_int 15
typedef void (*func_com_badlogic_gdx_utils_QuickSelect_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_com_badlogic_gdx_utils_QuickSelect(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_QuickSelect(jcontext ctx);
void init_com_badlogic_gdx_utils_QuickSelect(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_QuickSelect_select_Array1_java_lang_Object_java_util_Comparator_int_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jint M_com_badlogic_gdx_utils_QuickSelect_partition_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_com_badlogic_gdx_utils_QuickSelect_recursiveSelect_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_com_badlogic_gdx_utils_QuickSelect_medianOfThreePivot_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_QuickSelect_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
