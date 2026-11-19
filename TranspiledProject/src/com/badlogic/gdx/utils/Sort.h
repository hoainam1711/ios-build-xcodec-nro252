#ifndef HEADER_com_badlogic_gdx_utils_Sort
#define HEADER_com_badlogic_gdx_utils_Sort

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Sort {
	java_lang_Object parent;
	jref F_timSort;
	jref F_comparableTimSort;
} com_badlogic_gdx_utils_Sort;

extern Class class_com_badlogic_gdx_utils_Sort;

extern jobject SF_com_badlogic_gdx_utils_Sort_instance;

#define VTABLE_com_badlogic_gdx_utils_Sort_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Sort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Sort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Sort_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Sort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Sort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Sort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Sort_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_notify 6
typedef void (*func_com_badlogic_gdx_utils_Sort_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Sort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_wait 8
typedef void (*func_com_badlogic_gdx_utils_Sort_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Sort_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Sort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Sort_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Sort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array 11
typedef void (*func_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object 12
typedef void (*func_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int 13
typedef void (*func_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array_java_util_Comparator 14
typedef void (*func_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator 15
typedef void (*func_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int 16
typedef void (*func_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);

void mark_com_badlogic_gdx_utils_Sort(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Sort(jcontext ctx);
void init_com_badlogic_gdx_utils_Sort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_Sort_sort_com_badlogic_gdx_utils_Array_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jobject SM_com_badlogic_gdx_utils_Sort_instance_R_com_badlogic_gdx_utils_Sort(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
