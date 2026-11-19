#ifndef HEADER_nro_MobCapcha
#define HEADER_nro_MobCapcha

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_MobCapcha {
	java_lang_Object parent;
} nro_MobCapcha;

extern Class class_nro_MobCapcha;

extern jobject SF_nro_MobCapcha_imgMob;
extern jint SF_nro_MobCapcha_cmtoY;
extern jint SF_nro_MobCapcha_cmy;
extern jint SF_nro_MobCapcha_cmdy;
extern jint SF_nro_MobCapcha_cmvy;
extern jint SF_nro_MobCapcha_cmyLim;
extern jint SF_nro_MobCapcha_cmtoX;
extern jint SF_nro_MobCapcha_cmx;
extern jint SF_nro_MobCapcha_cmdx;
extern jbool SF_nro_MobCapcha_explode;
extern jint SF_nro_MobCapcha_delay;
extern jint SF_nro_MobCapcha_tF;
extern jint SF_nro_MobCapcha_f;
extern jint SF_nro_MobCapcha_dir;
extern jbool SF_nro_MobCapcha_isAttack;

#define VTABLE_nro_MobCapcha_hashCode_R_int 0
typedef jint (*func_nro_MobCapcha_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_MobCapcha_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_MobCapcha_clone_R_java_lang_Object 2
typedef jobject (*func_nro_MobCapcha_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_MobCapcha_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_toString_R_java_lang_String 4
typedef jobject (*func_nro_MobCapcha_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_finalize 5
typedef void (*func_nro_MobCapcha_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_notify 6
typedef void (*func_nro_MobCapcha_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_notifyAll 7
typedef void (*func_nro_MobCapcha_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_wait 8
typedef void (*func_nro_MobCapcha_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_MobCapcha_wait_long 9
typedef void (*func_nro_MobCapcha_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_MobCapcha_wait_long_int 10
typedef void (*func_nro_MobCapcha_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_MobCapcha(jobject object, jint mark, jint depth);
void clinit_nro_MobCapcha(jcontext ctx);
void init_nro_MobCapcha(jcontext ctx, jobject self);
void SM_nro_MobCapcha_paint_lib_mGraphics_int_int(jcontext ctx, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
