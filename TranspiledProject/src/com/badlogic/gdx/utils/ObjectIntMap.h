#ifndef HEADER_com_badlogic_gdx_utils_ObjectIntMap
#define HEADER_com_badlogic_gdx_utils_ObjectIntMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ObjectIntMap {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jref F_valueTable;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_shift;
	jint F_mask;
	jref F_entries1;
	jref F_entries2;
	jref F_values1;
	jref F_values2;
	jref F_keys1;
	jref F_keys2;
} com_badlogic_gdx_utils_ObjectIntMap;

extern Class class_com_badlogic_gdx_utils_ObjectIntMap;


#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ObjectIntMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_notify 6
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_wait 8
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_place_java_lang_Object_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_locateKey_java_lang_Object_R_int 15
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int 16
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int_int_R_int 17
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_putMissing_java_lang_Object_int 18
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_putMissing_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int 19
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_putAll_com_badlogic_gdx_utils_ObjectIntMap 20
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_putAll_com_badlogic_gdx_utils_ObjectIntMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_putResize_java_lang_Object_int 21
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_putResize_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int 22
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_getAndIncrement_java_lang_Object_int_int_R_int 23
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_getAndIncrement_java_lang_Object_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_remove_java_lang_Object_int_R_int 24
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap_remove_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_notEmpty_R_boolean 25
typedef jbool (*func_com_badlogic_gdx_utils_ObjectIntMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_isEmpty_R_boolean 26
typedef jbool (*func_com_badlogic_gdx_utils_ObjectIntMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_shrink_int 27
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_clear_int 28
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_clear 29
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_containsValue_int_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_ObjectIntMap_containsValue_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_containsKey_java_lang_Object_R_boolean 31
typedef jbool (*func_com_badlogic_gdx_utils_ObjectIntMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_findKey_int_R_java_lang_Object 32
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_findKey_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_ensureCapacity_int 33
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_resize_int 34
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_toString_java_lang_String_R_java_lang_String 35
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String 36
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Entries 37
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_entries_R_com_badlogic_gdx_utils_ObjectIntMap$Entries 38
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_entries_R_com_badlogic_gdx_utils_ObjectIntMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_values_R_com_badlogic_gdx_utils_ObjectIntMap$Values 39
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_values_R_com_badlogic_gdx_utils_ObjectIntMap$Values)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap_keys_R_com_badlogic_gdx_utils_ObjectIntMap$Keys 40
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap_keys_R_com_badlogic_gdx_utils_ObjectIntMap$Keys)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_ObjectIntMap(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ObjectIntMap(jcontext ctx);
void init_com_badlogic_gdx_utils_ObjectIntMap(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_ObjectIntMap_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_ObjectIntMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_com_badlogic_gdx_utils_ObjectIntMap_com_badlogic_gdx_utils_ObjectIntMap(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ObjectIntMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ObjectIntMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_com_badlogic_gdx_utils_ObjectIntMap_put_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_ObjectIntMap_putMissing_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_com_badlogic_gdx_utils_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_badlogic_gdx_utils_ObjectIntMap_putAll_com_badlogic_gdx_utils_ObjectIntMap(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectIntMap_putResize_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_com_badlogic_gdx_utils_ObjectIntMap_get_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_com_badlogic_gdx_utils_ObjectIntMap_getAndIncrement_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_com_badlogic_gdx_utils_ObjectIntMap_remove_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_com_badlogic_gdx_utils_ObjectIntMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectIntMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectIntMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectIntMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectIntMap_clear(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectIntMap_containsValue_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_ObjectIntMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_findKey_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectIntMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectIntMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_ObjectIntMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectIntMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Entries(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_entries_R_com_badlogic_gdx_utils_ObjectIntMap$Entries(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_values_R_com_badlogic_gdx_utils_ObjectIntMap$Values(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_keys_R_com_badlogic_gdx_utils_ObjectIntMap$Keys(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
