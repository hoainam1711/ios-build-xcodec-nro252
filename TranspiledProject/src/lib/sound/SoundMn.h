#ifndef HEADER_lib_sound_SoundMn
#define HEADER_lib_sound_SoundMn

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_sound_SoundMn {
	java_lang_Object parent;
	jbool F_freePool;
	jint F_poolCount;
} lib_sound_SoundMn;

extern Class class_lib_sound_SoundMn;

extern jbool SF_lib_sound_SoundMn_IsDelAcc;
extern jobject SF_lib_sound_SoundMn_gIz;
extern jfloat SF_lib_sound_SoundMn_volume;
extern jint SF_lib_sound_SoundMn_MAX_VOLUME;
extern jint SF_lib_sound_SoundMn_AIR_SHIP;
extern jint SF_lib_sound_SoundMn_RAIN;
extern jint SF_lib_sound_SoundMn_TAITAONANGLUONG;
extern jint SF_lib_sound_SoundMn_GET_ITEM;
extern jint SF_lib_sound_SoundMn_MOVE;
extern jint SF_lib_sound_SoundMn_LOW_PUNCH;
extern jint SF_lib_sound_SoundMn_LOW_KICK;
extern jint SF_lib_sound_SoundMn_FLY;
extern jint SF_lib_sound_SoundMn_JUMP;
extern jint SF_lib_sound_SoundMn_PANEL_OPEN;
extern jint SF_lib_sound_SoundMn_BUTTON_CLOSE;
extern jint SF_lib_sound_SoundMn_BUTTON_CLICK;
extern jint SF_lib_sound_SoundMn_MEDIUM_PUNCH;
extern jint SF_lib_sound_SoundMn_MEDIUM_KICK;
extern jint SF_lib_sound_SoundMn_PANEL_CLICK;
extern jint SF_lib_sound_SoundMn_EAT_PEAN;
extern jint SF_lib_sound_SoundMn_OPEN_DIALOG;
extern jint SF_lib_sound_SoundMn_NORMAL_KAME;
extern jint SF_lib_sound_SoundMn_NAMEK_KAME;
extern jint SF_lib_sound_SoundMn_XAYDA_KAME;
extern jint SF_lib_sound_SoundMn_EXPLODE_1;
extern jint SF_lib_sound_SoundMn_EXPLODE_2;
extern jint SF_lib_sound_SoundMn_TRAIDAT_KAME;
extern jint SF_lib_sound_SoundMn_HP_UP;
extern jint SF_lib_sound_SoundMn_THAIDUONGHASAN;
extern jint SF_lib_sound_SoundMn_HOISINH;
extern jint SF_lib_sound_SoundMn_GONG;
extern jint SF_lib_sound_SoundMn_KHICHAY;
extern jint SF_lib_sound_SoundMn_BIG_EXPLODE;
extern jint SF_lib_sound_SoundMn_NAMEK_LAZER;
extern jint SF_lib_sound_SoundMn_NAMEK_CHARGE;
extern jint SF_lib_sound_SoundMn_RADAR_CLICK;
extern jint SF_lib_sound_SoundMn_RADAR_ITEM;
extern jint SF_lib_sound_SoundMn_FIREWORK;
extern jint SF_lib_sound_SoundMn_KAMEX10_0;
extern jint SF_lib_sound_SoundMn_KAMEX10_1;
extern jint SF_lib_sound_SoundMn_DESTROY_0;
extern jint SF_lib_sound_SoundMn_DESTROY_1;
extern jint SF_lib_sound_SoundMn_MAFUBA_0;
extern jint SF_lib_sound_SoundMn_MAFUBA_1;
extern jint SF_lib_sound_SoundMn_MAFUBA_2;
extern jint SF_lib_sound_SoundMn_DESTROY_2;
extern jint SF_lib_sound_SoundMn_cout;
extern jobject SF_lib_sound_SoundMn_soundManager;
extern jbool SF_lib_sound_SoundMn_isSound;

#define VTABLE_lib_sound_SoundMn_hashCode_R_int 0
typedef jint (*func_lib_sound_SoundMn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_sound_SoundMn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_sound_SoundMn_clone_R_java_lang_Object 2
typedef jobject (*func_lib_sound_SoundMn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_sound_SoundMn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_toString_R_java_lang_String 4
typedef jobject (*func_lib_sound_SoundMn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_finalize 5
typedef void (*func_lib_sound_SoundMn_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_notify 6
typedef void (*func_lib_sound_SoundMn_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_notifyAll 7
typedef void (*func_lib_sound_SoundMn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_wait 8
typedef void (*func_lib_sound_SoundMn_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_wait_long 9
typedef void (*func_lib_sound_SoundMn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_sound_SoundMn_wait_long_int 10
typedef void (*func_lib_sound_SoundMn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_sound_SoundMn_AuraToolOption 11
typedef void (*func_lib_sound_SoundMn_AuraToolOption)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_CaseAnalog 12
typedef void (*func_lib_sound_SoundMn_CaseAnalog)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_CaseSizeScr 13
typedef void (*func_lib_sound_SoundMn_CaseSizeScr)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_AuraToolOption2 14
typedef void (*func_lib_sound_SoundMn_AuraToolOption2)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_HP_MPup 15
typedef void (*func_lib_sound_SoundMn_HP_MPup)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_charPunch_boolean_float 16
typedef void (*func_lib_sound_SoundMn_charPunch_boolean_float)(jcontext ctx, jobject self, jbool param0, jfloat param1);
#define VTABLE_lib_sound_SoundMn_thaiduonghasan 17
typedef void (*func_lib_sound_SoundMn_thaiduonghasan)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_rain 18
typedef void (*func_lib_sound_SoundMn_rain)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_stopRain 19
typedef void (*func_lib_sound_SoundMn_stopRain)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_gongName 20
typedef void (*func_lib_sound_SoundMn_gongName)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_gong 21
typedef void (*func_lib_sound_SoundMn_gong)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_troi 22
typedef void (*func_lib_sound_SoundMn_troi)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_getItem 23
typedef void (*func_lib_sound_SoundMn_getItem)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_soundToolOption 24
typedef void (*func_lib_sound_SoundMn_soundToolOption)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_update 25
typedef void (*func_lib_sound_SoundMn_update)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_closeSound 26
typedef void (*func_lib_sound_SoundMn_closeSound)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_openSound 27
typedef void (*func_lib_sound_SoundMn_openSound)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_bigeExlode 28
typedef void (*func_lib_sound_SoundMn_bigeExlode)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_explode_1 29
typedef void (*func_lib_sound_SoundMn_explode_1)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_explode_2 30
typedef void (*func_lib_sound_SoundMn_explode_2)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_traidatKame 31
typedef void (*func_lib_sound_SoundMn_traidatKame)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_namekKame 32
typedef void (*func_lib_sound_SoundMn_namekKame)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_nameLazer 33
typedef void (*func_lib_sound_SoundMn_nameLazer)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_xaydaKame 34
typedef void (*func_lib_sound_SoundMn_xaydaKame)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_mobKame_int 35
typedef void (*func_lib_sound_SoundMn_mobKame_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_sound_SoundMn_charRun_float 36
typedef void (*func_lib_sound_SoundMn_charRun_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_lib_sound_SoundMn_monkeyRun_float 37
typedef void (*func_lib_sound_SoundMn_monkeyRun_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_lib_sound_SoundMn_charFall 38
typedef void (*func_lib_sound_SoundMn_charFall)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_charJump 39
typedef void (*func_lib_sound_SoundMn_charJump)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_panelOpen 40
typedef void (*func_lib_sound_SoundMn_panelOpen)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_buttonClose 41
typedef void (*func_lib_sound_SoundMn_buttonClose)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_buttonClick 42
typedef void (*func_lib_sound_SoundMn_buttonClick)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_stopMove 43
typedef void (*func_lib_sound_SoundMn_stopMove)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_charFly 44
typedef void (*func_lib_sound_SoundMn_charFly)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_stopFly 45
typedef void (*func_lib_sound_SoundMn_stopFly)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_openMenu 46
typedef void (*func_lib_sound_SoundMn_openMenu)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_panelClick 47
typedef void (*func_lib_sound_SoundMn_panelClick)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_eatPeans 48
typedef void (*func_lib_sound_SoundMn_eatPeans)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_openDialog 49
typedef void (*func_lib_sound_SoundMn_openDialog)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_hoisinh 50
typedef void (*func_lib_sound_SoundMn_hoisinh)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_taitao 51
typedef void (*func_lib_sound_SoundMn_taitao)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_taitaoPause 52
typedef void (*func_lib_sound_SoundMn_taitaoPause)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_isPlayRain_R_boolean 53
typedef jbool (*func_lib_sound_SoundMn_isPlayRain_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_isPlayAirShip_R_boolean 54
typedef jbool (*func_lib_sound_SoundMn_isPlayAirShip_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_airShip 55
typedef void (*func_lib_sound_SoundMn_airShip)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_pauseAirShip 56
typedef void (*func_lib_sound_SoundMn_pauseAirShip)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_resumeAirShip 57
typedef void (*func_lib_sound_SoundMn_resumeAirShip)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_newKame 58
typedef void (*func_lib_sound_SoundMn_newKame)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_radarClick 59
typedef void (*func_lib_sound_SoundMn_radarClick)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundMn_radarItem 60
typedef void (*func_lib_sound_SoundMn_radarItem)(jcontext ctx, jobject self);

void mark_lib_sound_SoundMn(jobject object, jint mark, jint depth);
void clinit_lib_sound_SoundMn(jcontext ctx);
void init_lib_sound_SoundMn(jcontext ctx, jobject self);
jobject SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(jcontext ctx);
void M_lib_sound_SoundMn_AuraToolOption(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_CaseAnalog(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_CaseSizeScr(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_AuraToolOption2(jcontext ctx, jobject self);
void SM_lib_sound_SoundMn_getSoundOption(jcontext ctx);
void SM_lib_sound_SoundMn_getStrOption(jcontext ctx);
void SM_lib_sound_SoundMn_hide(jcontext ctx);
void SM_lib_sound_SoundMn_init_Array1_int_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_lib_sound_SoundMn_loadSound(jcontext ctx);
void M_lib_sound_SoundMn_HP_MPup(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_charPunch_boolean_float(jcontext ctx, jobject self, jbool param0, jfloat param1);
void M_lib_sound_SoundMn_thaiduonghasan(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_rain(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_stopRain(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_gongName(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_gong(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_troi(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_getItem(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_soundToolOption(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_update(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_closeSound(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_openSound(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_bigeExlode(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_explode_1(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_explode_2(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_traidatKame(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_namekKame(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_nameLazer(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_xaydaKame(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_mobKame_int(jcontext ctx, jobject self, jint param0);
void M_lib_sound_SoundMn_charRun_float(jcontext ctx, jobject self, jfloat param0);
void M_lib_sound_SoundMn_monkeyRun_float(jcontext ctx, jobject self, jfloat param0);
void M_lib_sound_SoundMn_charFall(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_charJump(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_panelOpen(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_buttonClose(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_buttonClick(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_stopMove(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_charFly(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_stopFly(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_openMenu(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_panelClick(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_eatPeans(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_openDialog(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_hoisinh(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_taitao(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_taitaoPause(jcontext ctx, jobject self);
jbool M_lib_sound_SoundMn_isPlayRain_R_boolean(jcontext ctx, jobject self);
jbool M_lib_sound_SoundMn_isPlayAirShip_R_boolean(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_airShip(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_pauseAirShip(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_resumeAirShip(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_newKame(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_radarClick(jcontext ctx, jobject self);
void M_lib_sound_SoundMn_radarItem(jcontext ctx, jobject self);
void SM_lib_sound_SoundMn_playSound_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_lib_sound_SoundMn_stopSound_int(jcontext ctx, jint param0);
void SM_lib_sound_SoundMn_playMus_int_float_boolean(jcontext ctx, jint param0, jfloat param1, jbool param2);
void SM_lib_sound_SoundMn_stopMus_int(jcontext ctx, jint param0);
void SM_lib_sound_SoundMn_dispose(jcontext ctx);
void SM_lib_sound_SoundMn_stopAllSound(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
