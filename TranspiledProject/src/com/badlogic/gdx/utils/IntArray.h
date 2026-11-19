#ifndef HEADER_com_badlogic_gdx_utils_IntArray
#define HEADER_com_badlogic_gdx_utils_IntArray

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_IntArray {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} com_badlogic_gdx_utils_IntArray;

extern Class class_com_badlogic_gdx_utils_IntArray;


#define VTABLE_com_badlogic_gdx_utils_IntArray_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_IntArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_IntArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_finalize 5
typedef void (*func_com_badlogic_gdx_utils_IntArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_notify 6
typedef void (*func_com_badlogic_gdx_utils_IntArray_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_IntArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_wait 8
typedef void (*func_com_badlogic_gdx_utils_IntArray_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_IntArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_IntArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_add_int 11
typedef void (*func_com_badlogic_gdx_utils_IntArray_add_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_add_int_int 12
typedef void (*func_com_badlogic_gdx_utils_IntArray_add_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_add_int_int_int 13
typedef void (*func_com_badlogic_gdx_utils_IntArray_add_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_IntArray_add_int_int_int_int 14
typedef void (*func_com_badlogic_gdx_utils_IntArray_add_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray 15
typedef void (*func_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray_int_int 16
typedef void (*func_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int 17
typedef void (*func_com_badlogic_gdx_utils_IntArray_addAll_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int 18
typedef void (*func_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int 19
typedef jint (*func_com_badlogic_gdx_utils_IntArray_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_set_int_int 20
typedef void (*func_com_badlogic_gdx_utils_IntArray_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_incr_int_int 21
typedef void (*func_com_badlogic_gdx_utils_IntArray_incr_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_incr_int 22
typedef void (*func_com_badlogic_gdx_utils_IntArray_incr_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_mul_int_int 23
typedef void (*func_com_badlogic_gdx_utils_IntArray_mul_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_mul_int 24
typedef void (*func_com_badlogic_gdx_utils_IntArray_mul_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_insert_int_int 25
typedef void (*func_com_badlogic_gdx_utils_IntArray_insert_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_insertRange_int_int 26
typedef void (*func_com_badlogic_gdx_utils_IntArray_insertRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_swap_int_int 27
typedef void (*func_com_badlogic_gdx_utils_IntArray_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_replaceFirst_int_int_R_boolean 28
typedef jbool (*func_com_badlogic_gdx_utils_IntArray_replaceFirst_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_replaceAll_int_int_R_int 29
typedef jint (*func_com_badlogic_gdx_utils_IntArray_replaceAll_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_contains_int_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_IntArray_contains_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_indexOf_int_R_int 31
typedef jint (*func_com_badlogic_gdx_utils_IntArray_indexOf_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_lastIndexOf_int_R_int 32
typedef jint (*func_com_badlogic_gdx_utils_IntArray_lastIndexOf_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_removeValue_int_R_boolean 33
typedef jbool (*func_com_badlogic_gdx_utils_IntArray_removeValue_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int 34
typedef jint (*func_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_removeRange_int_int 35
typedef void (*func_com_badlogic_gdx_utils_IntArray_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntArray_removeAll_com_badlogic_gdx_utils_IntArray_R_boolean 36
typedef jbool (*func_com_badlogic_gdx_utils_IntArray_removeAll_com_badlogic_gdx_utils_IntArray_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_pop_R_int 37
typedef jint (*func_com_badlogic_gdx_utils_IntArray_pop_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_peek_R_int 38
typedef jint (*func_com_badlogic_gdx_utils_IntArray_peek_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_first_R_int 39
typedef jint (*func_com_badlogic_gdx_utils_IntArray_first_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_notEmpty_R_boolean 40
typedef jbool (*func_com_badlogic_gdx_utils_IntArray_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_isEmpty_R_boolean 41
typedef jbool (*func_com_badlogic_gdx_utils_IntArray_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_clear 42
typedef void (*func_com_badlogic_gdx_utils_IntArray_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_shrink_R_Array1_int 43
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_shrink_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int 44
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_setSize_int_R_Array1_int 45
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_setSize_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int 46
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_sort 47
typedef void (*func_com_badlogic_gdx_utils_IntArray_sort)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_reverse 48
typedef void (*func_com_badlogic_gdx_utils_IntArray_reverse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_shuffle 49
typedef void (*func_com_badlogic_gdx_utils_IntArray_shuffle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_truncate_int 50
typedef void (*func_com_badlogic_gdx_utils_IntArray_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntArray_random_R_int 51
typedef jint (*func_com_badlogic_gdx_utils_IntArray_random_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int 52
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntArray_toString_java_lang_String_R_java_lang_String 53
typedef jobject (*func_com_badlogic_gdx_utils_IntArray_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_IntArray(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_IntArray(jcontext ctx);
void init_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_IntArray_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_IntArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_com_badlogic_gdx_utils_IntArray_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_IntArray_Array1_int(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_IntArray_boolean_Array1_int_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_IntArray_add_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntArray_add_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_IntArray_add_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_IntArray_add_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_IntArray_addAll_com_badlogic_gdx_utils_IntArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_IntArray_addAll_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_com_badlogic_gdx_utils_IntArray_get_int_R_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntArray_set_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_IntArray_incr_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_IntArray_incr_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntArray_mul_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_IntArray_mul_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntArray_insert_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_IntArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_IntArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_IntArray_replaceFirst_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jint M_com_badlogic_gdx_utils_IntArray_replaceAll_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_IntArray_contains_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_IntArray_indexOf_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_IntArray_lastIndexOf_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_IntArray_removeValue_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_IntArray_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_IntArray_removeAll_com_badlogic_gdx_utils_IntArray_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_IntArray_pop_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_IntArray_peek_R_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_IntArray_first_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_IntArray_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_IntArray_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntArray_clear(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntArray_shrink_R_Array1_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_IntArray_setSize_int_R_Array1_int(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_IntArray_resize_int_R_Array1_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntArray_sort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntArray_reverse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntArray_shuffle(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntArray_truncate_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_IntArray_random_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntArray_toArray_R_Array1_int(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_IntArray_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_IntArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_IntArray_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_com_badlogic_gdx_utils_IntArray_with_Array1_int_R_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
