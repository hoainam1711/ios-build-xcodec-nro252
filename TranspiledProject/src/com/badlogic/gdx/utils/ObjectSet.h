#ifndef HEADER_com_badlogic_gdx_utils_ObjectSet
#define HEADER_com_badlogic_gdx_utils_ObjectSet

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ObjectSet {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_shift;
	jint F_mask;
	jref F_iterator1;
	jref F_iterator2;
} com_badlogic_gdx_utils_ObjectSet;

extern Class class_com_badlogic_gdx_utils_ObjectSet;


#define VTABLE_com_badlogic_gdx_utils_ObjectSet_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ObjectSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_notify 6
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_wait 8
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int 15
typedef jint (*func_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean 16
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array 17
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int 18
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean 19
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean 20
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet 21
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object 22
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean 23
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean 24
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean 25
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_shrink_int 26
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_clear_int 27
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_clear 28
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean 29
typedef jbool (*func_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object 30
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object 31
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int 32
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_resize_int 33
typedef void (*func_com_badlogic_gdx_utils_ObjectSet_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String 34
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator 35
typedef jobject (*func_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_ObjectSet(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ObjectSet(jcontext ctx);
void init_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_ObjectSet_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_ObjectSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_com_badlogic_gdx_utils_ObjectSet_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ObjectSet_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ObjectSet_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_Array_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jbool M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectSet_addAll_Array1_java_lang_Object_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_ObjectSet_addAll_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectSet_addResize_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectSet_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectSet_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectSet_shrink_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectSet_clear_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectSet_clear(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectSet_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectSet_resize_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_ObjectSet_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectSet_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectSet_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectSet_iterator_R_com_badlogic_gdx_utils_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_utils_ObjectSet_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_ObjectSet(jcontext ctx, jobject param0);
jint SM_com_badlogic_gdx_utils_ObjectSet_tableSize_int_float_R_int(jcontext ctx, jint param0, jfloat param1);
jobject M_com_badlogic_gdx_utils_ObjectSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
