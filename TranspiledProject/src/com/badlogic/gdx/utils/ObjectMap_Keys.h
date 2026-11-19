#ifndef HEADER_com_badlogic_gdx_utils_ObjectMap$Keys
#define HEADER_com_badlogic_gdx_utils_ObjectMap$Keys

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/ObjectMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ObjectMap$Keys {
	com_badlogic_gdx_utils_ObjectMap$MapIterator parent;
} com_badlogic_gdx_utils_ObjectMap$Keys;

extern Class class_com_badlogic_gdx_utils_ObjectMap$Keys;


#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ObjectMap$Keys_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap$Keys_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_notify 6
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_wait 8
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_hasNext_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap$Keys_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_next_R_java_lang_Object 15
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_remove 16
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_reset 18
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_findNextIndex 19
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Keys_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys 20
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_R_com_badlogic_gdx_utils_Array 21
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array 22
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_ObjectMap$Keys(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ObjectMap$Keys(jcontext ctx);
void init_com_badlogic_gdx_utils_ObjectMap$Keys_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectMap$Keys_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Keys_next_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_com_badlogic_gdx_utils_ObjectMap$Keys(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Keys_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectMap$Keys_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectMap$Keys_reset(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Keys_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
