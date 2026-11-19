#ifndef HEADER_com_badlogic_gdx_utils_Array$ArrayIterable
#define HEADER_com_badlogic_gdx_utils_Array$ArrayIterable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Array$ArrayIterable {
	java_lang_Object parent;
	jref F_array;
	jbool F_allowRemove;
	jref F_iterator1;
	jref F_iterator2;
} com_badlogic_gdx_utils_Array$ArrayIterable;

extern Class class_com_badlogic_gdx_utils_Array$ArrayIterable;


#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_Array$ArrayIterable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_Array$ArrayIterable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_finalize 5
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterable_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_notify 6
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterable_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_wait 8
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterable_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_Array$ArrayIterable_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterable_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator 14
typedef jobject (*func_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_Array$ArrayIterable(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Array$ArrayIterable(jcontext ctx);
void init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_utils_Array$ArrayIterable_com_badlogic_gdx_utils_Array_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_Array$ArrayIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
