#ifndef HEADER_com_badlogic_gdx_utils_ByteArray
#define HEADER_com_badlogic_gdx_utils_ByteArray

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ByteArray {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} com_badlogic_gdx_utils_ByteArray;

extern Class class_com_badlogic_gdx_utils_ByteArray;


#define VTABLE_com_badlogic_gdx_utils_ByteArray_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ByteArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ByteArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ByteArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_notify 6
typedef void (*func_com_badlogic_gdx_utils_ByteArray_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ByteArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_wait 8
typedef void (*func_com_badlogic_gdx_utils_ByteArray_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ByteArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ByteArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_add_byte 11
typedef void (*func_com_badlogic_gdx_utils_ByteArray_add_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_add_byte_byte 12
typedef void (*func_com_badlogic_gdx_utils_ByteArray_add_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_add_byte_byte_byte 13
typedef void (*func_com_badlogic_gdx_utils_ByteArray_add_byte_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_add_byte_byte_byte_byte 14
typedef void (*func_com_badlogic_gdx_utils_ByteArray_add_byte_byte_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jbyte param3);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_addAll_com_badlogic_gdx_utils_ByteArray 15
typedef void (*func_com_badlogic_gdx_utils_ByteArray_addAll_com_badlogic_gdx_utils_ByteArray)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_addAll_com_badlogic_gdx_utils_ByteArray_int_int 16
typedef void (*func_com_badlogic_gdx_utils_ByteArray_addAll_com_badlogic_gdx_utils_ByteArray_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_addAll_Array1_byte 17
typedef void (*func_com_badlogic_gdx_utils_ByteArray_addAll_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_addAll_Array1_byte_int_int 18
typedef void (*func_com_badlogic_gdx_utils_ByteArray_addAll_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_get_int_R_byte 19
typedef jbyte (*func_com_badlogic_gdx_utils_ByteArray_get_int_R_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_set_int_byte 20
typedef void (*func_com_badlogic_gdx_utils_ByteArray_set_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_incr_int_byte 21
typedef void (*func_com_badlogic_gdx_utils_ByteArray_incr_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_incr_byte 22
typedef void (*func_com_badlogic_gdx_utils_ByteArray_incr_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_mul_int_byte 23
typedef void (*func_com_badlogic_gdx_utils_ByteArray_mul_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_mul_byte 24
typedef void (*func_com_badlogic_gdx_utils_ByteArray_mul_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_insert_int_byte 25
typedef void (*func_com_badlogic_gdx_utils_ByteArray_insert_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_insertRange_int_int 26
typedef void (*func_com_badlogic_gdx_utils_ByteArray_insertRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_swap_int_int 27
typedef void (*func_com_badlogic_gdx_utils_ByteArray_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_replaceFirst_byte_byte_R_boolean 28
typedef jbool (*func_com_badlogic_gdx_utils_ByteArray_replaceFirst_byte_byte_R_boolean)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_replaceAll_byte_byte_R_int 29
typedef jint (*func_com_badlogic_gdx_utils_ByteArray_replaceAll_byte_byte_R_int)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_contains_byte_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_ByteArray_contains_byte_R_boolean)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_indexOf_byte_R_int 31
typedef jint (*func_com_badlogic_gdx_utils_ByteArray_indexOf_byte_R_int)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_lastIndexOf_byte_R_int 32
typedef jint (*func_com_badlogic_gdx_utils_ByteArray_lastIndexOf_byte_R_int)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_removeValue_byte_R_boolean 33
typedef jbool (*func_com_badlogic_gdx_utils_ByteArray_removeValue_byte_R_boolean)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_removeIndex_int_R_int 34
typedef jint (*func_com_badlogic_gdx_utils_ByteArray_removeIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_removeRange_int_int 35
typedef void (*func_com_badlogic_gdx_utils_ByteArray_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_removeAll_com_badlogic_gdx_utils_ByteArray_R_boolean 36
typedef jbool (*func_com_badlogic_gdx_utils_ByteArray_removeAll_com_badlogic_gdx_utils_ByteArray_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_pop_R_byte 37
typedef jbyte (*func_com_badlogic_gdx_utils_ByteArray_pop_R_byte)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_peek_R_byte 38
typedef jbyte (*func_com_badlogic_gdx_utils_ByteArray_peek_R_byte)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_first_R_byte 39
typedef jbyte (*func_com_badlogic_gdx_utils_ByteArray_first_R_byte)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_notEmpty_R_boolean 40
typedef jbool (*func_com_badlogic_gdx_utils_ByteArray_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_isEmpty_R_boolean 41
typedef jbool (*func_com_badlogic_gdx_utils_ByteArray_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_clear 42
typedef void (*func_com_badlogic_gdx_utils_ByteArray_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_shrink_R_Array1_byte 43
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_shrink_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte 44
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_setSize_int_R_Array1_byte 45
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_setSize_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_resize_int_R_Array1_byte 46
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_resize_int_R_Array1_byte)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_sort 47
typedef void (*func_com_badlogic_gdx_utils_ByteArray_sort)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_reverse 48
typedef void (*func_com_badlogic_gdx_utils_ByteArray_reverse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_shuffle 49
typedef void (*func_com_badlogic_gdx_utils_ByteArray_shuffle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_truncate_int 50
typedef void (*func_com_badlogic_gdx_utils_ByteArray_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_random_R_byte 51
typedef jbyte (*func_com_badlogic_gdx_utils_ByteArray_random_R_byte)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_toArray_R_Array1_byte 52
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_toArray_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ByteArray_toString_java_lang_String_R_java_lang_String 53
typedef jobject (*func_com_badlogic_gdx_utils_ByteArray_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_ByteArray(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ByteArray(jcontext ctx);
void init_com_badlogic_gdx_utils_ByteArray(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_ByteArray_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_ByteArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_com_badlogic_gdx_utils_ByteArray_com_badlogic_gdx_utils_ByteArray(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_ByteArray_Array1_byte(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_ByteArray_boolean_Array1_byte_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_ByteArray_add_byte(jcontext ctx, jobject self, jbyte param0);
void M_com_badlogic_gdx_utils_ByteArray_add_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1);
void M_com_badlogic_gdx_utils_ByteArray_add_byte_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2);
void M_com_badlogic_gdx_utils_ByteArray_add_byte_byte_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jbyte param3);
void M_com_badlogic_gdx_utils_ByteArray_addAll_com_badlogic_gdx_utils_ByteArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ByteArray_addAll_com_badlogic_gdx_utils_ByteArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_ByteArray_addAll_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ByteArray_addAll_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbyte M_com_badlogic_gdx_utils_ByteArray_get_int_R_byte(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ByteArray_set_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_com_badlogic_gdx_utils_ByteArray_incr_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_com_badlogic_gdx_utils_ByteArray_incr_byte(jcontext ctx, jobject self, jbyte param0);
void M_com_badlogic_gdx_utils_ByteArray_mul_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_com_badlogic_gdx_utils_ByteArray_mul_byte(jcontext ctx, jobject self, jbyte param0);
void M_com_badlogic_gdx_utils_ByteArray_insert_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_com_badlogic_gdx_utils_ByteArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_ByteArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_ByteArray_replaceFirst_byte_byte_R_boolean(jcontext ctx, jobject self, jbyte param0, jbyte param1);
jint M_com_badlogic_gdx_utils_ByteArray_replaceAll_byte_byte_R_int(jcontext ctx, jobject self, jbyte param0, jbyte param1);
jbool M_com_badlogic_gdx_utils_ByteArray_contains_byte_R_boolean(jcontext ctx, jobject self, jbyte param0);
jint M_com_badlogic_gdx_utils_ByteArray_indexOf_byte_R_int(jcontext ctx, jobject self, jbyte param0);
jint M_com_badlogic_gdx_utils_ByteArray_lastIndexOf_byte_R_int(jcontext ctx, jobject self, jbyte param0);
jbool M_com_badlogic_gdx_utils_ByteArray_removeValue_byte_R_boolean(jcontext ctx, jobject self, jbyte param0);
jint M_com_badlogic_gdx_utils_ByteArray_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ByteArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_ByteArray_removeAll_com_badlogic_gdx_utils_ByteArray_R_boolean(jcontext ctx, jobject self, jobject param0);
jbyte M_com_badlogic_gdx_utils_ByteArray_pop_R_byte(jcontext ctx, jobject self);
jbyte M_com_badlogic_gdx_utils_ByteArray_peek_R_byte(jcontext ctx, jobject self);
jbyte M_com_badlogic_gdx_utils_ByteArray_first_R_byte(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ByteArray_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ByteArray_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ByteArray_clear(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ByteArray_shrink_R_Array1_byte(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ByteArray_ensureCapacity_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_ByteArray_setSize_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_ByteArray_resize_int_R_Array1_byte(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ByteArray_sort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ByteArray_reverse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ByteArray_shuffle(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ByteArray_truncate_int(jcontext ctx, jobject self, jint param0);
jbyte M_com_badlogic_gdx_utils_ByteArray_random_R_byte(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ByteArray_toArray_R_Array1_byte(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_ByteArray_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ByteArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ByteArray_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ByteArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_com_badlogic_gdx_utils_ByteArray_with_Array1_byte_R_com_badlogic_gdx_utils_ByteArray(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
