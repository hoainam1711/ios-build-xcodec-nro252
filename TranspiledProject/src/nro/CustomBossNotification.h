#ifndef HEADER_nro_CustomBossNotification
#define HEADER_nro_CustomBossNotification

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_CustomBossNotification {
	java_lang_Object parent;
	jref F_name;
	jref F_map;
	jint F_mapId;
	jlong F_timeStart;
	jlong F_timeEnd;
	jref F_player;
} nro_CustomBossNotification;

extern Class class_nro_CustomBossNotification;


#define VTABLE_nro_CustomBossNotification_hashCode_R_int 0
typedef jint (*func_nro_CustomBossNotification_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_CustomBossNotification_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_CustomBossNotification_clone_R_java_lang_Object 2
typedef jobject (*func_nro_CustomBossNotification_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_CustomBossNotification_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_toString_R_java_lang_String 4
typedef jobject (*func_nro_CustomBossNotification_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_finalize 5
typedef void (*func_nro_CustomBossNotification_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_notify 6
typedef void (*func_nro_CustomBossNotification_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_notifyAll 7
typedef void (*func_nro_CustomBossNotification_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_wait 8
typedef void (*func_nro_CustomBossNotification_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_wait_long 9
typedef void (*func_nro_CustomBossNotification_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_CustomBossNotification_wait_long_int 10
typedef void (*func_nro_CustomBossNotification_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_CustomBossNotification_isAlive_R_boolean 11
typedef jbool (*func_nro_CustomBossNotification_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_getTimeStartBoss_R_java_lang_String 12
typedef jobject (*func_nro_CustomBossNotification_getTimeStartBoss_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_getMapBoss_R_java_lang_String 13
typedef jobject (*func_nro_CustomBossNotification_getMapBoss_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_getTimeBossDie_R_java_lang_String 14
typedef jobject (*func_nro_CustomBossNotification_getTimeBossDie_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_getBossKiller_R_java_lang_String 15
typedef jobject (*func_nro_CustomBossNotification_getBossKiller_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_getRespawnIntervalMs_R_long 16
typedef jlong (*func_nro_CustomBossNotification_getRespawnIntervalMs_R_long)(jcontext ctx, jobject self);
#define VTABLE_nro_CustomBossNotification_getNextSpawnCountdown_R_java_lang_String 17
typedef jobject (*func_nro_CustomBossNotification_getNextSpawnCountdown_R_java_lang_String)(jcontext ctx, jobject self);

void mark_nro_CustomBossNotification(jobject object, jint mark, jint depth);
void clinit_nro_CustomBossNotification(jcontext ctx);
void init_nro_CustomBossNotification(jcontext ctx, jobject self);
jbool M_nro_CustomBossNotification_isAlive_R_boolean(jcontext ctx, jobject self);
jobject SM_nro_CustomBossNotification_formatTimeHHmm_long_R_java_lang_String(jcontext ctx, jlong param0);
jobject M_nro_CustomBossNotification_getTimeStartBoss_R_java_lang_String(jcontext ctx, jobject self);
jobject M_nro_CustomBossNotification_getMapBoss_R_java_lang_String(jcontext ctx, jobject self);
jobject M_nro_CustomBossNotification_getTimeBossDie_R_java_lang_String(jcontext ctx, jobject self);
jobject M_nro_CustomBossNotification_getBossKiller_R_java_lang_String(jcontext ctx, jobject self);
jlong M_nro_CustomBossNotification_getRespawnIntervalMs_R_long(jcontext ctx, jobject self);
jobject M_nro_CustomBossNotification_getNextSpawnCountdown_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
