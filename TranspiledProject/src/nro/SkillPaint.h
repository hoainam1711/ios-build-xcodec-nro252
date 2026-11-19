#ifndef HEADER_nro_SkillPaint
#define HEADER_nro_SkillPaint

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_SkillPaint {
	java_lang_Object parent;
	jint F_id;
	jint F_effectHappenOnMob;
	jref F_skillStand;
	jref F_skillfly;
} nro_SkillPaint;

extern Class class_nro_SkillPaint;


#define VTABLE_nro_SkillPaint_hashCode_R_int 0
typedef jint (*func_nro_SkillPaint_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_SkillPaint_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SkillPaint_clone_R_java_lang_Object 2
typedef jobject (*func_nro_SkillPaint_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_SkillPaint_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_toString_R_java_lang_String 4
typedef jobject (*func_nro_SkillPaint_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_finalize 5
typedef void (*func_nro_SkillPaint_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_notify 6
typedef void (*func_nro_SkillPaint_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_notifyAll 7
typedef void (*func_nro_SkillPaint_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_wait 8
typedef void (*func_nro_SkillPaint_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillPaint_wait_long 9
typedef void (*func_nro_SkillPaint_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_SkillPaint_wait_long_int 10
typedef void (*func_nro_SkillPaint_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_SkillPaint(jobject object, jint mark, jint depth);
void clinit_nro_SkillPaint(jcontext ctx);
void init_nro_SkillPaint(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
