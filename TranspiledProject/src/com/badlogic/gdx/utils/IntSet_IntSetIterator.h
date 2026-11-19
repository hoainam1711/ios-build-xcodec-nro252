#ifndef HEADER_com_badlogic_gdx_utils_IntSet$IntSetIterator
#define HEADER_com_badlogic_gdx_utils_IntSet$IntSetIterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_IntSet$IntSetIterator {
	java_lang_Object parent;
	jbool F_hasNext;
	jref F_set;
	jint F_nextIndex;
	jint F_currentIndex;
	jbool F_valid;
} com_badlogic_gdx_utils_IntSet$IntSetIterator;

extern Class class_com_badlogic_gdx_utils_IntSet$IntSetIterator;

extern jint SF_com_badlogic_gdx_utils_IntSet$IntSetIterator_INDEX_ILLEGAL;
extern jint SF_com_badlogic_gdx_utils_IntSet$IntSetIterator_INDEX_ZERO;

#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_finalize 5
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_notify 6
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_wait 8
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_reset 11
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_findNextIndex 12
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_remove 13
typedef void (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_next_R_int 14
typedef jint (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_next_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_IntSet$IntSetIterator_toArray_R_com_badlogic_gdx_utils_IntArray 15
typedef jobject (*func_com_badlogic_gdx_utils_IntSet$IntSetIterator_toArray_R_com_badlogic_gdx_utils_IntArray)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_IntSet$IntSetIterator(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_IntSet$IntSetIterator(jcontext ctx);
void init_com_badlogic_gdx_utils_IntSet$IntSetIterator_com_badlogic_gdx_utils_IntSet(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_IntSet$IntSetIterator_reset(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntSet$IntSetIterator_findNextIndex(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_IntSet$IntSetIterator_remove(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_IntSet$IntSetIterator_next_R_int(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_IntSet$IntSetIterator_toArray_R_com_badlogic_gdx_utils_IntArray(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
