#ifndef HEADER_com_badlogic_gdx_utils_Predicate$PredicateIterator
#define HEADER_com_badlogic_gdx_utils_Predicate$PredicateIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Predicate$PredicateIterator {
	java_lang_Object parent;
	jref F_iterator;
	jref F_predicate;
	jbool F_end;
	jbool F_peeked;
	jref F_next;
} com_badlogic_gdx_utils_Predicate$PredicateIterator;

extern Class class_com_badlogic_gdx_utils_Predicate$PredicateIterator;


#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_notify 6
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_wait 8
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean 11
typedef jbool (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_next_R_java_lang_Object 12
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_remove 13
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate 15
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate 16
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_badlogic_gdx_utils_Predicate$PredicateIterator(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Predicate$PredicateIterator(jcontext ctx);
void init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_com_badlogic_gdx_utils_Predicate$PredicateIterator_java_util_Iterator_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Predicate$PredicateIterator_set_java_util_Iterator_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_com_badlogic_gdx_utils_Predicate$PredicateIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Predicate$PredicateIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Predicate$PredicateIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
