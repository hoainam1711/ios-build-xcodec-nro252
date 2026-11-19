#ifndef HEADER_com_badlogic_gdx_utils_ArrayMap$Keys
#define HEADER_com_badlogic_gdx_utils_ArrayMap$Keys

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_ArrayMap$Keys {
	java_lang_Object parent;
	jref F_map;
	jint F_index;
	jbool F_valid;
} com_badlogic_gdx_utils_ArrayMap$Keys;

extern Class class_com_badlogic_gdx_utils_ArrayMap$Keys;


#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_ArrayMap$Keys_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap$Keys_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_finalize 5
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_notify 6
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_wait 8
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_iterator_R_java_util_Iterator 11
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_forEach_java_util_function_Consumer 12
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_hasNext_R_boolean 14
typedef jbool (*func_com_badlogic_gdx_utils_ArrayMap$Keys_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_next_R_java_lang_Object 15
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_remove 16
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_reset 18
typedef void (*func_com_badlogic_gdx_utils_ArrayMap$Keys_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_toArray_R_com_badlogic_gdx_utils_Array 19
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_toArray_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_ArrayMap$Keys_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array 20
typedef jobject (*func_com_badlogic_gdx_utils_ArrayMap$Keys_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_ArrayMap$Keys(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_ArrayMap$Keys(jcontext ctx);
void init_com_badlogic_gdx_utils_ArrayMap$Keys_com_badlogic_gdx_utils_ArrayMap(jcontext ctx, jobject self, jobject param0);
jbool M_com_badlogic_gdx_utils_ArrayMap$Keys_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap$Keys_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap$Keys_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap$Keys_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_ArrayMap$Keys_reset(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap$Keys_toArray_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_ArrayMap$Keys_toArray_com_badlogic_gdx_utils_Array_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
