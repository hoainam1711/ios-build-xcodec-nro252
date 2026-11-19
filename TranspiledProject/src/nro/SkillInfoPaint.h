#ifndef HEADER_nro_SkillInfoPaint
#define HEADER_nro_SkillInfoPaint

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_SkillInfoPaint {
	java_lang_Object parent;
	jint F_status;
	jint F_effS0Id;
	jint F_e0dx;
	jint F_e0dy;
	jint F_effS1Id;
	jint F_e1dx;
	jint F_e1dy;
	jint F_effS2Id;
	jint F_e2dx;
	jint F_e2dy;
	jint F_arrowId;
	jint F_adx;
	jint F_ady;
} nro_SkillInfoPaint;

extern Class class_nro_SkillInfoPaint;


#define VTABLE_nro_SkillInfoPaint_hashCode_R_int 0
typedef jint (*func_nro_SkillInfoPaint_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_SkillInfoPaint_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_SkillInfoPaint_clone_R_java_lang_Object 2
typedef jobject (*func_nro_SkillInfoPaint_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_SkillInfoPaint_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_toString_R_java_lang_String 4
typedef jobject (*func_nro_SkillInfoPaint_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_finalize 5
typedef void (*func_nro_SkillInfoPaint_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_notify 6
typedef void (*func_nro_SkillInfoPaint_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_notifyAll 7
typedef void (*func_nro_SkillInfoPaint_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_wait 8
typedef void (*func_nro_SkillInfoPaint_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_SkillInfoPaint_wait_long 9
typedef void (*func_nro_SkillInfoPaint_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_SkillInfoPaint_wait_long_int 10
typedef void (*func_nro_SkillInfoPaint_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_SkillInfoPaint(jobject object, jint mark, jint depth);
void clinit_nro_SkillInfoPaint(jcontext ctx);
void init_nro_SkillInfoPaint(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
