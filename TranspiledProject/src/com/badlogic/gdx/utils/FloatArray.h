#ifndef HEADER_com_badlogic_gdx_utils_FloatArray
#define HEADER_com_badlogic_gdx_utils_FloatArray

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_FloatArray {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} com_badlogic_gdx_utils_FloatArray;

extern Class class_com_badlogic_gdx_utils_FloatArray;


#define VTABLE_com_badlogic_gdx_utils_FloatArray_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_FloatArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_finalize 5
typedef void (*func_com_badlogic_gdx_utils_FloatArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_notify 6
typedef void (*func_com_badlogic_gdx_utils_FloatArray_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_FloatArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_wait 8
typedef void (*func_com_badlogic_gdx_utils_FloatArray_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_FloatArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_FloatArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_add_float 11
typedef void (*func_com_badlogic_gdx_utils_FloatArray_add_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_add_float_float 12
typedef void (*func_com_badlogic_gdx_utils_FloatArray_add_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_add_float_float_float 13
typedef void (*func_com_badlogic_gdx_utils_FloatArray_add_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_add_float_float_float_float 14
typedef void (*func_com_badlogic_gdx_utils_FloatArray_add_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray 15
typedef void (*func_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray_int_int 16
typedef void (*func_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float 17
typedef void (*func_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float_int_int 18
typedef void (*func_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float 19
typedef jfloat (*func_com_badlogic_gdx_utils_FloatArray_get_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_set_int_float 20
typedef void (*func_com_badlogic_gdx_utils_FloatArray_set_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_incr_int_float 21
typedef void (*func_com_badlogic_gdx_utils_FloatArray_incr_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_incr_float 22
typedef void (*func_com_badlogic_gdx_utils_FloatArray_incr_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_mul_int_float 23
typedef void (*func_com_badlogic_gdx_utils_FloatArray_mul_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_mul_float 24
typedef void (*func_com_badlogic_gdx_utils_FloatArray_mul_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_insert_int_float 25
typedef void (*func_com_badlogic_gdx_utils_FloatArray_insert_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_insertRange_int_int 26
typedef void (*func_com_badlogic_gdx_utils_FloatArray_insertRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_swap_int_int 27
typedef void (*func_com_badlogic_gdx_utils_FloatArray_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_replaceFirst_float_float_R_boolean 28
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_replaceFirst_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_replaceAll_float_float_R_int 29
typedef jint (*func_com_badlogic_gdx_utils_FloatArray_replaceAll_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_contains_float_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_contains_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_indexOf_float_R_int 31
typedef jint (*func_com_badlogic_gdx_utils_FloatArray_indexOf_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_lastIndexOf_float_R_int 32
typedef jint (*func_com_badlogic_gdx_utils_FloatArray_lastIndexOf_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_removeValue_float_R_boolean 33
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_removeValue_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_removeIndex_int_R_float 34
typedef jfloat (*func_com_badlogic_gdx_utils_FloatArray_removeIndex_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_removeRange_int_int 35
typedef void (*func_com_badlogic_gdx_utils_FloatArray_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_removeAll_com_badlogic_gdx_utils_FloatArray_R_boolean 36
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_removeAll_com_badlogic_gdx_utils_FloatArray_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_pop_R_float 37
typedef jfloat (*func_com_badlogic_gdx_utils_FloatArray_pop_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_peek_R_float 38
typedef jfloat (*func_com_badlogic_gdx_utils_FloatArray_peek_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_first_R_float 39
typedef jfloat (*func_com_badlogic_gdx_utils_FloatArray_first_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_notEmpty_R_boolean 40
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_isEmpty_R_boolean 41
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_clear 42
typedef void (*func_com_badlogic_gdx_utils_FloatArray_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_shrink_R_Array1_float 43
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_shrink_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_ensureCapacity_int_R_Array1_float 44
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_ensureCapacity_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_setSize_int_R_Array1_float 45
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_setSize_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_resize_int_R_Array1_float 46
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_resize_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_sort 47
typedef void (*func_com_badlogic_gdx_utils_FloatArray_sort)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_reverse 48
typedef void (*func_com_badlogic_gdx_utils_FloatArray_reverse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_shuffle 49
typedef void (*func_com_badlogic_gdx_utils_FloatArray_shuffle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_truncate_int 50
typedef void (*func_com_badlogic_gdx_utils_FloatArray_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_random_R_float 51
typedef jfloat (*func_com_badlogic_gdx_utils_FloatArray_random_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_toArray_R_Array1_float 52
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_toArray_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_equals_java_lang_Object_float_R_boolean 53
typedef jbool (*func_com_badlogic_gdx_utils_FloatArray_equals_java_lang_Object_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_utils_FloatArray_toString_java_lang_String_R_java_lang_String 54
typedef jobject (*func_com_badlogic_gdx_utils_FloatArray_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_FloatArray(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_FloatArray(jcontext ctx);
void init_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_FloatArray_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_FloatArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_com_badlogic_gdx_utils_FloatArray_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_FloatArray_Array1_float(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_FloatArray_boolean_Array1_float_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_FloatArray_add_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_utils_FloatArray_add_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_utils_FloatArray_add_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_com_badlogic_gdx_utils_FloatArray_add_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_FloatArray_addAll_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jfloat M_com_badlogic_gdx_utils_FloatArray_get_int_R_float(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_FloatArray_set_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_com_badlogic_gdx_utils_FloatArray_incr_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_com_badlogic_gdx_utils_FloatArray_incr_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_utils_FloatArray_mul_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_com_badlogic_gdx_utils_FloatArray_mul_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_utils_FloatArray_insert_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_com_badlogic_gdx_utils_FloatArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_FloatArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_FloatArray_replaceFirst_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_com_badlogic_gdx_utils_FloatArray_replaceAll_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_com_badlogic_gdx_utils_FloatArray_contains_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jint M_com_badlogic_gdx_utils_FloatArray_indexOf_float_R_int(jcontext ctx, jobject self, jfloat param0);
jint M_com_badlogic_gdx_utils_FloatArray_lastIndexOf_float_R_int(jcontext ctx, jobject self, jfloat param0);
jbool M_com_badlogic_gdx_utils_FloatArray_removeValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jfloat M_com_badlogic_gdx_utils_FloatArray_removeIndex_int_R_float(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_FloatArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_FloatArray_removeAll_com_badlogic_gdx_utils_FloatArray_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_com_badlogic_gdx_utils_FloatArray_pop_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_utils_FloatArray_peek_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_utils_FloatArray_first_R_float(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_FloatArray_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_FloatArray_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_FloatArray_clear(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_FloatArray_shrink_R_Array1_float(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_FloatArray_ensureCapacity_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_FloatArray_setSize_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_FloatArray_resize_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_FloatArray_sort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_FloatArray_reverse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_FloatArray_shuffle(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_FloatArray_truncate_int(jcontext ctx, jobject self, jint param0);
jfloat M_com_badlogic_gdx_utils_FloatArray_random_R_float(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_FloatArray_toArray_R_Array1_float(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_FloatArray_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_FloatArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_FloatArray_equals_java_lang_Object_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_com_badlogic_gdx_utils_FloatArray_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_FloatArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_com_badlogic_gdx_utils_FloatArray_with_Array1_float_R_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
