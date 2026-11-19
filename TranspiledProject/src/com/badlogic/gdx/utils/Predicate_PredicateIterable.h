#ifndef HEADER_com_badlogic_gdx_utils_Predicate$PredicateIterable
#define HEADER_com_badlogic_gdx_utils_Predicate$PredicateIterable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Predicate$PredicateIterable {
	java_lang_Object parent;
	jref F_iterable;
	jref F_predicate;
	jref F_iterator;
} com_badlogic_gdx_utils_Predicate$PredicateIterable;

extern Class class_com_badlogic_gdx_utils_Predicate$PredicateIterable;


#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_notify 6
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_wait 8
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate 14
typedef void (*func_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_badlogic_gdx_utils_Predicate$PredicateIterable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Predicate$PredicateIterable(jcontext ctx);
void init_com_badlogic_gdx_utils_Predicate$PredicateIterable_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_com_badlogic_gdx_utils_Predicate$PredicateIterable_set_java_lang_Iterable_com_badlogic_gdx_utils_Predicate(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_com_badlogic_gdx_utils_Predicate$PredicateIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
