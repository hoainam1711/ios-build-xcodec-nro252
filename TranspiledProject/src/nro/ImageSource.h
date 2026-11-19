#ifndef HEADER_nro_ImageSource
#define HEADER_nro_ImageSource

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ImageSource {
	java_lang_Object parent;
	jbyte F_version;
	jref F_id;
} nro_ImageSource;

extern Class class_nro_ImageSource;

extern jobject SF_nro_ImageSource_vSource;
extern jobject SF_nro_ImageSource_vRms;

#define VTABLE_nro_ImageSource_hashCode_R_int 0
typedef jint (*func_nro_ImageSource_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ImageSource_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ImageSource_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ImageSource_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ImageSource_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_toString_R_java_lang_String 4
typedef jobject (*func_nro_ImageSource_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_finalize 5
typedef void (*func_nro_ImageSource_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_notify 6
typedef void (*func_nro_ImageSource_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_notifyAll 7
typedef void (*func_nro_ImageSource_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_wait 8
typedef void (*func_nro_ImageSource_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ImageSource_wait_long 9
typedef void (*func_nro_ImageSource_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ImageSource_wait_long_int 10
typedef void (*func_nro_ImageSource_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ImageSource(jobject object, jint mark, jint depth);
void clinit_nro_ImageSource(jcontext ctx);
void init_nro_ImageSource_java_lang_String_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void SM_nro_ImageSource_checkRMS(jcontext ctx);
void SM_nro_ImageSource_saveRMS(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
