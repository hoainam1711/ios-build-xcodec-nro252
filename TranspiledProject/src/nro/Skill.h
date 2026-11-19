#ifndef HEADER_nro_Skill
#define HEADER_nro_Skill

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Skill {
	java_lang_Object parent;
	jref F_template;
	jshort F_skillId;
	jint F_point;
	jlong F_powRequire;
	jint F_coolDown;
	jlong F_lastTimeUseThisSkill;
	jint F_dx;
	jint F_dy;
	jint F_manaUse;
	jbool F_paintCanNotUseSkill;
	jshort F_damage;
	jref F_moreInfo;
	jshort F_price;
} nro_Skill;

extern Class class_nro_Skill;


#define VTABLE_nro_Skill_hashCode_R_int 0
typedef jint (*func_nro_Skill_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Skill_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Skill_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Skill_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Skill_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_toString_R_java_lang_String 4
typedef jobject (*func_nro_Skill_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_finalize 5
typedef void (*func_nro_Skill_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_notify 6
typedef void (*func_nro_Skill_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_notifyAll 7
typedef void (*func_nro_Skill_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_wait 8
typedef void (*func_nro_Skill_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Skill_wait_long 9
typedef void (*func_nro_Skill_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Skill_wait_long_int 10
typedef void (*func_nro_Skill_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Skill_strTimeReplay_R_java_lang_String 11
typedef jobject (*func_nro_Skill_strTimeReplay_R_java_lang_String)(jcontext ctx, jobject self);

void mark_nro_Skill(jobject object, jint mark, jint depth);
void clinit_nro_Skill(jcontext ctx);
void init_nro_Skill(jcontext ctx, jobject self);
jobject M_nro_Skill_strTimeReplay_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
