#ifndef HEADER_com_badlogic_gdx_utils_LongMap$Entries
#define HEADER_com_badlogic_gdx_utils_LongMap$Entries

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/LongMap_MapIterator.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_LongMap$Entries {
	com_badlogic_gdx_utils_LongMap$MapIterator parent;
	jref F_entry;
} com_badlogic_gdx_utils_LongMap$Entries;

extern Class class_com_badlogic_gdx_utils_LongMap$Entries;


#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_LongMap$Entries_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_LongMap$Entries_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Entries_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Entries_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Entries_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_finalize 5
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_notify 6
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_wait 8
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_reset 11
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_reset)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_findNextIndex 12
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_remove 13
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_remove)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_iterator_R_java_util_Iterator 14
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Entries_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_forEach_java_util_function_Consumer 15
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_spliterator_R_java_util_Spliterator 16
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Entries_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_hasNext_R_boolean 17
typedef jbool (*func_com_badlogic_gdx_utils_LongMap$Entries_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_next_R_java_lang_Object 18
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Entries_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_forEachRemaining_java_util_function_Consumer 19
typedef void (*func_com_badlogic_gdx_utils_LongMap$Entries_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_LongMap$Entries_next_R_com_badlogic_gdx_utils_LongMap$Entry 20
typedef jobject (*func_com_badlogic_gdx_utils_LongMap$Entries_next_R_com_badlogic_gdx_utils_LongMap$Entry)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_LongMap$Entries(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_LongMap$Entries(jcontext ctx);
void init_com_badlogic_gdx_utils_LongMap$Entries_com_badlogic_gdx_utils_LongMap(jcontext ctx, jobject self, jobject param0);
jobject M_com_badlogic_gdx_utils_LongMap$Entries_next_R_com_badlogic_gdx_utils_LongMap$Entry(jcontext ctx, jobject self);
jbool M_com_badlogic_gdx_utils_LongMap$Entries_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongMap$Entries_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_LongMap$Entries_remove(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_LongMap$Entries_reset(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_utils_LongMap$Entries_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
