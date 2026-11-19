#ifndef HEADER_com_badlogic_gdx_utils_FlushablePool
#define HEADER_com_badlogic_gdx_utils_FlushablePool

#include "Clearwing.h"
#include "com/badlogic/gdx/utils/Pool.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_FlushablePool {
	com_badlogic_gdx_utils_Pool parent;
	jref F_obtained;
} com_badlogic_gdx_utils_FlushablePool;

extern Class class_com_badlogic_gdx_utils_FlushablePool;


#define VTABLE_com_badlogic_gdx_utils_FlushablePool_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_utils_FlushablePool_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_utils_FlushablePool_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_utils_FlushablePool_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_utils_FlushablePool_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_utils_FlushablePool_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_finalize 5
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_notify 6
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_notifyAll 7
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_wait 8
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_wait_long 9
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_wait_long_int 10
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_newObject_R_java_lang_Object 11
typedef jobject (*func_com_badlogic_gdx_utils_FlushablePool_newObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object 12
typedef jobject (*func_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object 13
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_fill_int 14
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_fill_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_reset_java_lang_Object 15
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_reset_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_discard_java_lang_Object 16
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_discard_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array 17
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_clear 18
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_clear)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_getFree_R_int 19
typedef jint (*func_com_badlogic_gdx_utils_FlushablePool_getFree_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_utils_FlushablePool_flush 20
typedef void (*func_com_badlogic_gdx_utils_FlushablePool_flush)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_FlushablePool(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_FlushablePool(jcontext ctx);
void init_com_badlogic_gdx_utils_FlushablePool(jcontext ctx, jobject self);
void init_com_badlogic_gdx_utils_FlushablePool_int(jcontext ctx, jobject self, jint param0);
void init_com_badlogic_gdx_utils_FlushablePool_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_FlushablePool_flush(jcontext ctx, jobject self);
void M_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
