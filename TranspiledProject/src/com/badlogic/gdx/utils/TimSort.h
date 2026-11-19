#ifndef HEADER_com_badlogic_gdx_utils_TimSort
#define HEADER_com_badlogic_gdx_utils_TimSort

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_TimSort {
	java_lang_Object parent;
	jref F_a;
	jref F_c;
	jint F_minGallop;
	jref F_tmp;
	jint F_tmpCount;
	jint F_stackSize;
	jref F_runBase;
	jref F_runLen;
} com_badlogic_gdx_utils_TimSort;

extern Class class_com_badlogic_gdx_utils_TimSort;

extern jint SF_com_badlogic_gdx_utils_TimSort_MIN_MERGE;
extern jint SF_com_badlogic_gdx_utils_TimSort_MIN_GALLOP;
extern jint SF_com_badlogic_gdx_utils_TimSort_INITIAL_TMP_STORAGE_LENGTH;
extern jbool SF_com_badlogic_gdx_utils_TimSort_DEBUG;

#define VTABLE_com_badlogic_gdx_utils_TimSort_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_TimSort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_TimSort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_TimSort_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_TimSort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_TimSort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_TimSort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_finalize 5
typedef void (*func_com_badlogic_gdx_utils_TimSort_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_notify 6
typedef void (*func_com_badlogic_gdx_utils_TimSort_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_TimSort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_wait 8
typedef void (*func_com_badlogic_gdx_utils_TimSort_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_TimSort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_TimSort_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_TimSort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int 11
typedef void (*func_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_TimSort_pushRun_int_int 12
typedef void (*func_com_badlogic_gdx_utils_TimSort_pushRun_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_TimSort_mergeCollapse 13
typedef void (*func_com_badlogic_gdx_utils_TimSort_mergeCollapse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_mergeForceCollapse 14
typedef void (*func_com_badlogic_gdx_utils_TimSort_mergeForceCollapse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_TimSort_mergeAt_int 15
typedef void (*func_com_badlogic_gdx_utils_TimSort_mergeAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int 16
typedef void (*func_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int 17
typedef void (*func_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object 18
typedef jobject (*func_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);

void mark_com_badlogic_gdx_utils_TimSort(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_TimSort(jcontext ctx);
void init_com_badlogic_gdx_utils_TimSort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void init_com_badlogic_gdx_utils_TimSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_com_badlogic_gdx_utils_TimSort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject param0, jobject param1);
void SM_com_badlogic_gdx_utils_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_com_badlogic_gdx_utils_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4);
jint SM_com_badlogic_gdx_utils_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_com_badlogic_gdx_utils_TimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_com_badlogic_gdx_utils_TimSort_minRunLength_int_R_int(jcontext ctx, jint param0);
void M_com_badlogic_gdx_utils_TimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_TimSort_mergeCollapse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_TimSort_mergeForceCollapse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_TimSort_mergeAt_int(jcontext ctx, jobject self, jint param0);
jint SM_com_badlogic_gdx_utils_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);
jint SM_com_badlogic_gdx_utils_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);
void M_com_badlogic_gdx_utils_TimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_TimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_com_badlogic_gdx_utils_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
void SM_com_badlogic_gdx_utils_TimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
