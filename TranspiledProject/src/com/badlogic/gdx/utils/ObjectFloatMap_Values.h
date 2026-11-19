#ifndef HEADER_com_badlogic_gdx_utils_ObjectFloatMap$Values
#define HEADER_com_badlogic_gdx_utils_ObjectFloatMap$Values

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/ObjectFloatMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ObjectFloatMap$Values {
	com_badlogic_gdx_utils_ObjectFloatMap$MapIterator parent;
} com_badlogic_gdx_utils_ObjectFloatMap$Values;

extern Class class_com_badlogic_gdx_utils_ObjectFloatMap$Values;


#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_notify 6
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_wait 8
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset 11
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_findNextIndex 12
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_remove 13
typedef void (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_hasNext_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float 15
typedef jfloat (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Values 16
typedef jobject (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Values)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_R_com_badlogic_gdx_utils_FloatArray 17
typedef jobject (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_R_com_badlogic_gdx_utils_FloatArray)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_FloatArray 18
typedef jobject (*func_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_FloatArray)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_ObjectFloatMap$Values(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ObjectFloatMap$Values(jcontext ctx);
void init_com_badlogic_gdx_utils_ObjectFloatMap$Values_com_badlogic_gdx_utils_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ObjectFloatMap$Values_hasNext_R_boolean(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_utils_ObjectFloatMap$Values_next_R_float(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectFloatMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectFloatMap$Values(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_R_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ObjectFloatMap$Values_toArray_com_badlogic_gdx_utils_FloatArray_R_com_badlogic_gdx_utils_FloatArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_ObjectFloatMap$Values_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ObjectFloatMap$Values_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
