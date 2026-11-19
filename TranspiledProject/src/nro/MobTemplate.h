#ifndef HEADER_nro_MobTemplate
#define HEADER_nro_MobTemplate

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MobTemplate {
	java_lang_Object parent;
	jbyte F_rangeMove;
	jbyte F_speed;
	jbyte F_type;
	jlong F_hp;
	jref F_name;
	jref F_data;
	jbyte F_dartType;
} nro_MobTemplate;

extern Class class_nro_MobTemplate;


#define VTABLE_nro_MobTemplate_hashCode_R_int 0
typedef jint (*func_nro_MobTemplate_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MobTemplate_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MobTemplate_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MobTemplate_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MobTemplate_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_toString_R_java_lang_String 4
typedef jobject (*func_nro_MobTemplate_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_finalize 5
typedef void (*func_nro_MobTemplate_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_notify 6
typedef void (*func_nro_MobTemplate_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_notifyAll 7
typedef void (*func_nro_MobTemplate_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_wait 8
typedef void (*func_nro_MobTemplate_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MobTemplate_wait_long 9
typedef void (*func_nro_MobTemplate_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MobTemplate_wait_long_int 10
typedef void (*func_nro_MobTemplate_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_MobTemplate(jobject object, jint mark, jint depth);
void clinit_nro_MobTemplate(jcontext ctx);
void init_nro_MobTemplate(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
