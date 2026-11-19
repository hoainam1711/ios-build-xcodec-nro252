#ifndef HEADER_com_badlogic_gdx_utils_LongArray
#define HEADER_com_badlogic_gdx_utils_LongArray

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_LongArray {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} com_badlogic_gdx_utils_LongArray;

extern Class class_com_badlogic_gdx_utils_LongArray;


#define VTABLE_com_badlogic_gdx_utils_LongArray_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_LongArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_LongArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_finalize 5
typedef void (*func_com_badlogic_gdx_utils_LongArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_notify 6
typedef void (*func_com_badlogic_gdx_utils_LongArray_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_LongArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_wait 8
typedef void (*func_com_badlogic_gdx_utils_LongArray_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_LongArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_LongArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_add_long 11
typedef void (*func_com_badlogic_gdx_utils_LongArray_add_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_add_long_long 12
typedef void (*func_com_badlogic_gdx_utils_LongArray_add_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_add_long_long_long 13
typedef void (*func_com_badlogic_gdx_utils_LongArray_add_long_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2);
#define VTABLE_com_badlogic_gdx_utils_LongArray_add_long_long_long_long 14
typedef void (*func_com_badlogic_gdx_utils_LongArray_add_long_long_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jlong param3);
#define VTABLE_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray 15
typedef void (*func_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray_int_int 16
typedef void (*func_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_LongArray_addAll_Array1_long 17
typedef void (*func_com_badlogic_gdx_utils_LongArray_addAll_Array1_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int 18
typedef void (*func_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_LongArray_get_int_R_long 19
typedef jlong (*func_com_badlogic_gdx_utils_LongArray_get_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_set_int_long 20
typedef void (*func_com_badlogic_gdx_utils_LongArray_set_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_incr_int_long 21
typedef void (*func_com_badlogic_gdx_utils_LongArray_incr_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_incr_long 22
typedef void (*func_com_badlogic_gdx_utils_LongArray_incr_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_mul_int_long 23
typedef void (*func_com_badlogic_gdx_utils_LongArray_mul_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_mul_long 24
typedef void (*func_com_badlogic_gdx_utils_LongArray_mul_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_insert_int_long 25
typedef void (*func_com_badlogic_gdx_utils_LongArray_insert_int_long)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_insertRange_int_int 26
typedef void (*func_com_badlogic_gdx_utils_LongArray_insertRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_swap_int_int 27
typedef void (*func_com_badlogic_gdx_utils_LongArray_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_replaceFirst_long_long_R_boolean 28
typedef jbool (*func_com_badlogic_gdx_utils_LongArray_replaceFirst_long_long_R_boolean)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_replaceAll_long_long_R_int 29
typedef jint (*func_com_badlogic_gdx_utils_LongArray_replaceAll_long_long_R_int)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_contains_long_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_LongArray_contains_long_R_boolean)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_indexOf_long_R_int 31
typedef jint (*func_com_badlogic_gdx_utils_LongArray_indexOf_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_lastIndexOf_long_R_int 32
typedef jint (*func_com_badlogic_gdx_utils_LongArray_lastIndexOf_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_removeValue_long_R_boolean 33
typedef jbool (*func_com_badlogic_gdx_utils_LongArray_removeValue_long_R_boolean)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long 34
typedef jlong (*func_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_removeRange_int_int 35
typedef void (*func_com_badlogic_gdx_utils_LongArray_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_LongArray_removeAll_com_badlogic_gdx_utils_LongArray_R_boolean 36
typedef jbool (*func_com_badlogic_gdx_utils_LongArray_removeAll_com_badlogic_gdx_utils_LongArray_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_pop_R_long 37
typedef jlong (*func_com_badlogic_gdx_utils_LongArray_pop_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_peek_R_long 38
typedef jlong (*func_com_badlogic_gdx_utils_LongArray_peek_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_first_R_long 39
typedef jlong (*func_com_badlogic_gdx_utils_LongArray_first_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_notEmpty_R_boolean 40
typedef jbool (*func_com_badlogic_gdx_utils_LongArray_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_isEmpty_R_boolean 41
typedef jbool (*func_com_badlogic_gdx_utils_LongArray_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_clear 42
typedef void (*func_com_badlogic_gdx_utils_LongArray_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_shrink_R_Array1_long 43
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_shrink_R_Array1_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_ensureCapacity_int_R_Array1_long 44
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_ensureCapacity_int_R_Array1_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_setSize_int_R_Array1_long 45
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_setSize_int_R_Array1_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long 46
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_sort 47
typedef void (*func_com_badlogic_gdx_utils_LongArray_sort)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_reverse 48
typedef void (*func_com_badlogic_gdx_utils_LongArray_reverse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_shuffle 49
typedef void (*func_com_badlogic_gdx_utils_LongArray_shuffle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_truncate_int 50
typedef void (*func_com_badlogic_gdx_utils_LongArray_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_LongArray_random_R_long 51
typedef jlong (*func_com_badlogic_gdx_utils_LongArray_random_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_toArray_R_Array1_long 52
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_toArray_R_Array1_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongArray_toString_java_lang_String_R_java_lang_String 53
typedef jobject (*func_com_badlogic_gdx_utils_LongArray_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_LongArray(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_LongArray(jcontext ctx);
void init_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_LongArray_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_LongArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_com_badlogic_gdx_utils_LongArray_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_LongArray_Array1_long(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_LongArray_boolean_Array1_long_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_LongArray_add_long(jcontext ctx, jobject self, jlong param0);
void M_com_badlogic_gdx_utils_LongArray_add_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
void M_com_badlogic_gdx_utils_LongArray_add_long_long_long(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2);
void M_com_badlogic_gdx_utils_LongArray_add_long_long_long_long(jcontext ctx, jobject self, jlong param0, jlong param1, jlong param2, jlong param3);
void M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_LongArray_addAll_com_badlogic_gdx_utils_LongArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_LongArray_addAll_Array1_long_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jlong M_com_badlogic_gdx_utils_LongArray_get_int_R_long(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_LongArray_set_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_com_badlogic_gdx_utils_LongArray_incr_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_com_badlogic_gdx_utils_LongArray_incr_long(jcontext ctx, jobject self, jlong param0);
void M_com_badlogic_gdx_utils_LongArray_mul_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_com_badlogic_gdx_utils_LongArray_mul_long(jcontext ctx, jobject self, jlong param0);
void M_com_badlogic_gdx_utils_LongArray_insert_int_long(jcontext ctx, jobject self, jint param0, jlong param1);
void M_com_badlogic_gdx_utils_LongArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_LongArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_LongArray_replaceFirst_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1);
jint M_com_badlogic_gdx_utils_LongArray_replaceAll_long_long_R_int(jcontext ctx, jobject self, jlong param0, jlong param1);
jbool M_com_badlogic_gdx_utils_LongArray_contains_long_R_boolean(jcontext ctx, jobject self, jlong param0);
jint M_com_badlogic_gdx_utils_LongArray_indexOf_long_R_int(jcontext ctx, jobject self, jlong param0);
jint M_com_badlogic_gdx_utils_LongArray_lastIndexOf_long_R_int(jcontext ctx, jobject self, jlong param0);
jbool M_com_badlogic_gdx_utils_LongArray_removeValue_long_R_boolean(jcontext ctx, jobject self, jlong param0);
jlong M_com_badlogic_gdx_utils_LongArray_removeIndex_int_R_long(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_LongArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_LongArray_removeAll_com_badlogic_gdx_utils_LongArray_R_boolean(jcontext ctx, jobject self, jobject param0);
jlong M_com_badlogic_gdx_utils_LongArray_pop_R_long(jcontext ctx, jobject self);
jlong M_com_badlogic_gdx_utils_LongArray_peek_R_long(jcontext ctx, jobject self);
jlong M_com_badlogic_gdx_utils_LongArray_first_R_long(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_LongArray_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_LongArray_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_LongArray_clear(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongArray_shrink_R_Array1_long(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongArray_ensureCapacity_int_R_Array1_long(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_LongArray_setSize_int_R_Array1_long(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_LongArray_resize_int_R_Array1_long(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_LongArray_sort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_LongArray_reverse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_LongArray_shuffle(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_LongArray_truncate_int(jcontext ctx, jobject self, jint param0);
jlong M_com_badlogic_gdx_utils_LongArray_random_R_long(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongArray_toArray_R_Array1_long(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_LongArray_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_LongArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_LongArray_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_com_badlogic_gdx_utils_LongArray_with_Array1_long_R_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
