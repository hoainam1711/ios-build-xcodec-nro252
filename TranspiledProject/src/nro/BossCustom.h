#ifndef HEADER_nro_BossCustom
#define HEADER_nro_BossCustom

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_BossCustom {
	java_lang_Object parent;
	jref F_bosses;
	jref F_bossNames;
	jref F_lastChatVip;
	jlong F_lastChatVipTime;
} nro_BossCustom;

extern Class class_nro_BossCustom;

extern jobject SF_nro_BossCustom_instance;

#define VTABLE_nro_BossCustom_hashCode_R_int 0
typedef jint (*func_nro_BossCustom_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_BossCustom_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BossCustom_clone_R_java_lang_Object 2
typedef jobject (*func_nro_BossCustom_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_BossCustom_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_toString_R_java_lang_String 4
typedef jobject (*func_nro_BossCustom_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_finalize 5
typedef void (*func_nro_BossCustom_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_notify 6
typedef void (*func_nro_BossCustom_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_notifyAll 7
typedef void (*func_nro_BossCustom_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_wait 8
typedef void (*func_nro_BossCustom_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_wait_long 9
typedef void (*func_nro_BossCustom_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_BossCustom_wait_long_int 10
typedef void (*func_nro_BossCustom_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_BossCustom_reset 11
typedef void (*func_nro_BossCustom_reset)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_getBossCount_R_int 12
typedef jint (*func_nro_BossCustom_getBossCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BossCustom_getBossName_int_R_java_lang_String 13
typedef jobject (*func_nro_BossCustom_getBossName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_BossCustom_getBossTurns_int_R_java_util_List 14
typedef jobject (*func_nro_BossCustom_getBossTurns_int_R_java_util_List)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_BossCustom_getBossTurnsByName_java_lang_String_R_java_util_List 15
typedef jobject (*func_nro_BossCustom_getBossTurnsByName_java_lang_String_R_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String 16
typedef jobject (*func_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BossCustom_addBoss_java_lang_String 17
typedef void (*func_nro_BossCustom_addBoss_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BossCustom_getBossXuatHien_java_lang_String 18
typedef void (*func_nro_BossCustom_getBossXuatHien_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BossCustom_getBossInfo_java_lang_String 19
typedef void (*func_nro_BossCustom_getBossInfo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BossCustom_getMapID_java_lang_String_R_int 20
typedef jint (*func_nro_BossCustom_getMapID_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_nro_BossCustom(jobject object, jint mark, jint depth);
void clinit_nro_BossCustom(jcontext ctx);
jobject SM_nro_BossCustom_gI_R_nro_BossCustom(jcontext ctx);
void init_nro_BossCustom(jcontext ctx, jobject self);
void M_nro_BossCustom_reset(jcontext ctx, jobject self);
jint M_nro_BossCustom_getBossCount_R_int(jcontext ctx, jobject self);
jobject M_nro_BossCustom_getBossName_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_nro_BossCustom_getBossTurns_int_R_java_util_List(jcontext ctx, jobject self, jint param0);
jobject M_nro_BossCustom_getBossTurnsByName_java_lang_String_R_java_util_List(jcontext ctx, jobject self, jobject param0);
jobject M_nro_BossCustom_findBossKey_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_BossCustom_addBoss_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_BossCustom_getBossXuatHien_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_BossCustom_getBossInfo_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_nro_BossCustom_getMapID_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
