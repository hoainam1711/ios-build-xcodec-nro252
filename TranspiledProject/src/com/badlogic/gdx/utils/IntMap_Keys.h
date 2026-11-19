#ifndef HEADER_com_badlogic_gdx_utils_IntMap$Keys
#define HEADER_com_badlogic_gdx_utils_IntMap$Keys

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/IntMap_MapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_IntMap$Keys {
	com_badlogic_gdx_utils_IntMap$MapIterator parent;
} com_badlogic_gdx_utils_IntMap$Keys;

extern Class class_com_badlogic_gdx_utils_IntMap$Keys;


#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_IntMap$Keys_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_IntMap$Keys_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_IntMap$Keys_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_IntMap$Keys_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_IntMap$Keys_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_finalize 5
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_notify 6
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_wait 8
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_reset 11
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_findNextIndex 12
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_remove 13
typedef void (*func_com_badlogic_gdx_utils_IntMap$Keys_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_next_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_IntMap$Keys_next_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_toArray_R_com_badlogic_gdx_utils_IntArray 15
typedef jobject (*func_com_badlogic_gdx_utils_IntMap$Keys_toArray_R_com_badlogic_gdx_utils_IntArray)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntMap$Keys_toArray_com_badlogic_gdx_utils_IntArray_R_com_badlogic_gdx_utils_IntArray 16
typedef jobject (*func_com_badlogic_gdx_utils_IntMap$Keys_toArray_com_badlogic_gdx_utils_IntArray_R_com_badlogic_gdx_utils_IntArray)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_IntMap$Keys(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_IntMap$Keys(jcontext ctx);
void init_com_badlogic_gdx_utils_IntMap$Keys_com_badlogic_gdx_utils_IntMap(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_IntMap$Keys_next_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntMap$Keys_toArray_R_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntMap$Keys_toArray_com_badlogic_gdx_utils_IntArray_R_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_IntMap$Keys_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntMap$Keys_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
