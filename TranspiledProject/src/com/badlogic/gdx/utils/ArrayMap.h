#ifndef HEADER_com_badlogic_gdx_utils_ArrayMap
#define HEADER_com_badlogic_gdx_utils_ArrayMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ArrayMap {
	java_lang_Object parent;
	jref F_keys;
	jref F_values;
	jint F_size;
	jbool F_ordered;
	jref F_entries1;
	jref F_entries2;
	jref F_values1;
	jref F_values2;
	jref F_keys1;
	jref F_keys2;
} com_badlogic_gdx_utils_ArrayMap;

extern Class class_com_badlogic_gdx_utils_ArrayMap;


#define VTABLE_com_badlogic_gdx_utils_ArrayMap_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ArrayMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_notify 6
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_wait 8
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int 15
typedef jint (*func_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap 17
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int 18
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object 19
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object 21
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_getKeyAt_int_R_java_lang_Object 22
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_getKeyAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_getValueAt_int_R_java_lang_Object 23
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_getValueAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_firstKey_R_java_lang_Object 24
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_firstKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_firstValue_R_java_lang_Object 25
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_firstValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_setKey_int_java_lang_Object 26
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_setKey_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_setValue_int_java_lang_Object 27
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_setValue_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_insert_int_java_lang_Object_java_lang_Object 28
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_insert_int_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_containsKey_java_lang_Object_R_boolean 29
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int 31
typedef jint (*func_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int 32
typedef jint (*func_com_badlogic_gdx_utils_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object 33
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean 34
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_removeIndex_int 35
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_removeIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_notEmpty_R_boolean 36
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_isEmpty_R_boolean 37
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_peekKey_R_java_lang_Object 38
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_peekKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_peekValue_R_java_lang_Object 39
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_peekValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_clear_int 40
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_clear 41
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_shrink 42
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_shrink)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_ensureCapacity_int 43
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_resize_int 44
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_reverse 45
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_reverse)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_shuffle 46
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_shuffle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_truncate_int 47
typedef void (*func_com_badlogic_gdx_utils_ArrayMap_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_equalsIdentity_java_lang_Object_R_boolean 48
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap_equalsIdentity_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries 49
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_values_R_com_badlogic_gdx_utils_ArrayMap$Values 50
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_values_R_com_badlogic_gdx_utils_ArrayMap$Values)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap_keys_R_com_badlogic_gdx_utils_ArrayMap$Keys 51
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap_keys_R_com_badlogic_gdx_utils_ArrayMap$Keys)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_ArrayMap(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ArrayMap(jcontext ctx);
void init_com_badlogic_gdx_utils_ArrayMap(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_ArrayMap_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_ArrayMap_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_com_badlogic_gdx_utils_ArrayMap_boolean_int_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jobject param3);
void init_com_badlogic_gdx_utils_ArrayMap_com_badlogic_gdx_utils_ArraySupplier_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_utils_ArrayMap_boolean_int_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jobject param3);
void init_com_badlogic_gdx_utils_ArrayMap_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_utils_ArrayMap_com_badlogic_gdx_utils_ArrayMap(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_com_badlogic_gdx_utils_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_com_badlogic_gdx_utils_ArrayMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ArrayMap_putAll_com_badlogic_gdx_utils_ArrayMap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ArrayMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_com_badlogic_gdx_utils_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_ArrayMap_getKeyAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_ArrayMap_getValueAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_ArrayMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap_firstValue_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap_setKey_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_com_badlogic_gdx_utils_ArrayMap_setValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_com_badlogic_gdx_utils_ArrayMap_insert_int_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jbool M_com_badlogic_gdx_utils_ArrayMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_com_badlogic_gdx_utils_ArrayMap_indexOfKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_com_badlogic_gdx_utils_ArrayMap_removeIndex_int(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_ArrayMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ArrayMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap_peekKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap_peekValue_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ArrayMap_clear(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap_shrink(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ArrayMap_resize_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_ArrayMap_reverse(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap_shuffle(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap_truncate_int(jcontext ctx, jobject self, jint param0);
jint M_com_badlogic_gdx_utils_ArrayMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_ArrayMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ArrayMap_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_ArrayMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap_entries_R_com_badlogic_gdx_utils_ArrayMap$Entries(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap_values_R_com_badlogic_gdx_utils_ArrayMap$Values(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap_keys_R_com_badlogic_gdx_utils_ArrayMap$Keys(jcontext ctx, jobject self);
jobject SM_com_badlogic_gdx_utils_ArrayMap_lambda$new$1_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jobject SM_com_badlogic_gdx_utils_ArrayMap_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
