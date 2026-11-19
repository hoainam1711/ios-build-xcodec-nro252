#ifndef HEADER_nro_SkillTemplate
#define HEADER_nro_SkillTemplate

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_SkillTemplate {
	java_lang_Object parent;
	jbyte F_id;
	jref F_name;
	jint F_maxPoint;
	jint F_manaUseType;
	jint F_type;
	jint F_iconId;
	jref F_description;
	jref F_skills;
	jref F_damInfo;
} nro_SkillTemplate;

extern Class class_nro_SkillTemplate;


#define VTABLE_nro_SkillTemplate_hashCode_R_int 0
typedef jint (*func_nro_SkillTemplate_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_SkillTemplate_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SkillTemplate_clone_R_java_lang_Object 2
typedef jobject (*func_nro_SkillTemplate_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_SkillTemplate_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_toString_R_java_lang_String 4
typedef jobject (*func_nro_SkillTemplate_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_finalize 5
typedef void (*func_nro_SkillTemplate_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_notify 6
typedef void (*func_nro_SkillTemplate_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_notifyAll 7
typedef void (*func_nro_SkillTemplate_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_wait 8
typedef void (*func_nro_SkillTemplate_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_wait_long 9
typedef void (*func_nro_SkillTemplate_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_SkillTemplate_wait_long_int 10
typedef void (*func_nro_SkillTemplate_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_SkillTemplate_isBuffToPlayer_R_boolean 11
typedef jbool (*func_nro_SkillTemplate_isBuffToPlayer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_isUseAlone_R_boolean 12
typedef jbool (*func_nro_SkillTemplate_isUseAlone_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillTemplate_isSkillSpec_R_boolean 13
typedef jbool (*func_nro_SkillTemplate_isSkillSpec_R_boolean)(jcontext ctx, jobject self);

void mark_nro_SkillTemplate(jobject object, jint mark, jint depth);
void clinit_nro_SkillTemplate(jcontext ctx);
void init_nro_SkillTemplate(jcontext ctx, jobject self);
jbool M_nro_SkillTemplate_isBuffToPlayer_R_boolean(jcontext ctx, jobject self);
jbool M_nro_SkillTemplate_isUseAlone_R_boolean(jcontext ctx, jobject self);
jbool M_nro_SkillTemplate_isSkillSpec_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
