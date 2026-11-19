#ifndef HEADER_com_badlogic_gdx_utils_ShortArray
#define HEADER_com_badlogic_gdx_utils_ShortArray

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ShortArray {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} com_badlogic_gdx_utils_ShortArray;

extern Class class_com_badlogic_gdx_utils_ShortArray;


#define VTABLE_com_badlogic_gdx_utils_ShortArray_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ShortArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ShortArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ShortArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_notify 6
typedef void (*func_com_badlogic_gdx_utils_ShortArray_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ShortArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_wait 8
typedef void (*func_com_badlogic_gdx_utils_ShortArray_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ShortArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ShortArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_add_int 11
typedef void (*func_com_badlogic_gdx_utils_ShortArray_add_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_add_short 12
typedef void (*func_com_badlogic_gdx_utils_ShortArray_add_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_add_short_short 13
typedef void (*func_com_badlogic_gdx_utils_ShortArray_add_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_add_short_short_short 14
typedef void (*func_com_badlogic_gdx_utils_ShortArray_add_short_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_add_short_short_short_short 15
typedef void (*func_com_badlogic_gdx_utils_ShortArray_add_short_short_short_short)(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jshort param3);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_addAll_com_badlogic_gdx_utils_ShortArray 16
typedef void (*func_com_badlogic_gdx_utils_ShortArray_addAll_com_badlogic_gdx_utils_ShortArray)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_addAll_com_badlogic_gdx_utils_ShortArray_int_int 17
typedef void (*func_com_badlogic_gdx_utils_ShortArray_addAll_com_badlogic_gdx_utils_ShortArray_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_addAll_Array1_short 18
typedef void (*func_com_badlogic_gdx_utils_ShortArray_addAll_Array1_short)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_addAll_Array1_short_int_int 19
typedef void (*func_com_badlogic_gdx_utils_ShortArray_addAll_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_get_int_R_short 20
typedef jshort (*func_com_badlogic_gdx_utils_ShortArray_get_int_R_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_set_int_short 21
typedef void (*func_com_badlogic_gdx_utils_ShortArray_set_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_incr_int_short 22
typedef void (*func_com_badlogic_gdx_utils_ShortArray_incr_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_incr_short 23
typedef void (*func_com_badlogic_gdx_utils_ShortArray_incr_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_mul_int_short 24
typedef void (*func_com_badlogic_gdx_utils_ShortArray_mul_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_mul_short 25
typedef void (*func_com_badlogic_gdx_utils_ShortArray_mul_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_insert_int_short 26
typedef void (*func_com_badlogic_gdx_utils_ShortArray_insert_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_insertRange_int_int 27
typedef void (*func_com_badlogic_gdx_utils_ShortArray_insertRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_swap_int_int 28
typedef void (*func_com_badlogic_gdx_utils_ShortArray_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_replaceFirst_short_short_R_boolean 29
typedef jbool (*func_com_badlogic_gdx_utils_ShortArray_replaceFirst_short_short_R_boolean)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_replaceAll_short_short_R_int 30
typedef jint (*func_com_badlogic_gdx_utils_ShortArray_replaceAll_short_short_R_int)(jcontext ctx, jobject self, jshort param0, jshort param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_contains_short_R_boolean 31
typedef jbool (*func_com_badlogic_gdx_utils_ShortArray_contains_short_R_boolean)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_indexOf_short_R_int 32
typedef jint (*func_com_badlogic_gdx_utils_ShortArray_indexOf_short_R_int)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_lastIndexOf_short_R_int 33
typedef jint (*func_com_badlogic_gdx_utils_ShortArray_lastIndexOf_short_R_int)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_removeValue_short_R_boolean 34
typedef jbool (*func_com_badlogic_gdx_utils_ShortArray_removeValue_short_R_boolean)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_removeIndex_int_R_short 35
typedef jshort (*func_com_badlogic_gdx_utils_ShortArray_removeIndex_int_R_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_removeRange_int_int 36
typedef void (*func_com_badlogic_gdx_utils_ShortArray_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_removeAll_com_badlogic_gdx_utils_ShortArray_R_boolean 37
typedef jbool (*func_com_badlogic_gdx_utils_ShortArray_removeAll_com_badlogic_gdx_utils_ShortArray_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_pop_R_short 38
typedef jshort (*func_com_badlogic_gdx_utils_ShortArray_pop_R_short)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_peek_R_short 39
typedef jshort (*func_com_badlogic_gdx_utils_ShortArray_peek_R_short)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_first_R_short 40
typedef jshort (*func_com_badlogic_gdx_utils_ShortArray_first_R_short)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_notEmpty_R_boolean 41
typedef jbool (*func_com_badlogic_gdx_utils_ShortArray_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_isEmpty_R_boolean 42
typedef jbool (*func_com_badlogic_gdx_utils_ShortArray_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_clear 43
typedef void (*func_com_badlogic_gdx_utils_ShortArray_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_shrink_R_Array1_short 44
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_shrink_R_Array1_short)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_ensureCapacity_int_R_Array1_short 45
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_ensureCapacity_int_R_Array1_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_setSize_int_R_Array1_short 46
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_setSize_int_R_Array1_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_resize_int_R_Array1_short 47
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_resize_int_R_Array1_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_sort 48
typedef void (*func_com_badlogic_gdx_utils_ShortArray_sort)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_reverse 49
typedef void (*func_com_badlogic_gdx_utils_ShortArray_reverse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_shuffle 50
typedef void (*func_com_badlogic_gdx_utils_ShortArray_shuffle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_truncate_int 51
typedef void (*func_com_badlogic_gdx_utils_ShortArray_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_random_R_short 52
typedef jshort (*func_com_badlogic_gdx_utils_ShortArray_random_R_short)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_toArray_R_Array1_short 53
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_toArray_R_Array1_short)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ShortArray_toString_java_lang_String_R_java_lang_String 54
typedef jobject (*func_com_badlogic_gdx_utils_ShortArray_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_ShortArray(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ShortArray(jcontext ctx);
void init_com_badlogic_gdx_utils_ShortArray(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_ShortArray_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_ShortArray_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_com_badlogic_gdx_utils_ShortArray_com_badlogic_gdx_utils_ShortArray(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_ShortArray_Array1_short(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_ShortArray_boolean_Array1_short_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
void M_com_badlogic_gdx_utils_ShortArray_add_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ShortArray_add_short(jcontext ctx, jobject self, jshort param0);
void M_com_badlogic_gdx_utils_ShortArray_add_short_short(jcontext ctx, jobject self, jshort param0, jshort param1);
void M_com_badlogic_gdx_utils_ShortArray_add_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2);
void M_com_badlogic_gdx_utils_ShortArray_add_short_short_short_short(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jshort param3);
void M_com_badlogic_gdx_utils_ShortArray_addAll_com_badlogic_gdx_utils_ShortArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ShortArray_addAll_com_badlogic_gdx_utils_ShortArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_ShortArray_addAll_Array1_short(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ShortArray_addAll_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jshort M_com_badlogic_gdx_utils_ShortArray_get_int_R_short(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ShortArray_set_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_com_badlogic_gdx_utils_ShortArray_incr_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_com_badlogic_gdx_utils_ShortArray_incr_short(jcontext ctx, jobject self, jshort param0);
void M_com_badlogic_gdx_utils_ShortArray_mul_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_com_badlogic_gdx_utils_ShortArray_mul_short(jcontext ctx, jobject self, jshort param0);
void M_com_badlogic_gdx_utils_ShortArray_insert_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_com_badlogic_gdx_utils_ShortArray_insertRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_com_badlogic_gdx_utils_ShortArray_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_ShortArray_replaceFirst_short_short_R_boolean(jcontext ctx, jobject self, jshort param0, jshort param1);
jint M_com_badlogic_gdx_utils_ShortArray_replaceAll_short_short_R_int(jcontext ctx, jobject self, jshort param0, jshort param1);
jbool M_com_badlogic_gdx_utils_ShortArray_contains_short_R_boolean(jcontext ctx, jobject self, jshort param0);
jint M_com_badlogic_gdx_utils_ShortArray_indexOf_short_R_int(jcontext ctx, jobject self, jshort param0);
jint M_com_badlogic_gdx_utils_ShortArray_lastIndexOf_short_R_int(jcontext ctx, jobject self, jshort param0);
jbool M_com_badlogic_gdx_utils_ShortArray_removeValue_short_R_boolean(jcontext ctx, jobject self, jshort param0);
jshort M_com_badlogic_gdx_utils_ShortArray_removeIndex_int_R_short(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ShortArray_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_com_badlogic_gdx_utils_ShortArray_removeAll_com_badlogic_gdx_utils_ShortArray_R_boolean(jcontext ctx, jobject self, jobject param0);
jshort M_com_badlogic_gdx_utils_ShortArray_pop_R_short(jcontext ctx, jobject self);
jshort M_com_badlogic_gdx_utils_ShortArray_peek_R_short(jcontext ctx, jobject self);
jshort M_com_badlogic_gdx_utils_ShortArray_first_R_short(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ShortArray_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ShortArray_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ShortArray_clear(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ShortArray_shrink_R_Array1_short(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ShortArray_ensureCapacity_int_R_Array1_short(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_ShortArray_setSize_int_R_Array1_short(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_ShortArray_resize_int_R_Array1_short(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ShortArray_sort(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ShortArray_reverse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ShortArray_shuffle(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ShortArray_truncate_int(jcontext ctx, jobject self, jint param0);
jshort M_com_badlogic_gdx_utils_ShortArray_random_R_short(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ShortArray_toArray_R_Array1_short(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_ShortArray_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ShortArray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ShortArray_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ShortArray_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject SM_com_badlogic_gdx_utils_ShortArray_with_Array1_short_R_com_badlogic_gdx_utils_ShortArray(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
