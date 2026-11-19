#ifndef HEADER_nro_Service
#define HEADER_nro_Service

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Service {
	java_lang_Object parent;
	jref F_session;
} nro_Service;

extern Class class_nro_Service;

extern jobject SF_nro_Service_instance;
extern jlong SF_nro_Service_curCheckController;
extern jlong SF_nro_Service_curCheckMap;
extern jlong SF_nro_Service_logController;
extern jlong SF_nro_Service_logMap;
extern jbool SF_nro_Service_reciveFromMainSession;

#define VTABLE_nro_Service_hashCode_R_int 0
typedef jint (*func_nro_Service_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Service_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Service_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Service_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_toString_R_java_lang_String 4
typedef jobject (*func_nro_Service_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_finalize 5
typedef void (*func_nro_Service_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_notify 6
typedef void (*func_nro_Service_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_notifyAll 7
typedef void (*func_nro_Service_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_wait 8
typedef void (*func_nro_Service_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_wait_long 9
typedef void (*func_nro_Service_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Service_wait_long_int 10
typedef void (*func_nro_Service_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Service_gotoPlayer_int 11
typedef void (*func_nro_Service_gotoPlayer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String 12
typedef void (*func_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8);
#define VTABLE_nro_Service_combine_byte_nro_MyVector 13
typedef void (*func_nro_Service_combine_byte_nro_MyVector)(jcontext ctx, jobject self, jbyte param0, jobject param1);
#define VTABLE_nro_Service_giaodich_byte_int_byte_int 14
typedef void (*func_nro_Service_giaodich_byte_int_byte_int)(jcontext ctx, jobject self, jbyte param0, jint param1, jbyte param2, jint param3);
#define VTABLE_nro_Service_sendClientInput_Array1_lib_input_TField 15
typedef void (*func_nro_Service_sendClientInput_Array1_lib_input_TField)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_speacialSkill_byte 16
typedef void (*func_nro_Service_speacialSkill_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Service_mobCapcha_char 17
typedef void (*func_nro_Service_mobCapcha_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_nro_Service_friend_byte_int 18
typedef void (*func_nro_Service_friend_byte_int)(jcontext ctx, jobject self, jbyte param0, jint param1);
#define VTABLE_nro_Service_getArchivemnt_int 19
typedef void (*func_nro_Service_getArchivemnt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_getPlayerMenu_int 20
typedef void (*func_nro_Service_getPlayerMenu_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_clanImage_short 21
typedef void (*func_nro_Service_clanImage_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_Service_skill_not_focus_byte 22
typedef void (*func_nro_Service_skill_not_focus_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Service_clanDonate_int 23
typedef void (*func_nro_Service_clanDonate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_clanMessage_int_java_lang_String_int 24
typedef void (*func_nro_Service_clanMessage_int_java_lang_String_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_nro_Service_useItem_byte_byte_byte_short 25
typedef void (*func_nro_Service_useItem_byte_byte_byte_short)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jshort param3);
#define VTABLE_nro_Service_joinClan_int_byte 26
typedef void (*func_nro_Service_joinClan_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_nro_Service_clanMember_int 27
typedef void (*func_nro_Service_clanMember_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_searchClan_java_lang_String 28
typedef void (*func_nro_Service_searchClan_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_clanRemote_int_byte 29
typedef void (*func_nro_Service_clanRemote_int_byte)(jcontext ctx, jobject self, jint param0, jbyte param1);
#define VTABLE_nro_Service_leaveClan 30
typedef void (*func_nro_Service_leaveClan)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_clanInvite_byte_int_int_int 31
typedef void (*func_nro_Service_clanInvite_byte_int_int_int)(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Service_getClan_byte_int_java_lang_String 32
typedef void (*func_nro_Service_getClan_byte_int_java_lang_String)(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2);
#define VTABLE_nro_Service_getItem_byte_byte 33
typedef void (*func_nro_Service_getItem_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_nro_Service_setClientType 34
typedef void (*func_nro_Service_setClientType)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_sendCheckController 35
typedef void (*func_nro_Service_sendCheckController)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_sendCheckMap 36
typedef void (*func_nro_Service_sendCheckMap)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte 37
typedef void (*func_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbyte param3);
#define VTABLE_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String 38
typedef void (*func_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_nro_Service_requestChangeMap 39
typedef void (*func_nro_Service_requestChangeMap)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_magicTree_byte 40
typedef void (*func_nro_Service_magicTree_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Service_requestChangeZone_int 41
typedef void (*func_nro_Service_requestChangeZone_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_checkMMove_int 42
typedef void (*func_nro_Service_checkMMove_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_charMove 43
typedef void (*func_nro_Service_charMove)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_selectCharToPlay_java_lang_String_int_int 44
typedef void (*func_nro_Service_selectCharToPlay_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Service_requestModTemplate_int 45
typedef void (*func_nro_Service_requestModTemplate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_saleItem_byte_byte_short 46
typedef void (*func_nro_Service_saleItem_byte_byte_short)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jshort param2);
#define VTABLE_nro_Service_buyItem_byte_int_int 47
typedef void (*func_nro_Service_buyItem_byte_int_int)(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2);
#define VTABLE_nro_Service_selectSkill_int 48
typedef void (*func_nro_Service_selectSkill_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_getEffData_short 49
typedef void (*func_nro_Service_getEffData_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_Service_openUIZone 50
typedef void (*func_nro_Service_openUIZone)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_confirmMenu_short_byte 51
typedef void (*func_nro_Service_confirmMenu_short_byte)(jcontext ctx, jobject self, jshort param0, jbyte param1);
#define VTABLE_nro_Service_openMenu_int 52
typedef void (*func_nro_Service_openMenu_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_menu_int_int_int 53
typedef void (*func_nro_Service_menu_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_nro_Service_menuId_short 54
typedef void (*func_nro_Service_menuId_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_Service_textBoxId_short_java_lang_String 55
typedef void (*func_nro_Service_textBoxId_short_java_lang_String)(jcontext ctx, jobject self, jshort param0, jobject param1);
#define VTABLE_nro_Service_crystalCollectLock_Array1_nro_Item 56
typedef void (*func_nro_Service_crystalCollectLock_Array1_nro_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_acceptInviteTrade_int 57
typedef void (*func_nro_Service_acceptInviteTrade_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_cancelInviteTrade 58
typedef void (*func_nro_Service_cancelInviteTrade)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int 59
typedef void (*func_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_nro_Service_pickItem_int 60
typedef void (*func_nro_Service_pickItem_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_returnTownFromDead 61
typedef void (*func_nro_Service_returnTownFromDead)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_wakeUpFromDead 62
typedef void (*func_nro_Service_wakeUpFromDead)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_chat_java_lang_String 63
typedef void (*func_nro_Service_chat_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_updateData 64
typedef void (*func_nro_Service_updateData)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_updateMap 65
typedef void (*func_nro_Service_updateMap)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_updateSkill 66
typedef void (*func_nro_Service_updateSkill)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_updateItem 67
typedef void (*func_nro_Service_updateItem)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_clientOk 68
typedef void (*func_nro_Service_clientOk)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_addFriend_java_lang_String 69
typedef void (*func_nro_Service_addFriend_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_addPartyAccept_int 70
typedef void (*func_nro_Service_addPartyAccept_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_addPartyCancel_int 71
typedef void (*func_nro_Service_addPartyCancel_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_player_vs_player_byte_byte_int 72
typedef void (*func_nro_Service_player_vs_player_byte_byte_int)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jint param2);
#define VTABLE_nro_Service_requestMaptemplate_int 73
typedef void (*func_nro_Service_requestMaptemplate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_acceptPleaseParty_java_lang_String 74
typedef void (*func_nro_Service_acceptPleaseParty_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_chatPlayer_java_lang_String_int 75
typedef void (*func_nro_Service_chatPlayer_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_Service_chatGlobal_java_lang_String 76
typedef void (*func_nro_Service_chatGlobal_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_sendCardInfo_java_lang_String_java_lang_String 77
typedef void (*func_nro_Service_sendCardInfo_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_nro_Service_changeName_java_lang_String_int 78
typedef void (*func_nro_Service_changeName_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_Service_requestIcon_int 79
typedef void (*func_nro_Service_requestIcon_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_activeAccProtect_int 80
typedef void (*func_nro_Service_activeAccProtect_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_clearAccProtect_int 81
typedef void (*func_nro_Service_clearAccProtect_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_openLockAccProtect_int 82
typedef void (*func_nro_Service_openLockAccProtect_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_getBgTemplate_short 83
typedef void (*func_nro_Service_getBgTemplate_short)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_nro_Service_getMapOffline 84
typedef void (*func_nro_Service_getMapOffline)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_finishUpdate 85
typedef void (*func_nro_Service_finishUpdate)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_finishUpdate_int 86
typedef void (*func_nro_Service_finishUpdate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_finishLoadMap 87
typedef void (*func_nro_Service_finishLoadMap)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_requestBagImage_int 88
typedef void (*func_nro_Service_requestBagImage_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_login2_java_lang_String 89
typedef void (*func_nro_Service_login2_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_getMagicTree_byte 90
typedef void (*func_nro_Service_getMagicTree_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Service_upPotential_int_int 91
typedef void (*func_nro_Service_upPotential_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_Service_getResource_byte_nro_MyVector 92
typedef void (*func_nro_Service_getResource_byte_nro_MyVector)(jcontext ctx, jobject self, jbyte param0, jobject param1);
#define VTABLE_nro_Service_requestMapSelect_int 93
typedef void (*func_nro_Service_requestMapSelect_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_petInfo 94
typedef void (*func_nro_Service_petInfo)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_sendTop_java_lang_String_byte 95
typedef void (*func_nro_Service_sendTop_java_lang_String_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_nro_Service_sendThachDau_int 96
typedef void (*func_nro_Service_sendThachDau_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_enemy_byte_int 97
typedef void (*func_nro_Service_enemy_byte_int)(jcontext ctx, jobject self, jbyte param0, jint param1);
#define VTABLE_nro_Service_kigui_byte_int_byte_int_int 98
typedef void (*func_nro_Service_kigui_byte_int_byte_int_int)(jcontext ctx, jobject self, jbyte param0, jint param1, jbyte param2, jint param3, jint param4);
#define VTABLE_nro_Service_getFlag_byte_byte 99
typedef void (*func_nro_Service_getFlag_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_nro_Service_setLockInventory_int 100
typedef void (*func_nro_Service_setLockInventory_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_petStatus_byte 101
typedef void (*func_nro_Service_petStatus_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Service_transportNow 102
typedef void (*func_nro_Service_transportNow)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_funsion_byte 103
typedef void (*func_nro_Service_funsion_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Service_imageSource_nro_MyVector 104
typedef void (*func_nro_Service_imageSource_nro_MyVector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_sendServerData_byte_int_Array1_byte 105
typedef void (*func_nro_Service_sendServerData_byte_int_Array1_byte)(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2);
#define VTABLE_nro_Service_changeOnKeyScr_Array1_byte 106
typedef void (*func_nro_Service_changeOnKeyScr_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_requestPean 107
typedef void (*func_nro_Service_requestPean)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_messagePlayerMenu_int 108
typedef void (*func_nro_Service_messagePlayerMenu_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Service_playerMenuAction_int_short 109
typedef void (*func_nro_Service_playerMenuAction_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_nro_Service_getImgByName_java_lang_String 110
typedef void (*func_nro_Service_getImgByName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Service_SendCrackBall_byte_byte 111
typedef void (*func_nro_Service_SendCrackBall_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_nro_Service_SendRada_int_int 112
typedef void (*func_nro_Service_SendRada_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_Service_sendDelAcc 113
typedef void (*func_nro_Service_sendDelAcc)(jcontext ctx, jobject self);
#define VTABLE_nro_Service_new_skill_not_focus_byte_byte_short_short 114
typedef void (*func_nro_Service_new_skill_not_focus_byte_byte_short_short)(jcontext ctx, jobject self, jbyte param0, jbyte param1, jshort param2, jshort param3);

void mark_nro_Service(jobject object, jint mark, jint depth);
void clinit_nro_Service(jcontext ctx);
void init_nro_Service(jcontext ctx, jobject self);
jobject SM_nro_Service_gI_R_nro_Service(jcontext ctx);
void M_nro_Service_gotoPlayer_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_charInfo_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8);
void M_nro_Service_combine_byte_nro_MyVector(jcontext ctx, jobject self, jbyte param0, jobject param1);
void M_nro_Service_giaodich_byte_int_byte_int(jcontext ctx, jobject self, jbyte param0, jint param1, jbyte param2, jint param3);
void M_nro_Service_sendClientInput_Array1_lib_input_TField(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_speacialSkill_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Service_mobCapcha_char(jcontext ctx, jobject self, jchar param0);
void M_nro_Service_friend_byte_int(jcontext ctx, jobject self, jbyte param0, jint param1);
void M_nro_Service_getArchivemnt_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_getPlayerMenu_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_clanImage_short(jcontext ctx, jobject self, jshort param0);
void M_nro_Service_skill_not_focus_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Service_clanDonate_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_clanMessage_int_java_lang_String_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
void M_nro_Service_useItem_byte_byte_byte_short(jcontext ctx, jobject self, jbyte param0, jbyte param1, jbyte param2, jshort param3);
void M_nro_Service_joinClan_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_nro_Service_clanMember_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_searchClan_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_clanRemote_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1);
void M_nro_Service_leaveClan(jcontext ctx, jobject self);
void M_nro_Service_clanInvite_byte_int_int_int(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2, jint param3);
void M_nro_Service_getClan_byte_int_java_lang_String(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2);
void M_nro_Service_getItem_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1);
jobject SM_nro_Service_messageNotLogin_byte_R_nro_Message(jcontext ctx, jbyte param0);
jobject SM_nro_Service_messageNotMap_byte_R_nro_Message(jcontext ctx, jbyte param0);
void M_nro_Service_setClientType(jcontext ctx, jobject self);
void M_nro_Service_sendCheckController(jcontext ctx, jobject self);
void M_nro_Service_sendCheckMap(jcontext ctx, jobject self);
void M_nro_Service_login_java_lang_String_java_lang_String_java_lang_String_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbyte param3);
void M_nro_Service_requestRegister_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_nro_Service_requestChangeMap(jcontext ctx, jobject self);
void M_nro_Service_magicTree_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Service_requestChangeZone_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_checkMMove_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_charMove(jcontext ctx, jobject self);
void M_nro_Service_selectCharToPlay_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_Service_requestModTemplate_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_saleItem_byte_byte_short(jcontext ctx, jobject self, jbyte param0, jbyte param1, jshort param2);
void M_nro_Service_buyItem_byte_int_int(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2);
void M_nro_Service_selectSkill_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_getEffData_short(jcontext ctx, jobject self, jshort param0);
void M_nro_Service_openUIZone(jcontext ctx, jobject self);
void M_nro_Service_confirmMenu_short_byte(jcontext ctx, jobject self, jshort param0, jbyte param1);
void M_nro_Service_openMenu_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_menu_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_nro_Service_menuId_short(jcontext ctx, jobject self, jshort param0);
void M_nro_Service_textBoxId_short_java_lang_String(jcontext ctx, jobject self, jshort param0, jobject param1);
void M_nro_Service_crystalCollectLock_Array1_nro_Item(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_acceptInviteTrade_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_cancelInviteTrade(jcontext ctx, jobject self);
void M_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_nro_Service_pickItem_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_returnTownFromDead(jcontext ctx, jobject self);
void M_nro_Service_wakeUpFromDead(jcontext ctx, jobject self);
void M_nro_Service_chat_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_updateData(jcontext ctx, jobject self);
void M_nro_Service_updateMap(jcontext ctx, jobject self);
void M_nro_Service_updateSkill(jcontext ctx, jobject self);
void M_nro_Service_updateItem(jcontext ctx, jobject self);
void M_nro_Service_clientOk(jcontext ctx, jobject self);
void M_nro_Service_addFriend_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_addPartyAccept_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_addPartyCancel_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_player_vs_player_byte_byte_int(jcontext ctx, jobject self, jbyte param0, jbyte param1, jint param2);
void M_nro_Service_requestMaptemplate_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_acceptPleaseParty_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_chatPlayer_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_nro_Service_chatGlobal_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_sendCardInfo_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_nro_Service_changeName_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_nro_Service_requestIcon_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_activeAccProtect_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_clearAccProtect_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_openLockAccProtect_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_getBgTemplate_short(jcontext ctx, jobject self, jshort param0);
void M_nro_Service_getMapOffline(jcontext ctx, jobject self);
void M_nro_Service_finishUpdate(jcontext ctx, jobject self);
void M_nro_Service_finishUpdate_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_finishLoadMap(jcontext ctx, jobject self);
void M_nro_Service_requestBagImage_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_login2_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_getMagicTree_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Service_upPotential_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_Service_getResource_byte_nro_MyVector(jcontext ctx, jobject self, jbyte param0, jobject param1);
void M_nro_Service_requestMapSelect_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_petInfo(jcontext ctx, jobject self);
void M_nro_Service_sendTop_java_lang_String_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_nro_Service_sendThachDau_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_enemy_byte_int(jcontext ctx, jobject self, jbyte param0, jint param1);
void M_nro_Service_kigui_byte_int_byte_int_int(jcontext ctx, jobject self, jbyte param0, jint param1, jbyte param2, jint param3, jint param4);
void M_nro_Service_getFlag_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1);
void M_nro_Service_setLockInventory_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_petStatus_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Service_transportNow(jcontext ctx, jobject self);
void M_nro_Service_funsion_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Service_imageSource_nro_MyVector(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_sendServerData_byte_int_Array1_byte(jcontext ctx, jobject self, jbyte param0, jint param1, jobject param2);
void M_nro_Service_changeOnKeyScr_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_requestPean(jcontext ctx, jobject self);
void M_nro_Service_messagePlayerMenu_int(jcontext ctx, jobject self, jint param0);
void M_nro_Service_playerMenuAction_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void M_nro_Service_getImgByName_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_nro_Service_SendCrackBall_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1);
void M_nro_Service_SendRada_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_Service_sendDelAcc(jcontext ctx, jobject self);
void M_nro_Service_new_skill_not_focus_byte_byte_short_short(jcontext ctx, jobject self, jbyte param0, jbyte param1, jshort param2, jshort param3);

#ifdef __cplusplus
}
#endif

#endif
