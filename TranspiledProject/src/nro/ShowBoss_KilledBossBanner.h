#ifndef HEADER_nro_ShowBoss$KilledBossBanner
#define HEADER_nro_ShowBoss$KilledBossBanner

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ShowBoss$KilledBossBanner {
	java_lang_Object parent;
	jref F_nameBoss;
	jref F_playerKill;
	jlong F_startShowTime;
	jint F_currentX;
	jint F_targetX;
	jbool F_isShowing;
	jbool F_isDone;
} nro_ShowBoss$KilledBossBanner;

extern Class class_nro_ShowBoss$KilledBossBanner;

extern jlong SF_nro_ShowBoss$KilledBossBanner_SHOW_DURATION;

#define VTABLE_nro_ShowBoss$KilledBossBanner_hashCode_R_int 0
typedef jint (*func_nro_ShowBoss$KilledBossBanner_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ShowBoss$KilledBossBanner_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ShowBoss$KilledBossBanner_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ShowBoss$KilledBossBanner_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ShowBoss$KilledBossBanner_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_toString_R_java_lang_String 4
typedef jobject (*func_nro_ShowBoss$KilledBossBanner_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_finalize 5
typedef void (*func_nro_ShowBoss$KilledBossBanner_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_notify 6
typedef void (*func_nro_ShowBoss$KilledBossBanner_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_notifyAll 7
typedef void (*func_nro_ShowBoss$KilledBossBanner_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_wait 8
typedef void (*func_nro_ShowBoss$KilledBossBanner_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss$KilledBossBanner_wait_long 9
typedef void (*func_nro_ShowBoss$KilledBossBanner_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ShowBoss$KilledBossBanner_wait_long_int 10
typedef void (*func_nro_ShowBoss$KilledBossBanner_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ShowBoss$KilledBossBanner_update_long 11
typedef void (*func_nro_ShowBoss$KilledBossBanner_update_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int 12
typedef void (*func_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_nro_ShowBoss$KilledBossBanner(jobject object, jint mark, jint depth);
void clinit_nro_ShowBoss$KilledBossBanner(jcontext ctx);
void init_nro_ShowBoss$KilledBossBanner(jcontext ctx, jobject self);
void M_nro_ShowBoss$KilledBossBanner_update_long(jcontext ctx, jobject self, jlong param0);
void M_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
