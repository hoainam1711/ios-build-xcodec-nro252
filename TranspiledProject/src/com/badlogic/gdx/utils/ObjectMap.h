#ifndef HEADER_com_badlogic_gdx_utils_ObjectMap
#define HEADER_com_badlogic_gdx_utils_ObjectMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ObjectMap {
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
} com_badlogic_gdx_utils_ObjectMap;

extern Class class_com_badlogic_gdx_utils_ObjectMap;

extern jobject SF_com_badlogic_gdx_utils_ObjectMap_dummy;

#define VTABLE_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_notify 6
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_wait 8
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int 15
typedef jint (*func_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap 18
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object 19
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object 22
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean 23
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean 24
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_shrink_int 25
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_clear_int 26
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_clear 27
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean 28
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean 29
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object 30
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int 31
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_resize_int 32
typedef void (*func_com_badlogic_gdx_utils_ObjectMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean 33
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String 34
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String 35
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries 36
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries 37
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values 38
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys 39
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_ObjectMap(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ObjectMap(jcontext ctx);
void init_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_ObjectMap_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_ObjectMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_com_badlogic_gdx_utils_ObjectMap_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ObjectMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ObjectMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_com_badlogic_gdx_utils_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_ObjectMap_putAll_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectMap_putResize_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectMap_clear(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_com_badlogic_gdx_utils_ObjectMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ObjectMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_ObjectMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ObjectMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectMap_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ObjectMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap_keys_R_com_badlogic_gdx_utils_ObjectMap$Keys(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
