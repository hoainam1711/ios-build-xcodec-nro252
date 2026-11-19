#ifndef HEADER_nro_MapTemplate
#define HEADER_nro_MapTemplate

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MapTemplate {
	java_lang_Object parent;
} nro_MapTemplate;

extern Class class_nro_MapTemplate;

extern jobject SF_nro_MapTemplate_tmw;
extern jobject SF_nro_MapTemplate_tmh;
extern jobject SF_nro_MapTemplate_pxw;
extern jobject SF_nro_MapTemplate_pxh;
extern jobject SF_nro_MapTemplate_maps;
extern jobject SF_nro_MapTemplate_types;
extern jobject SF_nro_MapTemplate_vCurrItem;

#define VTABLE_nro_MapTemplate_hashCode_R_int 0
typedef jint (*func_nro_MapTemplate_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MapTemplate_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MapTemplate_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MapTemplate_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MapTemplate_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_toString_R_java_lang_String 4
typedef jobject (*func_nro_MapTemplate_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_finalize 5
typedef void (*func_nro_MapTemplate_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_notify 6
typedef void (*func_nro_MapTemplate_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_notifyAll 7
typedef void (*func_nro_MapTemplate_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_wait 8
typedef void (*func_nro_MapTemplate_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MapTemplate_wait_long 9
typedef void (*func_nro_MapTemplate_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MapTemplate_wait_long_int 10
typedef void (*func_nro_MapTemplate_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_MapTemplate(jobject object, jint mark, jint depth);
void clinit_nro_MapTemplate(jcontext ctx);
void init_nro_MapTemplate(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
