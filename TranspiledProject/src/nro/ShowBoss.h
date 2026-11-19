#ifndef HEADER_nro_ShowBoss
#define HEADER_nro_ShowBoss

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ShowBoss {
	java_lang_Object parent;
} nro_ShowBoss;

extern Class class_nro_ShowBoss;

extern jobject SF_nro_ShowBoss_instance;
extern jbool SF_nro_ShowBoss_isShowBoss;
extern jbool SF_nro_ShowBoss_isNotifKillBoss;
extern jbool SF_nro_ShowBoss_isShowBossInMap;
extern jbool SF_nro_ShowBoss_isLineToBoss;
extern jbool SF_nro_ShowBoss_isAutoFocusBoss;
extern jbool SF_nro_ShowBoss_isRMSLoaded;
extern jobject SF_nro_ShowBoss_activeBossNotif;
extern jobject SF_nro_ShowBoss_killedBossNotif;
extern jobject SF_nro_ShowBoss_bossesInZone;
extern jobject SF_nro_ShowBoss_bossRects;
extern jobject SF_nro_ShowBoss_notifRects;

#define VTABLE_nro_ShowBoss_hashCode_R_int 0
typedef jint (*func_nro_ShowBoss_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ShowBoss_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ShowBoss_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ShowBoss_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ShowBoss_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_toString_R_java_lang_String 4
typedef jobject (*func_nro_ShowBoss_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_finalize 5
typedef void (*func_nro_ShowBoss_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_notify 6
typedef void (*func_nro_ShowBoss_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_notifyAll 7
typedef void (*func_nro_ShowBoss_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_wait 8
typedef void (*func_nro_ShowBoss_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ShowBoss_wait_long 9
typedef void (*func_nro_ShowBoss_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ShowBoss_wait_long_int 10
typedef void (*func_nro_ShowBoss_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ShowBoss_perform_int_java_lang_Object 11
typedef void (*func_nro_ShowBoss_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_nro_ShowBoss(jobject object, jint mark, jint depth);
void clinit_nro_ShowBoss(jcontext ctx);
void init_nro_ShowBoss(jcontext ctx, jobject self);
jobject SM_nro_ShowBoss_gI_R_nro_ShowBoss(jcontext ctx);
void SM_nro_ShowBoss_loadRMS(jcontext ctx);
void SM_nro_ShowBoss_saveRMS(jcontext ctx);
void SM_nro_ShowBoss_showSBMenu(jcontext ctx);
void M_nro_ShowBoss_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jbool SM_nro_ShowBoss_handleChatCommand_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(jcontext ctx, jobject param0);
jbool SM_nro_ShowBoss_isBossChar_nro_Char_R_boolean(jcontext ctx, jobject param0);
void SM_nro_ShowBoss_moveTo_int_int(jcontext ctx, jint param0, jint param1);
void SM_nro_ShowBoss_teleportToBoss_nro_Char(jcontext ctx, jobject param0);
void SM_nro_ShowBoss_onClickActiveBossNotif_nro_ShowBoss$BossNotice(jcontext ctx, jobject param0);
jbool SM_nro_ShowBoss_updateKey_R_boolean(jcontext ctx);
void SM_nro_ShowBoss_addActiveBoss_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_nro_ShowBoss_removeActiveBoss_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_ShowBoss_addKilledBossBanner_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_nro_ShowBoss_handleChatVip_java_lang_String(jcontext ctx, jobject param0);
void SM_nro_ShowBoss_update(jcontext ctx);
void SM_nro_ShowBoss_paintLineToBoss_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_ShowBoss_paint_lib_mGraphics(jcontext ctx, jobject param0);
jbool SM_nro_ShowBoss_isBossInMap_java_lang_String_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
