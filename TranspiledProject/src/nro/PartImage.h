#ifndef HEADER_nro_PartImage
#define HEADER_nro_PartImage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_PartImage {
	java_lang_Object parent;
	jshort F_id;
	jbyte F_dx;
	jbyte F_dy;
} nro_PartImage;

extern Class class_nro_PartImage;


#define VTABLE_nro_PartImage_hashCode_R_int 0
typedef jint (*func_nro_PartImage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_PartImage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PartImage_clone_R_java_lang_Object 2
typedef jobject (*func_nro_PartImage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_PartImage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_toString_R_java_lang_String 4
typedef jobject (*func_nro_PartImage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_finalize 5
typedef void (*func_nro_PartImage_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_notify 6
typedef void (*func_nro_PartImage_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_notifyAll 7
typedef void (*func_nro_PartImage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_wait 8
typedef void (*func_nro_PartImage_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_PartImage_wait_long 9
typedef void (*func_nro_PartImage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_PartImage_wait_long_int 10
typedef void (*func_nro_PartImage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_PartImage(jobject object, jint mark, jint depth);
void clinit_nro_PartImage(jcontext ctx);
void init_nro_PartImage(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
