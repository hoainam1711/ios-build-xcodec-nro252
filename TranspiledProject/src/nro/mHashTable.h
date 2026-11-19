#ifndef HEADER_nro_mHashTable
#define HEADER_nro_mHashTable

#include "Clearwing.h"
#include "java/util/Hashtable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_mHashTable {
	java_util_Hashtable parent;
} nro_mHashTable;

extern Class class_nro_mHashTable;


#define VTABLE_nro_mHashTable_hashCode_R_int 0
typedef jint (*func_nro_mHashTable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_mHashTable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_clone_R_java_lang_Object 2
typedef jobject (*func_nro_mHashTable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_mHashTable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_toString_R_java_lang_String 4
typedef jobject (*func_nro_mHashTable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_finalize 5
typedef void (*func_nro_mHashTable_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_notify 6
typedef void (*func_nro_mHashTable_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_notifyAll 7
typedef void (*func_nro_mHashTable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_wait 8
typedef void (*func_nro_mHashTable_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_wait_long 9
typedef void (*func_nro_mHashTable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_mHashTable_wait_long_int 10
typedef void (*func_nro_mHashTable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_mHashTable_elements_R_java_util_Enumeration 11
typedef jobject (*func_nro_mHashTable_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object 12
typedef jobject (*func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_isEmpty_R_boolean 13
typedef jbool (*func_nro_mHashTable_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_keys_R_java_util_Enumeration 14
typedef jobject (*func_nro_mHashTable_keys_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_size_R_int 17
typedef jint (*func_nro_mHashTable_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_clear 18
typedef void (*func_nro_mHashTable_clear)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_containsKey_java_lang_Object_R_boolean 19
typedef jbool (*func_nro_mHashTable_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_containsValue_java_lang_Object_R_boolean 20
typedef jbool (*func_nro_mHashTable_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_entrySet_R_java_util_Set 21
typedef jobject (*func_nro_mHashTable_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_keySet_R_java_util_Set 22
typedef jobject (*func_nro_mHashTable_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_putAll_java_util_Map 23
typedef void (*func_nro_mHashTable_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 24
typedef jobject (*func_nro_mHashTable_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_remove_java_lang_Object_java_lang_Object_R_boolean 25
typedef jbool (*func_nro_mHashTable_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 26
typedef jobject (*func_nro_mHashTable_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 27
typedef jbool (*func_nro_mHashTable_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_nro_mHashTable_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 28
typedef jobject (*func_nro_mHashTable_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_forEach_java_util_function_BiConsumer 29
typedef void (*func_nro_mHashTable_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_replaceAll_java_util_function_BiFunction 30
typedef void (*func_nro_mHashTable_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 31
typedef jobject (*func_nro_mHashTable_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 32
typedef jobject (*func_nro_mHashTable_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 33
typedef jobject (*func_nro_mHashTable_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_mHashTable_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 34
typedef jobject (*func_nro_mHashTable_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_nro_mHashTable_values_R_java_util_Collection 35
typedef jobject (*func_nro_mHashTable_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_newElementArray_int_R_Array1_java_util_Hashtable$Entry 36
typedef jobject (*func_nro_mHashTable_newElementArray_int_R_Array1_java_util_Hashtable$Entry)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_mHashTable_computeMaxSize 37
typedef void (*func_nro_mHashTable_computeMaxSize)(jcontext ctx, jobject self);
#define VTABLE_nro_mHashTable_contains_java_lang_Object_R_boolean 38
typedef jbool (*func_nro_mHashTable_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry 39
typedef jobject (*func_nro_mHashTable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_mHashTable_rehash 40
typedef void (*func_nro_mHashTable_rehash)(jcontext ctx, jobject self);

void mark_nro_mHashTable(jobject object, jint mark, jint depth);
void clinit_nro_mHashTable(jcontext ctx);
void init_nro_mHashTable_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_mHashTable_clear(jcontext ctx, jobject self);
jobject M_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
