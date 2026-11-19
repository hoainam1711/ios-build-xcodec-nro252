#ifndef HEADER_nro_ShowBoss$BossNotice
#define HEADER_nro_ShowBoss$BossNotice

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ShowBoss$BossNotice {
	java_lang_Object parent;
	jref F_nameBoss;
	jref F_mapName;
	jlong F_appearTime;
} nro_ShowBoss$BossNotice;

extern Class class_nro_ShowBoss$BossNotice;


#define VTABLE_nro_ShowBoss$BossNotice_hashCode_R_int 0
typedef jint (*func_nro_ShowBoss$BossNotice_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ShowBoss$BossNotice_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ShowBoss$BossNotice_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ShowBoss$BossNotice_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ShowBoss$BossNotice_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_toString_R_java_lang_String 4
typedef jobject (*func_nro_ShowBoss$BossNotice_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_finalize 5
typedef void (*func_nro_ShowBoss$BossNotice_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_notify 6
typedef void (*func_nro_ShowBoss$BossNotice_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_notifyAll 7
typedef void (*func_nro_ShowBoss$BossNotice_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_wait 8
typedef void (*func_nro_ShowBoss$BossNotice_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_wait_long 9
typedef void (*func_nro_ShowBoss$BossNotice_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ShowBoss$BossNotice_wait_long_int 10
typedef void (*func_nro_ShowBoss$BossNotice_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ShowBoss$BossNotice_getTimeElapsedStr_R_java_lang_String 11
typedef jobject (*func_nro_ShowBoss$BossNotice_getTimeElapsedStr_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$BossNotice_getDisplayText_R_java_lang_String 12
typedef jobject (*func_nro_ShowBoss$BossNotice_getDisplayText_R_java_lang_String)(jcontext ctx, jobject self);

void mark_nro_ShowBoss$BossNotice(jobject object, jint mark, jint depth);
void clinit_nro_ShowBoss$BossNotice(jcontext ctx);
void init_nro_ShowBoss$BossNotice(jcontext ctx, jobject self);
jobject M_nro_ShowBoss$BossNotice_getTimeElapsedStr_R_java_lang_String(jcontext ctx, jobject self);
jobject M_nro_ShowBoss$BossNotice_getDisplayText_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
