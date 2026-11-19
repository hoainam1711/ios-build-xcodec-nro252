#ifndef HEADER_com_badlogic_gdx_utils_IntSet
#define HEADER_com_badlogic_gdx_utils_IntSet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_IntSet {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jbool F_hasZeroValue;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_shift;
	jint F_mask;
	jref F_iterator1;
	jref F_iterator2;
} com_badlogic_gdx_utils_IntSet;

extern Class class_com_badlogic_gdx_utils_IntSet;


#define VTABLE_com_badlogic_gdx_utils_IntSet_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_IntSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_IntSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_IntSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_IntSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_IntSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_finalize 5
typedef void (*func_com_badlogic_gdx_utils_IntSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_notify 6
typedef void (*func_com_badlogic_gdx_utils_IntSet_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_IntSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_wait 8
typedef void (*func_com_badlogic_gdx_utils_IntSet_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_IntSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_IntSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntSet_place_int_R_int 11
typedef jint (*func_com_badlogic_gdx_utils_IntSet_place_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int 12
typedef jint (*func_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_add_int_R_boolean 13
typedef jbool (*func_com_badlogic_gdx_utils_IntSet_add_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray 14
typedef void (*func_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray_int_int 15
typedef void (*func_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int 16
typedef void (*func_com_badlogic_gdx_utils_IntSet_addAll_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int 17
typedef void (*func_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntSet 18
typedef void (*func_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntSet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_addResize_int 19
typedef void (*func_com_badlogic_gdx_utils_IntSet_addResize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean 20
typedef jbool (*func_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_notEmpty_R_boolean 21
typedef jbool (*func_com_badlogic_gdx_utils_IntSet_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_isEmpty_R_boolean 22
typedef jbool (*func_com_badlogic_gdx_utils_IntSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_shrink_int 23
typedef void (*func_com_badlogic_gdx_utils_IntSet_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_clear_int 24
typedef void (*func_com_badlogic_gdx_utils_IntSet_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_clear 25
typedef void (*func_com_badlogic_gdx_utils_IntSet_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean 26
typedef jbool (*func_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_first_R_int 27
typedef jint (*func_com_badlogic_gdx_utils_IntSet_first_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet_ensureCapacity_int 28
typedef void (*func_com_badlogic_gdx_utils_IntSet_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_resize_int 29
typedef void (*func_com_badlogic_gdx_utils_IntSet_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator 30
typedef jobject (*func_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_IntSet(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_IntSet(jcontext ctx);
void init_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_IntSet_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_IntSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_com_badlogic_gdx_utils_IntSet_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_IntSet_place_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_IntSet_locateKey_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_IntSet_add_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntArray_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_IntSet_addAll_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_IntSet_addAll_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_IntSet_addResize_int(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_IntSet_remove_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_IntSet_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_IntSet_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntSet_shrink_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntSet_clear_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntSet_clear(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_IntSet_contains_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_IntSet_first_R_int(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntSet_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_IntSet_resize_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_IntSet_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_IntSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_IntSet_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntSet_iterator_R_com_badlogic_gdx_utils_IntSet$IntSetIterator(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_utils_IntSet_with_Array1_int_R_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
