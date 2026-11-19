#ifndef HEADER_com_badlogic_gdx_utils_Queue$QueueIterator
#define HEADER_com_badlogic_gdx_utils_Queue$QueueIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Queue$QueueIterator {
	java_lang_Object parent;
	jref F_queue;
	jbool F_allowRemove;
	jint F_index;
	jbool F_valid;
} com_badlogic_gdx_utils_Queue$QueueIterator;

extern Class class_com_badlogic_gdx_utils_Queue$QueueIterator;


#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Queue$QueueIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Queue$QueueIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Queue$QueueIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Queue$QueueIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Queue$QueueIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_notify 6
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_wait 8
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_hasNext_R_boolean 11
typedef jbool (*func_com_badlogic_gdx_utils_Queue$QueueIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_next_R_java_lang_Object 12
typedef jobject (*func_com_badlogic_gdx_utils_Queue$QueueIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_remove 13
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_iterator_R_java_util_Iterator 15
typedef jobject (*func_com_badlogic_gdx_utils_Queue$QueueIterator_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_forEach_java_util_function_Consumer 16
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_spliterator_R_java_util_Spliterator 17
typedef jobject (*func_com_badlogic_gdx_utils_Queue$QueueIterator_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue$QueueIterator_reset 18
typedef void (*func_com_badlogic_gdx_utils_Queue$QueueIterator_reset)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Queue$QueueIterator(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Queue$QueueIterator(jcontext ctx);
void init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Queue$QueueIterator_com_badlogic_gdx_utils_Queue_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_com_badlogic_gdx_utils_Queue$QueueIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue$QueueIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Queue$QueueIterator_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_Queue$QueueIterator_reset(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue$QueueIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
