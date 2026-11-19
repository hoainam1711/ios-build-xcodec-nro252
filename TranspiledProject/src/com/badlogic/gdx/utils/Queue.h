#ifndef HEADER_com_badlogic_gdx_utils_Queue
#define HEADER_com_badlogic_gdx_utils_Queue

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Queue {
	java_lang_Object parent;
	jref F_values;
	jint F_head;
	jint F_tail;
	jint F_size;
	jref F_iterable;
} com_badlogic_gdx_utils_Queue;

extern Class class_com_badlogic_gdx_utils_Queue;


#define VTABLE_com_badlogic_gdx_utils_Queue_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Queue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Queue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Queue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Queue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Queue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Queue_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_notify 6
typedef void (*func_com_badlogic_gdx_utils_Queue_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Queue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_wait 8
typedef void (*func_com_badlogic_gdx_utils_Queue_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Queue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Queue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Queue_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_Queue_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_Queue_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_Queue_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object 14
typedef void (*func_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_addFirst_java_lang_Object 15
typedef void (*func_com_badlogic_gdx_utils_Queue_addFirst_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_ensureCapacity_int 16
typedef void (*func_com_badlogic_gdx_utils_Queue_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_resize_int 17
typedef void (*func_com_badlogic_gdx_utils_Queue_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object 18
typedef jobject (*func_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object 19
typedef jobject (*func_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int 20
typedef jint (*func_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Queue_removeValue_java_lang_Object_boolean_R_boolean 21
typedef jbool (*func_com_badlogic_gdx_utils_Queue_removeValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object 22
typedef jobject (*func_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_notEmpty_R_boolean 23
typedef jbool (*func_com_badlogic_gdx_utils_Queue_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_isEmpty_R_boolean 24
typedef jbool (*func_com_badlogic_gdx_utils_Queue_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_first_R_java_lang_Object 25
typedef jobject (*func_com_badlogic_gdx_utils_Queue_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_last_R_java_lang_Object 26
typedef jobject (*func_com_badlogic_gdx_utils_Queue_last_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object 27
typedef jobject (*func_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_clear 28
typedef void (*func_com_badlogic_gdx_utils_Queue_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Queue_toString_java_lang_String_R_java_lang_String 29
typedef jobject (*func_com_badlogic_gdx_utils_Queue_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Queue_equalsIdentity_java_lang_Object_R_boolean 30
typedef jbool (*func_com_badlogic_gdx_utils_Queue_equalsIdentity_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_Queue(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Queue(jcontext ctx);
void init_com_badlogic_gdx_utils_Queue(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_Queue_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_Queue_int_java_lang_Class(jcontext ctx, jobject self, jint param0, jobject param1);
void init_com_badlogic_gdx_utils_Queue_int_com_badlogic_gdx_utils_ArraySupplier(jcontext ctx, jobject self, jint param0, jobject param1);
void M_com_badlogic_gdx_utils_Queue_addLast_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Queue_addFirst_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_Queue_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_Queue_resize_int(jcontext ctx, jobject self, jint param0);
jobject M_com_badlogic_gdx_utils_Queue_removeFirst_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue_removeLast_R_java_lang_Object(jcontext ctx, jobject self);
jint M_com_badlogic_gdx_utils_Queue_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_com_badlogic_gdx_utils_Queue_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_Queue_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jbool M_com_badlogic_gdx_utils_Queue_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Queue_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue_first_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue_last_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_com_badlogic_gdx_utils_Queue_clear(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Queue_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_com_badlogic_gdx_utils_Queue_hashCode_R_int(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_Queue_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_Queue_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject SM_com_badlogic_gdx_utils_Queue_lambda$new$0_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
