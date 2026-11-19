#ifndef HEADER_com_badlogic_gdx_utils_Array$ArrayIterator
#define HEADER_com_badlogic_gdx_utils_Array$ArrayIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Array$ArrayIterator {
	java_lang_Object parent;
	jref F_array;
	jbool F_allowRemove;
	jint F_index;
	jbool F_valid;
} com_badlogic_gdx_utils_Array$ArrayIterator;

extern Class class_com_badlogic_gdx_utils_Array$ArrayIterator;


#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Array$ArrayIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Array$ArrayIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_notify 6
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_wait 8
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_hasNext_R_boolean 11
typedef jbool (*func_com_badlogic_gdx_utils_Array$ArrayIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_next_R_java_lang_Object 12
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_remove 13
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_java_util_Iterator 15
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_forEach_java_util_function_Consumer 16
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_spliterator_R_java_util_Spliterator 17
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterator_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_reset 18
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator 19
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Array$ArrayIterator(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Array$ArrayIterator(jcontext ctx);
void init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Array$ArrayIterator_com_badlogic_gdx_utils_Array_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_com_badlogic_gdx_utils_Array$ArrayIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array$ArrayIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Array$ArrayIterator_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Array$ArrayIterator_reset(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array$ArrayIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
