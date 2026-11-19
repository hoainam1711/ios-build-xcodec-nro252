#ifndef HEADER_com_badlogic_gdx_utils_LongMap$Keys
#define HEADER_com_badlogic_gdx_utils_LongMap$Keys

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/LongMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_LongMap$Keys {
	com_badlogic_gdx_utils_LongMap$MapIterator parent;
} com_badlogic_gdx_utils_LongMap$Keys;

extern Class class_com_badlogic_gdx_utils_LongMap$Keys;


#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_LongMap$Keys_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_LongMap$Keys_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Keys_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Keys_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Keys_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_finalize 5
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_notify 6
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_wait 8
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_reset 11
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_findNextIndex 12
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_remove 13
typedef void (*func_com_badlogic_gdx_utils_LongMap$Keys_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_next_R_long 14
typedef jlong (*func_com_badlogic_gdx_utils_LongMap$Keys_next_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_toArray_R_com_badlogic_gdx_utils_LongArray 15
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Keys_toArray_R_com_badlogic_gdx_utils_LongArray)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Keys_toArray_com_badlogic_gdx_utils_LongArray_R_com_badlogic_gdx_utils_LongArray 16
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Keys_toArray_com_badlogic_gdx_utils_LongArray_R_com_badlogic_gdx_utils_LongArray)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_LongMap$Keys(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_LongMap$Keys(jcontext ctx);
void init_com_badlogic_gdx_utils_LongMap$Keys_com_badlogic_gdx_utils_LongMap(jcontext ctx, jobject self, jobject param0);
jlong M_com_badlogic_gdx_utils_LongMap$Keys_next_R_long(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongMap$Keys_toArray_R_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongMap$Keys_toArray_com_badlogic_gdx_utils_LongArray_R_com_badlogic_gdx_utils_LongArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_LongMap$Keys_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_LongMap$Keys_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
