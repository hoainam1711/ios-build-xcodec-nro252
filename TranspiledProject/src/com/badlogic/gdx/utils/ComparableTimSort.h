#ifndef HEADER_com_badlogic_gdx_utils_ComparableTimSort
#define HEADER_com_badlogic_gdx_utils_ComparableTimSort

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ComparableTimSort {
	java_lang_Object parent;
	jref F_a;
	jint F_minGallop;
	jref F_tmp;
	jint F_tmpCount;
	jint F_stackSize;
	jref F_runBase;
	jref F_runLen;
} com_badlogic_gdx_utils_ComparableTimSort;

extern Class class_com_badlogic_gdx_utils_ComparableTimSort;

extern jint SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_MERGE;
extern jint SF_com_badlogic_gdx_utils_ComparableTimSort_MIN_GALLOP;
extern jint SF_com_badlogic_gdx_utils_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH;
extern jbool SF_com_badlogic_gdx_utils_ComparableTimSort_DEBUG;

#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ComparableTimSort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ComparableTimSort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ComparableTimSort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ComparableTimSort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ComparableTimSort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_notify 6
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_wait 8
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int 11
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int 12
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse 13
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse 14
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int 15
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int 16
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int 17
typedef void (*func_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object 18
typedef jobject (*func_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);

void mark_com_badlogic_gdx_utils_ComparableTimSort(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ComparableTimSort(jcontext ctx);
void init_com_badlogic_gdx_utils_ComparableTimSort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ComparableTimSort_doSort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_com_badlogic_gdx_utils_ComparableTimSort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void SM_com_badlogic_gdx_utils_ComparableTimSort_sort_Array1_java_lang_Object(jcontext ctx, jobject param0);
void SM_com_badlogic_gdx_utils_ComparableTimSort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_com_badlogic_gdx_utils_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_com_badlogic_gdx_utils_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_com_badlogic_gdx_utils_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_com_badlogic_gdx_utils_ComparableTimSort_minRunLength_int_R_int(jcontext ctx, jint param0);
void M_com_badlogic_gdx_utils_ComparableTimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_ComparableTimSort_mergeCollapse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ComparableTimSort_mergeForceCollapse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ComparableTimSort_mergeAt_int(jcontext ctx, jobject self, jint param0);
jint SM_com_badlogic_gdx_utils_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jint SM_com_badlogic_gdx_utils_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
void M_com_badlogic_gdx_utils_ComparableTimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_ComparableTimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_com_badlogic_gdx_utils_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
void SM_com_badlogic_gdx_utils_ComparableTimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
