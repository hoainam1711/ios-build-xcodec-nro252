#include "nro/mResources.h"
#include "nro/mResources.h"
#include "nro/ServerListScreen.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "javax/microedition/lcdui/Image.h"
#include "nro/LoginScr.h"
#include "nro/T3.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_mResources_chooseDefaultsv;
jobject SF_nro_mResources_winLose;
jobject SF_nro_mResources_learnSkill;
jobject SF_nro_mResources_updSkill;
jobject SF_nro_mResources_notiINAPP;
jobject SF_nro_mResources_notiRuby;
jobject SF_nro_mResources_equip;
jobject SF_nro_mResources_unlock;
jobject SF_nro_mResources_radaCard;
jobject SF_nro_mResources_not_enough_money_1;
jobject SF_nro_mResources_functionMaintain1;
jobject SF_nro_mResources_tang;
jobject SF_nro_mResources_kquaVongQuay;
jobject SF_nro_mResources_useGem;
jobject SF_nro_mResources_autoFunction;
jobject SF_nro_mResources_sure_fusion;
jobject SF_nro_mResources_choitiep;
jobject SF_nro_mResources_attack;
jobject SF_nro_mResources_defend;
jobject SF_nro_mResources_follow;
jobject SF_nro_mResources_status;
jobject SF_nro_mResources_gohome;
jobject SF_nro_mResources_pet;
jobject SF_nro_mResources_maychutathoacmatsong;
jobject SF_nro_mResources_cauhinhthap;
jobject SF_nro_mResources_cauhinhcao;
jobject SF_nro_mResources_combineSpell;
jobject SF_nro_mResources_combineFail;
jobject SF_nro_mResources_napngoc;
jobject SF_nro_mResources_combineSuccess;
jobject SF_nro_mResources_turnOnAnalog;
jobject SF_nro_mResources_turnOffAnalog;
jobject SF_nro_mResources_analog;
jobject SF_nro_mResources_REGISTOPROTECT;
jobject SF_nro_mResources_REGISTERING;
jobject SF_nro_mResources_SENTMSG;
jobject SF_nro_mResources_NOSENDMSG;
jobject SF_nro_mResources_sendMsgSuccess;
jobject SF_nro_mResources_cannotSendMsg;
jobject SF_nro_mResources_sendGuessMsgSuccess;
jobject SF_nro_mResources_sendMsgFail;
jobject SF_nro_mResources_ALERT_PRIVATE_PASS_1;
jobject SF_nro_mResources_ALERT_PRIVATE_PASS_2;
jobject SF_nro_mResources_INPUT_PRIVATE_PASS;
jobject SF_nro_mResources_change_account;
jobject SF_nro_mResources_userBlank;
jobject SF_nro_mResources_passwordBlank;
jobject SF_nro_mResources_accTooShort;
jobject SF_nro_mResources_phoneInvalid;
jobject SF_nro_mResources_emailInvalid;
jobject SF_nro_mResources_registerNewAcc;
jobject SF_nro_mResources_selectServer;
jobject SF_nro_mResources_selectServer2;
jobject SF_nro_mResources_forgetPass;
jobject SF_nro_mResources_password;
jobject SF_nro_mResources_msg;
jobject SF_nro_mResources_msgg;
jobject SF_nro_mResources_no_msg;
jobject SF_nro_mResources_cancelAccountProtection;
jobject SF_nro_mResources_plsCheckAcc;
jobject SF_nro_mResources_phone;
jobject SF_nro_mResources_email;
jobject SF_nro_mResources_acc;
jobject SF_nro_mResources_pwd;
jobject SF_nro_mResources_goToWebForPassword;
jobject SF_nro_mResources_dragon_ball;
jobject SF_nro_mResources_character;
jobject SF_nro_mResources_account;
jobject SF_nro_mResources_account_server;
jobject SF_nro_mResources_char_name_blank;
jobject SF_nro_mResources_char_name_short;
jobject SF_nro_mResources_char_name_long;
jobject SF_nro_mResources_changeNameChar;
jobject SF_nro_mResources_char_name;
jobject SF_nro_mResources_login;
jobject SF_nro_mResources_login2;
jobject SF_nro_mResources_register;
jobject SF_nro_mResources_nhatvatpham;
jobject SF_nro_mResources_WAIT;
jobject SF_nro_mResources_PLEASEWAIT;
jobject SF_nro_mResources_CONNECTING;
jobject SF_nro_mResources_downloading_data;
jobject SF_nro_mResources_pls_restart_game_error;
jobject SF_nro_mResources_change_zone;
jobject SF_nro_mResources_select_zone;
jobject SF_nro_mResources_website;
jobject SF_nro_mResources_server;
jobject SF_nro_mResources_MENUME;
jobject SF_nro_mResources_MENUGENDER;
jobject SF_nro_mResources_CHAR_ORDER;
jobject SF_nro_mResources_mainTab1;
jobject SF_nro_mResources_mainTab2;
jobject SF_nro_mResources_petMainTab;
jobject SF_nro_mResources_petMainTab2;
jobject SF_nro_mResources_key_skill_qwerty;
jobject SF_nro_mResources_key_skill;
jobject SF_nro_mResources_SKILL_FAIL;
jobject SF_nro_mResources_HP_EMPTY;
jobject SF_nro_mResources_ZONE_HERE;
jobject SF_nro_mResources_DES_TASK;
jobject SF_nro_mResources_DIES;
jobject SF_nro_mResources_tips;
jobject SF_nro_mResources_TASK_INPUT_CLASS;
jobject SF_nro_mResources_SERI_NUM;
jobject SF_nro_mResources_CARD_CODE;
jobject SF_nro_mResources_pay_card;
jobject SF_nro_mResources_pay_card2;
jobject SF_nro_mResources_serial_blank;
jobject SF_nro_mResources_card_code_blank;
jobject SF_nro_mResources_billion;
jobject SF_nro_mResources_million;
jobject SF_nro_mResources_MENU;
jobject SF_nro_mResources_CLOSE;
jobject SF_nro_mResources_DELETE;
jobject SF_nro_mResources_CONTINUE;
jobject SF_nro_mResources_USE;
jobject SF_nro_mResources_YES;
jobject SF_nro_mResources_NO;
jobject SF_nro_mResources_EXIT;
jobject SF_nro_mResources_CHAT;
jobject SF_nro_mResources_REVENGE;
jobject SF_nro_mResources_OK;
jobject SF_nro_mResources_remember;
jobject SF_nro_mResources_ACCEPT;
jobject SF_nro_mResources_CANCEL;
jobject SF_nro_mResources_SELECT;
jobject SF_nro_mResources_enter;
jobject SF_nro_mResources_open_link;
jobject SF_nro_mResources_NEWCHAR;
jobject SF_nro_mResources_BACK;
jobject SF_nro_mResources_KILL;
jobject SF_nro_mResources_KILLBOSS;
jobject SF_nro_mResources_XU;
jobject SF_nro_mResources_LUONG;
jobject SF_nro_mResources_RUBY;
jobject SF_nro_mResources_PK_NOW;
jobject SF_nro_mResources_CUU_SAT;
jobject SF_nro_mResources_NOT_ENOUGH_MP;
jobject SF_nro_mResources_you_receive;
jobject SF_nro_mResources_LEARN_SKILL;
jobject SF_nro_mResources_rank;
jobject SF_nro_mResources_active_point;
jobject SF_nro_mResources_friend;
jobject SF_nro_mResources_enemy;
jobject SF_nro_mResources_no_friend;
jobject SF_nro_mResources_chat_world;
jobject SF_nro_mResources_change_flag;
jobject SF_nro_mResources_gameInfo;
jobject SF_nro_mResources_quayso;
jobject SF_nro_mResources_option;
jobject SF_nro_mResources_increase_vga;
jobject SF_nro_mResources_decrease_vga;
jobject SF_nro_mResources_serverchat_off;
jobject SF_nro_mResources_x2Screen;
jobject SF_nro_mResources_x1Screen;
jobject SF_nro_mResources_changeSizeScreen;
jobject SF_nro_mResources_aura_on;
jobject SF_nro_mResources_aura_on2;
jobject SF_nro_mResources_chest;
jobject SF_nro_mResources_chestt;
jobject SF_nro_mResources_inventory;
jobject SF_nro_mResources_combine;
jobject SF_nro_mResources_mapp;
jobject SF_nro_mResources_item_give;
jobject SF_nro_mResources_item_receive;
jobject SF_nro_mResources_zonee;
jobject SF_nro_mResources_zone;
jobject SF_nro_mResources_map;
jobject SF_nro_mResources_item_receive2;
jobject SF_nro_mResources_give_upper;
jobject SF_nro_mResources_receive_upper;
jobject SF_nro_mResources_receive_all;
jobject SF_nro_mResources_go_to_quest;
jobject SF_nro_mResources_from_earth;
jobject SF_nro_mResources_from_namec;
jobject SF_nro_mResources_pow_request;
jobject SF_nro_mResources_your_pow;
jobject SF_nro_mResources_used;
jobject SF_nro_mResources_place;
jobject SF_nro_mResources_UPGRADE;
jobject SF_nro_mResources_UPGRADING;
jobject SF_nro_mResources_make_shortcut;
jobject SF_nro_mResources_into_place;
jobject SF_nro_mResources_move_to_chest;
jobject SF_nro_mResources_move_to_chest2;
jobject SF_nro_mResources_saying;
jobject SF_nro_mResources_miss;
jobject SF_nro_mResources_donate;
jobject SF_nro_mResources_receive;
jobject SF_nro_mResources_press_twice;
jobject SF_nro_mResources_can_harvest;
jobject SF_nro_mResources_do_accept_qwerty;
jobject SF_nro_mResources_do_accept;
jobject SF_nro_mResources_plsRestartGame;
jobject SF_nro_mResources_is_online;
jobject SF_nro_mResources_is_offline;
jobject SF_nro_mResources_make_friend;
jobject SF_nro_mResources_chat_player;
jobject SF_nro_mResources_chat_with;
jobject SF_nro_mResources_clan_capsuledonate;
jobject SF_nro_mResources_clan_capsuleself;
jobject SF_nro_mResources_clan_point;
jobject SF_nro_mResources_give_pea;
jobject SF_nro_mResources_receive_pea;
jobject SF_nro_mResources_request_pea;
jobject SF_nro_mResources_time;
jobject SF_nro_mResources_received;
jobject SF_nro_mResources_power;
jobject SF_nro_mResources_join_date;
jobject SF_nro_mResources_clan_leader;
jobject SF_nro_mResources_clan_coleader;
jobject SF_nro_mResources_power_point;
jobject SF_nro_mResources_member;
jobject SF_nro_mResources_memberr;
jobject SF_nro_mResources_chatClan;
jobject SF_nro_mResources_leaveClan;
jobject SF_nro_mResources_createClan;
jobject SF_nro_mResources_findClan;
jobject SF_nro_mResources_khau_hieuu;
jobject SF_nro_mResources_bieu_tuongg;
jobject SF_nro_mResources_request_pea2;
jobject SF_nro_mResources_level;
jobject SF_nro_mResources_clan_birthday;
jobject SF_nro_mResources_clan_list;
jobject SF_nro_mResources_not_join_clan;
jobject SF_nro_mResources_clanEmpty;
jobject SF_nro_mResources_input_clan_name;
jobject SF_nro_mResources_clan_name;
jobject SF_nro_mResources_chat_clan;
jobject SF_nro_mResources_input_clan_name_to_create;
jobject SF_nro_mResources_input_clan_slogan;
jobject SF_nro_mResources_do_u_want_join_clan;
jobject SF_nro_mResources_select_clan_icon;
jobject SF_nro_mResources_request_join_clan;
jobject SF_nro_mResources_view_clan_member;
jobject SF_nro_mResources_create_clan_co_leader;
jobject SF_nro_mResources_create_clan_leader;
jobject SF_nro_mResources_disable_clan_mastership;
jobject SF_nro_mResources_kick_clan_mem;
jobject SF_nro_mResources_clan_name_blank;
jobject SF_nro_mResources_clan_slogan_blank;
jobject SF_nro_mResources_cannot_find_clan;
jobject SF_nro_mResources_ago;
jobject SF_nro_mResources_findingClan;
jobject SF_nro_mResources_trade;
jobject SF_nro_mResources_not_lock_trade;
jobject SF_nro_mResources_not_lock_trade_upper;
jobject SF_nro_mResources_locked_trade;
jobject SF_nro_mResources_locked_trade_upper;
jobject SF_nro_mResources_lock_trade;
jobject SF_nro_mResources_wait_opp_lock_trade;
jobject SF_nro_mResources_press_done;
jobject SF_nro_mResources_done;
jobject SF_nro_mResources_opponent;
jobject SF_nro_mResources_you;
jobject SF_nro_mResources_mlock;
jobject SF_nro_mResources_money_trade;
jobject SF_nro_mResources_GETOUT;
jobject SF_nro_mResources_MOVEOUT;
jobject SF_nro_mResources_MOVEFORPET;
jobject SF_nro_mResources_SALE;
jobject SF_nro_mResources_input_money_to_trade;
jobject SF_nro_mResources_input_money;
jobject SF_nro_mResources_input_money_wrong;
jobject SF_nro_mResources_not_enough_money;
jobject SF_nro_mResources_input_quantity_to_trade;
jobject SF_nro_mResources_input_quantity;
jobject SF_nro_mResources_input_quantity_wrong;
jobject SF_nro_mResources_already_has_item;
jobject SF_nro_mResources_unlock_item_to_trade;
jobject SF_nro_mResources_root;
jobject SF_nro_mResources_need;
jobject SF_nro_mResources_need_upper;
jobject SF_nro_mResources_free;
jobject SF_nro_mResources_select_item;
jobject SF_nro_mResources_random;
jobject SF_nro_mResources_say_hello;
jobject SF_nro_mResources_say_wat_do_u_want_to_buy;
jobject SF_nro_mResources_say_wat_do_u_want_to_buy2;
jobject SF_nro_mResources_do_u_sure_to_trade;
jobject SF_nro_mResources_learn_with;
jobject SF_nro_mResources_buy_with;
jobject SF_nro_mResources_can_not_do_when_die;
jobject SF_nro_mResources_use_for_combine;
jobject SF_nro_mResources_use_for_trade;
jobject SF_nro_mResources_not_enough_luong_world_channel;
jobject SF_nro_mResources_world_channel_5_luong;
jobject SF_nro_mResources_want_to_trade;
jobject SF_nro_mResources_hasJustUpgrade1;
jobject SF_nro_mResources_hasJustUpgrade;
jobject SF_nro_mResources_potential_to_learn;
jobject SF_nro_mResources_potential_point;
jobject SF_nro_mResources_achievement_point;
jobject SF_nro_mResources_increase;
jobject SF_nro_mResources_increase_upper;
jobject SF_nro_mResources_not_enough_potential_point1;
jobject SF_nro_mResources_not_enough_potential_point2;
jobject SF_nro_mResources_use_potential_point_for1;
jobject SF_nro_mResources_use_potential_point_for2;
jobject SF_nro_mResources_for_HP;
jobject SF_nro_mResources_for_KI;
jobject SF_nro_mResources_for_hit_point;
jobject SF_nro_mResources_for_crit;
jobject SF_nro_mResources_can_buy_from_Uron1;
jobject SF_nro_mResources_can_buy_from_Uron2;
jobject SF_nro_mResources_can_buy_from_Uron3;
jobject SF_nro_mResources_HP;
jobject SF_nro_mResources_KI;
jobject SF_nro_mResources_hit_point;
jobject SF_nro_mResources_armor;
jobject SF_nro_mResources_vitality;
jobject SF_nro_mResources_critical;
jobject SF_nro_mResources_critdame;
jobject SF_nro_mResources_giamsatthuong;
jobject SF_nro_mResources_cap_do;
jobject SF_nro_mResources_KI_consume;
jobject SF_nro_mResources_cooldown;
jobject SF_nro_mResources_max_level_reach;
jobject SF_nro_mResources_next_level_require;
jobject SF_nro_mResources_potential;
jobject SF_nro_mResources_not_learn;
jobject SF_nro_mResources_learn_require;
jobject SF_nro_mResources_learn;
jobject SF_nro_mResources_to_gain_20hp;
jobject SF_nro_mResources_to_gain_20mp;
jobject SF_nro_mResources_to_gain_1pow;
jobject SF_nro_mResources_hairStyleName;
jobject SF_nro_mResources_quest_place;
jobject SF_nro_mResources_no_mission;
jobject SF_nro_mResources_reward_mission;
jobject SF_nro_mResources_achievement_mission;
jobject SF_nro_mResources_trangbi;
jobject SF_nro_mResources_wat_do_u_want;
jobject SF_nro_mResources_off;
jobject SF_nro_mResources_on;
jobject SF_nro_mResources_select_map;
jobject SF_nro_mResources_onPlease;
jobject SF_nro_mResources_offPlease;
jbyte SF_nro_mResources_language;
jobject SF_nro_mResources_turnOnSound;
jobject SF_nro_mResources_turnOffSound;
jobject SF_nro_mResources_no_enemy;
jobject SF_nro_mResources_kigui;
jobject SF_nro_mResources_kiguiXu;
jobject SF_nro_mResources_kiguiLuong;
jobject SF_nro_mResources_kiguiXuchat;
jobject SF_nro_mResources_kiguiLuongchat;
jobject SF_nro_mResources_huykigui;
jobject SF_nro_mResources_nhantien;
jobject SF_nro_mResources_dangban;
jobject SF_nro_mResources_daban;
jobject SF_nro_mResources_upTop;
jobject SF_nro_mResources_page;
jobject SF_nro_mResources_getDown;
jobject SF_nro_mResources_getUp;
jobject SF_nro_mResources_notYetSell;
jobject SF_nro_mResources_charger;
jobject SF_nro_mResources_finishBomong;
jobject SF_nro_mResources_note;
jobject SF_nro_mResources_regNote;
jobject SF_nro_mResources_inventory_Pass;
jobject SF_nro_mResources_input_Inventory_Pass;
jobject SF_nro_mResources_input_Inventory_Pass_wrong;
jobject SF_nro_mResources_remain;
jobject SF_nro_mResources_fastQuestion;
jobject SF_nro_mResources_taidulieudechoi;
jobject SF_nro_mResources_huy;
jobject SF_nro_mResources_taidulieu;
jobject SF_nro_mResources_xoadulieu;
jobject SF_nro_mResources_deletaDataNote;
jobject SF_nro_mResources_playNew;
jobject SF_nro_mResources_playAcc;
jobject SF_nro_mResources_vuilongnhapduthongtin;
jobject SF_nro_mResources_nhanngoc;
jobject SF_nro_mResources_fusion;
jobject SF_nro_mResources_fusionForever;
jobject SF_nro_mResources_den;
jobject SF_nro_mResources_potential_to_learn_tuyetKi;

void mark_nro_mResources(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_mResources_chooseDefaultsv)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chooseDefaultsv)->clazz)->markFunction)((jobject) SF_nro_mResources_chooseDefaultsv, mark, depth + 1);
		if (SF_nro_mResources_winLose)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_winLose)->clazz)->markFunction)((jobject) SF_nro_mResources_winLose, mark, depth + 1);
		if (SF_nro_mResources_learnSkill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_learnSkill)->clazz)->markFunction)((jobject) SF_nro_mResources_learnSkill, mark, depth + 1);
		if (SF_nro_mResources_updSkill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_updSkill)->clazz)->markFunction)((jobject) SF_nro_mResources_updSkill, mark, depth + 1);
		if (SF_nro_mResources_notiINAPP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_notiINAPP)->clazz)->markFunction)((jobject) SF_nro_mResources_notiINAPP, mark, depth + 1);
		if (SF_nro_mResources_notiRuby)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_notiRuby)->clazz)->markFunction)((jobject) SF_nro_mResources_notiRuby, mark, depth + 1);
		if (SF_nro_mResources_equip)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_equip)->clazz)->markFunction)((jobject) SF_nro_mResources_equip, mark, depth + 1);
		if (SF_nro_mResources_unlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_unlock)->clazz)->markFunction)((jobject) SF_nro_mResources_unlock, mark, depth + 1);
		if (SF_nro_mResources_radaCard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_radaCard)->clazz)->markFunction)((jobject) SF_nro_mResources_radaCard, mark, depth + 1);
		if (SF_nro_mResources_not_enough_money_1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_enough_money_1)->clazz)->markFunction)((jobject) SF_nro_mResources_not_enough_money_1, mark, depth + 1);
		if (SF_nro_mResources_functionMaintain1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_functionMaintain1)->clazz)->markFunction)((jobject) SF_nro_mResources_functionMaintain1, mark, depth + 1);
		if (SF_nro_mResources_tang)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_tang)->clazz)->markFunction)((jobject) SF_nro_mResources_tang, mark, depth + 1);
		if (SF_nro_mResources_kquaVongQuay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_kquaVongQuay)->clazz)->markFunction)((jobject) SF_nro_mResources_kquaVongQuay, mark, depth + 1);
		if (SF_nro_mResources_useGem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_useGem)->clazz)->markFunction)((jobject) SF_nro_mResources_useGem, mark, depth + 1);
		if (SF_nro_mResources_autoFunction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_autoFunction)->clazz)->markFunction)((jobject) SF_nro_mResources_autoFunction, mark, depth + 1);
		if (SF_nro_mResources_sure_fusion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_sure_fusion)->clazz)->markFunction)((jobject) SF_nro_mResources_sure_fusion, mark, depth + 1);
		if (SF_nro_mResources_choitiep)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_choitiep)->clazz)->markFunction)((jobject) SF_nro_mResources_choitiep, mark, depth + 1);
		if (SF_nro_mResources_attack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_attack)->clazz)->markFunction)((jobject) SF_nro_mResources_attack, mark, depth + 1);
		if (SF_nro_mResources_defend)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_defend)->clazz)->markFunction)((jobject) SF_nro_mResources_defend, mark, depth + 1);
		if (SF_nro_mResources_follow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_follow)->clazz)->markFunction)((jobject) SF_nro_mResources_follow, mark, depth + 1);
		if (SF_nro_mResources_status)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_status)->clazz)->markFunction)((jobject) SF_nro_mResources_status, mark, depth + 1);
		if (SF_nro_mResources_gohome)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_gohome)->clazz)->markFunction)((jobject) SF_nro_mResources_gohome, mark, depth + 1);
		if (SF_nro_mResources_pet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_pet)->clazz)->markFunction)((jobject) SF_nro_mResources_pet, mark, depth + 1);
		if (SF_nro_mResources_maychutathoacmatsong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_maychutathoacmatsong)->clazz)->markFunction)((jobject) SF_nro_mResources_maychutathoacmatsong, mark, depth + 1);
		if (SF_nro_mResources_cauhinhthap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_cauhinhthap)->clazz)->markFunction)((jobject) SF_nro_mResources_cauhinhthap, mark, depth + 1);
		if (SF_nro_mResources_cauhinhcao)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_cauhinhcao)->clazz)->markFunction)((jobject) SF_nro_mResources_cauhinhcao, mark, depth + 1);
		if (SF_nro_mResources_combineSpell)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_combineSpell)->clazz)->markFunction)((jobject) SF_nro_mResources_combineSpell, mark, depth + 1);
		if (SF_nro_mResources_combineFail)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_combineFail)->clazz)->markFunction)((jobject) SF_nro_mResources_combineFail, mark, depth + 1);
		if (SF_nro_mResources_napngoc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_napngoc)->clazz)->markFunction)((jobject) SF_nro_mResources_napngoc, mark, depth + 1);
		if (SF_nro_mResources_combineSuccess)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_combineSuccess)->clazz)->markFunction)((jobject) SF_nro_mResources_combineSuccess, mark, depth + 1);
		if (SF_nro_mResources_turnOnAnalog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_turnOnAnalog)->clazz)->markFunction)((jobject) SF_nro_mResources_turnOnAnalog, mark, depth + 1);
		if (SF_nro_mResources_turnOffAnalog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_turnOffAnalog)->clazz)->markFunction)((jobject) SF_nro_mResources_turnOffAnalog, mark, depth + 1);
		if (SF_nro_mResources_analog)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_analog)->clazz)->markFunction)((jobject) SF_nro_mResources_analog, mark, depth + 1);
		if (SF_nro_mResources_REGISTOPROTECT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_REGISTOPROTECT)->clazz)->markFunction)((jobject) SF_nro_mResources_REGISTOPROTECT, mark, depth + 1);
		if (SF_nro_mResources_REGISTERING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_REGISTERING)->clazz)->markFunction)((jobject) SF_nro_mResources_REGISTERING, mark, depth + 1);
		if (SF_nro_mResources_SENTMSG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_SENTMSG)->clazz)->markFunction)((jobject) SF_nro_mResources_SENTMSG, mark, depth + 1);
		if (SF_nro_mResources_NOSENDMSG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_NOSENDMSG)->clazz)->markFunction)((jobject) SF_nro_mResources_NOSENDMSG, mark, depth + 1);
		if (SF_nro_mResources_sendMsgSuccess)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_sendMsgSuccess)->clazz)->markFunction)((jobject) SF_nro_mResources_sendMsgSuccess, mark, depth + 1);
		if (SF_nro_mResources_cannotSendMsg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_cannotSendMsg)->clazz)->markFunction)((jobject) SF_nro_mResources_cannotSendMsg, mark, depth + 1);
		if (SF_nro_mResources_sendGuessMsgSuccess)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_sendGuessMsgSuccess)->clazz)->markFunction)((jobject) SF_nro_mResources_sendGuessMsgSuccess, mark, depth + 1);
		if (SF_nro_mResources_sendMsgFail)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_sendMsgFail)->clazz)->markFunction)((jobject) SF_nro_mResources_sendMsgFail, mark, depth + 1);
		if (SF_nro_mResources_ALERT_PRIVATE_PASS_1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_ALERT_PRIVATE_PASS_1)->clazz)->markFunction)((jobject) SF_nro_mResources_ALERT_PRIVATE_PASS_1, mark, depth + 1);
		if (SF_nro_mResources_ALERT_PRIVATE_PASS_2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_ALERT_PRIVATE_PASS_2)->clazz)->markFunction)((jobject) SF_nro_mResources_ALERT_PRIVATE_PASS_2, mark, depth + 1);
		if (SF_nro_mResources_INPUT_PRIVATE_PASS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_INPUT_PRIVATE_PASS)->clazz)->markFunction)((jobject) SF_nro_mResources_INPUT_PRIVATE_PASS, mark, depth + 1);
		if (SF_nro_mResources_change_account)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_change_account)->clazz)->markFunction)((jobject) SF_nro_mResources_change_account, mark, depth + 1);
		if (SF_nro_mResources_userBlank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_userBlank)->clazz)->markFunction)((jobject) SF_nro_mResources_userBlank, mark, depth + 1);
		if (SF_nro_mResources_passwordBlank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_passwordBlank)->clazz)->markFunction)((jobject) SF_nro_mResources_passwordBlank, mark, depth + 1);
		if (SF_nro_mResources_accTooShort)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_accTooShort)->clazz)->markFunction)((jobject) SF_nro_mResources_accTooShort, mark, depth + 1);
		if (SF_nro_mResources_phoneInvalid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_phoneInvalid)->clazz)->markFunction)((jobject) SF_nro_mResources_phoneInvalid, mark, depth + 1);
		if (SF_nro_mResources_emailInvalid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_emailInvalid)->clazz)->markFunction)((jobject) SF_nro_mResources_emailInvalid, mark, depth + 1);
		if (SF_nro_mResources_registerNewAcc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_registerNewAcc)->clazz)->markFunction)((jobject) SF_nro_mResources_registerNewAcc, mark, depth + 1);
		if (SF_nro_mResources_selectServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_selectServer)->clazz)->markFunction)((jobject) SF_nro_mResources_selectServer, mark, depth + 1);
		if (SF_nro_mResources_selectServer2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_selectServer2)->clazz)->markFunction)((jobject) SF_nro_mResources_selectServer2, mark, depth + 1);
		if (SF_nro_mResources_forgetPass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_forgetPass)->clazz)->markFunction)((jobject) SF_nro_mResources_forgetPass, mark, depth + 1);
		if (SF_nro_mResources_password)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_password)->clazz)->markFunction)((jobject) SF_nro_mResources_password, mark, depth + 1);
		if (SF_nro_mResources_msg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_msg)->clazz)->markFunction)((jobject) SF_nro_mResources_msg, mark, depth + 1);
		if (SF_nro_mResources_msgg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_msgg)->clazz)->markFunction)((jobject) SF_nro_mResources_msgg, mark, depth + 1);
		if (SF_nro_mResources_no_msg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_no_msg)->clazz)->markFunction)((jobject) SF_nro_mResources_no_msg, mark, depth + 1);
		if (SF_nro_mResources_cancelAccountProtection)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_cancelAccountProtection)->clazz)->markFunction)((jobject) SF_nro_mResources_cancelAccountProtection, mark, depth + 1);
		if (SF_nro_mResources_plsCheckAcc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_plsCheckAcc)->clazz)->markFunction)((jobject) SF_nro_mResources_plsCheckAcc, mark, depth + 1);
		if (SF_nro_mResources_phone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_phone)->clazz)->markFunction)((jobject) SF_nro_mResources_phone, mark, depth + 1);
		if (SF_nro_mResources_email)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_email)->clazz)->markFunction)((jobject) SF_nro_mResources_email, mark, depth + 1);
		if (SF_nro_mResources_acc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_acc)->clazz)->markFunction)((jobject) SF_nro_mResources_acc, mark, depth + 1);
		if (SF_nro_mResources_pwd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_pwd)->clazz)->markFunction)((jobject) SF_nro_mResources_pwd, mark, depth + 1);
		if (SF_nro_mResources_goToWebForPassword)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_goToWebForPassword)->clazz)->markFunction)((jobject) SF_nro_mResources_goToWebForPassword, mark, depth + 1);
		if (SF_nro_mResources_dragon_ball)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_dragon_ball)->clazz)->markFunction)((jobject) SF_nro_mResources_dragon_ball, mark, depth + 1);
		if (SF_nro_mResources_character)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_character)->clazz)->markFunction)((jobject) SF_nro_mResources_character, mark, depth + 1);
		if (SF_nro_mResources_account)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_account)->clazz)->markFunction)((jobject) SF_nro_mResources_account, mark, depth + 1);
		if (SF_nro_mResources_account_server)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_account_server)->clazz)->markFunction)((jobject) SF_nro_mResources_account_server, mark, depth + 1);
		if (SF_nro_mResources_char_name_blank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_char_name_blank)->clazz)->markFunction)((jobject) SF_nro_mResources_char_name_blank, mark, depth + 1);
		if (SF_nro_mResources_char_name_short)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_char_name_short)->clazz)->markFunction)((jobject) SF_nro_mResources_char_name_short, mark, depth + 1);
		if (SF_nro_mResources_char_name_long)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_char_name_long)->clazz)->markFunction)((jobject) SF_nro_mResources_char_name_long, mark, depth + 1);
		if (SF_nro_mResources_changeNameChar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_changeNameChar)->clazz)->markFunction)((jobject) SF_nro_mResources_changeNameChar, mark, depth + 1);
		if (SF_nro_mResources_char_name)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_char_name)->clazz)->markFunction)((jobject) SF_nro_mResources_char_name, mark, depth + 1);
		if (SF_nro_mResources_login)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_login)->clazz)->markFunction)((jobject) SF_nro_mResources_login, mark, depth + 1);
		if (SF_nro_mResources_login2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_login2)->clazz)->markFunction)((jobject) SF_nro_mResources_login2, mark, depth + 1);
		if (SF_nro_mResources_register)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_register)->clazz)->markFunction)((jobject) SF_nro_mResources_register, mark, depth + 1);
		if (SF_nro_mResources_nhatvatpham)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_nhatvatpham)->clazz)->markFunction)((jobject) SF_nro_mResources_nhatvatpham, mark, depth + 1);
		if (SF_nro_mResources_WAIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_WAIT)->clazz)->markFunction)((jobject) SF_nro_mResources_WAIT, mark, depth + 1);
		if (SF_nro_mResources_PLEASEWAIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_PLEASEWAIT)->clazz)->markFunction)((jobject) SF_nro_mResources_PLEASEWAIT, mark, depth + 1);
		if (SF_nro_mResources_CONNECTING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CONNECTING)->clazz)->markFunction)((jobject) SF_nro_mResources_CONNECTING, mark, depth + 1);
		if (SF_nro_mResources_downloading_data)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_downloading_data)->clazz)->markFunction)((jobject) SF_nro_mResources_downloading_data, mark, depth + 1);
		if (SF_nro_mResources_pls_restart_game_error)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_pls_restart_game_error)->clazz)->markFunction)((jobject) SF_nro_mResources_pls_restart_game_error, mark, depth + 1);
		if (SF_nro_mResources_change_zone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_change_zone)->clazz)->markFunction)((jobject) SF_nro_mResources_change_zone, mark, depth + 1);
		if (SF_nro_mResources_select_zone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_select_zone)->clazz)->markFunction)((jobject) SF_nro_mResources_select_zone, mark, depth + 1);
		if (SF_nro_mResources_website)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_website)->clazz)->markFunction)((jobject) SF_nro_mResources_website, mark, depth + 1);
		if (SF_nro_mResources_server)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_server)->clazz)->markFunction)((jobject) SF_nro_mResources_server, mark, depth + 1);
		if (SF_nro_mResources_MENUME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_MENUME)->clazz)->markFunction)((jobject) SF_nro_mResources_MENUME, mark, depth + 1);
		if (SF_nro_mResources_MENUGENDER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_MENUGENDER)->clazz)->markFunction)((jobject) SF_nro_mResources_MENUGENDER, mark, depth + 1);
		if (SF_nro_mResources_CHAR_ORDER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CHAR_ORDER)->clazz)->markFunction)((jobject) SF_nro_mResources_CHAR_ORDER, mark, depth + 1);
		if (SF_nro_mResources_mainTab1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_mainTab1)->clazz)->markFunction)((jobject) SF_nro_mResources_mainTab1, mark, depth + 1);
		if (SF_nro_mResources_mainTab2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_mainTab2)->clazz)->markFunction)((jobject) SF_nro_mResources_mainTab2, mark, depth + 1);
		if (SF_nro_mResources_petMainTab)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_petMainTab)->clazz)->markFunction)((jobject) SF_nro_mResources_petMainTab, mark, depth + 1);
		if (SF_nro_mResources_petMainTab2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_petMainTab2)->clazz)->markFunction)((jobject) SF_nro_mResources_petMainTab2, mark, depth + 1);
		if (SF_nro_mResources_key_skill_qwerty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_key_skill_qwerty)->clazz)->markFunction)((jobject) SF_nro_mResources_key_skill_qwerty, mark, depth + 1);
		if (SF_nro_mResources_key_skill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_key_skill)->clazz)->markFunction)((jobject) SF_nro_mResources_key_skill, mark, depth + 1);
		if (SF_nro_mResources_SKILL_FAIL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_SKILL_FAIL)->clazz)->markFunction)((jobject) SF_nro_mResources_SKILL_FAIL, mark, depth + 1);
		if (SF_nro_mResources_HP_EMPTY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_HP_EMPTY)->clazz)->markFunction)((jobject) SF_nro_mResources_HP_EMPTY, mark, depth + 1);
		if (SF_nro_mResources_ZONE_HERE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_ZONE_HERE)->clazz)->markFunction)((jobject) SF_nro_mResources_ZONE_HERE, mark, depth + 1);
		if (SF_nro_mResources_DES_TASK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_DES_TASK)->clazz)->markFunction)((jobject) SF_nro_mResources_DES_TASK, mark, depth + 1);
		if (SF_nro_mResources_DIES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_DIES)->clazz)->markFunction)((jobject) SF_nro_mResources_DIES, mark, depth + 1);
		if (SF_nro_mResources_tips)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_tips)->clazz)->markFunction)((jobject) SF_nro_mResources_tips, mark, depth + 1);
		if (SF_nro_mResources_TASK_INPUT_CLASS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_TASK_INPUT_CLASS)->clazz)->markFunction)((jobject) SF_nro_mResources_TASK_INPUT_CLASS, mark, depth + 1);
		if (SF_nro_mResources_SERI_NUM)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_SERI_NUM)->clazz)->markFunction)((jobject) SF_nro_mResources_SERI_NUM, mark, depth + 1);
		if (SF_nro_mResources_CARD_CODE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CARD_CODE)->clazz)->markFunction)((jobject) SF_nro_mResources_CARD_CODE, mark, depth + 1);
		if (SF_nro_mResources_pay_card)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_pay_card)->clazz)->markFunction)((jobject) SF_nro_mResources_pay_card, mark, depth + 1);
		if (SF_nro_mResources_pay_card2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_pay_card2)->clazz)->markFunction)((jobject) SF_nro_mResources_pay_card2, mark, depth + 1);
		if (SF_nro_mResources_serial_blank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_serial_blank)->clazz)->markFunction)((jobject) SF_nro_mResources_serial_blank, mark, depth + 1);
		if (SF_nro_mResources_card_code_blank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_card_code_blank)->clazz)->markFunction)((jobject) SF_nro_mResources_card_code_blank, mark, depth + 1);
		if (SF_nro_mResources_billion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_billion)->clazz)->markFunction)((jobject) SF_nro_mResources_billion, mark, depth + 1);
		if (SF_nro_mResources_million)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_million)->clazz)->markFunction)((jobject) SF_nro_mResources_million, mark, depth + 1);
		if (SF_nro_mResources_MENU)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_MENU)->clazz)->markFunction)((jobject) SF_nro_mResources_MENU, mark, depth + 1);
		if (SF_nro_mResources_CLOSE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CLOSE)->clazz)->markFunction)((jobject) SF_nro_mResources_CLOSE, mark, depth + 1);
		if (SF_nro_mResources_DELETE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_DELETE)->clazz)->markFunction)((jobject) SF_nro_mResources_DELETE, mark, depth + 1);
		if (SF_nro_mResources_CONTINUE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CONTINUE)->clazz)->markFunction)((jobject) SF_nro_mResources_CONTINUE, mark, depth + 1);
		if (SF_nro_mResources_USE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_USE)->clazz)->markFunction)((jobject) SF_nro_mResources_USE, mark, depth + 1);
		if (SF_nro_mResources_YES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_YES)->clazz)->markFunction)((jobject) SF_nro_mResources_YES, mark, depth + 1);
		if (SF_nro_mResources_NO)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_NO)->clazz)->markFunction)((jobject) SF_nro_mResources_NO, mark, depth + 1);
		if (SF_nro_mResources_EXIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_EXIT)->clazz)->markFunction)((jobject) SF_nro_mResources_EXIT, mark, depth + 1);
		if (SF_nro_mResources_CHAT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CHAT)->clazz)->markFunction)((jobject) SF_nro_mResources_CHAT, mark, depth + 1);
		if (SF_nro_mResources_REVENGE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_REVENGE)->clazz)->markFunction)((jobject) SF_nro_mResources_REVENGE, mark, depth + 1);
		if (SF_nro_mResources_OK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_OK)->clazz)->markFunction)((jobject) SF_nro_mResources_OK, mark, depth + 1);
		if (SF_nro_mResources_remember)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_remember)->clazz)->markFunction)((jobject) SF_nro_mResources_remember, mark, depth + 1);
		if (SF_nro_mResources_ACCEPT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_ACCEPT)->clazz)->markFunction)((jobject) SF_nro_mResources_ACCEPT, mark, depth + 1);
		if (SF_nro_mResources_CANCEL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CANCEL)->clazz)->markFunction)((jobject) SF_nro_mResources_CANCEL, mark, depth + 1);
		if (SF_nro_mResources_SELECT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_SELECT)->clazz)->markFunction)((jobject) SF_nro_mResources_SELECT, mark, depth + 1);
		if (SF_nro_mResources_enter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_enter)->clazz)->markFunction)((jobject) SF_nro_mResources_enter, mark, depth + 1);
		if (SF_nro_mResources_open_link)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_open_link)->clazz)->markFunction)((jobject) SF_nro_mResources_open_link, mark, depth + 1);
		if (SF_nro_mResources_NEWCHAR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_NEWCHAR)->clazz)->markFunction)((jobject) SF_nro_mResources_NEWCHAR, mark, depth + 1);
		if (SF_nro_mResources_BACK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_BACK)->clazz)->markFunction)((jobject) SF_nro_mResources_BACK, mark, depth + 1);
		if (SF_nro_mResources_KILL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_KILL)->clazz)->markFunction)((jobject) SF_nro_mResources_KILL, mark, depth + 1);
		if (SF_nro_mResources_KILLBOSS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_KILLBOSS)->clazz)->markFunction)((jobject) SF_nro_mResources_KILLBOSS, mark, depth + 1);
		if (SF_nro_mResources_XU)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_XU)->clazz)->markFunction)((jobject) SF_nro_mResources_XU, mark, depth + 1);
		if (SF_nro_mResources_LUONG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_LUONG)->clazz)->markFunction)((jobject) SF_nro_mResources_LUONG, mark, depth + 1);
		if (SF_nro_mResources_RUBY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_RUBY)->clazz)->markFunction)((jobject) SF_nro_mResources_RUBY, mark, depth + 1);
		if (SF_nro_mResources_PK_NOW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_PK_NOW)->clazz)->markFunction)((jobject) SF_nro_mResources_PK_NOW, mark, depth + 1);
		if (SF_nro_mResources_CUU_SAT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_CUU_SAT)->clazz)->markFunction)((jobject) SF_nro_mResources_CUU_SAT, mark, depth + 1);
		if (SF_nro_mResources_NOT_ENOUGH_MP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_NOT_ENOUGH_MP)->clazz)->markFunction)((jobject) SF_nro_mResources_NOT_ENOUGH_MP, mark, depth + 1);
		if (SF_nro_mResources_you_receive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_you_receive)->clazz)->markFunction)((jobject) SF_nro_mResources_you_receive, mark, depth + 1);
		if (SF_nro_mResources_LEARN_SKILL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_LEARN_SKILL)->clazz)->markFunction)((jobject) SF_nro_mResources_LEARN_SKILL, mark, depth + 1);
		if (SF_nro_mResources_rank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_rank)->clazz)->markFunction)((jobject) SF_nro_mResources_rank, mark, depth + 1);
		if (SF_nro_mResources_active_point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_active_point)->clazz)->markFunction)((jobject) SF_nro_mResources_active_point, mark, depth + 1);
		if (SF_nro_mResources_friend)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_friend)->clazz)->markFunction)((jobject) SF_nro_mResources_friend, mark, depth + 1);
		if (SF_nro_mResources_enemy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_enemy)->clazz)->markFunction)((jobject) SF_nro_mResources_enemy, mark, depth + 1);
		if (SF_nro_mResources_no_friend)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_no_friend)->clazz)->markFunction)((jobject) SF_nro_mResources_no_friend, mark, depth + 1);
		if (SF_nro_mResources_chat_world)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chat_world)->clazz)->markFunction)((jobject) SF_nro_mResources_chat_world, mark, depth + 1);
		if (SF_nro_mResources_change_flag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_change_flag)->clazz)->markFunction)((jobject) SF_nro_mResources_change_flag, mark, depth + 1);
		if (SF_nro_mResources_gameInfo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_gameInfo)->clazz)->markFunction)((jobject) SF_nro_mResources_gameInfo, mark, depth + 1);
		if (SF_nro_mResources_quayso)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_quayso)->clazz)->markFunction)((jobject) SF_nro_mResources_quayso, mark, depth + 1);
		if (SF_nro_mResources_option)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_option)->clazz)->markFunction)((jobject) SF_nro_mResources_option, mark, depth + 1);
		if (SF_nro_mResources_increase_vga)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_increase_vga)->clazz)->markFunction)((jobject) SF_nro_mResources_increase_vga, mark, depth + 1);
		if (SF_nro_mResources_decrease_vga)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_decrease_vga)->clazz)->markFunction)((jobject) SF_nro_mResources_decrease_vga, mark, depth + 1);
		if (SF_nro_mResources_serverchat_off)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_serverchat_off)->clazz)->markFunction)((jobject) SF_nro_mResources_serverchat_off, mark, depth + 1);
		if (SF_nro_mResources_x2Screen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_x2Screen)->clazz)->markFunction)((jobject) SF_nro_mResources_x2Screen, mark, depth + 1);
		if (SF_nro_mResources_x1Screen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_x1Screen)->clazz)->markFunction)((jobject) SF_nro_mResources_x1Screen, mark, depth + 1);
		if (SF_nro_mResources_changeSizeScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_changeSizeScreen)->clazz)->markFunction)((jobject) SF_nro_mResources_changeSizeScreen, mark, depth + 1);
		if (SF_nro_mResources_aura_on)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_aura_on)->clazz)->markFunction)((jobject) SF_nro_mResources_aura_on, mark, depth + 1);
		if (SF_nro_mResources_aura_on2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_aura_on2)->clazz)->markFunction)((jobject) SF_nro_mResources_aura_on2, mark, depth + 1);
		if (SF_nro_mResources_chest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chest)->clazz)->markFunction)((jobject) SF_nro_mResources_chest, mark, depth + 1);
		if (SF_nro_mResources_chestt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chestt)->clazz)->markFunction)((jobject) SF_nro_mResources_chestt, mark, depth + 1);
		if (SF_nro_mResources_inventory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_inventory)->clazz)->markFunction)((jobject) SF_nro_mResources_inventory, mark, depth + 1);
		if (SF_nro_mResources_combine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_combine)->clazz)->markFunction)((jobject) SF_nro_mResources_combine, mark, depth + 1);
		if (SF_nro_mResources_mapp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_mapp)->clazz)->markFunction)((jobject) SF_nro_mResources_mapp, mark, depth + 1);
		if (SF_nro_mResources_item_give)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_item_give)->clazz)->markFunction)((jobject) SF_nro_mResources_item_give, mark, depth + 1);
		if (SF_nro_mResources_item_receive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_item_receive)->clazz)->markFunction)((jobject) SF_nro_mResources_item_receive, mark, depth + 1);
		if (SF_nro_mResources_zonee)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_zonee)->clazz)->markFunction)((jobject) SF_nro_mResources_zonee, mark, depth + 1);
		if (SF_nro_mResources_zone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_zone)->clazz)->markFunction)((jobject) SF_nro_mResources_zone, mark, depth + 1);
		if (SF_nro_mResources_map)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_map)->clazz)->markFunction)((jobject) SF_nro_mResources_map, mark, depth + 1);
		if (SF_nro_mResources_item_receive2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_item_receive2)->clazz)->markFunction)((jobject) SF_nro_mResources_item_receive2, mark, depth + 1);
		if (SF_nro_mResources_give_upper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_give_upper)->clazz)->markFunction)((jobject) SF_nro_mResources_give_upper, mark, depth + 1);
		if (SF_nro_mResources_receive_upper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_receive_upper)->clazz)->markFunction)((jobject) SF_nro_mResources_receive_upper, mark, depth + 1);
		if (SF_nro_mResources_receive_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_receive_all)->clazz)->markFunction)((jobject) SF_nro_mResources_receive_all, mark, depth + 1);
		if (SF_nro_mResources_go_to_quest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_go_to_quest)->clazz)->markFunction)((jobject) SF_nro_mResources_go_to_quest, mark, depth + 1);
		if (SF_nro_mResources_from_earth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_from_earth)->clazz)->markFunction)((jobject) SF_nro_mResources_from_earth, mark, depth + 1);
		if (SF_nro_mResources_from_namec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_from_namec)->clazz)->markFunction)((jobject) SF_nro_mResources_from_namec, mark, depth + 1);
		if (SF_nro_mResources_pow_request)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_pow_request)->clazz)->markFunction)((jobject) SF_nro_mResources_pow_request, mark, depth + 1);
		if (SF_nro_mResources_your_pow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_your_pow)->clazz)->markFunction)((jobject) SF_nro_mResources_your_pow, mark, depth + 1);
		if (SF_nro_mResources_used)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_used)->clazz)->markFunction)((jobject) SF_nro_mResources_used, mark, depth + 1);
		if (SF_nro_mResources_place)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_place)->clazz)->markFunction)((jobject) SF_nro_mResources_place, mark, depth + 1);
		if (SF_nro_mResources_UPGRADE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_UPGRADE)->clazz)->markFunction)((jobject) SF_nro_mResources_UPGRADE, mark, depth + 1);
		if (SF_nro_mResources_UPGRADING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_UPGRADING)->clazz)->markFunction)((jobject) SF_nro_mResources_UPGRADING, mark, depth + 1);
		if (SF_nro_mResources_make_shortcut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_make_shortcut)->clazz)->markFunction)((jobject) SF_nro_mResources_make_shortcut, mark, depth + 1);
		if (SF_nro_mResources_into_place)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_into_place)->clazz)->markFunction)((jobject) SF_nro_mResources_into_place, mark, depth + 1);
		if (SF_nro_mResources_move_to_chest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_move_to_chest)->clazz)->markFunction)((jobject) SF_nro_mResources_move_to_chest, mark, depth + 1);
		if (SF_nro_mResources_move_to_chest2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_move_to_chest2)->clazz)->markFunction)((jobject) SF_nro_mResources_move_to_chest2, mark, depth + 1);
		if (SF_nro_mResources_saying)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_saying)->clazz)->markFunction)((jobject) SF_nro_mResources_saying, mark, depth + 1);
		if (SF_nro_mResources_miss)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_miss)->clazz)->markFunction)((jobject) SF_nro_mResources_miss, mark, depth + 1);
		if (SF_nro_mResources_donate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_donate)->clazz)->markFunction)((jobject) SF_nro_mResources_donate, mark, depth + 1);
		if (SF_nro_mResources_receive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_receive)->clazz)->markFunction)((jobject) SF_nro_mResources_receive, mark, depth + 1);
		if (SF_nro_mResources_press_twice)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_press_twice)->clazz)->markFunction)((jobject) SF_nro_mResources_press_twice, mark, depth + 1);
		if (SF_nro_mResources_can_harvest)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_can_harvest)->clazz)->markFunction)((jobject) SF_nro_mResources_can_harvest, mark, depth + 1);
		if (SF_nro_mResources_do_accept_qwerty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_do_accept_qwerty)->clazz)->markFunction)((jobject) SF_nro_mResources_do_accept_qwerty, mark, depth + 1);
		if (SF_nro_mResources_do_accept)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_do_accept)->clazz)->markFunction)((jobject) SF_nro_mResources_do_accept, mark, depth + 1);
		if (SF_nro_mResources_plsRestartGame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_plsRestartGame)->clazz)->markFunction)((jobject) SF_nro_mResources_plsRestartGame, mark, depth + 1);
		if (SF_nro_mResources_is_online)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_is_online)->clazz)->markFunction)((jobject) SF_nro_mResources_is_online, mark, depth + 1);
		if (SF_nro_mResources_is_offline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_is_offline)->clazz)->markFunction)((jobject) SF_nro_mResources_is_offline, mark, depth + 1);
		if (SF_nro_mResources_make_friend)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_make_friend)->clazz)->markFunction)((jobject) SF_nro_mResources_make_friend, mark, depth + 1);
		if (SF_nro_mResources_chat_player)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chat_player)->clazz)->markFunction)((jobject) SF_nro_mResources_chat_player, mark, depth + 1);
		if (SF_nro_mResources_chat_with)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chat_with)->clazz)->markFunction)((jobject) SF_nro_mResources_chat_with, mark, depth + 1);
		if (SF_nro_mResources_clan_capsuledonate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_capsuledonate)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_capsuledonate, mark, depth + 1);
		if (SF_nro_mResources_clan_capsuleself)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_capsuleself)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_capsuleself, mark, depth + 1);
		if (SF_nro_mResources_clan_point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_point)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_point, mark, depth + 1);
		if (SF_nro_mResources_give_pea)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_give_pea)->clazz)->markFunction)((jobject) SF_nro_mResources_give_pea, mark, depth + 1);
		if (SF_nro_mResources_receive_pea)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_receive_pea)->clazz)->markFunction)((jobject) SF_nro_mResources_receive_pea, mark, depth + 1);
		if (SF_nro_mResources_request_pea)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_request_pea)->clazz)->markFunction)((jobject) SF_nro_mResources_request_pea, mark, depth + 1);
		if (SF_nro_mResources_time)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_time)->clazz)->markFunction)((jobject) SF_nro_mResources_time, mark, depth + 1);
		if (SF_nro_mResources_received)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_received)->clazz)->markFunction)((jobject) SF_nro_mResources_received, mark, depth + 1);
		if (SF_nro_mResources_power)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_power)->clazz)->markFunction)((jobject) SF_nro_mResources_power, mark, depth + 1);
		if (SF_nro_mResources_join_date)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_join_date)->clazz)->markFunction)((jobject) SF_nro_mResources_join_date, mark, depth + 1);
		if (SF_nro_mResources_clan_leader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_leader)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_leader, mark, depth + 1);
		if (SF_nro_mResources_clan_coleader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_coleader)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_coleader, mark, depth + 1);
		if (SF_nro_mResources_power_point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_power_point)->clazz)->markFunction)((jobject) SF_nro_mResources_power_point, mark, depth + 1);
		if (SF_nro_mResources_member)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_member)->clazz)->markFunction)((jobject) SF_nro_mResources_member, mark, depth + 1);
		if (SF_nro_mResources_memberr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_memberr)->clazz)->markFunction)((jobject) SF_nro_mResources_memberr, mark, depth + 1);
		if (SF_nro_mResources_chatClan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chatClan)->clazz)->markFunction)((jobject) SF_nro_mResources_chatClan, mark, depth + 1);
		if (SF_nro_mResources_leaveClan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_leaveClan)->clazz)->markFunction)((jobject) SF_nro_mResources_leaveClan, mark, depth + 1);
		if (SF_nro_mResources_createClan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_createClan)->clazz)->markFunction)((jobject) SF_nro_mResources_createClan, mark, depth + 1);
		if (SF_nro_mResources_findClan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_findClan)->clazz)->markFunction)((jobject) SF_nro_mResources_findClan, mark, depth + 1);
		if (SF_nro_mResources_khau_hieuu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_khau_hieuu)->clazz)->markFunction)((jobject) SF_nro_mResources_khau_hieuu, mark, depth + 1);
		if (SF_nro_mResources_bieu_tuongg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_bieu_tuongg)->clazz)->markFunction)((jobject) SF_nro_mResources_bieu_tuongg, mark, depth + 1);
		if (SF_nro_mResources_request_pea2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_request_pea2)->clazz)->markFunction)((jobject) SF_nro_mResources_request_pea2, mark, depth + 1);
		if (SF_nro_mResources_level)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_level)->clazz)->markFunction)((jobject) SF_nro_mResources_level, mark, depth + 1);
		if (SF_nro_mResources_clan_birthday)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_birthday)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_birthday, mark, depth + 1);
		if (SF_nro_mResources_clan_list)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_list)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_list, mark, depth + 1);
		if (SF_nro_mResources_not_join_clan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_join_clan)->clazz)->markFunction)((jobject) SF_nro_mResources_not_join_clan, mark, depth + 1);
		if (SF_nro_mResources_clanEmpty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clanEmpty)->clazz)->markFunction)((jobject) SF_nro_mResources_clanEmpty, mark, depth + 1);
		if (SF_nro_mResources_input_clan_name)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_clan_name)->clazz)->markFunction)((jobject) SF_nro_mResources_input_clan_name, mark, depth + 1);
		if (SF_nro_mResources_clan_name)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_name)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_name, mark, depth + 1);
		if (SF_nro_mResources_chat_clan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_chat_clan)->clazz)->markFunction)((jobject) SF_nro_mResources_chat_clan, mark, depth + 1);
		if (SF_nro_mResources_input_clan_name_to_create)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_clan_name_to_create)->clazz)->markFunction)((jobject) SF_nro_mResources_input_clan_name_to_create, mark, depth + 1);
		if (SF_nro_mResources_input_clan_slogan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_clan_slogan)->clazz)->markFunction)((jobject) SF_nro_mResources_input_clan_slogan, mark, depth + 1);
		if (SF_nro_mResources_do_u_want_join_clan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_do_u_want_join_clan)->clazz)->markFunction)((jobject) SF_nro_mResources_do_u_want_join_clan, mark, depth + 1);
		if (SF_nro_mResources_select_clan_icon)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_select_clan_icon)->clazz)->markFunction)((jobject) SF_nro_mResources_select_clan_icon, mark, depth + 1);
		if (SF_nro_mResources_request_join_clan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_request_join_clan)->clazz)->markFunction)((jobject) SF_nro_mResources_request_join_clan, mark, depth + 1);
		if (SF_nro_mResources_view_clan_member)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_view_clan_member)->clazz)->markFunction)((jobject) SF_nro_mResources_view_clan_member, mark, depth + 1);
		if (SF_nro_mResources_create_clan_co_leader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_create_clan_co_leader)->clazz)->markFunction)((jobject) SF_nro_mResources_create_clan_co_leader, mark, depth + 1);
		if (SF_nro_mResources_create_clan_leader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_create_clan_leader)->clazz)->markFunction)((jobject) SF_nro_mResources_create_clan_leader, mark, depth + 1);
		if (SF_nro_mResources_disable_clan_mastership)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_disable_clan_mastership)->clazz)->markFunction)((jobject) SF_nro_mResources_disable_clan_mastership, mark, depth + 1);
		if (SF_nro_mResources_kick_clan_mem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_kick_clan_mem)->clazz)->markFunction)((jobject) SF_nro_mResources_kick_clan_mem, mark, depth + 1);
		if (SF_nro_mResources_clan_name_blank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_name_blank)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_name_blank, mark, depth + 1);
		if (SF_nro_mResources_clan_slogan_blank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_clan_slogan_blank)->clazz)->markFunction)((jobject) SF_nro_mResources_clan_slogan_blank, mark, depth + 1);
		if (SF_nro_mResources_cannot_find_clan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_cannot_find_clan)->clazz)->markFunction)((jobject) SF_nro_mResources_cannot_find_clan, mark, depth + 1);
		if (SF_nro_mResources_ago)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_ago)->clazz)->markFunction)((jobject) SF_nro_mResources_ago, mark, depth + 1);
		if (SF_nro_mResources_findingClan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_findingClan)->clazz)->markFunction)((jobject) SF_nro_mResources_findingClan, mark, depth + 1);
		if (SF_nro_mResources_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_trade, mark, depth + 1);
		if (SF_nro_mResources_not_lock_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_lock_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_not_lock_trade, mark, depth + 1);
		if (SF_nro_mResources_not_lock_trade_upper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_lock_trade_upper)->clazz)->markFunction)((jobject) SF_nro_mResources_not_lock_trade_upper, mark, depth + 1);
		if (SF_nro_mResources_locked_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_locked_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_locked_trade, mark, depth + 1);
		if (SF_nro_mResources_locked_trade_upper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_locked_trade_upper)->clazz)->markFunction)((jobject) SF_nro_mResources_locked_trade_upper, mark, depth + 1);
		if (SF_nro_mResources_lock_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_lock_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_lock_trade, mark, depth + 1);
		if (SF_nro_mResources_wait_opp_lock_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_wait_opp_lock_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_wait_opp_lock_trade, mark, depth + 1);
		if (SF_nro_mResources_press_done)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_press_done)->clazz)->markFunction)((jobject) SF_nro_mResources_press_done, mark, depth + 1);
		if (SF_nro_mResources_done)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_done)->clazz)->markFunction)((jobject) SF_nro_mResources_done, mark, depth + 1);
		if (SF_nro_mResources_opponent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_opponent)->clazz)->markFunction)((jobject) SF_nro_mResources_opponent, mark, depth + 1);
		if (SF_nro_mResources_you)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_you)->clazz)->markFunction)((jobject) SF_nro_mResources_you, mark, depth + 1);
		if (SF_nro_mResources_mlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_mlock)->clazz)->markFunction)((jobject) SF_nro_mResources_mlock, mark, depth + 1);
		if (SF_nro_mResources_money_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_money_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_money_trade, mark, depth + 1);
		if (SF_nro_mResources_GETOUT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_GETOUT)->clazz)->markFunction)((jobject) SF_nro_mResources_GETOUT, mark, depth + 1);
		if (SF_nro_mResources_MOVEOUT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_MOVEOUT)->clazz)->markFunction)((jobject) SF_nro_mResources_MOVEOUT, mark, depth + 1);
		if (SF_nro_mResources_MOVEFORPET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_MOVEFORPET)->clazz)->markFunction)((jobject) SF_nro_mResources_MOVEFORPET, mark, depth + 1);
		if (SF_nro_mResources_SALE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_SALE)->clazz)->markFunction)((jobject) SF_nro_mResources_SALE, mark, depth + 1);
		if (SF_nro_mResources_input_money_to_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_money_to_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_input_money_to_trade, mark, depth + 1);
		if (SF_nro_mResources_input_money)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_money)->clazz)->markFunction)((jobject) SF_nro_mResources_input_money, mark, depth + 1);
		if (SF_nro_mResources_input_money_wrong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_money_wrong)->clazz)->markFunction)((jobject) SF_nro_mResources_input_money_wrong, mark, depth + 1);
		if (SF_nro_mResources_not_enough_money)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_enough_money)->clazz)->markFunction)((jobject) SF_nro_mResources_not_enough_money, mark, depth + 1);
		if (SF_nro_mResources_input_quantity_to_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_quantity_to_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_input_quantity_to_trade, mark, depth + 1);
		if (SF_nro_mResources_input_quantity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_quantity)->clazz)->markFunction)((jobject) SF_nro_mResources_input_quantity, mark, depth + 1);
		if (SF_nro_mResources_input_quantity_wrong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_quantity_wrong)->clazz)->markFunction)((jobject) SF_nro_mResources_input_quantity_wrong, mark, depth + 1);
		if (SF_nro_mResources_already_has_item)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_already_has_item)->clazz)->markFunction)((jobject) SF_nro_mResources_already_has_item, mark, depth + 1);
		if (SF_nro_mResources_unlock_item_to_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_unlock_item_to_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_unlock_item_to_trade, mark, depth + 1);
		if (SF_nro_mResources_root)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_root)->clazz)->markFunction)((jobject) SF_nro_mResources_root, mark, depth + 1);
		if (SF_nro_mResources_need)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_need)->clazz)->markFunction)((jobject) SF_nro_mResources_need, mark, depth + 1);
		if (SF_nro_mResources_need_upper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_need_upper)->clazz)->markFunction)((jobject) SF_nro_mResources_need_upper, mark, depth + 1);
		if (SF_nro_mResources_free)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_free)->clazz)->markFunction)((jobject) SF_nro_mResources_free, mark, depth + 1);
		if (SF_nro_mResources_select_item)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_select_item)->clazz)->markFunction)((jobject) SF_nro_mResources_select_item, mark, depth + 1);
		if (SF_nro_mResources_random)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_random)->clazz)->markFunction)((jobject) SF_nro_mResources_random, mark, depth + 1);
		if (SF_nro_mResources_say_hello)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_say_hello)->clazz)->markFunction)((jobject) SF_nro_mResources_say_hello, mark, depth + 1);
		if (SF_nro_mResources_say_wat_do_u_want_to_buy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_say_wat_do_u_want_to_buy)->clazz)->markFunction)((jobject) SF_nro_mResources_say_wat_do_u_want_to_buy, mark, depth + 1);
		if (SF_nro_mResources_say_wat_do_u_want_to_buy2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_say_wat_do_u_want_to_buy2)->clazz)->markFunction)((jobject) SF_nro_mResources_say_wat_do_u_want_to_buy2, mark, depth + 1);
		if (SF_nro_mResources_do_u_sure_to_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_do_u_sure_to_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_do_u_sure_to_trade, mark, depth + 1);
		if (SF_nro_mResources_learn_with)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_learn_with)->clazz)->markFunction)((jobject) SF_nro_mResources_learn_with, mark, depth + 1);
		if (SF_nro_mResources_buy_with)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_buy_with)->clazz)->markFunction)((jobject) SF_nro_mResources_buy_with, mark, depth + 1);
		if (SF_nro_mResources_can_not_do_when_die)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_can_not_do_when_die)->clazz)->markFunction)((jobject) SF_nro_mResources_can_not_do_when_die, mark, depth + 1);
		if (SF_nro_mResources_use_for_combine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_use_for_combine)->clazz)->markFunction)((jobject) SF_nro_mResources_use_for_combine, mark, depth + 1);
		if (SF_nro_mResources_use_for_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_use_for_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_use_for_trade, mark, depth + 1);
		if (SF_nro_mResources_not_enough_luong_world_channel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_enough_luong_world_channel)->clazz)->markFunction)((jobject) SF_nro_mResources_not_enough_luong_world_channel, mark, depth + 1);
		if (SF_nro_mResources_world_channel_5_luong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_world_channel_5_luong)->clazz)->markFunction)((jobject) SF_nro_mResources_world_channel_5_luong, mark, depth + 1);
		if (SF_nro_mResources_want_to_trade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_want_to_trade)->clazz)->markFunction)((jobject) SF_nro_mResources_want_to_trade, mark, depth + 1);
		if (SF_nro_mResources_hasJustUpgrade1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_hasJustUpgrade1)->clazz)->markFunction)((jobject) SF_nro_mResources_hasJustUpgrade1, mark, depth + 1);
		if (SF_nro_mResources_hasJustUpgrade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_hasJustUpgrade)->clazz)->markFunction)((jobject) SF_nro_mResources_hasJustUpgrade, mark, depth + 1);
		if (SF_nro_mResources_potential_to_learn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_potential_to_learn)->clazz)->markFunction)((jobject) SF_nro_mResources_potential_to_learn, mark, depth + 1);
		if (SF_nro_mResources_potential_point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_potential_point)->clazz)->markFunction)((jobject) SF_nro_mResources_potential_point, mark, depth + 1);
		if (SF_nro_mResources_achievement_point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_achievement_point)->clazz)->markFunction)((jobject) SF_nro_mResources_achievement_point, mark, depth + 1);
		if (SF_nro_mResources_increase)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_increase)->clazz)->markFunction)((jobject) SF_nro_mResources_increase, mark, depth + 1);
		if (SF_nro_mResources_increase_upper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_increase_upper)->clazz)->markFunction)((jobject) SF_nro_mResources_increase_upper, mark, depth + 1);
		if (SF_nro_mResources_not_enough_potential_point1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_enough_potential_point1)->clazz)->markFunction)((jobject) SF_nro_mResources_not_enough_potential_point1, mark, depth + 1);
		if (SF_nro_mResources_not_enough_potential_point2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_enough_potential_point2)->clazz)->markFunction)((jobject) SF_nro_mResources_not_enough_potential_point2, mark, depth + 1);
		if (SF_nro_mResources_use_potential_point_for1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_use_potential_point_for1)->clazz)->markFunction)((jobject) SF_nro_mResources_use_potential_point_for1, mark, depth + 1);
		if (SF_nro_mResources_use_potential_point_for2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_use_potential_point_for2)->clazz)->markFunction)((jobject) SF_nro_mResources_use_potential_point_for2, mark, depth + 1);
		if (SF_nro_mResources_for_HP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_for_HP)->clazz)->markFunction)((jobject) SF_nro_mResources_for_HP, mark, depth + 1);
		if (SF_nro_mResources_for_KI)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_for_KI)->clazz)->markFunction)((jobject) SF_nro_mResources_for_KI, mark, depth + 1);
		if (SF_nro_mResources_for_hit_point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_for_hit_point)->clazz)->markFunction)((jobject) SF_nro_mResources_for_hit_point, mark, depth + 1);
		if (SF_nro_mResources_for_crit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_for_crit)->clazz)->markFunction)((jobject) SF_nro_mResources_for_crit, mark, depth + 1);
		if (SF_nro_mResources_can_buy_from_Uron1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_can_buy_from_Uron1)->clazz)->markFunction)((jobject) SF_nro_mResources_can_buy_from_Uron1, mark, depth + 1);
		if (SF_nro_mResources_can_buy_from_Uron2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_can_buy_from_Uron2)->clazz)->markFunction)((jobject) SF_nro_mResources_can_buy_from_Uron2, mark, depth + 1);
		if (SF_nro_mResources_can_buy_from_Uron3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_can_buy_from_Uron3)->clazz)->markFunction)((jobject) SF_nro_mResources_can_buy_from_Uron3, mark, depth + 1);
		if (SF_nro_mResources_HP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_HP)->clazz)->markFunction)((jobject) SF_nro_mResources_HP, mark, depth + 1);
		if (SF_nro_mResources_KI)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_KI)->clazz)->markFunction)((jobject) SF_nro_mResources_KI, mark, depth + 1);
		if (SF_nro_mResources_hit_point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_hit_point)->clazz)->markFunction)((jobject) SF_nro_mResources_hit_point, mark, depth + 1);
		if (SF_nro_mResources_armor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_armor)->clazz)->markFunction)((jobject) SF_nro_mResources_armor, mark, depth + 1);
		if (SF_nro_mResources_vitality)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_vitality)->clazz)->markFunction)((jobject) SF_nro_mResources_vitality, mark, depth + 1);
		if (SF_nro_mResources_critical)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_critical)->clazz)->markFunction)((jobject) SF_nro_mResources_critical, mark, depth + 1);
		if (SF_nro_mResources_critdame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_critdame)->clazz)->markFunction)((jobject) SF_nro_mResources_critdame, mark, depth + 1);
		if (SF_nro_mResources_giamsatthuong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_giamsatthuong)->clazz)->markFunction)((jobject) SF_nro_mResources_giamsatthuong, mark, depth + 1);
		if (SF_nro_mResources_cap_do)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_cap_do)->clazz)->markFunction)((jobject) SF_nro_mResources_cap_do, mark, depth + 1);
		if (SF_nro_mResources_KI_consume)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_KI_consume)->clazz)->markFunction)((jobject) SF_nro_mResources_KI_consume, mark, depth + 1);
		if (SF_nro_mResources_cooldown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_cooldown)->clazz)->markFunction)((jobject) SF_nro_mResources_cooldown, mark, depth + 1);
		if (SF_nro_mResources_max_level_reach)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_max_level_reach)->clazz)->markFunction)((jobject) SF_nro_mResources_max_level_reach, mark, depth + 1);
		if (SF_nro_mResources_next_level_require)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_next_level_require)->clazz)->markFunction)((jobject) SF_nro_mResources_next_level_require, mark, depth + 1);
		if (SF_nro_mResources_potential)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_potential)->clazz)->markFunction)((jobject) SF_nro_mResources_potential, mark, depth + 1);
		if (SF_nro_mResources_not_learn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_not_learn)->clazz)->markFunction)((jobject) SF_nro_mResources_not_learn, mark, depth + 1);
		if (SF_nro_mResources_learn_require)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_learn_require)->clazz)->markFunction)((jobject) SF_nro_mResources_learn_require, mark, depth + 1);
		if (SF_nro_mResources_learn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_learn)->clazz)->markFunction)((jobject) SF_nro_mResources_learn, mark, depth + 1);
		if (SF_nro_mResources_to_gain_20hp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_to_gain_20hp)->clazz)->markFunction)((jobject) SF_nro_mResources_to_gain_20hp, mark, depth + 1);
		if (SF_nro_mResources_to_gain_20mp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_to_gain_20mp)->clazz)->markFunction)((jobject) SF_nro_mResources_to_gain_20mp, mark, depth + 1);
		if (SF_nro_mResources_to_gain_1pow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_to_gain_1pow)->clazz)->markFunction)((jobject) SF_nro_mResources_to_gain_1pow, mark, depth + 1);
		if (SF_nro_mResources_hairStyleName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_hairStyleName)->clazz)->markFunction)((jobject) SF_nro_mResources_hairStyleName, mark, depth + 1);
		if (SF_nro_mResources_quest_place)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_quest_place)->clazz)->markFunction)((jobject) SF_nro_mResources_quest_place, mark, depth + 1);
		if (SF_nro_mResources_no_mission)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_no_mission)->clazz)->markFunction)((jobject) SF_nro_mResources_no_mission, mark, depth + 1);
		if (SF_nro_mResources_reward_mission)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_reward_mission)->clazz)->markFunction)((jobject) SF_nro_mResources_reward_mission, mark, depth + 1);
		if (SF_nro_mResources_achievement_mission)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_achievement_mission)->clazz)->markFunction)((jobject) SF_nro_mResources_achievement_mission, mark, depth + 1);
		if (SF_nro_mResources_trangbi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_trangbi)->clazz)->markFunction)((jobject) SF_nro_mResources_trangbi, mark, depth + 1);
		if (SF_nro_mResources_wat_do_u_want)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_wat_do_u_want)->clazz)->markFunction)((jobject) SF_nro_mResources_wat_do_u_want, mark, depth + 1);
		if (SF_nro_mResources_off)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_off)->clazz)->markFunction)((jobject) SF_nro_mResources_off, mark, depth + 1);
		if (SF_nro_mResources_on)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_on)->clazz)->markFunction)((jobject) SF_nro_mResources_on, mark, depth + 1);
		if (SF_nro_mResources_select_map)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_select_map)->clazz)->markFunction)((jobject) SF_nro_mResources_select_map, mark, depth + 1);
		if (SF_nro_mResources_onPlease)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_onPlease)->clazz)->markFunction)((jobject) SF_nro_mResources_onPlease, mark, depth + 1);
		if (SF_nro_mResources_offPlease)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_offPlease)->clazz)->markFunction)((jobject) SF_nro_mResources_offPlease, mark, depth + 1);
		if (SF_nro_mResources_turnOnSound)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_turnOnSound)->clazz)->markFunction)((jobject) SF_nro_mResources_turnOnSound, mark, depth + 1);
		if (SF_nro_mResources_turnOffSound)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_turnOffSound)->clazz)->markFunction)((jobject) SF_nro_mResources_turnOffSound, mark, depth + 1);
		if (SF_nro_mResources_no_enemy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_no_enemy)->clazz)->markFunction)((jobject) SF_nro_mResources_no_enemy, mark, depth + 1);
		if (SF_nro_mResources_kigui)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_kigui)->clazz)->markFunction)((jobject) SF_nro_mResources_kigui, mark, depth + 1);
		if (SF_nro_mResources_kiguiXu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_kiguiXu)->clazz)->markFunction)((jobject) SF_nro_mResources_kiguiXu, mark, depth + 1);
		if (SF_nro_mResources_kiguiLuong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_kiguiLuong)->clazz)->markFunction)((jobject) SF_nro_mResources_kiguiLuong, mark, depth + 1);
		if (SF_nro_mResources_kiguiXuchat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_kiguiXuchat)->clazz)->markFunction)((jobject) SF_nro_mResources_kiguiXuchat, mark, depth + 1);
		if (SF_nro_mResources_kiguiLuongchat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_kiguiLuongchat)->clazz)->markFunction)((jobject) SF_nro_mResources_kiguiLuongchat, mark, depth + 1);
		if (SF_nro_mResources_huykigui)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_huykigui)->clazz)->markFunction)((jobject) SF_nro_mResources_huykigui, mark, depth + 1);
		if (SF_nro_mResources_nhantien)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_nhantien)->clazz)->markFunction)((jobject) SF_nro_mResources_nhantien, mark, depth + 1);
		if (SF_nro_mResources_dangban)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_dangban)->clazz)->markFunction)((jobject) SF_nro_mResources_dangban, mark, depth + 1);
		if (SF_nro_mResources_daban)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_daban)->clazz)->markFunction)((jobject) SF_nro_mResources_daban, mark, depth + 1);
		if (SF_nro_mResources_upTop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_upTop)->clazz)->markFunction)((jobject) SF_nro_mResources_upTop, mark, depth + 1);
		if (SF_nro_mResources_page)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_page)->clazz)->markFunction)((jobject) SF_nro_mResources_page, mark, depth + 1);
		if (SF_nro_mResources_getDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_getDown)->clazz)->markFunction)((jobject) SF_nro_mResources_getDown, mark, depth + 1);
		if (SF_nro_mResources_getUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_getUp)->clazz)->markFunction)((jobject) SF_nro_mResources_getUp, mark, depth + 1);
		if (SF_nro_mResources_notYetSell)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_notYetSell)->clazz)->markFunction)((jobject) SF_nro_mResources_notYetSell, mark, depth + 1);
		if (SF_nro_mResources_charger)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_charger)->clazz)->markFunction)((jobject) SF_nro_mResources_charger, mark, depth + 1);
		if (SF_nro_mResources_finishBomong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_finishBomong)->clazz)->markFunction)((jobject) SF_nro_mResources_finishBomong, mark, depth + 1);
		if (SF_nro_mResources_note)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_note)->clazz)->markFunction)((jobject) SF_nro_mResources_note, mark, depth + 1);
		if (SF_nro_mResources_regNote)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_regNote)->clazz)->markFunction)((jobject) SF_nro_mResources_regNote, mark, depth + 1);
		if (SF_nro_mResources_inventory_Pass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_inventory_Pass)->clazz)->markFunction)((jobject) SF_nro_mResources_inventory_Pass, mark, depth + 1);
		if (SF_nro_mResources_input_Inventory_Pass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_Inventory_Pass)->clazz)->markFunction)((jobject) SF_nro_mResources_input_Inventory_Pass, mark, depth + 1);
		if (SF_nro_mResources_input_Inventory_Pass_wrong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_input_Inventory_Pass_wrong)->clazz)->markFunction)((jobject) SF_nro_mResources_input_Inventory_Pass_wrong, mark, depth + 1);
		if (SF_nro_mResources_remain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_remain)->clazz)->markFunction)((jobject) SF_nro_mResources_remain, mark, depth + 1);
		if (SF_nro_mResources_fastQuestion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_fastQuestion)->clazz)->markFunction)((jobject) SF_nro_mResources_fastQuestion, mark, depth + 1);
		if (SF_nro_mResources_taidulieudechoi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_taidulieudechoi)->clazz)->markFunction)((jobject) SF_nro_mResources_taidulieudechoi, mark, depth + 1);
		if (SF_nro_mResources_huy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_huy)->clazz)->markFunction)((jobject) SF_nro_mResources_huy, mark, depth + 1);
		if (SF_nro_mResources_taidulieu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_taidulieu)->clazz)->markFunction)((jobject) SF_nro_mResources_taidulieu, mark, depth + 1);
		if (SF_nro_mResources_xoadulieu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_xoadulieu)->clazz)->markFunction)((jobject) SF_nro_mResources_xoadulieu, mark, depth + 1);
		if (SF_nro_mResources_deletaDataNote)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_deletaDataNote)->clazz)->markFunction)((jobject) SF_nro_mResources_deletaDataNote, mark, depth + 1);
		if (SF_nro_mResources_playNew)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_playNew)->clazz)->markFunction)((jobject) SF_nro_mResources_playNew, mark, depth + 1);
		if (SF_nro_mResources_playAcc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_playAcc)->clazz)->markFunction)((jobject) SF_nro_mResources_playAcc, mark, depth + 1);
		if (SF_nro_mResources_vuilongnhapduthongtin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_vuilongnhapduthongtin)->clazz)->markFunction)((jobject) SF_nro_mResources_vuilongnhapduthongtin, mark, depth + 1);
		if (SF_nro_mResources_nhanngoc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_nhanngoc)->clazz)->markFunction)((jobject) SF_nro_mResources_nhanngoc, mark, depth + 1);
		if (SF_nro_mResources_fusion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_fusion)->clazz)->markFunction)((jobject) SF_nro_mResources_fusion, mark, depth + 1);
		if (SF_nro_mResources_fusionForever)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_fusionForever)->clazz)->markFunction)((jobject) SF_nro_mResources_fusionForever, mark, depth + 1);
		if (SF_nro_mResources_den)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_den)->clazz)->markFunction)((jobject) SF_nro_mResources_den, mark, depth + 1);
		if (SF_nro_mResources_potential_to_learn_tuyetKi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_mResources_potential_to_learn_tuyetKi)->clazz)->markFunction)((jobject) SF_nro_mResources_potential_to_learn_tuyetKi, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_mResources *) object;
}

void init_nro_mResources(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mResources:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_mResources(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_mResources_loadLanguague_byte(jcontext ctx, jbyte param0) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mResources:loadLanguague", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_mResources(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(680);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_language = (frame[0].i);
	LINE_NUMBER(682);
	switch((frame[0].i)) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		default: goto label_5;
	}
	}
label_2:;
	{
	LINE_NUMBER(684);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_l = (((jobject) createStringLiteral(ctx, u8"http://ngocrongonline.com"_j)));
	LINE_NUMBER(685);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/logo1.png"_j))));
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_imgTitle = sp[0].o;
	LINE_NUMBER(686);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chooseDefaultsv = (((jobject) createStringLiteral(ctx, u8"T\u1edbi Whis (H\u00e0nh tinh Bill) \u0111\u1ec3 h\u1ecdc tuy\u1ec7t k\u1ef9"_j)));
	LINE_NUMBER(687);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_winLose = (((jobject) createStringLiteral(ctx, u8"Khi \u0111\u1ea1t t\u1ed1i \u0111a th\u00e0nh th\u1ea1o, h\u00e3y \u0111\u1ebfn Whis (H\u00e0nh tinh Bill) \u0111\u1ec3 n\u00e2ng c\u1ea5p tuy\u1ec7t k\u1ef9"_j)));
	LINE_NUMBER(688);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learnSkill = (((jobject) createStringLiteral(ctx, u8"Th\u00e0nh th\u1ea1o"_j)));
	LINE_NUMBER(689);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_updSkill = (((jobject) createStringLiteral(ctx, u8"X\u00f3a t\u00e0i kho\u1ea3n"_j)));
	LINE_NUMBER(690);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notiINAPP = (((jobject) createStringLiteral(ctx, u8"H\u00f4m nay b\u1ea1n \u0111\u00e3 n\u1ea1p nhi\u1ec1u ng\u1ecdc. Ng\u00e0y mai h\u00e3y n\u1ea1p ti\u1ebfp nh\u00e9!"_j)));
	LINE_NUMBER(692);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notiRuby = (((jobject) createStringLiteral(ctx, u8"Khi b\u00e1n th\u00e0nh c\u00f4ng s\u1ebd nh\u1eadn ng\u1ecdc xanh, b\u1ea1n c\u00f3 mu\u1ed1n ti\u1ebfp t\u1ee5c k\u00ed g\u1eedi?"_j)));
	LINE_NUMBER(693);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_equip = (((jobject) createStringLiteral(ctx, u8"S\u1eed d\u1ee5ng"_j)));
	LINE_NUMBER(694);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_unlock = (((jobject) createStringLiteral(ctx, u8"M\u1edf kh\u00f3a"_j)));
	LINE_NUMBER(695);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_radaCard = (((jobject) createStringLiteral(ctx, u8"S\u1ed5 s\u01b0u t\u1ea7m"_j)));
	LINE_NUMBER(696);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_money_1 = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n kh\u00f4ng \u0111\u1ee7"_j)));
	LINE_NUMBER(697);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_functionMaintain1 = (((jobject) createStringLiteral(ctx, u8"Ch\u1ee9c n\u0103ng t\u1ea1m d\u1eebng \u0111\u1ec3 b\u1ea3o tr\u00ec"_j)));
	LINE_NUMBER(698);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_napngoc = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p Ng\u1ecdc"_j)));
	LINE_NUMBER(699);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhatvatpham = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 ch\u1eafc mu\u1ed1n nh\u1eb7t v\u1eadt ph\u1ea9m n\u00e0y kh\u00f4ng ?"_j)));
	LINE_NUMBER(700);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_tang = (((jobject) createStringLiteral(ctx, u8"t\u1ea7ng"_j)));
	LINE_NUMBER(701);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kquaVongQuay = (((jobject) createStringLiteral(ctx, u8"Con s\u1ed1 may m\u1eafn"_j)));
	LINE_NUMBER(702);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_quayso = (((jobject) createStringLiteral(ctx, u8"Mini game"_j)));
	LINE_NUMBER(703);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_gameInfo = (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o"_j)));
	LINE_NUMBER(704);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_useGem = (((jobject) createStringLiteral(ctx, u8"T\u1ef1 \u0111\u1ed9ng h\u1ed3i sinh"_j)));
	LINE_NUMBER(705);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_autoFunction = (((jobject) createStringLiteral(ctx, u8"Ch\u1ee9c n\u0103ng auto"_j)));
	LINE_NUMBER(706);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sure_fusion = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 ch\u1eafc mu\u1ed1n k\u1ebft h\u1ee3p v\u0129nh vi\u1ec5n v\u1edbi \u0111\u1ec7 t\u1eed c\u1ee7a m\u00ecnh kh\u00f4ng? B\u1ea1n s\u1ebd m\u1ea5t \u0111\u1ec7 t\u1eed v\u00e0 to\u00e0n b\u1ed9 trang b\u1ecb \u0111\u1ec7 t\u1eed \u0111ang m\u1eb7c, to\u00e0n b\u1ed9 s\u1ee9c m\u1ea1nh c\u1ee7a \u0111\u1ec7 t\u1eed s\u1ebd chuy\u1ec3n th\u00e0nh ti\u1ec1m n\u0103ng c\u1ee7a b\u1ea1n"_j)));
	LINE_NUMBER(707);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_fusionForever = (((jobject) createStringLiteral(ctx, u8"H\u1ee3p th\u1ec3 v\u0129nh vi\u1ec5n"_j)));
	LINE_NUMBER(708);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_fusion = (((jobject) createStringLiteral(ctx, u8"H\u1ee3p th\u1ec3"_j)));
	LINE_NUMBER(709);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_vuilongnhapduthongtin = (((jobject) createStringLiteral(ctx, u8"Vui l\u00f2ng nh\u1eadp \u0111\u00fang s\u1ed1 l\u01b0\u1ee3ng cho ph\u00e9p"_j)));
	LINE_NUMBER(710);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_choitiep = (((jobject) createStringLiteral(ctx, u8"Ch\u01a1i ti\u1ebfp"_j)));
	LINE_NUMBER(711);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_gohome = (((jobject) createStringLiteral(ctx, u8"V\u1ec1 nh\u00e0"_j)));
	LINE_NUMBER(712);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_status = (((jobject) createStringLiteral(ctx, u8"Tr\u1ea1ng th\u00e1i"_j)));
	LINE_NUMBER(713);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_attack = (((jobject) createStringLiteral(ctx, u8"T\u1ea5n c\u00f4ng"_j)));
	LINE_NUMBER(714);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_defend = (((jobject) createStringLiteral(ctx, u8"B\u1ea3o v\u1ec7"_j)));
	LINE_NUMBER(715);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_follow = (((jobject) createStringLiteral(ctx, u8"\u0110i theo"_j)));
	LINE_NUMBER(716);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pet = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ec7 t\u1eed"_j)));
	LINE_NUMBER(717);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_maychutathoacmatsong = (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7 t\u1eaft ho\u1eb7c m\u1ea5t s\u00f3ng"_j)));
	LINE_NUMBER(718);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cauhinhthap = (((jobject) createStringLiteral(ctx, u8"C\u1ea5u h\u00ecnh th\u1ea5p"_j)));
	LINE_NUMBER(719);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cauhinhcao = (((jobject) createStringLiteral(ctx, u8"C\u1ea5u h\u00ecnh cao"_j)));
	LINE_NUMBER(720);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_taidulieu = (((jobject) createStringLiteral(ctx, u8"T\u1ea3i d\u1eef li\u1ec7u"_j)));
	LINE_NUMBER(721);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_xoadulieu = (((jobject) createStringLiteral(ctx, u8"X\u00f3a d\u1eef li\u1ec7u"_j)));
	LINE_NUMBER(722);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_deletaDataNote = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u1ea7n x\u00f3a trong tr\u01b0\u1eddng h\u1ee3p c\u00f3 l\u1ed7i t\u1ea3i d\u1eef li\u1ec7u. Khi x\u00f3a xong, b\u1ea1n ph\u1ea3i t\u1ea3i l\u1ea1i to\u00e0n b\u1ed9 \u0111\u1ec3 c\u00f3 th\u1ec3 ch\u01a1i."_j)));
	LINE_NUMBER(723);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_huy = (((jobject) createStringLiteral(ctx, u8"H\u1ee7y"_j)));
	LINE_NUMBER(724);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_taidulieudechoi = (((jobject) createStringLiteral(ctx, u8"Vui l\u00f2ng t\u1ea3i d\u1eef li\u1ec7u \u0111\u1ec3 ch\u01a1i"_j)));
	LINE_NUMBER(725);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combineSpell = (((jobject) createStringLiteral(ctx, u8"\u00dam ba la x\u00ec b\u00f9a..."_j)));
	LINE_NUMBER(726);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combineSuccess = (((jobject) createStringLiteral(ctx, u8"Ch\u00fac m\u1eebng con nh\u00e9"_j)));
	LINE_NUMBER(727);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combineFail = (((jobject) createStringLiteral(ctx, u8"Ch\u00fac con may m\u1eafn l\u1ea7n sau"_j)));
	LINE_NUMBER(728);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_fastQuestion = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 \u0111\u1ebfn t\u01b0\u01a1ng lai ngay b\u00e2y gi\u1edd v\u1edbi gi\u00e1 1 ng\u1ecdc kh\u00f4ng ?"_j)));
	LINE_NUMBER(729);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_remain = (((jobject) createStringLiteral(ctx, u8"T\u0103ng t\u1ed1c"_j)));
	LINE_NUMBER(730);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOnAnalog = (((jobject) createStringLiteral(ctx, u8"B\u00e0n ph\u00edm \u1ea3o"_j)));
	LINE_NUMBER(731);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOffAnalog = (((jobject) createStringLiteral(ctx, u8"B\u00e0n ph\u00edm \u1ea3o"_j)));
	LINE_NUMBER(732);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_analog = (((jobject) createStringLiteral(ctx, u8"B\u00e0n ph\u00edm \u1ea3o"_j)));
	LINE_NUMBER(733);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_inventory_Pass = (((jobject) createStringLiteral(ctx, u8"M\u00e3 b\u1ea3o v\u1ec7"_j)));
	LINE_NUMBER(734);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_Inventory_Pass = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp m\u00e3 b\u1ea3o v\u1ec7"_j)));
	LINE_NUMBER(735);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_Inventory_Pass_wrong = (((jobject) createStringLiteral(ctx, u8"M\u00e3 b\u1ea3o v\u1ec7 ph\u1ea3i c\u00f3 \u0111\u1ed9 d\u00e0i l\u00e0 6 s\u1ed1."_j)));
	LINE_NUMBER(736);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_regNote = (((jobject) createStringLiteral(ctx, u8"Vui l\u00f2ng nh\u1eadp s\u1ed1 \u0111i\u1ec7n tho\u1ea1i ho\u1eb7c \u0111\u1ecba ch\u1ec9 email,sau \u0111\u00f3 nh\u1eadp m\u1eadt kh\u1ea9u \u0111\u1ec3 t\u1ea1o t\u00e0i kho\u1ea3n m\u1edbi"_j)));
	LINE_NUMBER(737);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_note = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n s\u1ebd m\u1ea5t t\u00e0i kho\u1ea3n \u0111ang ch\u01a1i v\u00e0 kh\u00f4ng th\u1ec3 kh\u00f4i ph\u1ee5c \u0111\u01b0\u1ee3c n\u1ebfu \u0111\u1ed5i t\u00e0i kho\u1ea3n kh\u00e1c, b\u1ea1n c\u00f3 \u0111\u1ed3ng \u00fd kh\u00f4ng ?"_j)));
	LINE_NUMBER(738);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REGISTOPROTECT = (((jobject) createStringLiteral(ctx, u8"\u0110\u0103ng k\u00ed \u0111\u1ec3 b\u1ea3o v\u1ec7 t\u00e0i kho\u1ea3n"_j)));
	LINE_NUMBER(739);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_finishBomong = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n ph\u1ea3i ho\u00e0n th\u00e0nh nhi\u1ec7m v\u1ee5 t\u00ecm ng\u1ecdc 6 sao m\u1edbi c\u00f3 th\u1ec3 n\u1ea1p ti\u1ec1n"_j)));
	LINE_NUMBER(740);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_charger = (((jobject) createStringLiteral(ctx, u8"Di\u1ec5n \u0111\u00e0n v\u00e0 N\u1ea1p Ng\u1ecdc"_j)));
	LINE_NUMBER(741);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notYetSell = (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a c\u00f3 v\u1eadt ph\u1ea9m rao b\u00e1n"_j)));
	LINE_NUMBER(742);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_getUp = (((jobject) createStringLiteral(ctx, u8"K\u00e9o l\u00ean \u0111\u1ec3 c\u1eadp nh\u1eadt th\u00eam"_j)));
	LINE_NUMBER(743);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_getDown = (((jobject) createStringLiteral(ctx, u8"K\u00e9o xu\u1ed1ng \u0111\u1ec3 c\u1eadp nh\u1eadt th\u00eam"_j)));
	LINE_NUMBER(744);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_page = (((jobject) createStringLiteral(ctx, u8"Trang"_j)));
	LINE_NUMBER(745);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_upTop = (((jobject) createStringLiteral(ctx, u8"Up Top"_j)));
	LINE_NUMBER(746);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiXu = (((jobject) createStringLiteral(ctx, u8"B\u00e1n b\u1eb1ng\nv\u00e0ng"_j)));
	LINE_NUMBER(747);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiLuong = (((jobject) createStringLiteral(ctx, u8"B\u00e1n b\u1eb1ng\nng\u1ecdc"_j)));
	LINE_NUMBER(748);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiXuchat = (((jobject) createStringLiteral(ctx, u8"B\u00e1n b\u1eb1ng v\u00e0ng"_j)));
	LINE_NUMBER(749);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiLuongchat = (((jobject) createStringLiteral(ctx, u8"B\u00e1n b\u1eb1ng ng\u1ecdc"_j)));
	LINE_NUMBER(750);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_huykigui = (((jobject) createStringLiteral(ctx, u8"H\u1ee7y\nk\u00ed g\u1eedi"_j)));
	LINE_NUMBER(751);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhantien = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadn ti\u1ec1n"_j)));
	LINE_NUMBER(752);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_daban = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 b\u00e1n"_j)));
	LINE_NUMBER(753);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_dangban = (((jobject) createStringLiteral(ctx, u8"\u0110ang b\u00e1n"_j)));
	LINE_NUMBER(754);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kigui = (((jobject) createStringLiteral(ctx, u8"K\u00ed g\u1eedi"_j)));
	LINE_NUMBER(755);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOnSound = (((jobject) createStringLiteral(ctx, u8"\u00c2m thanh"_j)));
	LINE_NUMBER(756);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOffSound = (((jobject) createStringLiteral(ctx, u8"\u00c2m thanh"_j)));
	LINE_NUMBER(757);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_rank = (((jobject) createStringLiteral(ctx, u8"H\u1ea1ng"_j)));
	LINE_NUMBER(758);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_selectServer2 = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn m\u00e1y ch\u1ee7"_j)));
	LINE_NUMBER(759);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_active_point = (((jobject) createStringLiteral(ctx, u8"N\u0103ng \u0111\u1ed9ng"_j)));
	LINE_NUMBER(760);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REGISTERING = (((jobject) createStringLiteral(ctx, u8"\u0110ang \u0111\u0103ng k\u00fd"_j)));
	LINE_NUMBER(761);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SENTMSG = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 g\u1eedi tin nh\u1eafn, xin ch\u1edd tin nh\u1eafn x\u00e1c nh\u1eadn."_j)));
	LINE_NUMBER(762);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NOSENDMSG = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng th\u1ec3 g\u1edfi tin nh\u1eafn. Xin ki\u1ec3m tra ti\u1ec1n v\u00e0 th\u1eed kh\u1edfi \u0111\u1ed9ng l\u1ea1i game."_j)));
	LINE_NUMBER(763);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendMsgSuccess = (((jobject) createStringLiteral(ctx, u8"G\u1eedi tin nh\u1eafn th\u00e0nh c\u00f4ng"_j)));
	LINE_NUMBER(764);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cannotSendMsg = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng th\u1ec3 g\u1eedi tin nh\u1eafn"_j)));
	LINE_NUMBER(765);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendGuessMsgSuccess = (((jobject) createStringLiteral(ctx, u8"Ch\u00fac m\u1eebng b\u1ea1n \u0111\u00e3 g\u1edfi tin nh\u1eafn d\u1ef1 \u0111o\u00e1n th\u00e0nh c\u00f4ng."_j)));
	LINE_NUMBER(766);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendMsgFail = (((jobject) createStringLiteral(ctx, u8"Tin nh\u1eafn g\u1eedi kh\u00f4ng th\u00e0nh c\u00f4ng."_j)));
	LINE_NUMBER(767);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ALERT_PRIVATE_PASS_1 = (((jobject) createStringLiteral(ctx, u8"M\u1eadt kh\u1ea9u ph\u1ea3i c\u00f3 \u0111\u1ed9 d\u00e0i l\u00e0 6 k\u00fd t\u1ef1."_j)));
	LINE_NUMBER(768);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ALERT_PRIVATE_PASS_2 = (((jobject) createStringLiteral(ctx, u8"M\u1eadt kh\u1ea9u b\u1ea3o v\u1ec7 ch\u1ec9 cho nh\u1eadp s\u1ed1."_j)));
	LINE_NUMBER(769);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_INPUT_PRIVATE_PASS = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp m\u1eadt kh\u1ea9u b\u1ea3o v\u1ec7"_j)));
	LINE_NUMBER(770);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_account = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed5i t\u00e0i kho\u1ea3n"_j)));
	LINE_NUMBER(771);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_userBlank = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n ch\u01b0a nh\u1eadp email ho\u1eb7c s\u1ed1 di \u0111\u1ed9ng."_j)));
	LINE_NUMBER(772);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_passwordBlank = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n ch\u01b0a nh\u1eadp m\u1eadt kh\u1ea9u"_j)));
	LINE_NUMBER(773);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_accTooShort = (((jobject) createStringLiteral(ctx, u8"T\u00ean t\u00e0i kho\u1ea3n ph\u1ea3i nhi\u1ec1u h\u01a1n 5 k\u00fd t\u1ef1"_j)));
	LINE_NUMBER(774);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_phoneInvalid = (((jobject) createStringLiteral(ctx, u8"S\u1ed1 di \u0111\u1ed9ng kh\u00f4ng h\u1ee3p l\u1ec7. Xin nh\u1eadp theo m\u1eabu 0912345678 ho\u1eb7c 84918765432"_j)));
	LINE_NUMBER(775);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_emailInvalid = (((jobject) createStringLiteral(ctx, u8"Email kh\u00f4ng h\u1ee3p l\u1ec7. Xin nh\u1eadp theo m\u1eabu tencuaban@yahoo.com ho\u1eb7c tencuaban@gmail.com"_j)));
	LINE_NUMBER(776);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_registerNewAcc = (((jobject) createStringLiteral(ctx, u8"\u0110\u0103ng k\u00fd\nt\u00e0i kho\u1ea3n\nm\u1edbi"_j)));
	LINE_NUMBER(777);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_selectServer = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn\nm\u00e1y ch\u1ee7"_j)));
	LINE_NUMBER(778);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_forgetPass = (((jobject) createStringLiteral(ctx, u8"Qu\u00ean M.kh\u1ea7u"_j)));
	LINE_NUMBER(779);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_password = (((jobject) createStringLiteral(ctx, u8"M\u1eadt kh\u1ea9u"_j)));
	LINE_NUMBER(780);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a c\u00f3 t\u00e0i kho\u1ea3n xin"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"ch\u1ecdn menu \u0111\u0103ng k\u00fd."_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(781);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_msg = (((jobject) createStringLiteral(ctx, u8"Tin nh\u1eafn"_j)));
	LINE_NUMBER(782);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Tin"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"nh\u1eafn"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_msgg = sp[0].o;
	LINE_NUMBER(783);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_msg = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng c\u00f3 tin nh\u1eafn"_j)));
	LINE_NUMBER(784);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cancelAccountProtection = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 mu\u1ed1n hu\u1ef7 ch\u1ee9c n\u0103ng b\u1ea3o v\u1ec7 t\u00e0i kho\u1ea3n kh\u00f4ng ?"_j)));
	LINE_NUMBER(785);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_plsCheckAcc = (((jobject) createStringLiteral(ctx, u8"Ki\u1ec3m tra ch\u00ednh x\u00e1c \u0111\u1ec3 l\u1ea5y l\u1ea1i \u0111\u01b0\u1ee3c t\u00e0i kho\u1ea3n n\u1ebfu sau n\u00e0y qu\u00ean m\u1eadt kh\u1ea9u\n"_j)));
	LINE_NUMBER(786);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_phone = (((jobject) createStringLiteral(ctx, u8"S\u1ed1 di \u0111\u1ed9ng"_j)));
	LINE_NUMBER(787);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_email = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ecba ch\u1ec9 mail"_j)));
	LINE_NUMBER(788);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_acc = (((jobject) createStringLiteral(ctx, u8"TK"_j)));
	LINE_NUMBER(789);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pwd = (((jobject) createStringLiteral(ctx, u8"MK"_j)));
	LINE_NUMBER(790);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_goToWebForPassword = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ec3 l\u1ea5y l\u1ea1i m\u1eadt kh\u1ea9u, xin vui l\u00f2ng v\u00e0o website http://ngocrongonline.com/matkhau"_j)));
	LINE_NUMBER(791);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_dragon_ball = (((jobject) createStringLiteral(ctx, u8"Ng\u1ecdc r\u1ed3ng"_j)));
	LINE_NUMBER(792);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_character = (((jobject) createStringLiteral(ctx, u8"Nh\u00e2n v\u1eadt"_j)));
	LINE_NUMBER(793);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_account = (((jobject) createStringLiteral(ctx, u8"T\u00e0i kho\u1ea3n"_j)));
	LINE_NUMBER(794);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_account_server = (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7"_j)));
	LINE_NUMBER(795);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_blank = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n ch\u01b0a nh\u1eadp t\u00ean nh\u00e2n v\u1eadt"_j)));
	LINE_NUMBER(796);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_short = (((jobject) createStringLiteral(ctx, u8"T\u00ean nh\u00e2n v\u1eadt qu\u00e1 ng\u1eafn"_j)));
	LINE_NUMBER(797);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_long = (((jobject) createStringLiteral(ctx, u8"T\u00ean nh\u00e2n v\u1eadt kh\u00f4ng \u0111\u01b0\u1ee3c qu\u00e1 15 k\u00ed t\u1ef1"_j)));
	LINE_NUMBER(798);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_changeNameChar = (((jobject) createStringLiteral(ctx, u8"Nh\u00e2n v\u1eadt c\u1ea7n \u0111\u1ed5i t\u00ean"_j)));
	LINE_NUMBER(799);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name = (((jobject) createStringLiteral(ctx, u8"T\u00ean nh\u00e2n v\u1eadt"_j)));
	LINE_NUMBER(800);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_login = (((jobject) createStringLiteral(ctx, u8"\u0110\u0103ng nh\u1eadp"_j)));
	LINE_NUMBER(801);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_login2 = (((jobject) createStringLiteral(ctx, u8"\u0110.Nh\u1eadp"_j)));
	LINE_NUMBER(802);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_register = (((jobject) createStringLiteral(ctx, u8"\u0110\u0103ng k\u00fd"_j)));
	LINE_NUMBER(803);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_den = (((jobject) createStringLiteral(ctx, u8"D\u1ecbch \nchuy\u1ec3n t\u1edbi"_j)));
	LINE_NUMBER(804);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REVENGE = (((jobject) createStringLiteral(ctx, u8"Tr\u1ea3 th\u00f9"_j)));
	LINE_NUMBER(805);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_WAIT = (((jobject) createStringLiteral(ctx, u8"Ch\u1edd"_j)));
	LINE_NUMBER(806);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_PLEASEWAIT = (((jobject) createStringLiteral(ctx, u8"Xin ch\u1edd"_j)));
	LINE_NUMBER(807);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CONNECTING = (((jobject) createStringLiteral(ctx, u8"\u0110ang k\u1ebft n\u1ed1i"_j)));
	LINE_NUMBER(808);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_enemy = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng c\u00f3 k\u1ebb th\u00f9"_j)));
	LINE_NUMBER(809);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_downloading_data = (((jobject) createStringLiteral(ctx, u8"\u0110ang t\u1ea3i "_j)));
	LINE_NUMBER(810);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pls_restart_game_error = (((jobject) createStringLiteral(ctx, u8"C\u00f3 l\u1ed7i x\u1ea3y ra, xin vui l\u00f2ng kh\u1edfi \u0111\u1ed9ng l\u1ea1i game."_j)));
	LINE_NUMBER(811);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_zone = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed5i khu v\u1ef1c"_j)));
	LINE_NUMBER(812);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_zone = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn khu v\u1ef1c"_j)));
	LINE_NUMBER(813);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_website = (((jobject) createStringLiteral(ctx, u8"Website\ndi\u1ec5n \u0111\u00e0n"_j)));
	LINE_NUMBER(814);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_server = (((jobject) createStringLiteral(ctx, u8"M\u00e1y ch\u1ee7"_j)));
	LINE_NUMBER(815);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"H\u00e0nh trang"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"K\u1ef9 n\u0103ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Ti\u1ec1m n\u0103ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng tin"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"Trang b\u1ecb"_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(816);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"D\u00e2n t\u1ed9c: "_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"T\u00f3c: "_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUME = sp[0].o;
	LINE_NUMBER(817);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Tr\u00e1i \u0111\u1ea5t"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Nam\u1ebfc"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Xayda"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUGENDER = sp[0].o;
	LINE_NUMBER(818);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (7)) goto label_139;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"R\u1ed3ng \u0111\u1ea5t"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"R\u1ed3ng xanh"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"R\u1ed3ng \u0111\u1ecf"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUGENDER = sp[0].o;
	}
label_139:;
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Th\u00e1ch \u0111\u1ea5u"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Luy\u1ec7n t\u1eadp"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"C\u1eebu s\u00e1t"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"K\u1ebft b\u1ea1n"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"M\u1eddi v\u00e0o bang"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"Ph\u1ee5c h\u1ed3i"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"Xem th\u00f4ng tin"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"Chat ri\u00eang"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"M\u1eddi v\u00e0o t\u1ed9c"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"Ch\u1eb7n xin v\u00e0o t\u1ed9c"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CHAR_ORDER = sp[0].o;
	LINE_NUMBER(823);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(4)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Nhi\u1ec7m"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"V\u1ee5"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"H\u00e0nh"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Trang"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"K\u1ef9"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"N\u0103ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Ch\u1ee9c"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"N\u0103ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mainTab1 = sp[0].o;
	LINE_NUMBER(824);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(5)));
	jint temp4 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Nhi\u1ec7m"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"V\u1ee5"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"H\u00e0nh"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Trang"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"K\u1ef9"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"N\u0103ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Bang"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"H\u1ed9i"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(4);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Ch\u1ee9c"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"N\u0103ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mainTab2 = sp[0].o;
	LINE_NUMBER(825);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(3)));
	jint temp9 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ec7"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"T\u1eed"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Tr\u1ea1ng"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Th\u00e1i"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"H\u00e0nh"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Trang"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_petMainTab = sp[0].o;
	LINE_NUMBER(826);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(2)));
	jint temp12 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ec7"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"T\u1eed"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Tr\u1ea1ng"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Th\u00e1i"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_petMainTab2 = sp[0].o;
	LINE_NUMBER(827);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm Q"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm W"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm E"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm R"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm T"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_key_skill_qwerty = sp[0].o;
	LINE_NUMBER(828);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm 7"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm 8"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm 9"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm 1"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o\nph\u00edm 3"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_key_skill = sp[0].o;
	LINE_NUMBER(829);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SKILL_FAIL = (((jobject) createStringLiteral(ctx, u8"Chi\u00eau \u0111\u00e1nh hi\u1ec7n t\u1ea1i c\u1ee7a b\u1ea1n ch\u01b0a n\u00e2ng c\u1ea5p \u0111\u1ed9"_j)));
	LINE_NUMBER(830);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_HP_EMPTY = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 h\u1ebft \u0111\u1eadu th\u1ea7n. C\u1eadu h\u00e3y v\u1ec1 thu ho\u1ea1ch th\u00eam"_j)));
	LINE_NUMBER(831);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ZONE_HERE = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n \u0111ang \u1edf khu v\u1ef1c n\u00e0y"_j)));
	LINE_NUMBER(832);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"H\u00e3y \u0111i t\u00ecm "_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8" \u1edf "_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8" \u0111\u1ec3 nh\u1eadn nhi\u1ec7m v\u1ee5."_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n \u0111\u00e3 ho\u00e0n th\u00e0nh h\u1ebft nhi\u1ec7m v\u1ee5 phi\u00ean b\u1ea3n n\u00e0y, vui l\u00f2ng ch\u1edd cho \u0111\u1ebfn khi ra phi\u00ean b\u1ea3n ti\u1ebfp theo."_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DES_TASK = sp[0].o;
	LINE_NUMBER(833);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Ki\u1ec7t s\u1ee9c"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Ch\u1edd"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"V\u1ec1 nh\u00e0"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"H\u1ed3i sinh\nngay\n(1 ng\u1ecdc)"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DIES = sp[0].o;
	LINE_NUMBER(834);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"B\u1ea3n \u0111\u1ed3"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Nhi\u1ec7m v\u1ee5"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Gia t\u1ed9c"_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(835);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (13));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"\u0110\u1eadu th\u1ea7n d\u00f9ng \u0111\u1ec3 t\u0103ng KI v\u00e0 HP ngay l\u1eadp t\u1ee9c"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n ch\u1ec9 mang theo ng\u01b0\u1eddi \u0111\u01b0\u1ee3c 10 h\u1ea1t \u0111\u1eadu. N\u1ebfu mu\u1ed1n mang nhi\u1ec1u h\u01a1n, h\u00e3y xin t\u1eeb b\u1ea1n b\u00e8 trong Bang"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"T\u1ea5t c\u1ea3 c\u00e1c s\u00e1ch k\u1ef9 n\u0103ng \u0111\u1ec1u c\u00f3 th\u1ec3 h\u1ecdc mi\u1ec5n ph\u00ed t\u1ea1i Quy L\u00e3o Kame, khi b\u1ea1n c\u00f3 \u0111\u1ee7 \u0111i\u1ec3m ti\u1ec1m n\u0103ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n kh\u00f4ng th\u1ec3 bay, d\u00f9ng k\u1ef9 n\u0103ng, n\u1ebfu h\u1ebft KI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"T\u1ea5n c\u00f4ng qu\u00e1i v\u1eadt c\u00f9ng b\u1ea1n b\u00e8 trong Bang s\u1ebd mang l\u1ea1i nhi\u1ec1u \u0111i\u1ec3m ti\u1ec1m n\u0103ng h\u01a1n \u0111\u00e1nh m\u1ed9t m\u00ecnh"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"T\u1eadp luy\u1ec7n v\u1edbi b\u1ea1n b\u00e8 t\u1ea1i khu v\u1ef1c th\u00edch h\u1ee3p s\u1ebd mang l\u1ea1i nhi\u1ec1u \u0111i\u1ec3m ti\u1ec1m n\u0103ng h\u01a1n \u0111\u00e1nh qu\u00e1i v\u1eadt"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"Khi \u0111\u01b0\u1ee3c n\u00e2ng c\u1ea5p, \u0111\u1eadu th\u1ea7n s\u1ebd ph\u1ee5c h\u1ed3i nhi\u1ec1u HP v\u00e0 KI h\u01a1n"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"V\u00e0o tr\u00f2 ch\u01a1i \u0111\u1ec1u \u0111\u1eb7n m\u1ed7i ng\u00e0y \u0111\u1ec3 nh\u1eadn \u0111\u01b0\u1ee3c Ng\u1ecdc mi\u1ec5n ph\u00ed"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"\u0110\u00f9i g\u00e0 s\u1ebd ph\u1ee5c h\u1ed3i 100% HP, KI. C\u00e0 chua ph\u1ee5c h\u1ed3i 100% KI. C\u00e0 r\u1ed1t ph\u1ee5c h\u1ed3i 100% HP"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"C\u00e2y \u0111\u1eadu th\u1ea7n k\u1ebft m\u1ed9t h\u1ea1t sau m\u1ed9t th\u1eddi gian, cho d\u00f9 b\u1ea1n \u0111ang offline"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"Sau 3 ng\u00e0y kh\u00f4ng tham gia tr\u00f2 ch\u01a1i, b\u1ea1n s\u1ebd b\u1ecb gi\u1ea3m s\u1ee9c m\u1ea1nh do l\u01b0\u1eddi luy\u1ec7n t\u1eadp"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n s\u1ebd gi\u1ea3m th\u1ec3 l\u1ef1c khi \u0111\u00e1nh qu\u00e1i, nh\u01b0ng s\u1ebd t\u0103ng l\u1ea1i th\u1ec3 l\u1ef1c khi kh\u00f4ng \u0111\u00e1nh n\u1eefa"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"Khi n\u00e0o h\u1ebft ng\u1ecdc, b\u1ea1n h\u00e3y \u0111\u1ebfn ch\u1ed7 B\u00f2 M\u1ed9ng"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_tips = sp[0].o;
	LINE_NUMBER(836);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_TASK_INPUT_CLASS = (((jobject) createStringLiteral(ctx, u8"Sau khi gia nh\u1eadp v\u00e0o l\u1edbp h\u1ecdc, th\u00ec c\u00f3 th\u1ec3 nh\u1eadn nhi\u1ec7m v\u1ee5 t\u1eeb hi\u1ec7u tr\u01b0\u1edfng"_j)));
	LINE_NUMBER(837);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SERI_NUM = (((jobject) createStringLiteral(ctx, u8"S\u1ed1 seri"_j)));
	LINE_NUMBER(838);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CARD_CODE = (((jobject) createStringLiteral(ctx, u8"M\u00e3 th\u1ebb"_j)));
	LINE_NUMBER(839);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pay_card = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p th\u1ebb Vina, Mobi, Viettel, Gate"_j)));
	LINE_NUMBER(840);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pay_card2 = (((jobject) createStringLiteral(ctx, u8"N\u1ea1p th\u1ebb"_j)));
	LINE_NUMBER(841);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_serial_blank = (((jobject) createStringLiteral(ctx, u8"Vui l\u00f2ng nh\u1eadp s\u1ed1 serial"_j)));
	LINE_NUMBER(842);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_card_code_blank = (((jobject) createStringLiteral(ctx, u8"Vui l\u00f2ng nh\u1eadp m\u00e3 code"_j)));
	LINE_NUMBER(843);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_billion = (((jobject) createStringLiteral(ctx, u8"T\u1ec9"_j)));
	LINE_NUMBER(844);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_million = (((jobject) createStringLiteral(ctx, u8"Tr"_j)));
	LINE_NUMBER(845);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENU = (((jobject) createStringLiteral(ctx, u8"Menu"_j)));
	LINE_NUMBER(846);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CLOSE = (((jobject) createStringLiteral(ctx, u8"\u0110\u00f3ng"_j)));
	LINE_NUMBER(847);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DELETE = (((jobject) createStringLiteral(ctx, u8"X\u00f3a"_j)));
	LINE_NUMBER(848);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CONTINUE = (((jobject) createStringLiteral(ctx, u8"Ti\u1ebfp t\u1ee5c"_j)));
	LINE_NUMBER(849);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_USE = (((jobject) createStringLiteral(ctx, u8"S\u1eed d\u1ee5ng"_j)));
	LINE_NUMBER(850);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_YES = (((jobject) createStringLiteral(ctx, u8"C\u00f3"_j)));
	LINE_NUMBER(851);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NO = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng"_j)));
	LINE_NUMBER(852);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_EXIT = (((jobject) createStringLiteral(ctx, u8"Tho\u00e1t"_j)));
	LINE_NUMBER(853);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CHAT = (((jobject) createStringLiteral(ctx, u8"Chat"_j)));
	LINE_NUMBER(854);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_OK = (((jobject) createStringLiteral(ctx, u8"OK"_j)));
	LINE_NUMBER(855);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_remember = (((jobject) createStringLiteral(ctx, u8"Nh\u1edb"_j)));
	LINE_NUMBER(856);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ACCEPT = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed3ng \u00fd"_j)));
	LINE_NUMBER(857);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CANCEL = (((jobject) createStringLiteral(ctx, u8"H\u1ee7y"_j)));
	LINE_NUMBER(858);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SELECT = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn"_j)));
	LINE_NUMBER(859);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_enter = (((jobject) createStringLiteral(ctx, u8"\u0110i v\u00e0o"_j)));
	LINE_NUMBER(860);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_open_link = (((jobject) createStringLiteral(ctx, u8"M\u1edf link"_j)));
	LINE_NUMBER(861);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NEWCHAR = (((jobject) createStringLiteral(ctx, u8"T\u1ea1o m\u1edbi"_j)));
	LINE_NUMBER(862);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_BACK = (((jobject) createStringLiteral(ctx, u8"\u0110\u00f3ng"_j)));
	LINE_NUMBER(863);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KILL = (((jobject) createStringLiteral(ctx, u8"Ti\u00eau di\u1ec7t"_j)));
	LINE_NUMBER(864);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KILLBOSS = (((jobject) createStringLiteral(ctx, u8"B\u1eaft t\u00e0 th\u00fa"_j)));
	LINE_NUMBER(865);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_XU = (((jobject) createStringLiteral(ctx, u8"v\u00e0ng"_j)));
	LINE_NUMBER(866);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_LUONG = (((jobject) createStringLiteral(ctx, u8"ng\u1ecdc"_j)));
	LINE_NUMBER(868);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_RUBY = (((jobject) createStringLiteral(ctx, u8"ng\u1ecdc xanh"_j)));
	LINE_NUMBER(869);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_PK_NOW = (((jobject) createStringLiteral(ctx, u8"\u0110i\u1ec3m hi\u1ebfu chi\u1ebfn c\u1ee7a b\u1ea1n hi\u1ec7n t\u1ea1i l\u00e0 "_j)));
	LINE_NUMBER(870);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CUU_SAT = (((jobject) createStringLiteral(ctx, u8" b\u1eaft \u0111\u1ea7u c\u1eebu s\u00e1t b\u1ea1n"_j)));
	LINE_NUMBER(871);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NOT_ENOUGH_MP = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng \u0111\u1ee7 KI \u0111\u1ec3 s\u1eed d\u1ee5ng"_j)));
	LINE_NUMBER(872);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_you_receive = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n nh\u1eadn \u0111\u01b0\u1ee3c"_j)));
	LINE_NUMBER(873);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_LEARN_SKILL = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n h\u1ecdc \u0111\u01b0\u1ee3c "_j)));
	LINE_NUMBER(874);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_friend = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n b\u00e8"_j)));
	LINE_NUMBER(875);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_enemy = (((jobject) createStringLiteral(ctx, u8"K\u1ebb th\u00f9"_j)));
	LINE_NUMBER(876);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_friend = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng c\u00f3 b\u1ea1n b\u00e8"_j)));
	LINE_NUMBER(877);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_world = (((jobject) createStringLiteral(ctx, u8"Chat th\u1ebf gi\u1edbi"_j)));
	LINE_NUMBER(878);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_flag = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed5i c\u1edd"_j)));
	LINE_NUMBER(879);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_option = (((jobject) createStringLiteral(ctx, u8"C\u1ea5u h\u00ecnh"_j)));
	LINE_NUMBER(880);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase_vga = (((jobject) createStringLiteral(ctx, u8"T\u0103ng \u0111\u1ed3 h\u1ecda (cho m\u00e1y m\u1ea1nh)"_j)));
	LINE_NUMBER(881);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_decrease_vga = (((jobject) createStringLiteral(ctx, u8"Gi\u1ea3m \u0111\u1ed3 h\u1ecda (cho m\u00e1y y\u1ebfu)"_j)));
	LINE_NUMBER(882);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_serverchat_off = (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o t\u1eeb m\u00e1y ch\u1ee7"_j)));
	LINE_NUMBER(883);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_aura_on = (((jobject) createStringLiteral(ctx, u8"H\u00e0o quang \u0111\u1eb7c bi\u1ec7t"_j)));
	LINE_NUMBER(884);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_aura_on2 = (((jobject) createStringLiteral(ctx, u8"H\u00e0o quang s\u1ee9c m\u1ea1nh"_j)));
	LINE_NUMBER(885);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_x2Screen = (((jobject) createStringLiteral(ctx, u8"M\u00e0n h\u00ecnh l\u1edbn"_j)));
	LINE_NUMBER(886);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_x1Screen = (((jobject) createStringLiteral(ctx, u8"M\u00e0n h\u00ecnh nh\u1ecf"_j)));
	LINE_NUMBER(887);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_changeSizeScreen = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 mu\u1ed1n tho\u00e1t game \u0111\u1ec3 thay \u0111\u1ed5i c\u1ee1 m\u00e0n h\u00ecnh kh\u00f4ng ?"_j)));
	LINE_NUMBER(888);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chest = (((jobject) createStringLiteral(ctx, u8"R\u01b0\u01a1ng \u0111\u1ed3"_j)));
	LINE_NUMBER(889);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"R\u01b0\u01a1ng"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed3"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chestt = sp[0].o;
	LINE_NUMBER(890);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"H\u00e0nh"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Trang"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_inventory = sp[0].o;
	LINE_NUMBER(891);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"K\u1ebft"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"h\u1ee3p"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combine = sp[0].o;
	LINE_NUMBER(892);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"B\u1ea3n"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"\u0111\u1ed3"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mapp = sp[0].o;
	LINE_NUMBER(893);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Item"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"cho"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_give = sp[0].o;
	LINE_NUMBER(894);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Item"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"nh\u1eadn"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_receive = sp[0].o;
	LINE_NUMBER(895);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Khu"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"V\u1ef1c"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_zonee = sp[0].o;
	LINE_NUMBER(896);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_zone = (((jobject) createStringLiteral(ctx, u8"Khu v\u1ef1c"_j)));
	LINE_NUMBER(897);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_map = (((jobject) createStringLiteral(ctx, u8"B\u1ea3n \u0111\u1ed3"_j)));
	LINE_NUMBER(898);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_receive2 = (((jobject) createStringLiteral(ctx, u8"Item nh\u1eadn"_j)));
	LINE_NUMBER(899);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_give_upper = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadn"_j)));
	LINE_NUMBER(900);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_upper = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadn t\u1ea5t"_j)));
	LINE_NUMBER(901);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_all = (((jobject) createStringLiteral(ctx, u8"H\u00e3y \u0111\u1ebfn v\u1ecb tr\u00ed ch\u1edbp nh\u00e1y tr\u00ean b\u1ea3n \u0111\u1ed3 \u0111\u1ec3 l\u00e0m nhi\u1ec7m v\u1ee5"_j)));
	LINE_NUMBER(902);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_go_to_quest = (((jobject) createStringLiteral(ctx, u8"D\u00e0nh cho Tr\u00e1i \u0110\u1ea5t\n"_j)));
	LINE_NUMBER(903);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_from_earth = (((jobject) createStringLiteral(ctx, u8"D\u00e0nh cho Nam\u1ebfc\n"_j)));
	LINE_NUMBER(904);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_from_namec = (((jobject) createStringLiteral(ctx, u8"D\u00e0nh cho Xayda\n"_j)));
	LINE_NUMBER(905);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pow_request = (((jobject) createStringLiteral(ctx, u8"S\u1ee9c m\u1ea1nh y\u00eau c\u1ea7u"_j)));
	LINE_NUMBER(906);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_your_pow = (((jobject) createStringLiteral(ctx, u8"S\u1ee9c m\u1ea1nh c\u1ee7a b\u1ea1n"_j)));
	LINE_NUMBER(907);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_used = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 d\u00f9ng"_j)));
	LINE_NUMBER(908);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_place = (((jobject) createStringLiteral(ctx, u8"\u00f4"_j)));
	LINE_NUMBER(909);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_UPGRADE = (((jobject) createStringLiteral(ctx, u8"N\u00e2ng c\u1ea5p"_j)));
	LINE_NUMBER(910);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_UPGRADING = (((jobject) createStringLiteral(ctx, u8"\u0110ang n\u00e2ng c\u1ea5p"_j)));
	LINE_NUMBER(911);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_make_shortcut = (((jobject) createStringLiteral(ctx, u8"G\u00e1n \u00f4\nph\u00edm t\u1eaft"_j)));
	LINE_NUMBER(912);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_into_place = (((jobject) createStringLiteral(ctx, u8"V\u00e0o \u00f4\nth\u1ee9 "_j)));
	LINE_NUMBER(913);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_move_to_chest = (((jobject) createStringLiteral(ctx, u8"C\u1ea5t v\u00e0o\nr\u01b0\u01a1ng"_j)));
	LINE_NUMBER(914);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_move_to_chest2 = (((jobject) createStringLiteral(ctx, u8"C\u1ea5t v\u00e0o r\u01b0\u01a1ng"_j)));
	LINE_NUMBER(915);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_saying = (((jobject) createStringLiteral(ctx, u8"N\u00f3i chuy\u1ec7n"_j)));
	LINE_NUMBER(916);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_miss = (((jobject) createStringLiteral(ctx, u8"H\u1ee5t"_j)));
	LINE_NUMBER(917);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_donate = (((jobject) createStringLiteral(ctx, u8"Cho"_j)));
	LINE_NUMBER(918);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadn"_j)));
	LINE_NUMBER(919);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_press_twice = (((jobject) createStringLiteral(ctx, u8"Nh\u1ea5n 2 l\u1ea7n"_j)));
	LINE_NUMBER(920);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_harvest = (((jobject) createStringLiteral(ctx, u8"C\u00f3 th\u1ec3 thu ho\u1ea1ch"_j)));
	LINE_NUMBER(921);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_accept_qwerty = (((jobject) createStringLiteral(ctx, u8"Nh\u1ea5n Y \u0111\u1ec3 \u0111\u1ed3ng \u00fd ("_j)));
	LINE_NUMBER(922);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_accept = (((jobject) createStringLiteral(ctx, u8"Nh\u1ea5n # \u0111\u1ec3 \u0111\u1ed3ng \u00fd ("_j)));
	LINE_NUMBER(923);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_plsRestartGame = (((jobject) createStringLiteral(ctx, u8"Xin kh\u1edfi \u0111\u1ed9ng l\u1ea1i game \u0111\u1ec3 c\u1eadp nh\u1eadt d\u1eef li\u1ec7u"_j)));
	LINE_NUMBER(924);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_is_online = (((jobject) createStringLiteral(ctx, u8"\u0110ang online"_j)));
	LINE_NUMBER(925);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_is_offline = (((jobject) createStringLiteral(ctx, u8"\u0110ang offline"_j)));
	LINE_NUMBER(926);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_make_friend = (((jobject) createStringLiteral(ctx, u8"K\u1ebft b\u1ea1n"_j)));
	LINE_NUMBER(927);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_player = (((jobject) createStringLiteral(ctx, u8"Chat player"_j)));
	LINE_NUMBER(928);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_with = (((jobject) createStringLiteral(ctx, u8"Chat v\u1edbi"_j)));
	LINE_NUMBER(929);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_capsuledonate = (((jobject) createStringLiteral(ctx, u8"Capsule cho bang"_j)));
	LINE_NUMBER(930);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_capsuleself = (((jobject) createStringLiteral(ctx, u8"Capsule c\u00e1 nh\u00e2n"_j)));
	LINE_NUMBER(931);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_point = (((jobject) createStringLiteral(ctx, u8"Capsule bang"_j)));
	LINE_NUMBER(932);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_give_pea = (((jobject) createStringLiteral(ctx, u8"Cho \u0111\u1eadu"_j)));
	LINE_NUMBER(933);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_pea = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadn \u0111\u1eadu"_j)));
	LINE_NUMBER(934);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_pea = (((jobject) createStringLiteral(ctx, u8"Xin \u0111\u1eadu"_j)));
	LINE_NUMBER(935);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_time = (((jobject) createStringLiteral(ctx, u8" l\u1ea7n"_j)));
	LINE_NUMBER(936);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_received = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 nh\u1eadn"_j)));
	LINE_NUMBER(937);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_power = (((jobject) createStringLiteral(ctx, u8"S\u1ee9c m\u1ea1nh"_j)));
	LINE_NUMBER(938);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_join_date = (((jobject) createStringLiteral(ctx, u8"Ng\u00e0y gia nh\u1eadp"_j)));
	LINE_NUMBER(939);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_leader = (((jobject) createStringLiteral(ctx, u8"Bang ch\u1ee7"_j)));
	LINE_NUMBER(940);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_coleader = (((jobject) createStringLiteral(ctx, u8"Ph\u00f3 bang"_j)));
	LINE_NUMBER(941);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_power_point = (((jobject) createStringLiteral(ctx, u8"\u0110i\u1ec3m s\u1ee9c m\u1ea1nh"_j)));
	LINE_NUMBER(942);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_member = (((jobject) createStringLiteral(ctx, u8"Th\u00e0nh vi\u00ean"_j)));
	LINE_NUMBER(943);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Th\u00e0nh"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"vi\u00ean"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_memberr = sp[0].o;
	LINE_NUMBER(944);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Chat"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"bang"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chatClan = sp[0].o;
	LINE_NUMBER(945);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"R\u1eddi"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"bang"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_leaveClan = sp[0].o;
	LINE_NUMBER(946);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"L\u1eadp"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"bang"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_createClan = sp[0].o;
	LINE_NUMBER(947);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"T\u00ecm"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"bang"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_findClan = sp[0].o;
	LINE_NUMBER(948);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Kh\u1ea9u"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"hi\u1ec7u"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_khau_hieuu = sp[0].o;
	LINE_NUMBER(949);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Bi\u1ec3u"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"t\u01b0\u1ee3ng"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_bieu_tuongg = sp[0].o;
	LINE_NUMBER(950);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Xin"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"\u0111\u1eadu"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_pea2 = sp[0].o;
	LINE_NUMBER(951);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_level = (((jobject) createStringLiteral(ctx, u8"C\u1ea5p"_j)));
	LINE_NUMBER(952);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_birthday = (((jobject) createStringLiteral(ctx, u8"Ng\u00e0y th\u00e0nh l\u1eadp: "_j)));
	LINE_NUMBER(953);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_list = (((jobject) createStringLiteral(ctx, u8"Danh s\u00e1ch bang"_j)));
	LINE_NUMBER(954);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_join_clan = (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a v\u00e0o bang"_j)));
	LINE_NUMBER(955);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Hi\u1ec7n t\u1ea1i bang ch\u1ec9 c\u00f3"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8" 1 th\u00e0nh vi\u00ean l\u00e0 b\u1ea1n."_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8" Xin ch\u1edd c\u00f3 ng\u01b0\u1eddi xin v\u00e0o."_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8" B\u1ea1n c\u00f3 th\u1ec3 ch\u1ecdn v\u00e0o nh\u00e2n v\u1eadt"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8" kh\u00e1c \u0111\u1ec3 m\u1eddi h\u1ecd v\u00e0o bang"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clanEmpty = sp[0].o;
	LINE_NUMBER(956);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_name = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp t\u00ean bang"_j)));
	LINE_NUMBER(957);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_name = (((jobject) createStringLiteral(ctx, u8"T\u00ean bang"_j)));
	LINE_NUMBER(958);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_clan = (((jobject) createStringLiteral(ctx, u8"Chat bang"_j)));
	LINE_NUMBER(959);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_name_to_create = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp t\u00ean bang c\u1ea7n t\u1ea1o"_j)));
	LINE_NUMBER(960);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_slogan = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp kh\u1ea9u hi\u1ec7u bang"_j)));
	LINE_NUMBER(961);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_u_want_join_clan = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 mu\u1ed1n xin v\u00e0o bang "_j)));
	LINE_NUMBER(962);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_clan_icon = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn bi\u1ec3u t\u01b0\u1ee3ng bang"_j)));
	LINE_NUMBER(963);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_join_clan = (((jobject) createStringLiteral(ctx, u8"Xin v\u00e0o\nbang"_j)));
	LINE_NUMBER(964);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_view_clan_member = (((jobject) createStringLiteral(ctx, u8"Xem th\u00e0nh\nvi\u00ean"_j)));
	LINE_NUMBER(965);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_create_clan_co_leader = (((jobject) createStringLiteral(ctx, u8"Phong\nph\u00f3 bang"_j)));
	LINE_NUMBER(966);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_create_clan_leader = (((jobject) createStringLiteral(ctx, u8"Phong\nch\u1ee7 bang"_j)));
	LINE_NUMBER(967);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_disable_clan_mastership = (((jobject) createStringLiteral(ctx, u8"C\u1eaft ch\u1ee9c"_j)));
	LINE_NUMBER(968);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kick_clan_mem = (((jobject) createStringLiteral(ctx, u8"Lo\u1ea1i th\u00e0nh vi\u00ean"_j)));
	LINE_NUMBER(969);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_name_blank = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n h\u00e3y nh\u1eadp t\u00ean bang"_j)));
	LINE_NUMBER(970);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_slogan_blank = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n h\u00e3y nh\u1eadp kh\u1ea9u hi\u1ec7u bang"_j)));
	LINE_NUMBER(971);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cannot_find_clan = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng t\u00ecm th\u1ea5y bang"_j)));
	LINE_NUMBER(972);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ago = (((jobject) createStringLiteral(ctx, u8"tr\u01b0\u1edbc"_j)));
	LINE_NUMBER(973);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_findingClan = (((jobject) createStringLiteral(ctx, u8"\u0110ang t\u00ecm bang"_j)));
	LINE_NUMBER(974);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_trade = (((jobject) createStringLiteral(ctx, u8"Giao d\u1ecbch"_j)));
	LINE_NUMBER(975);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_lock_trade = (((jobject) createStringLiteral(ctx, u8" ch\u01b0a kh\u00f3a giao d\u1ecbch"_j)));
	LINE_NUMBER(976);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_lock_trade_upper = (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a kh\u00f3a giao d\u1ecbch"_j)));
	LINE_NUMBER(977);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_locked_trade = (((jobject) createStringLiteral(ctx, u8" \u0111\u00e3 kh\u00f3a giao d\u1ecbch"_j)));
	LINE_NUMBER(978);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_locked_trade_upper = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 kh\u00f3a giao d\u1ecbch"_j)));
	LINE_NUMBER(979);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_lock_trade = (((jobject) createStringLiteral(ctx, u8"Kh\u00f3a giao d\u1ecbch"_j)));
	LINE_NUMBER(980);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_wait_opp_lock_trade = (((jobject) createStringLiteral(ctx, u8"Ch\u1edd \u0111\u1ed1i th\u1ee7 kh\u00f3a"_j)));
	LINE_NUMBER(981);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_press_done = (((jobject) createStringLiteral(ctx, u8"Nh\u1ea5t n\u00fat 'Xong'"_j)));
	LINE_NUMBER(982);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_done = (((jobject) createStringLiteral(ctx, u8"Xong"_j)));
	LINE_NUMBER(983);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_opponent = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed1i ph\u01b0\u01a1ng"_j)));
	LINE_NUMBER(984);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_you = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n"_j)));
	LINE_NUMBER(985);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mlock = (((jobject) createStringLiteral(ctx, u8"Kh\u00f3a"_j)));
	LINE_NUMBER(986);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_money_trade = (((jobject) createStringLiteral(ctx, u8"S\u1ed1 ti\u1ec1n giao d\u1ecbch"_j)));
	LINE_NUMBER(987);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_GETOUT = (((jobject) createStringLiteral(ctx, u8"L\u1ea5y ra"_j)));
	LINE_NUMBER(988);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MOVEOUT = (((jobject) createStringLiteral(ctx, u8"B\u1ecf ra"_j)));
	LINE_NUMBER(989);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MOVEFORPET = (((jobject) createStringLiteral(ctx, u8"Cho \u0111\u1ec7 t\u1eed"_j)));
	LINE_NUMBER(990);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SALE = (((jobject) createStringLiteral(ctx, u8"B\u00e1n"_j)));
	LINE_NUMBER(991);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money_to_trade = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp s\u1ed1 ti\u1ec1n mu\u1ed1n giao d\u1ecbch"_j)));
	LINE_NUMBER(992);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp s\u1ed1 ti\u1ec1n"_j)));
	LINE_NUMBER(993);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money_wrong = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp sai s\u1ed1 ti\u1ec1n, vui l\u00f2ng nh\u1eadp l\u1ea1i"_j)));
	LINE_NUMBER(994);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_money = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n kh\u00f4ng \u0111\u1ee7 ti\u1ec1n, vui l\u00f2ng nh\u1eadp l\u1ea1i"_j)));
	LINE_NUMBER(995);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity_to_trade = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp s\u1ed1 l\u01b0\u1ee3ng mu\u1ed1n giao d\u1ecbch"_j)));
	LINE_NUMBER(996);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp s\u1ed1 l\u01b0\u1ee3ng"_j)));
	LINE_NUMBER(997);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity_wrong = (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp sai s\u1ed1 l\u01b0\u1ee3ng, vui l\u00f2ng nh\u1eadp l\u1ea1i"_j)));
	LINE_NUMBER(998);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_already_has_item = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 c\u00f3 v\u1eadt ph\u1ea9m n\u00e0y"_j)));
	LINE_NUMBER(999);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_unlock_item_to_trade = (((jobject) createStringLiteral(ctx, u8"Vui l\u00f2ng m\u1edf kh\u00f3a tr\u01b0\u1edbc khi s\u1eed d\u1ee5ng v\u1eadt ph\u1ea9m \u0111\u1ec3 giao d\u1ecbch"_j)));
	LINE_NUMBER(1000);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_root = (((jobject) createStringLiteral(ctx, u8"g\u1ed1c"_j)));
	LINE_NUMBER(1001);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_need = (((jobject) createStringLiteral(ctx, u8"c\u1ea7n"_j)));
	LINE_NUMBER(1002);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_need_upper = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ee7"_j)));
	LINE_NUMBER(1003);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_free = (((jobject) createStringLiteral(ctx, u8"Mi\u1ec5n ph\u00ed"_j)));
	LINE_NUMBER(1004);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_item = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn v\u1eadt ph\u1ea9m"_j)));
	LINE_NUMBER(1005);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_random = (((jobject) createStringLiteral(ctx, u8"B\u1ea5t k\u00ec"_j)));
	LINE_NUMBER(1006);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_hello = (((jobject) createStringLiteral(ctx, u8"Xin ch\u00e0o!"_j)));
	LINE_NUMBER(1007);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_wat_do_u_want_to_buy = (((jobject) createStringLiteral(ctx, u8"C\u1eadu mu\u1ed1n mua g\u00ec?"_j)));
	LINE_NUMBER(1008);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_wat_do_u_want_to_buy2 = (((jobject) createStringLiteral(ctx, u8"Con mu\u1ed1n h\u1ecdc g\u00ec?"_j)));
	LINE_NUMBER(1009);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_u_sure_to_trade = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 ch\u1eafc mu\u1ed1n giao d\u1ecbch v\u1edbi nh\u1eefng v\u1eadt ph\u1ea9m tr\u00ean kh\u00f4ng ?"_j)));
	LINE_NUMBER(1010);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn_with = (((jobject) createStringLiteral(ctx, u8"H\u1ecdc v\u1edbi"_j)));
	LINE_NUMBER(1011);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_buy_with = (((jobject) createStringLiteral(ctx, u8"Mua b\u1eb1ng"_j)));
	LINE_NUMBER(1012);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_not_do_when_die = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng th\u1ec3 th\u1ef1c hi\u1ec7n khi \u0111ang ki\u1ec7t s\u1ee9c"_j)));
	LINE_NUMBER(1013);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_for_combine = (((jobject) createStringLiteral(ctx, u8"S\u1eed d\u1ee5ng\n\u0111\u1ec3\nk\u1ebft h\u1ee3p"_j)));
	LINE_NUMBER(1014);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_for_trade = (((jobject) createStringLiteral(ctx, u8"S\u1eed d\u1ee5ng\n\u0111\u1ec3\ngiao d\u1ecbch"_j)));
	LINE_NUMBER(1015);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_luong_world_channel = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n kh\u00f4ng \u0111\u1ee7 ng\u1ecdc \u0111\u1ec3 chat k\u00eanh th\u1ebf gi\u1edbi"_j)));
	LINE_NUMBER(1016);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_world_channel_5_luong = (((jobject) createStringLiteral(ctx, u8"Chat k\u00eanh th\u1ebf gi\u1edbi (5 ng\u1ecdc)"_j)));
	LINE_NUMBER(1017);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_want_to_trade = (((jobject) createStringLiteral(ctx, u8" mu\u1ed1n giao d\u1ecbch v\u1edbi b\u1ea1n, b\u1ea1n c\u00f3 \u0111\u1ed3ng \u00fd kh\u00f4ng ?"_j)));
	LINE_NUMBER(1018);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hasJustUpgrade1 = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n v\u1eeba n\u00e2ng c\u1ea5p "_j)));
	LINE_NUMBER(1019);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hasJustUpgrade = (((jobject) createStringLiteral(ctx, u8" sang c\u1ea5p "_j)));
	LINE_NUMBER(1020);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_to_learn = (((jobject) createStringLiteral(ctx, u8"ti\u1ec1m n\u0103ng \u0111\u1ebfn S\u01b0 ph\u1ee5 \u0111\u1ec3 h\u1ecdc"_j)));
	LINE_NUMBER(1021);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_point = (((jobject) createStringLiteral(ctx, u8"\u0110i\u1ec3m ti\u1ec1m n\u0103ng"_j)));
	LINE_NUMBER(1022);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_achievement_point = (((jobject) createStringLiteral(ctx, u8"\u0110i\u1ec3m th\u00e0nh t\u00edch"_j)));
	LINE_NUMBER(1023);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase = (((jobject) createStringLiteral(ctx, u8"t\u0103ng"_j)));
	LINE_NUMBER(1024);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase_upper = (((jobject) createStringLiteral(ctx, u8"T\u0103ng"_j)));
	LINE_NUMBER(1025);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_potential_point1 = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n ch\u1ec9 c\u00f3 "_j)));
	LINE_NUMBER(1026);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_potential_point2 = (((jobject) createStringLiteral(ctx, u8" \u0111i\u1ec3m ti\u1ec1m n\u0103ng. H\u00e3y luy\u1ec7n t\u1eadp th\u00eam \u0111\u1ec3 c\u00f3 \u0111\u1ee7 "_j)));
	LINE_NUMBER(1027);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_potential_point_for1 = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n c\u00f3 mu\u1ed1n d\u00f9ng "_j)));
	LINE_NUMBER(1028);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_potential_point_for2 = (((jobject) createStringLiteral(ctx, u8" ti\u1ec1m n\u0103ng \u0111\u1ec3 t\u0103ng v\u00e0o "_j)));
	LINE_NUMBER(1029);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_HP = (((jobject) createStringLiteral(ctx, u8" HP kh\u00f4ng?"_j)));
	LINE_NUMBER(1030);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_KI = (((jobject) createStringLiteral(ctx, u8" KI kh\u00f4ng?"_j)));
	LINE_NUMBER(1031);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_hit_point = (((jobject) createStringLiteral(ctx, u8" s\u1ee9c \u0111\u00e1nh kh\u00f4ng?"_j)));
	LINE_NUMBER(1032);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_crit = (((jobject) createStringLiteral(ctx, u8" ch\u00ed m\u1ea1ng kh\u00f4ng?"_j)));
	LINE_NUMBER(1033);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron1 = (((jobject) createStringLiteral(ctx, u8"Khi c\u00f3 "_j)));
	LINE_NUMBER(1034);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron2 = (((jobject) createStringLiteral(ctx, u8" ti\u1ec1m n\u0103ng, b\u1ea1n s\u1ebd \u0111\u01b0\u1ee3c n\u00e2ng c\u1ea5p mi\u1ec5n ph\u00ed "_j)));
	LINE_NUMBER(1035);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron3 = (((jobject) createStringLiteral(ctx, u8". Ngo\u00e0i ra b\u1ea1n c\u00f3 th\u1ec3 mua B\u00ed K\u00edp t\u1eeb Ur\u00f4n \u0111\u1ec3 h\u1ecdc nhanh"_j)));
	LINE_NUMBER(1036);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_HP = (((jobject) createStringLiteral(ctx, u8"HP"_j)));
	LINE_NUMBER(1037);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KI = (((jobject) createStringLiteral(ctx, u8"KI"_j)));
	LINE_NUMBER(1038);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hit_point = (((jobject) createStringLiteral(ctx, u8"S\u1ee9c \u0111\u00e1nh"_j)));
	LINE_NUMBER(1039);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_armor = (((jobject) createStringLiteral(ctx, u8"Gi\u00e1p"_j)));
	LINE_NUMBER(1040);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_vitality = (((jobject) createStringLiteral(ctx, u8"Th\u1ec3 l\u1ef1c"_j)));
	LINE_NUMBER(1041);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_critical = (((jobject) createStringLiteral(ctx, u8"Crit"_j)));
	LINE_NUMBER(1042);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_critdame = (((jobject) createStringLiteral(ctx, u8"ST Crit"_j)));
	LINE_NUMBER(1043);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_giamsatthuong = (((jobject) createStringLiteral(ctx, u8"Gi\u1ea3m ST"_j)));
	LINE_NUMBER(1044);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cap_do = (((jobject) createStringLiteral(ctx, u8"C\u1ea5p \u0111\u1ed9"_j)));
	LINE_NUMBER(1045);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KI_consume = (((jobject) createStringLiteral(ctx, u8"KI ti\u00eau hao: "_j)));
	LINE_NUMBER(1046);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cooldown = (((jobject) createStringLiteral(ctx, u8"H\u1ed3i chi\u00eau"_j)));
	LINE_NUMBER(1047);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_max_level_reach = (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 \u0111\u1ea1t c\u1ea5p t\u1ed1i \u0111a"_j)));
	LINE_NUMBER(1048);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_next_level_require = (((jobject) createStringLiteral(ctx, u8"C\u1ea5p k\u1ebf c\u1ea7n "_j)));
	LINE_NUMBER(1049);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential = (((jobject) createStringLiteral(ctx, u8"ti\u1ec1m n\u0103ng"_j)));
	LINE_NUMBER(1050);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_learn = (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a h\u1ecdc"_j)));
	LINE_NUMBER(1051);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn_require = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ec3 h\u1ecdc c\u1ea7n "_j)));
	LINE_NUMBER(1052);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn = (((jobject) createStringLiteral(ctx, u8"H\u1ecdc"_j)));
	LINE_NUMBER(1053);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_20hp = (((jobject) createStringLiteral(ctx, u8"\u0111\u1ec3 t\u0103ng 20 HP g\u1ed1c"_j)));
	LINE_NUMBER(1054);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_20mp = (((jobject) createStringLiteral(ctx, u8"\u0111\u1ec3 t\u0103ng 20 MP g\u1ed1c"_j)));
	LINE_NUMBER(1055);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_1pow = (((jobject) createStringLiteral(ctx, u8"\u0111\u1ec3 t\u0103ng 1 s\u1ee9c m\u1ea1nh g\u1ed1c"_j)));
	LINE_NUMBER(1056);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(3)));
	jint temp14 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Gohan"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Krillin"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Yamcha"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"\u1ed0c ti\u00eau"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Pocollo"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Kami"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Ca\u0111ic"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Ra\u0111ic"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Kakalot"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hairStyleName = sp[0].o;
	LINE_NUMBER(1057);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (7)) goto label_375;
	}
	{
	LINE_NUMBER(1058);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Hango"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Linkhi"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Chayam"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Deden"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Cololo"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Mika"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Tageve"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Ditra"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Rotkaka"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hairStyleName = sp[0].o;
	}
label_375:;
	{
	LINE_NUMBER(1061);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_quest_place = (((jobject) createStringLiteral(ctx, u8"\u0110\u1ecba \u0111i\u1ec3m nhi\u1ec7m v\u1ee5"_j)));
	LINE_NUMBER(1062);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_mission = (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng c\u00f3 nhi\u1ec7m v\u1ee5"_j)));
	LINE_NUMBER(1063);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_reward_mission = (((jobject) createStringLiteral(ctx, u8"Ho\u00e0n th\u00e0nh, th\u01b0\u1edfng "_j)));
	LINE_NUMBER(1064);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_achievement_mission = (((jobject) createStringLiteral(ctx, u8"Nhi\u1ec7m v\u1ee5 th\u00e0nh t\u00edch"_j)));
	LINE_NUMBER(1065);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_trangbi = (((jobject) createStringLiteral(ctx, u8"Trang b\u1ecb"_j)));
	LINE_NUMBER(1066);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_wat_do_u_want = (((jobject) createStringLiteral(ctx, u8"B\u1ea1n mu\u1ed1n l\u00e0m g\u00ec"_j)));
	LINE_NUMBER(1067);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_map = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn n\u01a1i mu\u1ed1n \u0111\u1ebfn"_j)));
	LINE_NUMBER(1068);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_off = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn"_j)));
	LINE_NUMBER(1069);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_on = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn"_j)));
	LINE_NUMBER(1070);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_onPlease = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn \u0111\u1ec3 \u1ea9n chat th\u1ebf gi\u1edbi"_j)));
	LINE_NUMBER(1071);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_offPlease = (((jobject) createStringLiteral(ctx, u8"Ch\u1ecdn \u0111\u1ec3 hi\u1ec7n chat th\u1ebf gi\u1edbi"_j)));
	LINE_NUMBER(1072);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_playNew = (((jobject) createStringLiteral(ctx, u8"Ch\u01a1i m\u1edbi"_j)));
	LINE_NUMBER(1073);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_playAcc = (((jobject) createStringLiteral(ctx, u8"Ch\u01a1i TK"_j)));
	LINE_NUMBER(1074);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhanngoc = (((jobject) createStringLiteral(ctx, u8"Ch\u01b0a \u0111\u0103ng k\u00fd"_j)));
	LINE_NUMBER(1075);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_to_learn_tuyetKi = (((jobject) createStringLiteral(ctx, u8"ti\u1ec1m n\u0103ng \u0111\u1ebfn Whis \u0111\u1ec3 h\u1ecdc"_j)));
	LINE_NUMBER(1076);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(1078);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_l = (((jobject) createStringLiteral(ctx, u8"http://world.teamobi.com"_j)));
	LINE_NUMBER(1079);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_l = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(1080);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/logo1E.png"_j))));
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_imgTitle = sp[0].o;
	LINE_NUMBER(1081);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chooseDefaultsv = (((jobject) createStringLiteral(ctx, u8"Go to Whis (Beerus Planet) to learn skill"_j)));
	LINE_NUMBER(1082);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_winLose = (((jobject) createStringLiteral(ctx, u8"When reach maximum proficiency, go to Whis (Beerus Planet) to upgrade skill"_j)));
	LINE_NUMBER(1083);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learnSkill = (((jobject) createStringLiteral(ctx, u8"Proficiency"_j)));
	LINE_NUMBER(1084);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_updSkill = (((jobject) createStringLiteral(ctx, u8"Delete account"_j)));
	LINE_NUMBER(1085);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notiINAPP = (((jobject) createStringLiteral(ctx, u8"You bought many gems today. Let's try again tomorrow!"_j)));
	LINE_NUMBER(1086);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notiRuby = (((jobject) createStringLiteral(ctx, u8"When sold, you will receive gems. Do you want to continue consigning?"_j)));
	LINE_NUMBER(1087);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_equip = (((jobject) createStringLiteral(ctx, u8"Equip"_j)));
	LINE_NUMBER(1088);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_unlock = (((jobject) createStringLiteral(ctx, u8"Unlock"_j)));
	LINE_NUMBER(1089);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_radaCard = (((jobject) createStringLiteral(ctx, u8"Collection book"_j)));
	LINE_NUMBER(1090);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_money_1 = (((jobject) createStringLiteral(ctx, u8"Not enough"_j)));
	LINE_NUMBER(1091);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_functionMaintain1 = (((jobject) createStringLiteral(ctx, u8"Function in maintenance."_j)));
	LINE_NUMBER(1092);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhatvatpham = (((jobject) createStringLiteral(ctx, u8"Are you sure you want to pick this item ?"_j)));
	LINE_NUMBER(1093);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_tang = (((jobject) createStringLiteral(ctx, u8"level"_j)));
	LINE_NUMBER(1094);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kquaVongQuay = (((jobject) createStringLiteral(ctx, u8"Results lucky number"_j)));
	LINE_NUMBER(1095);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_quayso = (((jobject) createStringLiteral(ctx, u8"Who to choose"_j)));
	LINE_NUMBER(1096);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_gameInfo = (((jobject) createStringLiteral(ctx, u8"Notification"_j)));
	LINE_NUMBER(1097);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_useGem = (((jobject) createStringLiteral(ctx, u8"Auto reborn"_j)));
	LINE_NUMBER(1098);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_autoFunction = (((jobject) createStringLiteral(ctx, u8"Auto function"_j)));
	LINE_NUMBER(1099);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sure_fusion = (((jobject) createStringLiteral(ctx, u8"Are you sure you fusion forever with your disciple? You will lost your disciple and all disciple's equip, all disciple's power will convert to your potential."_j)));
	LINE_NUMBER(1100);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_fusionForever = (((jobject) createStringLiteral(ctx, u8"Fusion dance forever"_j)));
	LINE_NUMBER(1101);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_fusion = (((jobject) createStringLiteral(ctx, u8"Fusion dance"_j)));
	LINE_NUMBER(1102);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_vuilongnhapduthongtin = (((jobject) createStringLiteral(ctx, u8"Please, enter the valid quantity"_j)));
	LINE_NUMBER(1103);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_choitiep = (((jobject) createStringLiteral(ctx, u8"Continue"_j)));
	LINE_NUMBER(1104);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_gohome = (((jobject) createStringLiteral(ctx, u8"Go home"_j)));
	LINE_NUMBER(1105);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_status = (((jobject) createStringLiteral(ctx, u8"Status"_j)));
	LINE_NUMBER(1106);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_attack = (((jobject) createStringLiteral(ctx, u8"Attack"_j)));
	LINE_NUMBER(1107);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_defend = (((jobject) createStringLiteral(ctx, u8"Protect"_j)));
	LINE_NUMBER(1108);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_follow = (((jobject) createStringLiteral(ctx, u8"Follow"_j)));
	LINE_NUMBER(1109);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pet = (((jobject) createStringLiteral(ctx, u8"Disciple"_j)));
	LINE_NUMBER(1110);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_den = (((jobject) createStringLiteral(ctx, u8"Go to"_j)));
	LINE_NUMBER(1111);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_maychutathoacmatsong = (((jobject) createStringLiteral(ctx, u8"Connection lost. Please try again later"_j)));
	LINE_NUMBER(1112);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cauhinhthap = (((jobject) createStringLiteral(ctx, u8"Low graphics"_j)));
	LINE_NUMBER(1113);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cauhinhcao = (((jobject) createStringLiteral(ctx, u8"High graphics"_j)));
	LINE_NUMBER(1114);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_taidulieu = (((jobject) createStringLiteral(ctx, u8"Download"_j)));
	LINE_NUMBER(1115);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_xoadulieu = (((jobject) createStringLiteral(ctx, u8"Clear data"_j)));
	LINE_NUMBER(1116);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_deletaDataNote = (((jobject) createStringLiteral(ctx, u8"When game have data errors, you should delete data. After delete data, you have to download data to play game."_j)));
	LINE_NUMBER(1117);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_huy = (((jobject) createStringLiteral(ctx, u8"Cancel"_j)));
	LINE_NUMBER(1118);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_taidulieudechoi = (((jobject) createStringLiteral(ctx, u8"Please download data to play"_j)));
	LINE_NUMBER(1119);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combineSpell = (((jobject) createStringLiteral(ctx, u8"Abracadabra..."_j)));
	LINE_NUMBER(1120);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combineSuccess = (((jobject) createStringLiteral(ctx, u8"Congratulations my dear"_j)));
	LINE_NUMBER(1121);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combineFail = (((jobject) createStringLiteral(ctx, u8"Better luck next time my dear"_j)));
	LINE_NUMBER(1122);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_fastQuestion = (((jobject) createStringLiteral(ctx, u8"Do you want go to future now with 1 gem ?"_j)));
	LINE_NUMBER(1123);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_remain = (((jobject) createStringLiteral(ctx, u8"Speed up"_j)));
	LINE_NUMBER(1124);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOnAnalog = (((jobject) createStringLiteral(ctx, u8"Analog"_j)));
	LINE_NUMBER(1125);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOffAnalog = (((jobject) createStringLiteral(ctx, u8"Analog"_j)));
	LINE_NUMBER(1126);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_analog = (((jobject) createStringLiteral(ctx, u8"Analog"_j)));
	LINE_NUMBER(1127);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_inventory_Pass = (((jobject) createStringLiteral(ctx, u8"Inventory Password "_j)));
	LINE_NUMBER(1128);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_Inventory_Pass = (((jobject) createStringLiteral(ctx, u8"Enter Security password"_j)));
	LINE_NUMBER(1129);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_Inventory_Pass_wrong = (((jobject) createStringLiteral(ctx, u8"Security password must be 6 number."_j)));
	LINE_NUMBER(1130);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_regNote = (((jobject) createStringLiteral(ctx, u8"Please enter your number phone or email ,then enter your password to create new account"_j)));
	LINE_NUMBER(1131);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_note = (((jobject) createStringLiteral(ctx, u8"You will lost your account forever if you change to another account,do you agree ?"_j)));
	LINE_NUMBER(1132);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REGISTOPROTECT = (((jobject) createStringLiteral(ctx, u8"Register to protect account"_j)));
	LINE_NUMBER(1133);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_finishBomong = (((jobject) createStringLiteral(ctx, u8"You must finish the mission find 6 star dragon ball to recharge"_j)));
	LINE_NUMBER(1134);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_charger = (((jobject) createStringLiteral(ctx, u8"Forum and Buy more gems"_j)));
	LINE_NUMBER(1135);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_napngoc = (((jobject) createStringLiteral(ctx, u8"Buy more gems"_j)));
	LINE_NUMBER(1136);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notYetSell = (((jobject) createStringLiteral(ctx, u8"No items to buy"_j)));
	LINE_NUMBER(1137);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_getUp = (((jobject) createStringLiteral(ctx, u8"Hold up to get more"_j)));
	LINE_NUMBER(1138);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_getDown = (((jobject) createStringLiteral(ctx, u8"Hold down to get more"_j)));
	LINE_NUMBER(1139);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_page = (((jobject) createStringLiteral(ctx, u8"Page"_j)));
	LINE_NUMBER(1140);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_upTop = (((jobject) createStringLiteral(ctx, u8"Up top"_j)));
	LINE_NUMBER(1141);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiXu = (((jobject) createStringLiteral(ctx, u8"Consign by\ngold"_j)));
	LINE_NUMBER(1142);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiLuong = (((jobject) createStringLiteral(ctx, u8"Consign by\ngem"_j)));
	LINE_NUMBER(1143);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiXuchat = (((jobject) createStringLiteral(ctx, u8"Consign by gold"_j)));
	LINE_NUMBER(1144);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kiguiLuongchat = (((jobject) createStringLiteral(ctx, u8"Consign by gem"_j)));
	LINE_NUMBER(1145);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_huykigui = (((jobject) createStringLiteral(ctx, u8"Cancel\nconsign"_j)));
	LINE_NUMBER(1146);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhantien = (((jobject) createStringLiteral(ctx, u8"Get\nmoney"_j)));
	LINE_NUMBER(1147);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_daban = (((jobject) createStringLiteral(ctx, u8"Sold"_j)));
	LINE_NUMBER(1148);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_dangban = (((jobject) createStringLiteral(ctx, u8"Selling"_j)));
	LINE_NUMBER(1149);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kigui = (((jobject) createStringLiteral(ctx, u8"Consign"_j)));
	LINE_NUMBER(1150);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOnSound = (((jobject) createStringLiteral(ctx, u8"Sound"_j)));
	LINE_NUMBER(1151);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_turnOffSound = (((jobject) createStringLiteral(ctx, u8"Sound"_j)));
	LINE_NUMBER(1152);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_enemy = (((jobject) createStringLiteral(ctx, u8"No enemy"_j)));
	LINE_NUMBER(1153);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_selectServer2 = (((jobject) createStringLiteral(ctx, u8"Select server"_j)));
	LINE_NUMBER(1154);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_rank = (((jobject) createStringLiteral(ctx, u8"Rank"_j)));
	LINE_NUMBER(1155);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_active_point = (((jobject) createStringLiteral(ctx, u8"Active point"_j)));
	LINE_NUMBER(1156);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REGISTERING = (((jobject) createStringLiteral(ctx, u8"Registering"_j)));
	LINE_NUMBER(1157);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SENTMSG = (((jobject) createStringLiteral(ctx, u8"Sent message, please wait for confirmed message."_j)));
	LINE_NUMBER(1158);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NOSENDMSG = (((jobject) createStringLiteral(ctx, u8"Message can not be delivered. Please check your account and restart game."_j)));
	LINE_NUMBER(1159);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MOVEFORPET = (((jobject) createStringLiteral(ctx, u8"User for\ndisciple"_j)));
	LINE_NUMBER(1160);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendMsgSuccess = (((jobject) createStringLiteral(ctx, u8"Message delivered"_j)));
	LINE_NUMBER(1161);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cannotSendMsg = (((jobject) createStringLiteral(ctx, u8"Can not send message"_j)));
	LINE_NUMBER(1162);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendGuessMsgSuccess = (((jobject) createStringLiteral(ctx, u8"Congratulation, you have just send predicted message successfully."_j)));
	LINE_NUMBER(1163);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendMsgFail = (((jobject) createStringLiteral(ctx, u8"Message sending failed."_j)));
	LINE_NUMBER(1164);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ALERT_PRIVATE_PASS_1 = (((jobject) createStringLiteral(ctx, u8"Password must be 6 characters length."_j)));
	LINE_NUMBER(1165);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ALERT_PRIVATE_PASS_2 = (((jobject) createStringLiteral(ctx, u8"Enter number for private password only."_j)));
	LINE_NUMBER(1166);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_INPUT_PRIVATE_PASS = (((jobject) createStringLiteral(ctx, u8"Enter private password"_j)));
	LINE_NUMBER(1167);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_account = (((jobject) createStringLiteral(ctx, u8"Select account"_j)));
	LINE_NUMBER(1168);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_userBlank = (((jobject) createStringLiteral(ctx, u8"You didn't enter you email or phone number."_j)));
	LINE_NUMBER(1169);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_passwordBlank = (((jobject) createStringLiteral(ctx, u8"You didn't enter password"_j)));
	LINE_NUMBER(1170);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_accTooShort = (((jobject) createStringLiteral(ctx, u8"Account name must be longer than 5 character"_j)));
	LINE_NUMBER(1171);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_phoneInvalid = (((jobject) createStringLiteral(ctx, u8"Phone number is invalid. Please enter like these following form: 0912345678 or 84918765432"_j)));
	LINE_NUMBER(1172);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_emailInvalid = (((jobject) createStringLiteral(ctx, u8"Email is invalid. Please enter like these following form: yournamehere@yahoo.com or yournamehere@gmail.com"_j)));
	LINE_NUMBER(1173);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_registerNewAcc = (((jobject) createStringLiteral(ctx, u8"Register\nnew\naccount"_j)));
	LINE_NUMBER(1174);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_selectServer = (((jobject) createStringLiteral(ctx, u8"Select\nserver"_j)));
	LINE_NUMBER(1175);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_forgetPass = (((jobject) createStringLiteral(ctx, u8"Forget pwd"_j)));
	LINE_NUMBER(1176);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_password = (((jobject) createStringLiteral(ctx, u8"Password"_j)));
	LINE_NUMBER(1177);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Didn't have account? Please"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"choose register menu."_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1178);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_msg = (((jobject) createStringLiteral(ctx, u8"Message"_j)));
	LINE_NUMBER(1179);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Message"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_msgg = sp[0].o;
	LINE_NUMBER(1180);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_msg = (((jobject) createStringLiteral(ctx, u8"No message"_j)));
	LINE_NUMBER(1181);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cancelAccountProtection = (((jobject) createStringLiteral(ctx, u8"Do you want to cancel account protection function ?"_j)));
	LINE_NUMBER(1182);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_plsCheckAcc = (((jobject) createStringLiteral(ctx, u8"Please check your account information carefully to recover account, in case forgot password\n"_j)));
	LINE_NUMBER(1183);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_phone = (((jobject) createStringLiteral(ctx, u8"Phone number"_j)));
	LINE_NUMBER(1184);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_email = (((jobject) createStringLiteral(ctx, u8"Email"_j)));
	LINE_NUMBER(1185);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_acc = (((jobject) createStringLiteral(ctx, u8"Acc"_j)));
	LINE_NUMBER(1186);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pwd = (((jobject) createStringLiteral(ctx, u8"Pwd"_j)));
	LINE_NUMBER(1187);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_goToWebForPassword = (((jobject) createStringLiteral(ctx, u8"To recover password, please visit website http://ngocrongonline.com/matkhau"_j)));
	LINE_NUMBER(1188);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_dragon_ball = (((jobject) createStringLiteral(ctx, u8"Dragon Ball"_j)));
	LINE_NUMBER(1189);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_character = (((jobject) createStringLiteral(ctx, u8"Character"_j)));
	LINE_NUMBER(1190);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_account = (((jobject) createStringLiteral(ctx, u8"Account"_j)));
	LINE_NUMBER(1191);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_account_server = (((jobject) createStringLiteral(ctx, u8"Account server"_j)));
	LINE_NUMBER(1192);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_blank = (((jobject) createStringLiteral(ctx, u8"You didn't enter character name"_j)));
	LINE_NUMBER(1193);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_short = (((jobject) createStringLiteral(ctx, u8"Character name can not too short"_j)));
	LINE_NUMBER(1194);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_long = (((jobject) createStringLiteral(ctx, u8"Character name can not longer than 15 characters"_j)));
	LINE_NUMBER(1195);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_changeNameChar = (((jobject) createStringLiteral(ctx, u8"Character need to change name"_j)));
	LINE_NUMBER(1196);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name = (((jobject) createStringLiteral(ctx, u8"Character name"_j)));
	LINE_NUMBER(1197);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_login = (((jobject) createStringLiteral(ctx, u8"Log in"_j)));
	LINE_NUMBER(1198);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_login2 = (((jobject) createStringLiteral(ctx, u8"Log in"_j)));
	LINE_NUMBER(1199);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_register = (((jobject) createStringLiteral(ctx, u8"Register"_j)));
	LINE_NUMBER(1200);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REVENGE = (((jobject) createStringLiteral(ctx, u8"Revenge"_j)));
	LINE_NUMBER(1201);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_WAIT = (((jobject) createStringLiteral(ctx, u8"Wait"_j)));
	LINE_NUMBER(1202);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_PLEASEWAIT = (((jobject) createStringLiteral(ctx, u8"Please wait"_j)));
	LINE_NUMBER(1203);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CONNECTING = (((jobject) createStringLiteral(ctx, u8"Connecting"_j)));
	LINE_NUMBER(1204);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_downloading_data = (((jobject) createStringLiteral(ctx, u8"Downloading "_j)));
	LINE_NUMBER(1205);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pls_restart_game_error = (((jobject) createStringLiteral(ctx, u8"Error! please restart game."_j)));
	LINE_NUMBER(1206);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_zone = (((jobject) createStringLiteral(ctx, u8"Change zone"_j)));
	LINE_NUMBER(1207);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_zone = (((jobject) createStringLiteral(ctx, u8"Select zone"_j)));
	LINE_NUMBER(1208);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_website = (((jobject) createStringLiteral(ctx, u8"Website\nforum"_j)));
	LINE_NUMBER(1209);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_server = (((jobject) createStringLiteral(ctx, u8"Server"_j)));
	LINE_NUMBER(1210);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Inventory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Skill"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Potential"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Info"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"Equipment"_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1211);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"People: "_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Hair: "_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUME = sp[0].o;
	LINE_NUMBER(1212);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Earth"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Namekian"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Saiyan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUGENDER = sp[0].o;
	LINE_NUMBER(1213);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (7)) goto label_527;
	}
	{
	LINE_NUMBER(1214);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Earth dragon"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Green dragon"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Red dragon"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUGENDER = sp[0].o;
	}
label_527:;
	{
	LINE_NUMBER(1217);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Challenge"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Practice"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"PK"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Add friend"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"Invite clan"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"Recover"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"Information"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"Private chat"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"Invite to clan"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"Block invite to clan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CHAR_ORDER = sp[0].o;
	LINE_NUMBER(1218);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(4)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Quest"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Inven-"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"tory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Skill"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Func-"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"tion"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mainTab1 = sp[0].o;
	LINE_NUMBER(1219);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(5)));
	jint temp4 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Quest"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Inven-"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"tory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Skill"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Clan"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(4);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Func-"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"tion"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mainTab2 = sp[0].o;
	LINE_NUMBER(1220);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(3)));
	jint temp9 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Dis-"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"ciple"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Status"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Inven-"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"tory"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_petMainTab = sp[0].o;
	LINE_NUMBER(1221);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(2)));
	jint temp12 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Dis-"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"ciple"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Status"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_petMainTab2 = sp[0].o;
	LINE_NUMBER(1222);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (8));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Add\nkey Q"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Add\nkey W"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Add\nkey E"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_key_skill_qwerty = sp[0].o;
	LINE_NUMBER(1223);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (8));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Add\nkey 7"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Add\nkey 8"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Add\nkey 9"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_key_skill = sp[0].o;
	LINE_NUMBER(1224);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SKILL_FAIL = (((jobject) createStringLiteral(ctx, u8"Your current attack skill didn't add points"_j)));
	LINE_NUMBER(1225);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_HP_EMPTY = (((jobject) createStringLiteral(ctx, u8"Out of Senzu Bean. Come back and harvest more"_j)));
	LINE_NUMBER(1226);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ZONE_HERE = (((jobject) createStringLiteral(ctx, u8"You are already in this zone"_j)));
	LINE_NUMBER(1227);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Find "_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8" at "_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8" to receive quest."_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"You now complete all quests of this version, please wait for upcoming version."_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DES_TASK = sp[0].o;
	LINE_NUMBER(1228);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Exhausted"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Wait"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Return home"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"Revive\nnow\n(1 gem)"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DIES = sp[0].o;
	LINE_NUMBER(1229);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Map"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Quest"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Clan"_j)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1230);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (13));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Senzu Bean is used for recovering HP and KI immediately"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"You can only keep 10 Senzu Beans belong with you. If you want to have more, ask from your clan's friend"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"All skills can be learnt free at Kame-Sennin, when you have enough potential points"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"You can not fly or use skill if out of KI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"Attack monsters with your clan's friend will bring more potential points than training alone"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"Training with your friends at appropriate zone will brought more potential points than attack monsters"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"When upgraded, Senzu Bean will recover more HP and KI"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8"Login daily to get free Gem"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8"Chicken drumsticks will recover 100% HP and KI. Tomato recover 100% KI. Carrot recover 100% HP"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8"Senzu Bean tree will ripe after a period, even though you are offline"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8"If you don't login in 3 days, you power will decrease because of your laziness"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8"Your strength will decrease when attack monster, but it will increase when you stop"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) createStringLiteral(ctx, u8"Out of Gem? Go find NPC Bora"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_tips = sp[0].o;
	LINE_NUMBER(1231);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_TASK_INPUT_CLASS = (((jobject) createStringLiteral(ctx, u8"After join class, you can receive quest from Head Master"_j)));
	LINE_NUMBER(1232);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SERI_NUM = (((jobject) createStringLiteral(ctx, u8"Serial number"_j)));
	LINE_NUMBER(1233);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CARD_CODE = (((jobject) createStringLiteral(ctx, u8"Card's code"_j)));
	LINE_NUMBER(1234);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pay_card = (((jobject) createStringLiteral(ctx, u8"Pay Vina ,Mobi, Viettel, VTC"_j)));
	LINE_NUMBER(1235);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pay_card2 = (((jobject) createStringLiteral(ctx, u8"Pay card"_j)));
	LINE_NUMBER(1236);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_serial_blank = (((jobject) createStringLiteral(ctx, u8"Please enter serial number"_j)));
	LINE_NUMBER(1237);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_card_code_blank = (((jobject) createStringLiteral(ctx, u8"Please enter card's code"_j)));
	LINE_NUMBER(1238);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_billion = (((jobject) createStringLiteral(ctx, u8"bil"_j)));
	LINE_NUMBER(1239);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_million = (((jobject) createStringLiteral(ctx, u8"mil"_j)));
	LINE_NUMBER(1240);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENU = (((jobject) createStringLiteral(ctx, u8"Menu"_j)));
	LINE_NUMBER(1241);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CLOSE = (((jobject) createStringLiteral(ctx, u8"Close"_j)));
	LINE_NUMBER(1242);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DELETE = (((jobject) createStringLiteral(ctx, u8"Clear"_j)));
	LINE_NUMBER(1243);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CONTINUE = (((jobject) createStringLiteral(ctx, u8"Continue"_j)));
	LINE_NUMBER(1244);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_USE = (((jobject) createStringLiteral(ctx, u8"Use"_j)));
	LINE_NUMBER(1245);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_YES = (((jobject) createStringLiteral(ctx, u8"Yes"_j)));
	LINE_NUMBER(1246);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NO = (((jobject) createStringLiteral(ctx, u8"No"_j)));
	LINE_NUMBER(1247);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_EXIT = (((jobject) createStringLiteral(ctx, u8"Exit"_j)));
	LINE_NUMBER(1248);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CHAT = (((jobject) createStringLiteral(ctx, u8"Chat"_j)));
	LINE_NUMBER(1249);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_OK = (((jobject) createStringLiteral(ctx, u8"OK"_j)));
	LINE_NUMBER(1250);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_remember = (((jobject) createStringLiteral(ctx, u8"Remember"_j)));
	LINE_NUMBER(1251);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ACCEPT = (((jobject) createStringLiteral(ctx, u8"Accept"_j)));
	LINE_NUMBER(1252);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CANCEL = (((jobject) createStringLiteral(ctx, u8"Cancel"_j)));
	LINE_NUMBER(1253);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SELECT = (((jobject) createStringLiteral(ctx, u8"Select"_j)));
	LINE_NUMBER(1254);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_enter = (((jobject) createStringLiteral(ctx, u8"Enter"_j)));
	LINE_NUMBER(1255);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_open_link = (((jobject) createStringLiteral(ctx, u8"Open link"_j)));
	LINE_NUMBER(1256);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NEWCHAR = (((jobject) createStringLiteral(ctx, u8"New character"_j)));
	LINE_NUMBER(1257);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_BACK = (((jobject) createStringLiteral(ctx, u8"Back"_j)));
	LINE_NUMBER(1258);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KILL = (((jobject) createStringLiteral(ctx, u8"Kill"_j)));
	LINE_NUMBER(1259);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KILLBOSS = (((jobject) createStringLiteral(ctx, u8"Kill boss"_j)));
	LINE_NUMBER(1260);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_XU = (((jobject) createStringLiteral(ctx, u8"gold"_j)));
	LINE_NUMBER(1261);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_LUONG = (((jobject) createStringLiteral(ctx, u8"gem"_j)));
	LINE_NUMBER(1262);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_RUBY = (((jobject) createStringLiteral(ctx, u8"gem"_j)));
	LINE_NUMBER(1263);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_PK_NOW = (((jobject) createStringLiteral(ctx, u8"You PK point is "_j)));
	LINE_NUMBER(1264);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CUU_SAT = (((jobject) createStringLiteral(ctx, u8" attacks you"_j)));
	LINE_NUMBER(1265);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NOT_ENOUGH_MP = (((jobject) createStringLiteral(ctx, u8"Not enough KI to use"_j)));
	LINE_NUMBER(1266);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_you_receive = (((jobject) createStringLiteral(ctx, u8"You have received"_j)));
	LINE_NUMBER(1267);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_LEARN_SKILL = (((jobject) createStringLiteral(ctx, u8"You have learnt "_j)));
	LINE_NUMBER(1268);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_friend = (((jobject) createStringLiteral(ctx, u8"Friend"_j)));
	LINE_NUMBER(1269);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_enemy = (((jobject) createStringLiteral(ctx, u8"Enemy"_j)));
	LINE_NUMBER(1270);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_friend = (((jobject) createStringLiteral(ctx, u8"No friend"_j)));
	LINE_NUMBER(1271);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_world = (((jobject) createStringLiteral(ctx, u8"World chat"_j)));
	LINE_NUMBER(1272);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_flag = (((jobject) createStringLiteral(ctx, u8"Change flag"_j)));
	LINE_NUMBER(1273);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_option = (((jobject) createStringLiteral(ctx, u8"Option"_j)));
	LINE_NUMBER(1274);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase_vga = (((jobject) createStringLiteral(ctx, u8"Increase resolution (strong devices)"_j)));
	LINE_NUMBER(1275);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_decrease_vga = (((jobject) createStringLiteral(ctx, u8"Decrease resolution (weak devices)"_j)));
	LINE_NUMBER(1276);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_serverchat_off = (((jobject) createStringLiteral(ctx, u8"Server notice"_j)));
	LINE_NUMBER(1277);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_aura_on = (((jobject) createStringLiteral(ctx, u8"Special aura"_j)));
	LINE_NUMBER(1278);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_aura_on2 = (((jobject) createStringLiteral(ctx, u8"Power aura"_j)));
	LINE_NUMBER(1279);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_x1Screen = (((jobject) createStringLiteral(ctx, u8"Small screen"_j)));
	LINE_NUMBER(1280);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_x2Screen = (((jobject) createStringLiteral(ctx, u8"Big screen"_j)));
	LINE_NUMBER(1281);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_changeSizeScreen = (((jobject) createStringLiteral(ctx, u8"Do you want to exit game to change screen size?"_j)));
	LINE_NUMBER(1282);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chest = (((jobject) createStringLiteral(ctx, u8"Chest"_j)));
	LINE_NUMBER(1283);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Chest"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chestt = sp[0].o;
	LINE_NUMBER(1284);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Inven-"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"tory"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_inventory = sp[0].o;
	LINE_NUMBER(1285);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Combine"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combine = sp[0].o;
	LINE_NUMBER(1286);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Map"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mapp = sp[0].o;
	LINE_NUMBER(1287);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Give"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"item"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_give = sp[0].o;
	LINE_NUMBER(1288);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Receive"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"item"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_receive = sp[0].o;
	LINE_NUMBER(1289);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Zone"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_zonee = sp[0].o;
	LINE_NUMBER(1290);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_zone = (((jobject) createStringLiteral(ctx, u8"Zone"_j)));
	LINE_NUMBER(1291);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_map = (((jobject) createStringLiteral(ctx, u8"Map"_j)));
	LINE_NUMBER(1292);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_receive2 = (((jobject) createStringLiteral(ctx, u8"Receive item"_j)));
	LINE_NUMBER(1293);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_give_upper = (((jobject) createStringLiteral(ctx, u8"Receive"_j)));
	LINE_NUMBER(1294);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_upper = (((jobject) createStringLiteral(ctx, u8"Receive All"_j)));
	LINE_NUMBER(1295);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_all = (((jobject) createStringLiteral(ctx, u8"Go to the flashing point on the map for quest"_j)));
	LINE_NUMBER(1296);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_go_to_quest = (((jobject) createStringLiteral(ctx, u8"For Earth only\n"_j)));
	LINE_NUMBER(1297);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_from_earth = (((jobject) createStringLiteral(ctx, u8"For Namekian Only\n"_j)));
	LINE_NUMBER(1298);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_from_namec = (((jobject) createStringLiteral(ctx, u8"For Xaiyan Only\n"_j)));
	LINE_NUMBER(1299);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pow_request = (((jobject) createStringLiteral(ctx, u8"Power required"_j)));
	LINE_NUMBER(1300);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_your_pow = (((jobject) createStringLiteral(ctx, u8"Your power"_j)));
	LINE_NUMBER(1301);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_used = (((jobject) createStringLiteral(ctx, u8"Used"_j)));
	LINE_NUMBER(1302);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_place = (((jobject) createStringLiteral(ctx, u8"place"_j)));
	LINE_NUMBER(1303);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_UPGRADE = (((jobject) createStringLiteral(ctx, u8"Upgrade"_j)));
	LINE_NUMBER(1304);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_UPGRADING = (((jobject) createStringLiteral(ctx, u8"Upgrading"_j)));
	LINE_NUMBER(1305);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_make_shortcut = (((jobject) createStringLiteral(ctx, u8"Add\nShort cut"_j)));
	LINE_NUMBER(1306);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_into_place = (((jobject) createStringLiteral(ctx, u8"Into\nplace "_j)));
	LINE_NUMBER(1307);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_move_to_chest = (((jobject) createStringLiteral(ctx, u8"Move to\nchest"_j)));
	LINE_NUMBER(1308);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_move_to_chest2 = (((jobject) createStringLiteral(ctx, u8"Move to\nchest"_j)));
	LINE_NUMBER(1309);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_saying = (((jobject) createStringLiteral(ctx, u8"Chat"_j)));
	LINE_NUMBER(1310);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_miss = (((jobject) createStringLiteral(ctx, u8"Miss"_j)));
	LINE_NUMBER(1311);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_donate = (((jobject) createStringLiteral(ctx, u8"Donate"_j)));
	LINE_NUMBER(1312);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive = (((jobject) createStringLiteral(ctx, u8"Receive"_j)));
	LINE_NUMBER(1313);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_press_twice = (((jobject) createStringLiteral(ctx, u8"Double Tap"_j)));
	LINE_NUMBER(1314);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_harvest = (((jobject) createStringLiteral(ctx, u8"Can harvest"_j)));
	LINE_NUMBER(1315);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_accept_qwerty = (((jobject) createStringLiteral(ctx, u8"Press Y to accept ("_j)));
	LINE_NUMBER(1316);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_accept = (((jobject) createStringLiteral(ctx, u8"Press # to accept ("_j)));
	LINE_NUMBER(1317);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_plsRestartGame = (((jobject) createStringLiteral(ctx, u8"Please restart game to update data"_j)));
	LINE_NUMBER(1318);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_is_online = (((jobject) createStringLiteral(ctx, u8"Online"_j)));
	LINE_NUMBER(1319);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_is_offline = (((jobject) createStringLiteral(ctx, u8"Offline"_j)));
	LINE_NUMBER(1320);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_make_friend = (((jobject) createStringLiteral(ctx, u8"Make friend"_j)));
	LINE_NUMBER(1321);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_player = (((jobject) createStringLiteral(ctx, u8"Chat player"_j)));
	LINE_NUMBER(1322);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_with = (((jobject) createStringLiteral(ctx, u8"Chat with"_j)));
	LINE_NUMBER(1323);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_capsuledonate = (((jobject) createStringLiteral(ctx, u8"Capsule Donate"_j)));
	LINE_NUMBER(1324);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_capsuleself = (((jobject) createStringLiteral(ctx, u8"Personal Capsule"_j)));
	LINE_NUMBER(1325);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_point = (((jobject) createStringLiteral(ctx, u8"Clan's Capsule"_j)));
	LINE_NUMBER(1326);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_give_pea = (((jobject) createStringLiteral(ctx, u8"Give bean"_j)));
	LINE_NUMBER(1327);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_pea = (((jobject) createStringLiteral(ctx, u8"Receive bean"_j)));
	LINE_NUMBER(1328);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_pea = (((jobject) createStringLiteral(ctx, u8"Request bean"_j)));
	LINE_NUMBER(1329);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_time = (((jobject) createStringLiteral(ctx, u8" time"_j)));
	LINE_NUMBER(1330);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_received = (((jobject) createStringLiteral(ctx, u8"Received"_j)));
	LINE_NUMBER(1331);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_power = (((jobject) createStringLiteral(ctx, u8"Power"_j)));
	LINE_NUMBER(1332);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_join_date = (((jobject) createStringLiteral(ctx, u8"Join date"_j)));
	LINE_NUMBER(1333);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_leader = (((jobject) createStringLiteral(ctx, u8"Clan Leader"_j)));
	LINE_NUMBER(1334);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_coleader = (((jobject) createStringLiteral(ctx, u8"Clan coleader"_j)));
	LINE_NUMBER(1335);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_power_point = (((jobject) createStringLiteral(ctx, u8"Power points"_j)));
	LINE_NUMBER(1336);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_member = (((jobject) createStringLiteral(ctx, u8"Member"_j)));
	LINE_NUMBER(1337);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Member"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_memberr = sp[0].o;
	LINE_NUMBER(1338);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Chat"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"clan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chatClan = sp[0].o;
	LINE_NUMBER(1339);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Leave"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"clan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_leaveClan = sp[0].o;
	LINE_NUMBER(1340);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Create"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"clan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_createClan = sp[0].o;
	LINE_NUMBER(1341);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Find"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"clan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_findClan = sp[0].o;
	LINE_NUMBER(1342);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Slogan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_khau_hieuu = sp[0].o;
	LINE_NUMBER(1343);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Icon"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_bieu_tuongg = sp[0].o;
	LINE_NUMBER(1344);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Request"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"bean"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_pea2 = sp[0].o;
	LINE_NUMBER(1345);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_level = (((jobject) createStringLiteral(ctx, u8"Level"_j)));
	LINE_NUMBER(1346);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_birthday = (((jobject) createStringLiteral(ctx, u8"Clan birthday"_j)));
	LINE_NUMBER(1347);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_list = (((jobject) createStringLiteral(ctx, u8"Clan list"_j)));
	LINE_NUMBER(1348);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_join_clan = (((jobject) createStringLiteral(ctx, u8"Not joint clan"_j)));
	LINE_NUMBER(1349);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"You are the only one"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8" member of this clan."_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8" Someone may request to join."_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8" You can select other players"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8" to invite them join clan"_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clanEmpty = sp[0].o;
	LINE_NUMBER(1350);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_name = (((jobject) createStringLiteral(ctx, u8"Enter clan's name"_j)));
	LINE_NUMBER(1351);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_name = (((jobject) createStringLiteral(ctx, u8"Clan's name"_j)));
	LINE_NUMBER(1352);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_clan = (((jobject) createStringLiteral(ctx, u8"Clan chat"_j)));
	LINE_NUMBER(1353);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_name_to_create = (((jobject) createStringLiteral(ctx, u8"Enter clan's name you want to create"_j)));
	LINE_NUMBER(1354);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_slogan = (((jobject) createStringLiteral(ctx, u8"Enter clan's slogan"_j)));
	LINE_NUMBER(1355);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_u_want_join_clan = (((jobject) createStringLiteral(ctx, u8"Do you want to join clan "_j)));
	LINE_NUMBER(1356);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_clan_icon = (((jobject) createStringLiteral(ctx, u8"Select clan's icon"_j)));
	LINE_NUMBER(1357);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_join_clan = (((jobject) createStringLiteral(ctx, u8"Request join\nclan"_j)));
	LINE_NUMBER(1358);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_view_clan_member = (((jobject) createStringLiteral(ctx, u8"View clan's\nmember"_j)));
	LINE_NUMBER(1359);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_create_clan_co_leader = (((jobject) createStringLiteral(ctx, u8"Order\ncoleader"_j)));
	LINE_NUMBER(1360);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_create_clan_leader = (((jobject) createStringLiteral(ctx, u8"Order\nleader"_j)));
	LINE_NUMBER(1361);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_disable_clan_mastership = (((jobject) createStringLiteral(ctx, u8"Dismiss"_j)));
	LINE_NUMBER(1362);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kick_clan_mem = (((jobject) createStringLiteral(ctx, u8"Kick member"_j)));
	LINE_NUMBER(1363);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_name_blank = (((jobject) createStringLiteral(ctx, u8"Please enter clan's name"_j)));
	LINE_NUMBER(1364);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_slogan_blank = (((jobject) createStringLiteral(ctx, u8"Please enter clan's slogan"_j)));
	LINE_NUMBER(1365);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cannot_find_clan = (((jobject) createStringLiteral(ctx, u8"Can not find clan"_j)));
	LINE_NUMBER(1366);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ago = (((jobject) createStringLiteral(ctx, u8"ago"_j)));
	LINE_NUMBER(1367);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_findingClan = (((jobject) createStringLiteral(ctx, u8"Finding clan"_j)));
	LINE_NUMBER(1368);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_trade = (((jobject) createStringLiteral(ctx, u8"Trade"_j)));
	LINE_NUMBER(1369);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_lock_trade = (((jobject) createStringLiteral(ctx, u8" didn't lock transaction"_j)));
	LINE_NUMBER(1370);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_lock_trade_upper = (((jobject) createStringLiteral(ctx, u8"Transaction is not locked"_j)));
	LINE_NUMBER(1371);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_locked_trade = (((jobject) createStringLiteral(ctx, u8" locked transaction"_j)));
	LINE_NUMBER(1372);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_locked_trade_upper = (((jobject) createStringLiteral(ctx, u8"Transaction is locked"_j)));
	LINE_NUMBER(1373);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_lock_trade = (((jobject) createStringLiteral(ctx, u8"Lock transaction"_j)));
	LINE_NUMBER(1374);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_wait_opp_lock_trade = (((jobject) createStringLiteral(ctx, u8"Wait opponent to lock transaction"_j)));
	LINE_NUMBER(1375);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_press_done = (((jobject) createStringLiteral(ctx, u8"Press 'Done'"_j)));
	LINE_NUMBER(1376);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_done = (((jobject) createStringLiteral(ctx, u8"Done"_j)));
	LINE_NUMBER(1377);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_opponent = (((jobject) createStringLiteral(ctx, u8"Opponent"_j)));
	LINE_NUMBER(1378);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_you = (((jobject) createStringLiteral(ctx, u8"You"_j)));
	LINE_NUMBER(1379);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mlock = (((jobject) createStringLiteral(ctx, u8"Lock"_j)));
	LINE_NUMBER(1380);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_money_trade = (((jobject) createStringLiteral(ctx, u8"Transaction amount"_j)));
	LINE_NUMBER(1381);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_GETOUT = (((jobject) createStringLiteral(ctx, u8"Move to Equipment"_j)));
	LINE_NUMBER(1382);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MOVEOUT = (((jobject) createStringLiteral(ctx, u8"Remove"_j)));
	LINE_NUMBER(1383);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SALE = (((jobject) createStringLiteral(ctx, u8"Sale"_j)));
	LINE_NUMBER(1384);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money_to_trade = (((jobject) createStringLiteral(ctx, u8"Enter money to trade"_j)));
	LINE_NUMBER(1385);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money = (((jobject) createStringLiteral(ctx, u8"Enter money"_j)));
	LINE_NUMBER(1386);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money_wrong = (((jobject) createStringLiteral(ctx, u8"Enter wrong amount, please try again"_j)));
	LINE_NUMBER(1387);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_money = (((jobject) createStringLiteral(ctx, u8"Not enough money, please try again"_j)));
	LINE_NUMBER(1388);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity_to_trade = (((jobject) createStringLiteral(ctx, u8"Enter quantity you want to trade"_j)));
	LINE_NUMBER(1389);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity = (((jobject) createStringLiteral(ctx, u8"Enter quantity"_j)));
	LINE_NUMBER(1390);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity_wrong = (((jobject) createStringLiteral(ctx, u8"Enter wrong quantity, please try again"_j)));
	LINE_NUMBER(1391);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_already_has_item = (((jobject) createStringLiteral(ctx, u8"You already have this item"_j)));
	LINE_NUMBER(1392);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_unlock_item_to_trade = (((jobject) createStringLiteral(ctx, u8"Please unlock before trade this item"_j)));
	LINE_NUMBER(1393);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_root = (((jobject) createStringLiteral(ctx, u8"Base"_j)));
	LINE_NUMBER(1394);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_need = (((jobject) createStringLiteral(ctx, u8"need"_j)));
	LINE_NUMBER(1395);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_need_upper = (((jobject) createStringLiteral(ctx, u8"Need"_j)));
	LINE_NUMBER(1396);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_free = (((jobject) createStringLiteral(ctx, u8"Free"_j)));
	LINE_NUMBER(1397);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_item = (((jobject) createStringLiteral(ctx, u8"Select item"_j)));
	LINE_NUMBER(1398);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_random = (((jobject) createStringLiteral(ctx, u8"Random"_j)));
	LINE_NUMBER(1399);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_hello = (((jobject) createStringLiteral(ctx, u8"Hello!"_j)));
	LINE_NUMBER(1400);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_wat_do_u_want_to_buy = (((jobject) createStringLiteral(ctx, u8"What do you want to buy?"_j)));
	LINE_NUMBER(1401);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_wat_do_u_want_to_buy2 = (((jobject) createStringLiteral(ctx, u8"What do you want to lear?"_j)));
	LINE_NUMBER(1402);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_u_sure_to_trade = (((jobject) createStringLiteral(ctx, u8"Are you sure you want to trade with those items?"_j)));
	LINE_NUMBER(1403);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn_with = (((jobject) createStringLiteral(ctx, u8"Learn with"_j)));
	LINE_NUMBER(1404);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_buy_with = (((jobject) createStringLiteral(ctx, u8"Buy with"_j)));
	LINE_NUMBER(1405);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_not_do_when_die = (((jobject) createStringLiteral(ctx, u8"You can not perform this action when dying"_j)));
	LINE_NUMBER(1406);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_for_combine = (((jobject) createStringLiteral(ctx, u8"Use\nfor\ncombine"_j)));
	LINE_NUMBER(1407);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_for_trade = (((jobject) createStringLiteral(ctx, u8"Use\nfor\ntrade"_j)));
	LINE_NUMBER(1408);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_luong_world_channel = (((jobject) createStringLiteral(ctx, u8"You don't have enough gem to chat on world channel"_j)));
	LINE_NUMBER(1409);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_world_channel_5_luong = (((jobject) createStringLiteral(ctx, u8"Chat on world channel (5 gems)"_j)));
	LINE_NUMBER(1410);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_want_to_trade = (((jobject) createStringLiteral(ctx, u8" want to trade with you, do you accept?"_j)));
	LINE_NUMBER(1411);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hasJustUpgrade1 = (((jobject) createStringLiteral(ctx, u8"You have just upgrade "_j)));
	LINE_NUMBER(1412);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hasJustUpgrade = (((jobject) createStringLiteral(ctx, u8" to "_j)));
	LINE_NUMBER(1413);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_to_learn = (((jobject) createStringLiteral(ctx, u8"potential to Master to learn"_j)));
	LINE_NUMBER(1414);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_point = (((jobject) createStringLiteral(ctx, u8"Potential points"_j)));
	LINE_NUMBER(1415);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_achievement_point = (((jobject) createStringLiteral(ctx, u8"Achievement point"_j)));
	LINE_NUMBER(1416);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase = (((jobject) createStringLiteral(ctx, u8"increase"_j)));
	LINE_NUMBER(1417);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase_upper = (((jobject) createStringLiteral(ctx, u8"Increase"_j)));
	LINE_NUMBER(1418);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_potential_point1 = (((jobject) createStringLiteral(ctx, u8"You only have "_j)));
	LINE_NUMBER(1419);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_potential_point2 = (((jobject) createStringLiteral(ctx, u8" potential pts. Let's practice more to earn "_j)));
	LINE_NUMBER(1420);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_potential_point_for1 = (((jobject) createStringLiteral(ctx, u8"Do you want to use "_j)));
	LINE_NUMBER(1421);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_potential_point_for2 = (((jobject) createStringLiteral(ctx, u8" potential pts to add "_j)));
	LINE_NUMBER(1422);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_HP = (((jobject) createStringLiteral(ctx, u8" for HP?"_j)));
	LINE_NUMBER(1423);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_KI = (((jobject) createStringLiteral(ctx, u8" for KI?"_j)));
	LINE_NUMBER(1424);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_hit_point = (((jobject) createStringLiteral(ctx, u8" for attack?"_j)));
	LINE_NUMBER(1425);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_crit = (((jobject) createStringLiteral(ctx, u8" for critical?"_j)));
	LINE_NUMBER(1426);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron1 = (((jobject) createStringLiteral(ctx, u8"At "_j)));
	LINE_NUMBER(1427);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron2 = (((jobject) createStringLiteral(ctx, u8" potential points, you can upgrade for free "_j)));
	LINE_NUMBER(1428);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron3 = (((jobject) createStringLiteral(ctx, u8". Or see Uron to buy recipes faster."_j)));
	LINE_NUMBER(1429);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_HP = (((jobject) createStringLiteral(ctx, u8"HP"_j)));
	LINE_NUMBER(1430);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KI = (((jobject) createStringLiteral(ctx, u8"KI"_j)));
	LINE_NUMBER(1431);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hit_point = (((jobject) createStringLiteral(ctx, u8"Attack"_j)));
	LINE_NUMBER(1432);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_armor = (((jobject) createStringLiteral(ctx, u8"Armor"_j)));
	LINE_NUMBER(1433);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_vitality = (((jobject) createStringLiteral(ctx, u8"Vitality"_j)));
	LINE_NUMBER(1434);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_critical = (((jobject) createStringLiteral(ctx, u8"Critical"_j)));
	LINE_NUMBER(1435);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_critdame = (((jobject) createStringLiteral(ctx, u8"Crit Dame"_j)));
	LINE_NUMBER(1436);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_giamsatthuong = (((jobject) createStringLiteral(ctx, u8"Re.Dame"_j)));
	LINE_NUMBER(1437);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cap_do = (((jobject) createStringLiteral(ctx, u8"Level"_j)));
	LINE_NUMBER(1438);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KI_consume = (((jobject) createStringLiteral(ctx, u8"KI consume: "_j)));
	LINE_NUMBER(1439);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cooldown = (((jobject) createStringLiteral(ctx, u8"Cooldown"_j)));
	LINE_NUMBER(1440);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_max_level_reach = (((jobject) createStringLiteral(ctx, u8"Maximum level reached"_j)));
	LINE_NUMBER(1441);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_next_level_require = (((jobject) createStringLiteral(ctx, u8"Next level required "_j)));
	LINE_NUMBER(1442);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential = (((jobject) createStringLiteral(ctx, u8"potential"_j)));
	LINE_NUMBER(1443);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_learn = (((jobject) createStringLiteral(ctx, u8"Not learnt"_j)));
	LINE_NUMBER(1444);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn_require = (((jobject) createStringLiteral(ctx, u8"Require "_j)));
	LINE_NUMBER(1445);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn = (((jobject) createStringLiteral(ctx, u8"Learn"_j)));
	LINE_NUMBER(1446);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_20hp = (((jobject) createStringLiteral(ctx, u8"to gain 20 HP"_j)));
	LINE_NUMBER(1447);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_20mp = (((jobject) createStringLiteral(ctx, u8"to gain 20 MP"_j)));
	LINE_NUMBER(1448);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_1pow = (((jobject) createStringLiteral(ctx, u8"to gain 1 power point"_j)));
	LINE_NUMBER(1449);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(3)));
	jint temp14 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Gohan"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Krillin"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Yamcha"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Dende"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Piccolo"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Kami"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Vegeta"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Raditz"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Kakarot"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hairStyleName = sp[0].o;
	LINE_NUMBER(1450);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (7)) goto label_762;
	}
	{
	LINE_NUMBER(1451);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Hango"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Linkhi"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Chayam"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Deden"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Cololo"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Mika"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"Tageve"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"Ditra"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"Rotkaka"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hairStyleName = sp[0].o;
	}
label_762:;
	{
	LINE_NUMBER(1454);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_quest_place = (((jobject) createStringLiteral(ctx, u8"Quest place"_j)));
	LINE_NUMBER(1455);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_mission = (((jobject) createStringLiteral(ctx, u8"You don't have quest"_j)));
	LINE_NUMBER(1456);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_reward_mission = (((jobject) createStringLiteral(ctx, u8"Complete, reward "_j)));
	LINE_NUMBER(1457);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_achievement_mission = (((jobject) createStringLiteral(ctx, u8"Achievement quest"_j)));
	LINE_NUMBER(1458);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_trangbi = (((jobject) createStringLiteral(ctx, u8"Equipment"_j)));
	LINE_NUMBER(1459);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_wat_do_u_want = (((jobject) createStringLiteral(ctx, u8"What do you want to do"_j)));
	LINE_NUMBER(1460);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_off = (((jobject) createStringLiteral(ctx, u8"Select"_j)));
	LINE_NUMBER(1461);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_on = (((jobject) createStringLiteral(ctx, u8"Select"_j)));
	LINE_NUMBER(1462);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_map = (((jobject) createStringLiteral(ctx, u8"Select your destination"_j)));
	LINE_NUMBER(1463);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_onPlease = (((jobject) createStringLiteral(ctx, u8"OK to disable World Channe"_j)));
	LINE_NUMBER(1464);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_offPlease = (((jobject) createStringLiteral(ctx, u8"OK to enable world channel"_j)));
	LINE_NUMBER(1465);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_playNew = (((jobject) createStringLiteral(ctx, u8"New game"_j)));
	LINE_NUMBER(1466);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_playAcc = (((jobject) createStringLiteral(ctx, u8"Play acc"_j)));
	LINE_NUMBER(1467);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhanngoc = (((jobject) createStringLiteral(ctx, u8"Not register yet"_j)));
	LINE_NUMBER(1468);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_to_learn_tuyetKi = (((jobject) createStringLiteral(ctx, u8"potential to Whis to learn"_j)));
	LINE_NUMBER(1469);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(1471);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_l = (((jobject) createStringLiteral(ctx, u8"http://dragonball.indonaga.com"_j)));
	LINE_NUMBER(1472);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/logo1E.png"_j))));
	clinit_nro_LoginScr(ctx);
	SF_nro_LoginScr_imgTitle = sp[0].o;
	LINE_NUMBER(1473);
	SM_nro_T3_load(ctx);
	}
label_5:;
	LINE_NUMBER(1476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_mResources(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mResources:<clinit>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_mResources(ctx);
	{
	LINE_NUMBER(6);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chooseDefaultsv = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(7);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_winLose = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(8);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learnSkill = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(9);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_updSkill = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(10);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notiINAPP = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(11);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_notiRuby = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(12);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_equip = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(13);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_unlock = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(14);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_radaCard = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(15);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_money_1 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(16);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_functionMaintain1 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(34);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_napngoc = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(39);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REGISTOPROTECT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(40);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REGISTERING = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(41);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SENTMSG = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(42);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NOSENDMSG = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(43);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendMsgSuccess = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(44);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cannotSendMsg = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(45);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendGuessMsgSuccess = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(46);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_sendMsgFail = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(47);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ALERT_PRIVATE_PASS_1 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(48);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ALERT_PRIVATE_PASS_2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(49);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_INPUT_PRIVATE_PASS = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(50);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_account = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(51);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_userBlank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(52);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_passwordBlank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(53);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_accTooShort = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(54);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_phoneInvalid = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(55);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_emailInvalid = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(56);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_registerNewAcc = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(57);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_selectServer = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(58);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_selectServer2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(59);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_forgetPass = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(60);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_password = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(386);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(387);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_msg = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(388);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_msgg = sp[0].o;
	LINE_NUMBER(389);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_msg = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(390);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cancelAccountProtection = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(391);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_plsCheckAcc = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(392);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_phone = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(393);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_email = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(394);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_acc = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(395);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pwd = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(396);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_goToWebForPassword = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(397);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_dragon_ball = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(398);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_character = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(399);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_account = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(400);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_account_server = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(401);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_blank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(402);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_short = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(403);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name_long = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(404);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_changeNameChar = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(405);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_char_name = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(406);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_login = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(407);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_login2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(408);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_register = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(409);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhatvatpham = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(410);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_WAIT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(411);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_PLEASEWAIT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(412);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CONNECTING = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(413);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_downloading_data = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(414);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pls_restart_game_error = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(415);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_zone = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(416);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_zone = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(417);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_website = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(418);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_server = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(419);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(420);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUME = sp[0].o;
	LINE_NUMBER(421);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENUGENDER = sp[0].o;
	LINE_NUMBER(422);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CHAR_ORDER = sp[0].o;
	LINE_NUMBER(423);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(4)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mainTab1 = sp[0].o;
	LINE_NUMBER(424);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(5)));
	jint temp4 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = jint(3);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = jint(4);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mainTab2 = sp[0].o;
	LINE_NUMBER(425);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(2)));
	jint temp9 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_petMainTab = sp[0].o;
	LINE_NUMBER(426);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(1)));
	jint temp11 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_petMainTab2 = sp[0].o;
	LINE_NUMBER(427);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_key_skill_qwerty = sp[0].o;
	LINE_NUMBER(428);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (10));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_key_skill = sp[0].o;
	LINE_NUMBER(429);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SKILL_FAIL = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(430);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_HP_EMPTY = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(431);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ZONE_HERE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(432);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8" "_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DES_TASK = sp[0].o;
	LINE_NUMBER(433);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DIES = sp[0].o;
	LINE_NUMBER(434);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(435);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (12));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_tips = sp[0].o;
	LINE_NUMBER(436);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_TASK_INPUT_CLASS = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(437);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SERI_NUM = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(438);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CARD_CODE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(439);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pay_card = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(440);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pay_card2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(441);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_serial_blank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(442);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_card_code_blank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(443);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_billion = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(444);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_million = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(445);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MENU = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(446);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CLOSE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(447);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_DELETE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(448);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CONTINUE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(449);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_USE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(450);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_YES = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(451);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NO = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(452);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_EXIT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(453);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CHAT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(454);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_REVENGE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(455);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_OK = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(456);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_remember = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(457);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ACCEPT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(458);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CANCEL = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(459);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SELECT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(460);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_enter = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(461);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_open_link = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(462);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NEWCHAR = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(463);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_BACK = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(464);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KILL = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(465);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KILLBOSS = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(466);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_XU = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(467);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_LUONG = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(468);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_RUBY = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(469);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_PK_NOW = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(470);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_CUU_SAT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(471);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_NOT_ENOUGH_MP = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(472);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_you_receive = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(473);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_LEARN_SKILL = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(474);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_rank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(475);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_active_point = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(476);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_friend = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(477);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_enemy = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(478);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_friend = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(479);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_world = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(480);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_change_flag = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(481);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_gameInfo = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(482);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_quayso = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(483);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_option = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(484);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase_vga = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(485);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_decrease_vga = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(486);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_serverchat_off = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(487);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_x2Screen = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(488);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_x1Screen = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(489);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_changeSizeScreen = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(490);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_aura_on = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(491);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_aura_on2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(492);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chest = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(493);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chestt = sp[0].o;
	LINE_NUMBER(494);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_inventory = sp[0].o;
	LINE_NUMBER(495);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_combine = sp[0].o;
	LINE_NUMBER(496);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mapp = sp[0].o;
	LINE_NUMBER(497);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_give = sp[0].o;
	LINE_NUMBER(498);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_receive = sp[0].o;
	LINE_NUMBER(499);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_zonee = sp[0].o;
	LINE_NUMBER(500);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_zone = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(501);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_map = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(502);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_item_receive2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(503);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_give_upper = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(504);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_upper = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(505);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_all = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(506);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_go_to_quest = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(507);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_from_earth = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(508);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_from_namec = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(509);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_pow_request = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(510);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_your_pow = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(511);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_used = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(512);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_place = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(513);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_UPGRADE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(514);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_UPGRADING = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(515);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_make_shortcut = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(516);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_into_place = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(517);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_move_to_chest = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(518);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_move_to_chest2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(519);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_saying = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(520);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_miss = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(521);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_donate = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(522);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(523);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_press_twice = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(524);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_harvest = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(525);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_accept_qwerty = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(526);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_accept = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(527);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_plsRestartGame = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(528);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_is_online = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(529);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_is_offline = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(530);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_make_friend = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(531);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_player = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(532);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_with = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(533);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_capsuledonate = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(534);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_capsuleself = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(535);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_point = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(536);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_give_pea = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(537);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_receive_pea = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(538);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_pea = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(539);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_time = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(540);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_received = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(541);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_power = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(542);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_join_date = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(543);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_leader = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(544);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_coleader = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(545);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_power_point = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(546);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_member = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(547);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_memberr = sp[0].o;
	LINE_NUMBER(548);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chatClan = sp[0].o;
	LINE_NUMBER(549);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_leaveClan = sp[0].o;
	LINE_NUMBER(550);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_createClan = sp[0].o;
	LINE_NUMBER(551);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_findClan = sp[0].o;
	LINE_NUMBER(552);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_khau_hieuu = sp[0].o;
	LINE_NUMBER(553);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_bieu_tuongg = sp[0].o;
	LINE_NUMBER(554);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_pea2 = sp[0].o;
	LINE_NUMBER(555);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_level = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(556);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_birthday = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(557);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_list = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(558);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_join_clan = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(559);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clanEmpty = sp[0].o;
	LINE_NUMBER(560);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_name = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(561);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_name = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(562);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_chat_clan = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(563);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_name_to_create = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(564);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_clan_slogan = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(565);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_u_want_join_clan = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(566);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_clan_icon = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(567);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_request_join_clan = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(568);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_view_clan_member = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(569);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_create_clan_co_leader = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(570);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_create_clan_leader = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(571);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_disable_clan_mastership = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(572);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_kick_clan_mem = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(573);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_name_blank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(574);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_clan_slogan_blank = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(575);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cannot_find_clan = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(576);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_ago = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(577);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_findingClan = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(578);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(579);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_lock_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(580);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_lock_trade_upper = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(581);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_locked_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(582);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_locked_trade_upper = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(583);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_lock_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(584);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_wait_opp_lock_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(585);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_press_done = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(586);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_done = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(587);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_opponent = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(588);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_you = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(589);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_mlock = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(590);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_money_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(591);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_GETOUT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(592);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MOVEOUT = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(593);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_MOVEFORPET = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(594);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_SALE = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(595);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money_to_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(596);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(597);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_money_wrong = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(598);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_money = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(599);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity_to_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(600);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(601);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_quantity_wrong = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(602);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_already_has_item = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(603);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_unlock_item_to_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(604);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_root = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(605);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_need = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(606);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_need_upper = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(607);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_free = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(608);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_item = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(609);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_random = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(610);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_hello = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(611);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_wat_do_u_want_to_buy = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(612);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_say_wat_do_u_want_to_buy2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(613);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_do_u_sure_to_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(614);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn_with = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(615);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_buy_with = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(616);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_not_do_when_die = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(617);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_for_combine = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(618);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_for_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(619);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_luong_world_channel = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(620);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_world_channel_5_luong = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(621);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_want_to_trade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(622);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hasJustUpgrade1 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(623);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hasJustUpgrade = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(624);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_to_learn = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(625);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_point = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(626);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_achievement_point = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(627);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(628);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_increase_upper = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(629);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_potential_point1 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(630);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_enough_potential_point2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(631);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_potential_point_for1 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(632);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_use_potential_point_for2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(633);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_HP = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(634);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_KI = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(635);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_hit_point = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(636);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_for_crit = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(637);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron1 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(638);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron2 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(639);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_can_buy_from_Uron3 = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(640);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_HP = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(641);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KI = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(642);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hit_point = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(643);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_armor = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(644);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_vitality = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(645);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_critical = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(646);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_critdame = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(647);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_giamsatthuong = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(648);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cap_do = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(649);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_KI_consume = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(650);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_cooldown = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(651);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_max_level_reach = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(652);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_next_level_require = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(653);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(654);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_not_learn = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(655);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn_require = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(656);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_learn = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(657);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_20hp = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(658);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_20mp = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(659);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_to_gain_1pow = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(660);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(3)));
	jint temp12 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(2);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8""_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	clinit_nro_mResources(ctx);
	SF_nro_mResources_hairStyleName = sp[0].o;
	LINE_NUMBER(661);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_quest_place = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(662);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_mission = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(663);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_reward_mission = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(664);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_achievement_mission = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(665);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_trangbi = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(666);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_wat_do_u_want = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(667);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_off = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(668);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_on = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(669);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_select_map = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(670);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_onPlease = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(671);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_offPlease = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(672);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_no_enemy = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(673);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_input_Inventory_Pass_wrong = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(674);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_nhanngoc = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(675);
	clinit_nro_mResources(ctx);
	SF_nro_mResources_potential_to_learn_tuyetKi = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(676);
	SM_nro_mResources_loadLanguague_byte(ctx, (jint(1)));
	LINE_NUMBER(677);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_mResources[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
};

static FieldMetadata fields[] {
	{ "chooseDefaultsv", &class_java_lang_String, (intptr_t) &SF_nro_mResources_chooseDefaultsv, "Ljava/lang/String;", 9 },
	{ "winLose", &class_java_lang_String, (intptr_t) &SF_nro_mResources_winLose, "Ljava/lang/String;", 9 },
	{ "learnSkill", &class_java_lang_String, (intptr_t) &SF_nro_mResources_learnSkill, "Ljava/lang/String;", 9 },
	{ "updSkill", &class_java_lang_String, (intptr_t) &SF_nro_mResources_updSkill, "Ljava/lang/String;", 9 },
	{ "notiINAPP", &class_java_lang_String, (intptr_t) &SF_nro_mResources_notiINAPP, "Ljava/lang/String;", 9 },
	{ "notiRuby", &class_java_lang_String, (intptr_t) &SF_nro_mResources_notiRuby, "Ljava/lang/String;", 9 },
	{ "equip", &class_java_lang_String, (intptr_t) &SF_nro_mResources_equip, "Ljava/lang/String;", 9 },
	{ "unlock", &class_java_lang_String, (intptr_t) &SF_nro_mResources_unlock, "Ljava/lang/String;", 9 },
	{ "radaCard", &class_java_lang_String, (intptr_t) &SF_nro_mResources_radaCard, "Ljava/lang/String;", 9 },
	{ "not_enough_money_1", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_enough_money_1, "Ljava/lang/String;", 9 },
	{ "functionMaintain1", &class_java_lang_String, (intptr_t) &SF_nro_mResources_functionMaintain1, "Ljava/lang/String;", 9 },
	{ "tang", &class_java_lang_String, (intptr_t) &SF_nro_mResources_tang, "Ljava/lang/String;", 9 },
	{ "kquaVongQuay", &class_java_lang_String, (intptr_t) &SF_nro_mResources_kquaVongQuay, "Ljava/lang/String;", 9 },
	{ "useGem", &class_java_lang_String, (intptr_t) &SF_nro_mResources_useGem, "Ljava/lang/String;", 9 },
	{ "autoFunction", &class_java_lang_String, (intptr_t) &SF_nro_mResources_autoFunction, "Ljava/lang/String;", 9 },
	{ "sure_fusion", &class_java_lang_String, (intptr_t) &SF_nro_mResources_sure_fusion, "Ljava/lang/String;", 9 },
	{ "choitiep", &class_java_lang_String, (intptr_t) &SF_nro_mResources_choitiep, "Ljava/lang/String;", 9 },
	{ "attack", &class_java_lang_String, (intptr_t) &SF_nro_mResources_attack, "Ljava/lang/String;", 9 },
	{ "defend", &class_java_lang_String, (intptr_t) &SF_nro_mResources_defend, "Ljava/lang/String;", 9 },
	{ "follow", &class_java_lang_String, (intptr_t) &SF_nro_mResources_follow, "Ljava/lang/String;", 9 },
	{ "status", &class_java_lang_String, (intptr_t) &SF_nro_mResources_status, "Ljava/lang/String;", 9 },
	{ "gohome", &class_java_lang_String, (intptr_t) &SF_nro_mResources_gohome, "Ljava/lang/String;", 9 },
	{ "pet", &class_java_lang_String, (intptr_t) &SF_nro_mResources_pet, "Ljava/lang/String;", 9 },
	{ "maychutathoacmatsong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_maychutathoacmatsong, "Ljava/lang/String;", 9 },
	{ "cauhinhthap", &class_java_lang_String, (intptr_t) &SF_nro_mResources_cauhinhthap, "Ljava/lang/String;", 9 },
	{ "cauhinhcao", &class_java_lang_String, (intptr_t) &SF_nro_mResources_cauhinhcao, "Ljava/lang/String;", 9 },
	{ "combineSpell", &class_java_lang_String, (intptr_t) &SF_nro_mResources_combineSpell, "Ljava/lang/String;", 9 },
	{ "combineFail", &class_java_lang_String, (intptr_t) &SF_nro_mResources_combineFail, "Ljava/lang/String;", 9 },
	{ "napngoc", &class_java_lang_String, (intptr_t) &SF_nro_mResources_napngoc, "Ljava/lang/String;", 9 },
	{ "combineSuccess", &class_java_lang_String, (intptr_t) &SF_nro_mResources_combineSuccess, "Ljava/lang/String;", 9 },
	{ "turnOnAnalog", &class_java_lang_String, (intptr_t) &SF_nro_mResources_turnOnAnalog, "Ljava/lang/String;", 9 },
	{ "turnOffAnalog", &class_java_lang_String, (intptr_t) &SF_nro_mResources_turnOffAnalog, "Ljava/lang/String;", 9 },
	{ "analog", &class_java_lang_String, (intptr_t) &SF_nro_mResources_analog, "Ljava/lang/String;", 9 },
	{ "REGISTOPROTECT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_REGISTOPROTECT, "Ljava/lang/String;", 9 },
	{ "REGISTERING", &class_java_lang_String, (intptr_t) &SF_nro_mResources_REGISTERING, "Ljava/lang/String;", 9 },
	{ "SENTMSG", &class_java_lang_String, (intptr_t) &SF_nro_mResources_SENTMSG, "Ljava/lang/String;", 9 },
	{ "NOSENDMSG", &class_java_lang_String, (intptr_t) &SF_nro_mResources_NOSENDMSG, "Ljava/lang/String;", 9 },
	{ "sendMsgSuccess", &class_java_lang_String, (intptr_t) &SF_nro_mResources_sendMsgSuccess, "Ljava/lang/String;", 9 },
	{ "cannotSendMsg", &class_java_lang_String, (intptr_t) &SF_nro_mResources_cannotSendMsg, "Ljava/lang/String;", 9 },
	{ "sendGuessMsgSuccess", &class_java_lang_String, (intptr_t) &SF_nro_mResources_sendGuessMsgSuccess, "Ljava/lang/String;", 9 },
	{ "sendMsgFail", &class_java_lang_String, (intptr_t) &SF_nro_mResources_sendMsgFail, "Ljava/lang/String;", 9 },
	{ "ALERT_PRIVATE_PASS_1", &class_java_lang_String, (intptr_t) &SF_nro_mResources_ALERT_PRIVATE_PASS_1, "Ljava/lang/String;", 9 },
	{ "ALERT_PRIVATE_PASS_2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_ALERT_PRIVATE_PASS_2, "Ljava/lang/String;", 9 },
	{ "INPUT_PRIVATE_PASS", &class_java_lang_String, (intptr_t) &SF_nro_mResources_INPUT_PRIVATE_PASS, "Ljava/lang/String;", 9 },
	{ "change_account", &class_java_lang_String, (intptr_t) &SF_nro_mResources_change_account, "Ljava/lang/String;", 9 },
	{ "userBlank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_userBlank, "Ljava/lang/String;", 9 },
	{ "passwordBlank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_passwordBlank, "Ljava/lang/String;", 9 },
	{ "accTooShort", &class_java_lang_String, (intptr_t) &SF_nro_mResources_accTooShort, "Ljava/lang/String;", 9 },
	{ "phoneInvalid", &class_java_lang_String, (intptr_t) &SF_nro_mResources_phoneInvalid, "Ljava/lang/String;", 9 },
	{ "emailInvalid", &class_java_lang_String, (intptr_t) &SF_nro_mResources_emailInvalid, "Ljava/lang/String;", 9 },
	{ "registerNewAcc", &class_java_lang_String, (intptr_t) &SF_nro_mResources_registerNewAcc, "Ljava/lang/String;", 9 },
	{ "selectServer", &class_java_lang_String, (intptr_t) &SF_nro_mResources_selectServer, "Ljava/lang/String;", 9 },
	{ "selectServer2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_selectServer2, "Ljava/lang/String;", 9 },
	{ "forgetPass", &class_java_lang_String, (intptr_t) &SF_nro_mResources_forgetPass, "Ljava/lang/String;", 9 },
	{ "password", &class_java_lang_String, (intptr_t) &SF_nro_mResources_password, "Ljava/lang/String;", 9 },
	{ "msg", &class_java_lang_String, (intptr_t) &SF_nro_mResources_msg, "Ljava/lang/String;", 9 },
	{ "msgg", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_msgg, "[Ljava/lang/String;", 9 },
	{ "no_msg", &class_java_lang_String, (intptr_t) &SF_nro_mResources_no_msg, "Ljava/lang/String;", 9 },
	{ "cancelAccountProtection", &class_java_lang_String, (intptr_t) &SF_nro_mResources_cancelAccountProtection, "Ljava/lang/String;", 9 },
	{ "plsCheckAcc", &class_java_lang_String, (intptr_t) &SF_nro_mResources_plsCheckAcc, "Ljava/lang/String;", 9 },
	{ "phone", &class_java_lang_String, (intptr_t) &SF_nro_mResources_phone, "Ljava/lang/String;", 9 },
	{ "email", &class_java_lang_String, (intptr_t) &SF_nro_mResources_email, "Ljava/lang/String;", 9 },
	{ "acc", &class_java_lang_String, (intptr_t) &SF_nro_mResources_acc, "Ljava/lang/String;", 9 },
	{ "pwd", &class_java_lang_String, (intptr_t) &SF_nro_mResources_pwd, "Ljava/lang/String;", 9 },
	{ "goToWebForPassword", &class_java_lang_String, (intptr_t) &SF_nro_mResources_goToWebForPassword, "Ljava/lang/String;", 9 },
	{ "dragon_ball", &class_java_lang_String, (intptr_t) &SF_nro_mResources_dragon_ball, "Ljava/lang/String;", 9 },
	{ "character", &class_java_lang_String, (intptr_t) &SF_nro_mResources_character, "Ljava/lang/String;", 9 },
	{ "account", &class_java_lang_String, (intptr_t) &SF_nro_mResources_account, "Ljava/lang/String;", 9 },
	{ "account_server", &class_java_lang_String, (intptr_t) &SF_nro_mResources_account_server, "Ljava/lang/String;", 9 },
	{ "char_name_blank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_char_name_blank, "Ljava/lang/String;", 9 },
	{ "char_name_short", &class_java_lang_String, (intptr_t) &SF_nro_mResources_char_name_short, "Ljava/lang/String;", 9 },
	{ "char_name_long", &class_java_lang_String, (intptr_t) &SF_nro_mResources_char_name_long, "Ljava/lang/String;", 9 },
	{ "changeNameChar", &class_java_lang_String, (intptr_t) &SF_nro_mResources_changeNameChar, "Ljava/lang/String;", 9 },
	{ "char_name", &class_java_lang_String, (intptr_t) &SF_nro_mResources_char_name, "Ljava/lang/String;", 9 },
	{ "login", &class_java_lang_String, (intptr_t) &SF_nro_mResources_login, "Ljava/lang/String;", 9 },
	{ "login2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_login2, "Ljava/lang/String;", 9 },
	{ "register", &class_java_lang_String, (intptr_t) &SF_nro_mResources_register, "Ljava/lang/String;", 9 },
	{ "nhatvatpham", &class_java_lang_String, (intptr_t) &SF_nro_mResources_nhatvatpham, "Ljava/lang/String;", 9 },
	{ "WAIT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_WAIT, "Ljava/lang/String;", 9 },
	{ "PLEASEWAIT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_PLEASEWAIT, "Ljava/lang/String;", 9 },
	{ "CONNECTING", &class_java_lang_String, (intptr_t) &SF_nro_mResources_CONNECTING, "Ljava/lang/String;", 9 },
	{ "downloading_data", &class_java_lang_String, (intptr_t) &SF_nro_mResources_downloading_data, "Ljava/lang/String;", 9 },
	{ "pls_restart_game_error", &class_java_lang_String, (intptr_t) &SF_nro_mResources_pls_restart_game_error, "Ljava/lang/String;", 9 },
	{ "change_zone", &class_java_lang_String, (intptr_t) &SF_nro_mResources_change_zone, "Ljava/lang/String;", 9 },
	{ "select_zone", &class_java_lang_String, (intptr_t) &SF_nro_mResources_select_zone, "Ljava/lang/String;", 9 },
	{ "website", &class_java_lang_String, (intptr_t) &SF_nro_mResources_website, "Ljava/lang/String;", 9 },
	{ "server", &class_java_lang_String, (intptr_t) &SF_nro_mResources_server, "Ljava/lang/String;", 9 },
	{ "MENUME", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_MENUME, "[Ljava/lang/String;", 9 },
	{ "MENUGENDER", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_MENUGENDER, "[Ljava/lang/String;", 9 },
	{ "CHAR_ORDER", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_CHAR_ORDER, "[Ljava/lang/String;", 9 },
	{ "mainTab1", getArrayClass(&class_java_lang_String, 2), (intptr_t) &SF_nro_mResources_mainTab1, "[[Ljava/lang/String;", 9 },
	{ "mainTab2", getArrayClass(&class_java_lang_String, 2), (intptr_t) &SF_nro_mResources_mainTab2, "[[Ljava/lang/String;", 9 },
	{ "petMainTab", getArrayClass(&class_java_lang_String, 2), (intptr_t) &SF_nro_mResources_petMainTab, "[[Ljava/lang/String;", 9 },
	{ "petMainTab2", getArrayClass(&class_java_lang_String, 2), (intptr_t) &SF_nro_mResources_petMainTab2, "[[Ljava/lang/String;", 9 },
	{ "key_skill_qwerty", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_key_skill_qwerty, "[Ljava/lang/String;", 9 },
	{ "key_skill", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_key_skill, "[Ljava/lang/String;", 9 },
	{ "SKILL_FAIL", &class_java_lang_String, (intptr_t) &SF_nro_mResources_SKILL_FAIL, "Ljava/lang/String;", 9 },
	{ "HP_EMPTY", &class_java_lang_String, (intptr_t) &SF_nro_mResources_HP_EMPTY, "Ljava/lang/String;", 9 },
	{ "ZONE_HERE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_ZONE_HERE, "Ljava/lang/String;", 9 },
	{ "DES_TASK", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_DES_TASK, "[Ljava/lang/String;", 9 },
	{ "DIES", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_DIES, "[Ljava/lang/String;", 9 },
	{ "tips", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_tips, "[Ljava/lang/String;", 9 },
	{ "TASK_INPUT_CLASS", &class_java_lang_String, (intptr_t) &SF_nro_mResources_TASK_INPUT_CLASS, "Ljava/lang/String;", 9 },
	{ "SERI_NUM", &class_java_lang_String, (intptr_t) &SF_nro_mResources_SERI_NUM, "Ljava/lang/String;", 9 },
	{ "CARD_CODE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_CARD_CODE, "Ljava/lang/String;", 9 },
	{ "pay_card", &class_java_lang_String, (intptr_t) &SF_nro_mResources_pay_card, "Ljava/lang/String;", 9 },
	{ "pay_card2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_pay_card2, "Ljava/lang/String;", 9 },
	{ "serial_blank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_serial_blank, "Ljava/lang/String;", 9 },
	{ "card_code_blank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_card_code_blank, "Ljava/lang/String;", 9 },
	{ "billion", &class_java_lang_String, (intptr_t) &SF_nro_mResources_billion, "Ljava/lang/String;", 9 },
	{ "million", &class_java_lang_String, (intptr_t) &SF_nro_mResources_million, "Ljava/lang/String;", 9 },
	{ "MENU", &class_java_lang_String, (intptr_t) &SF_nro_mResources_MENU, "Ljava/lang/String;", 9 },
	{ "CLOSE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_CLOSE, "Ljava/lang/String;", 9 },
	{ "DELETE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_DELETE, "Ljava/lang/String;", 9 },
	{ "CONTINUE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_CONTINUE, "Ljava/lang/String;", 9 },
	{ "USE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_USE, "Ljava/lang/String;", 9 },
	{ "YES", &class_java_lang_String, (intptr_t) &SF_nro_mResources_YES, "Ljava/lang/String;", 9 },
	{ "NO", &class_java_lang_String, (intptr_t) &SF_nro_mResources_NO, "Ljava/lang/String;", 9 },
	{ "EXIT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_EXIT, "Ljava/lang/String;", 9 },
	{ "CHAT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_CHAT, "Ljava/lang/String;", 9 },
	{ "REVENGE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_REVENGE, "Ljava/lang/String;", 9 },
	{ "OK", &class_java_lang_String, (intptr_t) &SF_nro_mResources_OK, "Ljava/lang/String;", 9 },
	{ "remember", &class_java_lang_String, (intptr_t) &SF_nro_mResources_remember, "Ljava/lang/String;", 9 },
	{ "ACCEPT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_ACCEPT, "Ljava/lang/String;", 9 },
	{ "CANCEL", &class_java_lang_String, (intptr_t) &SF_nro_mResources_CANCEL, "Ljava/lang/String;", 9 },
	{ "SELECT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_SELECT, "Ljava/lang/String;", 9 },
	{ "enter", &class_java_lang_String, (intptr_t) &SF_nro_mResources_enter, "Ljava/lang/String;", 9 },
	{ "open_link", &class_java_lang_String, (intptr_t) &SF_nro_mResources_open_link, "Ljava/lang/String;", 9 },
	{ "NEWCHAR", &class_java_lang_String, (intptr_t) &SF_nro_mResources_NEWCHAR, "Ljava/lang/String;", 9 },
	{ "BACK", &class_java_lang_String, (intptr_t) &SF_nro_mResources_BACK, "Ljava/lang/String;", 9 },
	{ "KILL", &class_java_lang_String, (intptr_t) &SF_nro_mResources_KILL, "Ljava/lang/String;", 9 },
	{ "KILLBOSS", &class_java_lang_String, (intptr_t) &SF_nro_mResources_KILLBOSS, "Ljava/lang/String;", 9 },
	{ "XU", &class_java_lang_String, (intptr_t) &SF_nro_mResources_XU, "Ljava/lang/String;", 9 },
	{ "LUONG", &class_java_lang_String, (intptr_t) &SF_nro_mResources_LUONG, "Ljava/lang/String;", 9 },
	{ "RUBY", &class_java_lang_String, (intptr_t) &SF_nro_mResources_RUBY, "Ljava/lang/String;", 9 },
	{ "PK_NOW", &class_java_lang_String, (intptr_t) &SF_nro_mResources_PK_NOW, "Ljava/lang/String;", 9 },
	{ "CUU_SAT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_CUU_SAT, "Ljava/lang/String;", 9 },
	{ "NOT_ENOUGH_MP", &class_java_lang_String, (intptr_t) &SF_nro_mResources_NOT_ENOUGH_MP, "Ljava/lang/String;", 9 },
	{ "you_receive", &class_java_lang_String, (intptr_t) &SF_nro_mResources_you_receive, "Ljava/lang/String;", 9 },
	{ "LEARN_SKILL", &class_java_lang_String, (intptr_t) &SF_nro_mResources_LEARN_SKILL, "Ljava/lang/String;", 9 },
	{ "rank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_rank, "Ljava/lang/String;", 9 },
	{ "active_point", &class_java_lang_String, (intptr_t) &SF_nro_mResources_active_point, "Ljava/lang/String;", 9 },
	{ "friend", &class_java_lang_String, (intptr_t) &SF_nro_mResources_friend, "Ljava/lang/String;", 9 },
	{ "enemy", &class_java_lang_String, (intptr_t) &SF_nro_mResources_enemy, "Ljava/lang/String;", 9 },
	{ "no_friend", &class_java_lang_String, (intptr_t) &SF_nro_mResources_no_friend, "Ljava/lang/String;", 9 },
	{ "chat_world", &class_java_lang_String, (intptr_t) &SF_nro_mResources_chat_world, "Ljava/lang/String;", 9 },
	{ "change_flag", &class_java_lang_String, (intptr_t) &SF_nro_mResources_change_flag, "Ljava/lang/String;", 9 },
	{ "gameInfo", &class_java_lang_String, (intptr_t) &SF_nro_mResources_gameInfo, "Ljava/lang/String;", 9 },
	{ "quayso", &class_java_lang_String, (intptr_t) &SF_nro_mResources_quayso, "Ljava/lang/String;", 9 },
	{ "option", &class_java_lang_String, (intptr_t) &SF_nro_mResources_option, "Ljava/lang/String;", 9 },
	{ "increase_vga", &class_java_lang_String, (intptr_t) &SF_nro_mResources_increase_vga, "Ljava/lang/String;", 9 },
	{ "decrease_vga", &class_java_lang_String, (intptr_t) &SF_nro_mResources_decrease_vga, "Ljava/lang/String;", 9 },
	{ "serverchat_off", &class_java_lang_String, (intptr_t) &SF_nro_mResources_serverchat_off, "Ljava/lang/String;", 9 },
	{ "x2Screen", &class_java_lang_String, (intptr_t) &SF_nro_mResources_x2Screen, "Ljava/lang/String;", 9 },
	{ "x1Screen", &class_java_lang_String, (intptr_t) &SF_nro_mResources_x1Screen, "Ljava/lang/String;", 9 },
	{ "changeSizeScreen", &class_java_lang_String, (intptr_t) &SF_nro_mResources_changeSizeScreen, "Ljava/lang/String;", 9 },
	{ "aura_on", &class_java_lang_String, (intptr_t) &SF_nro_mResources_aura_on, "Ljava/lang/String;", 9 },
	{ "aura_on2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_aura_on2, "Ljava/lang/String;", 9 },
	{ "chest", &class_java_lang_String, (intptr_t) &SF_nro_mResources_chest, "Ljava/lang/String;", 9 },
	{ "chestt", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_chestt, "[Ljava/lang/String;", 9 },
	{ "inventory", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_inventory, "[Ljava/lang/String;", 9 },
	{ "combine", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_combine, "[Ljava/lang/String;", 9 },
	{ "mapp", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_mapp, "[Ljava/lang/String;", 9 },
	{ "item_give", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_item_give, "[Ljava/lang/String;", 9 },
	{ "item_receive", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_item_receive, "[Ljava/lang/String;", 9 },
	{ "zonee", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_zonee, "[Ljava/lang/String;", 9 },
	{ "zone", &class_java_lang_String, (intptr_t) &SF_nro_mResources_zone, "Ljava/lang/String;", 9 },
	{ "map", &class_java_lang_String, (intptr_t) &SF_nro_mResources_map, "Ljava/lang/String;", 9 },
	{ "item_receive2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_item_receive2, "Ljava/lang/String;", 9 },
	{ "give_upper", &class_java_lang_String, (intptr_t) &SF_nro_mResources_give_upper, "Ljava/lang/String;", 9 },
	{ "receive_upper", &class_java_lang_String, (intptr_t) &SF_nro_mResources_receive_upper, "Ljava/lang/String;", 9 },
	{ "receive_all", &class_java_lang_String, (intptr_t) &SF_nro_mResources_receive_all, "Ljava/lang/String;", 9 },
	{ "go_to_quest", &class_java_lang_String, (intptr_t) &SF_nro_mResources_go_to_quest, "Ljava/lang/String;", 9 },
	{ "from_earth", &class_java_lang_String, (intptr_t) &SF_nro_mResources_from_earth, "Ljava/lang/String;", 9 },
	{ "from_namec", &class_java_lang_String, (intptr_t) &SF_nro_mResources_from_namec, "Ljava/lang/String;", 9 },
	{ "pow_request", &class_java_lang_String, (intptr_t) &SF_nro_mResources_pow_request, "Ljava/lang/String;", 9 },
	{ "your_pow", &class_java_lang_String, (intptr_t) &SF_nro_mResources_your_pow, "Ljava/lang/String;", 9 },
	{ "used", &class_java_lang_String, (intptr_t) &SF_nro_mResources_used, "Ljava/lang/String;", 9 },
	{ "place", &class_java_lang_String, (intptr_t) &SF_nro_mResources_place, "Ljava/lang/String;", 9 },
	{ "UPGRADE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_UPGRADE, "Ljava/lang/String;", 9 },
	{ "UPGRADING", &class_java_lang_String, (intptr_t) &SF_nro_mResources_UPGRADING, "Ljava/lang/String;", 9 },
	{ "make_shortcut", &class_java_lang_String, (intptr_t) &SF_nro_mResources_make_shortcut, "Ljava/lang/String;", 9 },
	{ "into_place", &class_java_lang_String, (intptr_t) &SF_nro_mResources_into_place, "Ljava/lang/String;", 9 },
	{ "move_to_chest", &class_java_lang_String, (intptr_t) &SF_nro_mResources_move_to_chest, "Ljava/lang/String;", 9 },
	{ "move_to_chest2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_move_to_chest2, "Ljava/lang/String;", 9 },
	{ "saying", &class_java_lang_String, (intptr_t) &SF_nro_mResources_saying, "Ljava/lang/String;", 9 },
	{ "miss", &class_java_lang_String, (intptr_t) &SF_nro_mResources_miss, "Ljava/lang/String;", 9 },
	{ "donate", &class_java_lang_String, (intptr_t) &SF_nro_mResources_donate, "Ljava/lang/String;", 9 },
	{ "receive", &class_java_lang_String, (intptr_t) &SF_nro_mResources_receive, "Ljava/lang/String;", 9 },
	{ "press_twice", &class_java_lang_String, (intptr_t) &SF_nro_mResources_press_twice, "Ljava/lang/String;", 9 },
	{ "can_harvest", &class_java_lang_String, (intptr_t) &SF_nro_mResources_can_harvest, "Ljava/lang/String;", 9 },
	{ "do_accept_qwerty", &class_java_lang_String, (intptr_t) &SF_nro_mResources_do_accept_qwerty, "Ljava/lang/String;", 9 },
	{ "do_accept", &class_java_lang_String, (intptr_t) &SF_nro_mResources_do_accept, "Ljava/lang/String;", 9 },
	{ "plsRestartGame", &class_java_lang_String, (intptr_t) &SF_nro_mResources_plsRestartGame, "Ljava/lang/String;", 9 },
	{ "is_online", &class_java_lang_String, (intptr_t) &SF_nro_mResources_is_online, "Ljava/lang/String;", 9 },
	{ "is_offline", &class_java_lang_String, (intptr_t) &SF_nro_mResources_is_offline, "Ljava/lang/String;", 9 },
	{ "make_friend", &class_java_lang_String, (intptr_t) &SF_nro_mResources_make_friend, "Ljava/lang/String;", 9 },
	{ "chat_player", &class_java_lang_String, (intptr_t) &SF_nro_mResources_chat_player, "Ljava/lang/String;", 9 },
	{ "chat_with", &class_java_lang_String, (intptr_t) &SF_nro_mResources_chat_with, "Ljava/lang/String;", 9 },
	{ "clan_capsuledonate", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_capsuledonate, "Ljava/lang/String;", 9 },
	{ "clan_capsuleself", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_capsuleself, "Ljava/lang/String;", 9 },
	{ "clan_point", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_point, "Ljava/lang/String;", 9 },
	{ "give_pea", &class_java_lang_String, (intptr_t) &SF_nro_mResources_give_pea, "Ljava/lang/String;", 9 },
	{ "receive_pea", &class_java_lang_String, (intptr_t) &SF_nro_mResources_receive_pea, "Ljava/lang/String;", 9 },
	{ "request_pea", &class_java_lang_String, (intptr_t) &SF_nro_mResources_request_pea, "Ljava/lang/String;", 9 },
	{ "time", &class_java_lang_String, (intptr_t) &SF_nro_mResources_time, "Ljava/lang/String;", 9 },
	{ "received", &class_java_lang_String, (intptr_t) &SF_nro_mResources_received, "Ljava/lang/String;", 9 },
	{ "power", &class_java_lang_String, (intptr_t) &SF_nro_mResources_power, "Ljava/lang/String;", 9 },
	{ "join_date", &class_java_lang_String, (intptr_t) &SF_nro_mResources_join_date, "Ljava/lang/String;", 9 },
	{ "clan_leader", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_leader, "Ljava/lang/String;", 9 },
	{ "clan_coleader", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_coleader, "Ljava/lang/String;", 9 },
	{ "power_point", &class_java_lang_String, (intptr_t) &SF_nro_mResources_power_point, "Ljava/lang/String;", 9 },
	{ "member", &class_java_lang_String, (intptr_t) &SF_nro_mResources_member, "Ljava/lang/String;", 9 },
	{ "memberr", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_memberr, "[Ljava/lang/String;", 9 },
	{ "chatClan", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_chatClan, "[Ljava/lang/String;", 9 },
	{ "leaveClan", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_leaveClan, "[Ljava/lang/String;", 9 },
	{ "createClan", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_createClan, "[Ljava/lang/String;", 9 },
	{ "findClan", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_findClan, "[Ljava/lang/String;", 9 },
	{ "khau_hieuu", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_khau_hieuu, "[Ljava/lang/String;", 9 },
	{ "bieu_tuongg", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_bieu_tuongg, "[Ljava/lang/String;", 9 },
	{ "request_pea2", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_request_pea2, "[Ljava/lang/String;", 9 },
	{ "level", &class_java_lang_String, (intptr_t) &SF_nro_mResources_level, "Ljava/lang/String;", 9 },
	{ "clan_birthday", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_birthday, "Ljava/lang/String;", 9 },
	{ "clan_list", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_list, "Ljava/lang/String;", 9 },
	{ "not_join_clan", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_join_clan, "Ljava/lang/String;", 9 },
	{ "clanEmpty", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_mResources_clanEmpty, "[Ljava/lang/String;", 9 },
	{ "input_clan_name", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_clan_name, "Ljava/lang/String;", 9 },
	{ "clan_name", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_name, "Ljava/lang/String;", 9 },
	{ "chat_clan", &class_java_lang_String, (intptr_t) &SF_nro_mResources_chat_clan, "Ljava/lang/String;", 9 },
	{ "input_clan_name_to_create", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_clan_name_to_create, "Ljava/lang/String;", 9 },
	{ "input_clan_slogan", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_clan_slogan, "Ljava/lang/String;", 9 },
	{ "do_u_want_join_clan", &class_java_lang_String, (intptr_t) &SF_nro_mResources_do_u_want_join_clan, "Ljava/lang/String;", 9 },
	{ "select_clan_icon", &class_java_lang_String, (intptr_t) &SF_nro_mResources_select_clan_icon, "Ljava/lang/String;", 9 },
	{ "request_join_clan", &class_java_lang_String, (intptr_t) &SF_nro_mResources_request_join_clan, "Ljava/lang/String;", 9 },
	{ "view_clan_member", &class_java_lang_String, (intptr_t) &SF_nro_mResources_view_clan_member, "Ljava/lang/String;", 9 },
	{ "create_clan_co_leader", &class_java_lang_String, (intptr_t) &SF_nro_mResources_create_clan_co_leader, "Ljava/lang/String;", 9 },
	{ "create_clan_leader", &class_java_lang_String, (intptr_t) &SF_nro_mResources_create_clan_leader, "Ljava/lang/String;", 9 },
	{ "disable_clan_mastership", &class_java_lang_String, (intptr_t) &SF_nro_mResources_disable_clan_mastership, "Ljava/lang/String;", 9 },
	{ "kick_clan_mem", &class_java_lang_String, (intptr_t) &SF_nro_mResources_kick_clan_mem, "Ljava/lang/String;", 9 },
	{ "clan_name_blank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_name_blank, "Ljava/lang/String;", 9 },
	{ "clan_slogan_blank", &class_java_lang_String, (intptr_t) &SF_nro_mResources_clan_slogan_blank, "Ljava/lang/String;", 9 },
	{ "cannot_find_clan", &class_java_lang_String, (intptr_t) &SF_nro_mResources_cannot_find_clan, "Ljava/lang/String;", 9 },
	{ "ago", &class_java_lang_String, (intptr_t) &SF_nro_mResources_ago, "Ljava/lang/String;", 9 },
	{ "findingClan", &class_java_lang_String, (intptr_t) &SF_nro_mResources_findingClan, "Ljava/lang/String;", 9 },
	{ "trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_trade, "Ljava/lang/String;", 9 },
	{ "not_lock_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_lock_trade, "Ljava/lang/String;", 9 },
	{ "not_lock_trade_upper", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_lock_trade_upper, "Ljava/lang/String;", 9 },
	{ "locked_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_locked_trade, "Ljava/lang/String;", 9 },
	{ "locked_trade_upper", &class_java_lang_String, (intptr_t) &SF_nro_mResources_locked_trade_upper, "Ljava/lang/String;", 9 },
	{ "lock_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_lock_trade, "Ljava/lang/String;", 9 },
	{ "wait_opp_lock_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_wait_opp_lock_trade, "Ljava/lang/String;", 9 },
	{ "press_done", &class_java_lang_String, (intptr_t) &SF_nro_mResources_press_done, "Ljava/lang/String;", 9 },
	{ "done", &class_java_lang_String, (intptr_t) &SF_nro_mResources_done, "Ljava/lang/String;", 9 },
	{ "opponent", &class_java_lang_String, (intptr_t) &SF_nro_mResources_opponent, "Ljava/lang/String;", 9 },
	{ "you", &class_java_lang_String, (intptr_t) &SF_nro_mResources_you, "Ljava/lang/String;", 9 },
	{ "mlock", &class_java_lang_String, (intptr_t) &SF_nro_mResources_mlock, "Ljava/lang/String;", 9 },
	{ "money_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_money_trade, "Ljava/lang/String;", 9 },
	{ "GETOUT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_GETOUT, "Ljava/lang/String;", 9 },
	{ "MOVEOUT", &class_java_lang_String, (intptr_t) &SF_nro_mResources_MOVEOUT, "Ljava/lang/String;", 9 },
	{ "MOVEFORPET", &class_java_lang_String, (intptr_t) &SF_nro_mResources_MOVEFORPET, "Ljava/lang/String;", 9 },
	{ "SALE", &class_java_lang_String, (intptr_t) &SF_nro_mResources_SALE, "Ljava/lang/String;", 9 },
	{ "input_money_to_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_money_to_trade, "Ljava/lang/String;", 9 },
	{ "input_money", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_money, "Ljava/lang/String;", 9 },
	{ "input_money_wrong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_money_wrong, "Ljava/lang/String;", 9 },
	{ "not_enough_money", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_enough_money, "Ljava/lang/String;", 9 },
	{ "input_quantity_to_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_quantity_to_trade, "Ljava/lang/String;", 9 },
	{ "input_quantity", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_quantity, "Ljava/lang/String;", 9 },
	{ "input_quantity_wrong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_quantity_wrong, "Ljava/lang/String;", 9 },
	{ "already_has_item", &class_java_lang_String, (intptr_t) &SF_nro_mResources_already_has_item, "Ljava/lang/String;", 9 },
	{ "unlock_item_to_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_unlock_item_to_trade, "Ljava/lang/String;", 9 },
	{ "root", &class_java_lang_String, (intptr_t) &SF_nro_mResources_root, "Ljava/lang/String;", 9 },
	{ "need", &class_java_lang_String, (intptr_t) &SF_nro_mResources_need, "Ljava/lang/String;", 9 },
	{ "need_upper", &class_java_lang_String, (intptr_t) &SF_nro_mResources_need_upper, "Ljava/lang/String;", 9 },
	{ "free", &class_java_lang_String, (intptr_t) &SF_nro_mResources_free, "Ljava/lang/String;", 9 },
	{ "select_item", &class_java_lang_String, (intptr_t) &SF_nro_mResources_select_item, "Ljava/lang/String;", 9 },
	{ "random", &class_java_lang_String, (intptr_t) &SF_nro_mResources_random, "Ljava/lang/String;", 9 },
	{ "say_hello", &class_java_lang_String, (intptr_t) &SF_nro_mResources_say_hello, "Ljava/lang/String;", 9 },
	{ "say_wat_do_u_want_to_buy", &class_java_lang_String, (intptr_t) &SF_nro_mResources_say_wat_do_u_want_to_buy, "Ljava/lang/String;", 9 },
	{ "say_wat_do_u_want_to_buy2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_say_wat_do_u_want_to_buy2, "Ljava/lang/String;", 9 },
	{ "do_u_sure_to_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_do_u_sure_to_trade, "Ljava/lang/String;", 9 },
	{ "learn_with", &class_java_lang_String, (intptr_t) &SF_nro_mResources_learn_with, "Ljava/lang/String;", 9 },
	{ "buy_with", &class_java_lang_String, (intptr_t) &SF_nro_mResources_buy_with, "Ljava/lang/String;", 9 },
	{ "can_not_do_when_die", &class_java_lang_String, (intptr_t) &SF_nro_mResources_can_not_do_when_die, "Ljava/lang/String;", 9 },
	{ "use_for_combine", &class_java_lang_String, (intptr_t) &SF_nro_mResources_use_for_combine, "Ljava/lang/String;", 9 },
	{ "use_for_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_use_for_trade, "Ljava/lang/String;", 9 },
	{ "not_enough_luong_world_channel", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_enough_luong_world_channel, "Ljava/lang/String;", 9 },
	{ "world_channel_5_luong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_world_channel_5_luong, "Ljava/lang/String;", 9 },
	{ "want_to_trade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_want_to_trade, "Ljava/lang/String;", 9 },
	{ "hasJustUpgrade1", &class_java_lang_String, (intptr_t) &SF_nro_mResources_hasJustUpgrade1, "Ljava/lang/String;", 9 },
	{ "hasJustUpgrade", &class_java_lang_String, (intptr_t) &SF_nro_mResources_hasJustUpgrade, "Ljava/lang/String;", 9 },
	{ "potential_to_learn", &class_java_lang_String, (intptr_t) &SF_nro_mResources_potential_to_learn, "Ljava/lang/String;", 9 },
	{ "potential_point", &class_java_lang_String, (intptr_t) &SF_nro_mResources_potential_point, "Ljava/lang/String;", 9 },
	{ "achievement_point", &class_java_lang_String, (intptr_t) &SF_nro_mResources_achievement_point, "Ljava/lang/String;", 9 },
	{ "increase", &class_java_lang_String, (intptr_t) &SF_nro_mResources_increase, "Ljava/lang/String;", 9 },
	{ "increase_upper", &class_java_lang_String, (intptr_t) &SF_nro_mResources_increase_upper, "Ljava/lang/String;", 9 },
	{ "not_enough_potential_point1", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_enough_potential_point1, "Ljava/lang/String;", 9 },
	{ "not_enough_potential_point2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_enough_potential_point2, "Ljava/lang/String;", 9 },
	{ "use_potential_point_for1", &class_java_lang_String, (intptr_t) &SF_nro_mResources_use_potential_point_for1, "Ljava/lang/String;", 9 },
	{ "use_potential_point_for2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_use_potential_point_for2, "Ljava/lang/String;", 9 },
	{ "for_HP", &class_java_lang_String, (intptr_t) &SF_nro_mResources_for_HP, "Ljava/lang/String;", 9 },
	{ "for_KI", &class_java_lang_String, (intptr_t) &SF_nro_mResources_for_KI, "Ljava/lang/String;", 9 },
	{ "for_hit_point", &class_java_lang_String, (intptr_t) &SF_nro_mResources_for_hit_point, "Ljava/lang/String;", 9 },
	{ "for_crit", &class_java_lang_String, (intptr_t) &SF_nro_mResources_for_crit, "Ljava/lang/String;", 9 },
	{ "can_buy_from_Uron1", &class_java_lang_String, (intptr_t) &SF_nro_mResources_can_buy_from_Uron1, "Ljava/lang/String;", 9 },
	{ "can_buy_from_Uron2", &class_java_lang_String, (intptr_t) &SF_nro_mResources_can_buy_from_Uron2, "Ljava/lang/String;", 9 },
	{ "can_buy_from_Uron3", &class_java_lang_String, (intptr_t) &SF_nro_mResources_can_buy_from_Uron3, "Ljava/lang/String;", 9 },
	{ "HP", &class_java_lang_String, (intptr_t) &SF_nro_mResources_HP, "Ljava/lang/String;", 9 },
	{ "KI", &class_java_lang_String, (intptr_t) &SF_nro_mResources_KI, "Ljava/lang/String;", 9 },
	{ "hit_point", &class_java_lang_String, (intptr_t) &SF_nro_mResources_hit_point, "Ljava/lang/String;", 9 },
	{ "armor", &class_java_lang_String, (intptr_t) &SF_nro_mResources_armor, "Ljava/lang/String;", 9 },
	{ "vitality", &class_java_lang_String, (intptr_t) &SF_nro_mResources_vitality, "Ljava/lang/String;", 9 },
	{ "critical", &class_java_lang_String, (intptr_t) &SF_nro_mResources_critical, "Ljava/lang/String;", 9 },
	{ "critdame", &class_java_lang_String, (intptr_t) &SF_nro_mResources_critdame, "Ljava/lang/String;", 9 },
	{ "giamsatthuong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_giamsatthuong, "Ljava/lang/String;", 9 },
	{ "cap_do", &class_java_lang_String, (intptr_t) &SF_nro_mResources_cap_do, "Ljava/lang/String;", 9 },
	{ "KI_consume", &class_java_lang_String, (intptr_t) &SF_nro_mResources_KI_consume, "Ljava/lang/String;", 9 },
	{ "cooldown", &class_java_lang_String, (intptr_t) &SF_nro_mResources_cooldown, "Ljava/lang/String;", 9 },
	{ "max_level_reach", &class_java_lang_String, (intptr_t) &SF_nro_mResources_max_level_reach, "Ljava/lang/String;", 9 },
	{ "next_level_require", &class_java_lang_String, (intptr_t) &SF_nro_mResources_next_level_require, "Ljava/lang/String;", 9 },
	{ "potential", &class_java_lang_String, (intptr_t) &SF_nro_mResources_potential, "Ljava/lang/String;", 9 },
	{ "not_learn", &class_java_lang_String, (intptr_t) &SF_nro_mResources_not_learn, "Ljava/lang/String;", 9 },
	{ "learn_require", &class_java_lang_String, (intptr_t) &SF_nro_mResources_learn_require, "Ljava/lang/String;", 9 },
	{ "learn", &class_java_lang_String, (intptr_t) &SF_nro_mResources_learn, "Ljava/lang/String;", 9 },
	{ "to_gain_20hp", &class_java_lang_String, (intptr_t) &SF_nro_mResources_to_gain_20hp, "Ljava/lang/String;", 9 },
	{ "to_gain_20mp", &class_java_lang_String, (intptr_t) &SF_nro_mResources_to_gain_20mp, "Ljava/lang/String;", 9 },
	{ "to_gain_1pow", &class_java_lang_String, (intptr_t) &SF_nro_mResources_to_gain_1pow, "Ljava/lang/String;", 9 },
	{ "hairStyleName", getArrayClass(&class_java_lang_String, 2), (intptr_t) &SF_nro_mResources_hairStyleName, "[[Ljava/lang/String;", 9 },
	{ "quest_place", &class_java_lang_String, (intptr_t) &SF_nro_mResources_quest_place, "Ljava/lang/String;", 9 },
	{ "no_mission", &class_java_lang_String, (intptr_t) &SF_nro_mResources_no_mission, "Ljava/lang/String;", 9 },
	{ "reward_mission", &class_java_lang_String, (intptr_t) &SF_nro_mResources_reward_mission, "Ljava/lang/String;", 9 },
	{ "achievement_mission", &class_java_lang_String, (intptr_t) &SF_nro_mResources_achievement_mission, "Ljava/lang/String;", 9 },
	{ "trangbi", &class_java_lang_String, (intptr_t) &SF_nro_mResources_trangbi, "Ljava/lang/String;", 9 },
	{ "wat_do_u_want", &class_java_lang_String, (intptr_t) &SF_nro_mResources_wat_do_u_want, "Ljava/lang/String;", 9 },
	{ "off", &class_java_lang_String, (intptr_t) &SF_nro_mResources_off, "Ljava/lang/String;", 9 },
	{ "on", &class_java_lang_String, (intptr_t) &SF_nro_mResources_on, "Ljava/lang/String;", 9 },
	{ "select_map", &class_java_lang_String, (intptr_t) &SF_nro_mResources_select_map, "Ljava/lang/String;", 9 },
	{ "onPlease", &class_java_lang_String, (intptr_t) &SF_nro_mResources_onPlease, "Ljava/lang/String;", 9 },
	{ "offPlease", &class_java_lang_String, (intptr_t) &SF_nro_mResources_offPlease, "Ljava/lang/String;", 9 },
	{ "language", &class_byte, (intptr_t) &SF_nro_mResources_language, "B", 9 },
	{ "turnOnSound", &class_java_lang_String, (intptr_t) &SF_nro_mResources_turnOnSound, "Ljava/lang/String;", 9 },
	{ "turnOffSound", &class_java_lang_String, (intptr_t) &SF_nro_mResources_turnOffSound, "Ljava/lang/String;", 9 },
	{ "no_enemy", &class_java_lang_String, (intptr_t) &SF_nro_mResources_no_enemy, "Ljava/lang/String;", 9 },
	{ "kigui", &class_java_lang_String, (intptr_t) &SF_nro_mResources_kigui, "Ljava/lang/String;", 9 },
	{ "kiguiXu", &class_java_lang_String, (intptr_t) &SF_nro_mResources_kiguiXu, "Ljava/lang/String;", 9 },
	{ "kiguiLuong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_kiguiLuong, "Ljava/lang/String;", 9 },
	{ "kiguiXuchat", &class_java_lang_String, (intptr_t) &SF_nro_mResources_kiguiXuchat, "Ljava/lang/String;", 9 },
	{ "kiguiLuongchat", &class_java_lang_String, (intptr_t) &SF_nro_mResources_kiguiLuongchat, "Ljava/lang/String;", 9 },
	{ "huykigui", &class_java_lang_String, (intptr_t) &SF_nro_mResources_huykigui, "Ljava/lang/String;", 9 },
	{ "nhantien", &class_java_lang_String, (intptr_t) &SF_nro_mResources_nhantien, "Ljava/lang/String;", 9 },
	{ "dangban", &class_java_lang_String, (intptr_t) &SF_nro_mResources_dangban, "Ljava/lang/String;", 9 },
	{ "daban", &class_java_lang_String, (intptr_t) &SF_nro_mResources_daban, "Ljava/lang/String;", 9 },
	{ "upTop", &class_java_lang_String, (intptr_t) &SF_nro_mResources_upTop, "Ljava/lang/String;", 9 },
	{ "page", &class_java_lang_String, (intptr_t) &SF_nro_mResources_page, "Ljava/lang/String;", 9 },
	{ "getDown", &class_java_lang_String, (intptr_t) &SF_nro_mResources_getDown, "Ljava/lang/String;", 9 },
	{ "getUp", &class_java_lang_String, (intptr_t) &SF_nro_mResources_getUp, "Ljava/lang/String;", 9 },
	{ "notYetSell", &class_java_lang_String, (intptr_t) &SF_nro_mResources_notYetSell, "Ljava/lang/String;", 9 },
	{ "charger", &class_java_lang_String, (intptr_t) &SF_nro_mResources_charger, "Ljava/lang/String;", 9 },
	{ "finishBomong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_finishBomong, "Ljava/lang/String;", 9 },
	{ "note", &class_java_lang_String, (intptr_t) &SF_nro_mResources_note, "Ljava/lang/String;", 9 },
	{ "regNote", &class_java_lang_String, (intptr_t) &SF_nro_mResources_regNote, "Ljava/lang/String;", 9 },
	{ "inventory_Pass", &class_java_lang_String, (intptr_t) &SF_nro_mResources_inventory_Pass, "Ljava/lang/String;", 9 },
	{ "input_Inventory_Pass", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_Inventory_Pass, "Ljava/lang/String;", 9 },
	{ "input_Inventory_Pass_wrong", &class_java_lang_String, (intptr_t) &SF_nro_mResources_input_Inventory_Pass_wrong, "Ljava/lang/String;", 9 },
	{ "remain", &class_java_lang_String, (intptr_t) &SF_nro_mResources_remain, "Ljava/lang/String;", 9 },
	{ "fastQuestion", &class_java_lang_String, (intptr_t) &SF_nro_mResources_fastQuestion, "Ljava/lang/String;", 9 },
	{ "taidulieudechoi", &class_java_lang_String, (intptr_t) &SF_nro_mResources_taidulieudechoi, "Ljava/lang/String;", 9 },
	{ "huy", &class_java_lang_String, (intptr_t) &SF_nro_mResources_huy, "Ljava/lang/String;", 9 },
	{ "taidulieu", &class_java_lang_String, (intptr_t) &SF_nro_mResources_taidulieu, "Ljava/lang/String;", 9 },
	{ "xoadulieu", &class_java_lang_String, (intptr_t) &SF_nro_mResources_xoadulieu, "Ljava/lang/String;", 9 },
	{ "deletaDataNote", &class_java_lang_String, (intptr_t) &SF_nro_mResources_deletaDataNote, "Ljava/lang/String;", 9 },
	{ "playNew", &class_java_lang_String, (intptr_t) &SF_nro_mResources_playNew, "Ljava/lang/String;", 9 },
	{ "playAcc", &class_java_lang_String, (intptr_t) &SF_nro_mResources_playAcc, "Ljava/lang/String;", 9 },
	{ "vuilongnhapduthongtin", &class_java_lang_String, (intptr_t) &SF_nro_mResources_vuilongnhapduthongtin, "Ljava/lang/String;", 9 },
	{ "nhanngoc", &class_java_lang_String, (intptr_t) &SF_nro_mResources_nhanngoc, "Ljava/lang/String;", 9 },
	{ "fusion", &class_java_lang_String, (intptr_t) &SF_nro_mResources_fusion, "Ljava/lang/String;", 9 },
	{ "fusionForever", &class_java_lang_String, (intptr_t) &SF_nro_mResources_fusionForever, "Ljava/lang/String;", 9 },
	{ "den", &class_java_lang_String, (intptr_t) &SF_nro_mResources_den, "Ljava/lang/String;", 9 },
	{ "potential_to_learn_tuyetKi", &class_java_lang_String, (intptr_t) &SF_nro_mResources_potential_to_learn_tuyetKi, "Ljava/lang/String;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_mResources, 0, "()V", 1 },
	{ "loadLanguague", (intptr_t) SM_nro_mResources_loadLanguague_byte, 0, "(B)V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_mResources, 0, "()V", 8 },
};

Class class_nro_mResources{
		.nativeName = (intptr_t) "nro/mResources",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_mResources),
		.classVtable = (intptr_t) vtable_nro_mResources,
		.staticInitializer = (intptr_t) clinit_nro_mResources,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_mResources,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 378,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_mResources = registerClass(&class_nro_mResources);

}

