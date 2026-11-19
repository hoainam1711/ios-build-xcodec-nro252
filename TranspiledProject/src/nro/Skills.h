#ifndef HEADER_nro_Skills
#define HEADER_nro_Skills

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Skills {
	java_lang_Object parent;
} nro_Skills;

extern Class class_nro_Skills;

extern jobject SF_nro_Skills_skills;

#define VTABLE_nro_Skills_hashCode_R_int 0
typedef jint (*func_nro_Skills_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Skills_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Skills_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Skills_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Skills_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_toString_R_java_lang_String 4
typedef jobject (*func_nro_Skills_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_finalize 5
typedef void (*func_nro_Skills_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_notify 6
typedef void (*func_nro_Skills_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_notifyAll 7
typedef void (*func_nro_Skills_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_wait 8
typedef void (*func_nro_Skills_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Skills_wait_long 9
typedef void (*func_nro_Skills_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Skills_wait_long_int 10
typedef void (*func_nro_Skills_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Skills(jobject object, jint mark, jint depth);
void clinit_nro_Skills(jcontext ctx);
void init_nro_Skills(jcontext ctx, jobject self);
void SM_nro_Skills_add_nro_Skill(jcontext ctx, jobject param0);
jobject SM_nro_Skills_get_short_R_nro_Skill(jcontext ctx, jshort param0);

#ifdef __cplusplus
}
#endif

#endif
