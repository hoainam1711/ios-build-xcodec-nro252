#ifndef HEADER_com_badlogic_gdx_utils_ObjectIntMap$Values
#define HEADER_com_badlogic_gdx_utils_ObjectIntMap$Values

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/ObjectIntMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ObjectIntMap$Values {
	com_badlogic_gdx_utils_ObjectIntMap$MapIterator parent;
} com_badlogic_gdx_utils_ObjectIntMap$Values;

extern Class class_com_badlogic_gdx_utils_ObjectIntMap$Values;


#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_notify 6
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_wait 8
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_reset 11
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_findNextIndex 12
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_remove 13
typedef void (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_hasNext_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_next_R_int 15
typedef jint (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_next_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Values 16
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Values)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_toArray_R_com_badlogic_gdx_utils_IntArray 17
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_toArray_R_com_badlogic_gdx_utils_IntArray)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectIntMap$Values_toArray_com_badlogic_gdx_utils_IntArray_R_com_badlogic_gdx_utils_IntArray 18
typedef jobject (*func_com_badlogic_gdx_utils_ObjectIntMap$Values_toArray_com_badlogic_gdx_utils_IntArray_R_com_badlogic_gdx_utils_IntArray)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_ObjectIntMap$Values(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ObjectIntMap$Values(jcontext ctx);
void init_com_badlogic_gdx_utils_ObjectIntMap$Values_com_badlogic_gdx_utils_ObjectIntMap(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectIntMap$Values_hasNext_R_boolean(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_ObjectIntMap$Values_next_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectIntMap$Values(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap$Values_toArray_R_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectIntMap$Values_toArray_com_badlogic_gdx_utils_IntArray_R_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectIntMap$Values_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectIntMap$Values_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
