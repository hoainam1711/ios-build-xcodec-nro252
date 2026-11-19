#ifndef HEADER_nro_PKFlag
#define HEADER_nro_PKFlag

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_PKFlag {
	java_lang_Object parent;
	jbyte F_cflag;
	jint F_IDimageFlag;
} nro_PKFlag;

extern Class class_nro_PKFlag;


#define VTABLE_nro_PKFlag_hashCode_R_int 0
typedef jint (*func_nro_PKFlag_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_PKFlag_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PKFlag_clone_R_java_lang_Object 2
typedef jobject (*func_nro_PKFlag_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_PKFlag_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_toString_R_java_lang_String 4
typedef jobject (*func_nro_PKFlag_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_finalize 5
typedef void (*func_nro_PKFlag_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_notify 6
typedef void (*func_nro_PKFlag_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_notifyAll 7
typedef void (*func_nro_PKFlag_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_wait 8
typedef void (*func_nro_PKFlag_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_PKFlag_wait_long 9
typedef void (*func_nro_PKFlag_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_PKFlag_wait_long_int 10
typedef void (*func_nro_PKFlag_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_PKFlag(jobject object, jint mark, jint depth);
void clinit_nro_PKFlag(jcontext ctx);
void init_nro_PKFlag(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
