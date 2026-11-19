#ifndef HEADER_nro_NpcTemplate
#define HEADER_nro_NpcTemplate

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_NpcTemplate {
	java_lang_Object parent;
	jint F_npcTemplateId;
	jref F_name;
	jint F_headId;
	jint F_bodyId;
	jint F_legId;
	jref F_menu;
} nro_NpcTemplate;

extern Class class_nro_NpcTemplate;


#define VTABLE_nro_NpcTemplate_hashCode_R_int 0
typedef jint (*func_nro_NpcTemplate_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_NpcTemplate_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_NpcTemplate_clone_R_java_lang_Object 2
typedef jobject (*func_nro_NpcTemplate_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_NpcTemplate_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_toString_R_java_lang_String 4
typedef jobject (*func_nro_NpcTemplate_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_finalize 5
typedef void (*func_nro_NpcTemplate_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_notify 6
typedef void (*func_nro_NpcTemplate_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_notifyAll 7
typedef void (*func_nro_NpcTemplate_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_wait 8
typedef void (*func_nro_NpcTemplate_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_NpcTemplate_wait_long 9
typedef void (*func_nro_NpcTemplate_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_NpcTemplate_wait_long_int 10
typedef void (*func_nro_NpcTemplate_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_NpcTemplate(jobject object, jint mark, jint depth);
void clinit_nro_NpcTemplate(jcontext ctx);
void init_nro_NpcTemplate(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
