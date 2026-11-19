#ifndef HEADER_com_badlogic_gdx_utils_ObjectMap$Values
#define HEADER_com_badlogic_gdx_utils_ObjectMap$Values

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/ObjectMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ObjectMap$Values {
	com_badlogic_gdx_utils_ObjectMap$MapIterator parent;
} com_badlogic_gdx_utils_ObjectMap$Values;

extern Class class_com_badlogic_gdx_utils_ObjectMap$Values;


#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ObjectMap$Values_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap$Values_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_notify 6
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_wait 8
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_hasNext_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_utils_ObjectMap$Values_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object 15
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_remove 16
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_reset 18
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_findNextIndex 19
typedef void (*func_com_badlogic_gdx_utils_ObjectMap$Values_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values 20
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_toArray_R_com_badlogic_gdx_utils_Array 21
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_toArray_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array 22
typedef jobject (*func_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_ObjectMap$Values(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ObjectMap$Values(jcontext ctx);
void init_com_badlogic_gdx_utils_ObjectMap$Values_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectMap$Values_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Values_next_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Values_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectMap$Values_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectMap$Values_reset(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
