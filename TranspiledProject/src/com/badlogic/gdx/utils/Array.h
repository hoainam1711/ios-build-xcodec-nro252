#ifndef HEADER_com_badlogic_gdx_utils_Array
#define HEADER_com_badlogic_gdx_utils_Array

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Array {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
	jref F_iterable;
	jref F_predicateIterable;
} com_badlogic_gdx_utils_Array;

extern Class class_com_badlogic_gdx_utils_Array;


#define VTABLE_com_badlogic_gdx_utils_Array_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Array_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Array_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Array_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Array_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Array_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_notify 6
typedef void (*func_com_badlogic_gdx_utils_Array_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Array_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_wait 8
typedef void (*func_com_badlogic_gdx_utils_Array_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Array_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Array_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Array_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_Array_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_Array_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object 14
typedef void (*func_com_badlogic_gdx_utils_Array_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object 15
typedef void (*func_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object 16
typedef void (*func_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object 17
typedef void (*func_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array 18
typedef void (*func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int 19
typedef void (*func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object 20
typedef void (*func_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int 21
typedef void (*func_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object 22
typedef jobject (*func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object 23
typedef void (*func_com_badlogic_gdx_utils_Array_set_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object 24
typedef void (*func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Array_insertRange_int_int 25
typedef void (*func_com_badlogic_gdx_utils_Array_insertRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array_swap_int_int 26
typedef void (*func_com_badlogic_gdx_utils_Array_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean 27
typedef jbool (*func_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int 28
typedef jint (*func_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean 29
typedef jbool (*func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean 31
typedef jbool (*func_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int 32
typedef jint (*func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int 33
typedef jint (*func_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean 34
typedef jbool (*func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object 35
typedef jobject (*func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Array_removeRange_int_int 36
typedef void (*func_com_badlogic_gdx_utils_Array_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean 37
typedef jbool (*func_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object 38
typedef jobject (*func_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object 39
typedef jobject (*func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object 40
typedef jobject (*func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_notEmpty_R_boolean 41
typedef jbool (*func_com_badlogic_gdx_utils_Array_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_isEmpty_R_boolean 42
typedef jbool (*func_com_badlogic_gdx_utils_Array_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_clear 43
typedef void (*func_com_badlogic_gdx_utils_Array_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object 44
typedef jobject (*func_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object 45
typedef jobject (*func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object 46
typedef jobject (*func_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object 47
typedef jobject (*func_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Array_sort 48
typedef void (*func_com_badlogic_gdx_utils_Array_sort)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_sort_java_util_Comparator 49
typedef void (*func_com_badlogic_gdx_utils_Array_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object 50
typedef jobject (*func_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int 51
typedef jint (*func_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array_reverse 52
typedef void (*func_com_badlogic_gdx_utils_Array_reverse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_shuffle 53
typedef void (*func_com_badlogic_gdx_utils_Array_shuffle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator 54
typedef jobject (*func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable 55
typedef jobject (*func_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_truncate_int 56
typedef void (*func_com_badlogic_gdx_utils_Array_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Array_random_R_java_lang_Object 57
typedef jobject (*func_com_badlogic_gdx_utils_Array_random_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object 58
typedef jobject (*func_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object 59
typedef jobject (*func_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object 60
typedef jobject (*func_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean 61
typedef jbool (*func_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String 62
typedef jobject (*func_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_Array(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Array(jcontext ctx);
void init_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_Array_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_Array_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_com_badlogic_gdx_utils_Array_boolean_int_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2);
void init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Array_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2);
void init_com_badlogic_gdx_utils_Array_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Array_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Array_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_Array_add_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_com_badlogic_gdx_utils_Array_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_Array_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_com_badlogic_gdx_utils_Array_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_Array_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_Array_replaceFirst_java_lang_Object_boolean_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
jint M_com_badlogic_gdx_utils_Array_replaceAll_java_lang_Object_boolean_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
jbool M_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_com_badlogic_gdx_utils_Array_containsAll_com_badlogic_gdx_utils_Array_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_com_badlogic_gdx_utils_Array_containsAny_com_badlogic_gdx_utils_Array_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_com_badlogic_gdx_utils_Array_lastIndexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_Array_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_Array_removeAll_com_badlogic_gdx_utils_Array_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_first_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Array_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Array_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Array_clear(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_shrink_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_Array_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_Array_resize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_Array_sort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Array_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_Array_selectRanked_java_util_Comparator_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_com_badlogic_gdx_utils_Array_selectRankedIndex_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_com_badlogic_gdx_utils_Array_reverse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Array_shuffle(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_select_com_badlogic_gdx_utils_Predicate_R_java_lang_Iterable(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Array_truncate_int(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_Array_random_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_Array_toArray_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_Array_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Array_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_Array_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_Array_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_com_badlogic_gdx_utils_Array_of_com_badlogic_gdx_utils_ArraySupplier_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_utils_Array_of_boolean_int_com_badlogic_gdx_utils_ArraySupplier_R_com_badlogic_gdx_utils_Array(jcontext ctx, jbool param0, jint param1, jobject param2);
jobject SM_com_badlogic_gdx_utils_Array_of_java_lang_Class_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0);
jobject SM_com_badlogic_gdx_utils_Array_of_boolean_int_java_lang_Class_R_com_badlogic_gdx_utils_Array(jcontext ctx, jbool param0, jint param1, jobject param2);
jobject SM_com_badlogic_gdx_utils_Array_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0);
jobject M_com_badlogic_gdx_utils_Array_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_utils_Array_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
