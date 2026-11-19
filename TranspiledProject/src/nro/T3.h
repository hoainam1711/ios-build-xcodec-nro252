#ifndef HEADER_nro_T3
#define HEADER_nro_T3

#include "Clearwing.h"
#include "nro/mResources.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_T3 {
	nro_mResources parent;
} nro_T3;

extern Class class_nro_T3;


#define VTABLE_nro_T3_hashCode_R_int 0
typedef jint (*func_nro_T3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_T3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_T3_clone_R_java_lang_Object 2
typedef jobject (*func_nro_T3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_T3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_toString_R_java_lang_String 4
typedef jobject (*func_nro_T3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_finalize 5
typedef void (*func_nro_T3_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_notify 6
typedef void (*func_nro_T3_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_notifyAll 7
typedef void (*func_nro_T3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_wait 8
typedef void (*func_nro_T3_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_T3_wait_long 9
typedef void (*func_nro_T3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_T3_wait_long_int 10
typedef void (*func_nro_T3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_T3(jobject object, jint mark, jint depth);
void clinit_nro_T3(jcontext ctx);
void init_nro_T3(jcontext ctx, jobject self);
void SM_nro_T3_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
