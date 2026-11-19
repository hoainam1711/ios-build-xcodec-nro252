#ifndef HEADER_nro_NClass
#define HEADER_nro_NClass

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_NClass {
	java_lang_Object parent;
	jint F_classId;
	jref F_skillTemplates;
} nro_NClass;

extern Class class_nro_NClass;


#define VTABLE_nro_NClass_hashCode_R_int 0
typedef jint (*func_nro_NClass_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_NClass_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NClass_clone_R_java_lang_Object 2
typedef jobject (*func_nro_NClass_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_NClass_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_toString_R_java_lang_String 4
typedef jobject (*func_nro_NClass_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_finalize 5
typedef void (*func_nro_NClass_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_notify 6
typedef void (*func_nro_NClass_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_notifyAll 7
typedef void (*func_nro_NClass_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_wait 8
typedef void (*func_nro_NClass_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_NClass_wait_long 9
typedef void (*func_nro_NClass_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_NClass_wait_long_int 10
typedef void (*func_nro_NClass_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_NClass(jobject object, jint mark, jint depth);
void clinit_nro_NClass(jcontext ctx);
void init_nro_NClass(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
