#include "nro/Char.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Random.h"
#include "java/util/Vector.h"
#include "nro/AutoTrainMenu.h"
#include "nro/SmallImage.h"
#include "nro/ChatPopup.h"
#include "nro/Menu.h"
#include "nro/ItemMap.h"
#include "javax/microedition/lcdui/Image.h"
#include "lib/sound/SoundMn.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "java/lang/Throwable.h"
#include "nro/TileMap.h"
#include "nro/Archivement.h"
#include "java/lang/Exception.h"
#include "nro/SkillTemplate.h"
#include "nro/NpcTemplate.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "nro/ItemTemplate.h"
#include "nro/BachTuoc.h"
#include "nro/ServerEffect.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/EffectChar.h"
#include "nro/Arrowpaint.h"
#include "nro/Res.h"
#include "nro/Skill.h"
#include "nro/Waypoint.h"
#include "nro/NinjaUtil.h"
#include "nro/MagicTree.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "nro/Clan.h"
#include "java/lang/System.h"
#include "nro/ClanImage.h"
#include "nro/GameScr.h"
#include "nro/NClass.h"
#include "nro/EffectPaint.h"
#include "nro/ItemOption.h"
#include "main/GameCanvas.h"
#include "nro/BigBoss.h"
#include "nro/Service.h"
#include "nro/Panel.h"
#include "nro/EffectCharPaint.h"
#include "nro/StaticObj.h"
#include "java/lang/Short.h"
#include "java/io/InputStream.h"
#include "lib/Time.h"
#include "nro/PopUpYesNo.h"
#include "java/lang/String.h"
#include "nro/FrameImage.h"
#include "nro/Mob.h"
#include "nro/InfoMe.h"
#include "nro/PartImage.h"
#include "nro/ItemObject.h"
#include "nro/Info.h"
#include "nro/SkillInfoPaint.h"
#include "nro/PlayerDart.h"
#include "nro/Point.h"
#include "nro/PKFlag.h"
#include "lib/mSystem.h"
#include "java/lang/Math.h"
#include "lib/mFont.h"
#include "nro/Hint.h"
#include "nro/MovePoint.h"
#include "java/util/Hashtable.h"
#include "nro/BigBoss2.h"
#include "nro/InfoDlg.h"
#include "nro/mHashTable.h"
#include "nro/EffectData.h"
#include "nro/Effect.h"
#include "nro/BachTuoc2.h"
#include "nro/PetFollow.h"
#include "nro/ItemOptionTemplate.h"
#include "nro/MobTemplate.h"
#include "nro/Npc.h"
#include "nro/IMapObject.h"
#include "nro/Small.h"
#include "nro/Arrow.h"
#include "java/lang/Class.h"
#include "nro/Item.h"
#include "nro/SkillPaint.h"

extern "C" {

jobject SF_nro_Char_chatPopup;
jobject SF_nro_Char_idHead;
jobject SF_nro_Char_idAvatar;
jobject SF_nro_Char_eyeTraiDat;
jobject SF_nro_Char_eyeNamek;
jobject SF_nro_Char_vItemTime;
jshort SF_nro_Char_ID_NEW_MOUNT;
jobject SF_nro_Char_imgMount_TD;
jobject SF_nro_Char_imgMount_NM;
jobject SF_nro_Char_imgMount_NM_1;
jobject SF_nro_Char_imgMount_XD;
jobject SF_nro_Char_imgMount_TD_VIP;
jobject SF_nro_Char_imgMount_NM_VIP;
jobject SF_nro_Char_imgMount_NM_1_VIP;
jobject SF_nro_Char_imgMount_XD_VIP;
jobject SF_nro_Char_imgEventMount;
jobject SF_nro_Char_imgEventMountWing;
jobject SF_nro_Char_CharInfo;
jobject SF_nro_Char_myChar;
jobject SF_nro_Char_myPet;
jbool SF_nro_Char_ischangingMap;
jbool SF_nro_Char_isLockKey;
jbool SF_nro_Char_isLoadingMap;
jbool SF_nro_Char_isManualFocus;
jobject SF_nro_Char_fraRedEye;
jobject SF_nro_Char_Arr_Head_2Fr;
jbool SF_nro_Char_isPaintAura;
jbool SF_nro_Char_isPaintAura2;
jobject SF_nro_Char_hatInfo;
jobject SF_nro_Char_Arr_Head_FlyMove;

void mark_nro_Char(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_Char_chatPopup)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_chatPopup)->clazz)->markFunction)((jobject) SF_nro_Char_chatPopup, mark, depth + 1);
		if (SF_nro_Char_idHead)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_idHead)->clazz)->markFunction)((jobject) SF_nro_Char_idHead, mark, depth + 1);
		if (SF_nro_Char_idAvatar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_idAvatar)->clazz)->markFunction)((jobject) SF_nro_Char_idAvatar, mark, depth + 1);
		if (SF_nro_Char_eyeTraiDat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_eyeTraiDat)->clazz)->markFunction)((jobject) SF_nro_Char_eyeTraiDat, mark, depth + 1);
		if (SF_nro_Char_eyeNamek)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_eyeNamek)->clazz)->markFunction)((jobject) SF_nro_Char_eyeNamek, mark, depth + 1);
		if (SF_nro_Char_vItemTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_vItemTime)->clazz)->markFunction)((jobject) SF_nro_Char_vItemTime, mark, depth + 1);
		if (SF_nro_Char_imgMount_TD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_TD)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_TD, mark, depth + 1);
		if (SF_nro_Char_imgMount_NM)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_NM)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_NM, mark, depth + 1);
		if (SF_nro_Char_imgMount_NM_1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_NM_1)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_NM_1, mark, depth + 1);
		if (SF_nro_Char_imgMount_XD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_XD)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_XD, mark, depth + 1);
		if (SF_nro_Char_imgMount_TD_VIP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_TD_VIP)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_TD_VIP, mark, depth + 1);
		if (SF_nro_Char_imgMount_NM_VIP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_NM_VIP)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_NM_VIP, mark, depth + 1);
		if (SF_nro_Char_imgMount_NM_1_VIP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_NM_1_VIP)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_NM_1_VIP, mark, depth + 1);
		if (SF_nro_Char_imgMount_XD_VIP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgMount_XD_VIP)->clazz)->markFunction)((jobject) SF_nro_Char_imgMount_XD_VIP, mark, depth + 1);
		if (SF_nro_Char_imgEventMount)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgEventMount)->clazz)->markFunction)((jobject) SF_nro_Char_imgEventMount, mark, depth + 1);
		if (SF_nro_Char_imgEventMountWing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_imgEventMountWing)->clazz)->markFunction)((jobject) SF_nro_Char_imgEventMountWing, mark, depth + 1);
		if (SF_nro_Char_CharInfo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_CharInfo)->clazz)->markFunction)((jobject) SF_nro_Char_CharInfo, mark, depth + 1);
		if (SF_nro_Char_myChar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_myChar)->clazz)->markFunction)((jobject) SF_nro_Char_myChar, mark, depth + 1);
		if (SF_nro_Char_myPet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_myPet)->clazz)->markFunction)((jobject) SF_nro_Char_myPet, mark, depth + 1);
		if (SF_nro_Char_fraRedEye)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_fraRedEye)->clazz)->markFunction)((jobject) SF_nro_Char_fraRedEye, mark, depth + 1);
		if (SF_nro_Char_Arr_Head_2Fr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_Arr_Head_2Fr)->clazz)->markFunction)((jobject) SF_nro_Char_Arr_Head_2Fr, mark, depth + 1);
		if (SF_nro_Char_hatInfo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_hatInfo)->clazz)->markFunction)((jobject) SF_nro_Char_hatInfo, mark, depth + 1);
		if (SF_nro_Char_Arr_Head_FlyMove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_Char_Arr_Head_FlyMove)->clazz)->markFunction)((jobject) SF_nro_Char_Arr_Head_FlyMove, mark, depth + 1);
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
	auto self = (nro_Char *) object;
	if (self->F_xuStr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xuStr)->clazz)->markFunction)((jobject) self->F_xuStr, mark, depth + 1);
	if (self->F_luongStr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_luongStr)->clazz)->markFunction)((jobject) self->F_luongStr, mark, depth + 1);
	if (self->F_luongKhoaStr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_luongKhoaStr)->clazz)->markFunction)((jobject) self->F_luongKhoaStr, mark, depth + 1);
	if (self->F_petFollow)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_petFollow)->clazz)->markFunction)((jobject) self->F_petFollow, mark, depth + 1);
	if (self->F_chatInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chatInfo)->clazz)->markFunction)((jobject) self->F_chatInfo, mark, depth + 1);
	if (self->F_cName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cName)->clazz)->markFunction)((jobject) self->F_cName, mark, depth + 1);
	if (self->F_clan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clan)->clazz)->markFunction)((jobject) self->F_clan, mark, depth + 1);
	if (self->F_cmdMenu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cmdMenu)->clazz)->markFunction)((jobject) self->F_cmdMenu, mark, depth + 1);
	if (self->F_nClass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nClass)->clazz)->markFunction)((jobject) self->F_nClass, mark, depth + 1);
	if (self->F_endMovePointCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endMovePointCommand)->clazz)->markFunction)((jobject) self->F_endMovePointCommand, mark, depth + 1);
	if (self->F_vSkill)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vSkill)->clazz)->markFunction)((jobject) self->F_vSkill, mark, depth + 1);
	if (self->F_vSkillFight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vSkillFight)->clazz)->markFunction)((jobject) self->F_vSkillFight, mark, depth + 1);
	if (self->F_vEff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vEff)->clazz)->markFunction)((jobject) self->F_vEff, mark, depth + 1);
	if (self->F_myskill)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_myskill)->clazz)->markFunction)((jobject) self->F_myskill, mark, depth + 1);
	if (self->F_taskMaint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_taskMaint)->clazz)->markFunction)((jobject) self->F_taskMaint, mark, depth + 1);
	if (self->F_arrArchive)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrArchive)->clazz)->markFunction)((jobject) self->F_arrArchive, mark, depth + 1);
	if (self->F_arrItemBag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrItemBag)->clazz)->markFunction)((jobject) self->F_arrItemBag, mark, depth + 1);
	if (self->F_arrItemBox)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrItemBox)->clazz)->markFunction)((jobject) self->F_arrItemBox, mark, depth + 1);
	if (self->F_arrItemBody)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrItemBody)->clazz)->markFunction)((jobject) self->F_arrItemBody, mark, depth + 1);
	if (self->F_arrPetSkill)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrPetSkill)->clazz)->markFunction)((jobject) self->F_arrPetSkill, mark, depth + 1);
	if (self->F_arrItemShop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arrItemShop)->clazz)->markFunction)((jobject) self->F_arrItemShop, mark, depth + 1);
	if (self->F_infoSpeacialSkill)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_infoSpeacialSkill)->clazz)->markFunction)((jobject) self->F_infoSpeacialSkill, mark, depth + 1);
	if (self->F_imgSpeacialSkill)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgSpeacialSkill)->clazz)->markFunction)((jobject) self->F_imgSpeacialSkill, mark, depth + 1);
	if (self->F_mobFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mobFocus)->clazz)->markFunction)((jobject) self->F_mobFocus, mark, depth + 1);
	if (self->F_mobMe)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mobMe)->clazz)->markFunction)((jobject) self->F_mobMe, mark, depth + 1);
	if (self->F_npcFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_npcFocus)->clazz)->markFunction)((jobject) self->F_npcFocus, mark, depth + 1);
	if (self->F_charFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charFocus)->clazz)->markFunction)((jobject) self->F_charFocus, mark, depth + 1);
	if (self->F_itemFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemFocus)->clazz)->markFunction)((jobject) self->F_itemFocus, mark, depth + 1);
	if (self->F_focus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focus)->clazz)->markFunction)((jobject) self->F_focus, mark, depth + 1);
	if (self->F_attMobs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attMobs)->clazz)->markFunction)((jobject) self->F_attMobs, mark, depth + 1);
	if (self->F_attChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attChars)->clazz)->markFunction)((jobject) self->F_attChars, mark, depth + 1);
	if (self->F_moveFast)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moveFast)->clazz)->markFunction)((jobject) self->F_moveFast, mark, depth + 1);
	if (self->F_taskOrders)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_taskOrders)->clazz)->markFunction)((jobject) self->F_taskOrders, mark, depth + 1);
	if (self->F_strLevel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strLevel)->clazz)->markFunction)((jobject) self->F_strLevel, mark, depth + 1);
	if (self->F_currStrLevel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currStrLevel)->clazz)->markFunction)((jobject) self->F_currStrLevel, mark, depth + 1);
	if (self->F_FrameMount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_FrameMount)->clazz)->markFunction)((jobject) self->F_FrameMount, mark, depth + 1);
	if (self->F_vMovePoints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vMovePoints)->clazz)->markFunction)((jobject) self->F_vMovePoints, mark, depth + 1);
	if (self->F_strInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strInfo)->clazz)->markFunction)((jobject) self->F_strInfo, mark, depth + 1);
	if (self->F_currentMovePoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentMovePoint)->clazz)->markFunction)((jobject) self->F_currentMovePoint, mark, depth + 1);
	if (self->F_eProtect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eProtect)->clazz)->markFunction)((jobject) self->F_eProtect, mark, depth + 1);
	if (self->F_eDanhHieu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eDanhHieu)->clazz)->markFunction)((jobject) self->F_eDanhHieu, mark, depth + 1);
	if (self->F_move)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_move)->clazz)->markFunction)((jobject) self->F_move, mark, depth + 1);
	if (self->F_strMount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strMount)->clazz)->markFunction)((jobject) self->F_strMount, mark, depth + 1);
	if (self->F_eff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eff)->clazz)->markFunction)((jobject) self->F_eff, mark, depth + 1);
	if (self->F_effTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effTask)->clazz)->markFunction)((jobject) self->F_effTask, mark, depth + 1);
	if (self->F_eff0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eff0)->clazz)->markFunction)((jobject) self->F_eff0, mark, depth + 1);
	if (self->F_eff1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eff1)->clazz)->markFunction)((jobject) self->F_eff1, mark, depth + 1);
	if (self->F_eff2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eff2)->clazz)->markFunction)((jobject) self->F_eff2, mark, depth + 1);
	if (self->F_arr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arr)->clazz)->markFunction)((jobject) self->F_arr, mark, depth + 1);
	if (self->F_dart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dart)->clazz)->markFunction)((jobject) self->F_dart, mark, depth + 1);
	if (self->F_skillPaint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skillPaint)->clazz)->markFunction)((jobject) self->F_skillPaint, mark, depth + 1);
	if (self->F_skillPaintRandomPaint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skillPaintRandomPaint)->clazz)->markFunction)((jobject) self->F_skillPaintRandomPaint, mark, depth + 1);
	if (self->F_effPaints)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effPaints)->clazz)->markFunction)((jobject) self->F_effPaints, mark, depth + 1);
	if (self->F_imgHPtem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgHPtem)->clazz)->markFunction)((jobject) self->F_imgHPtem, mark, depth + 1);
	if (self->F_ph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ph)->clazz)->markFunction)((jobject) self->F_ph, mark, depth + 1);
	if (self->F_pl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pl)->clazz)->markFunction)((jobject) self->F_pl, mark, depth + 1);
	if (self->F_pb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pb)->clazz)->markFunction)((jobject) self->F_pb, mark, depth + 1);
	if (self->F_charHold)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charHold)->clazz)->markFunction)((jobject) self->F_charHold, mark, depth + 1);
	if (self->F_mobHold)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mobHold)->clazz)->markFunction)((jobject) self->F_mobHold, mark, depth + 1);
	if (self->F_vEffChar)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vEffChar)->clazz)->markFunction)((jobject) self->F_vEffChar, mark, depth + 1);
	if (self->F_frChopNhanh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frChopNhanh)->clazz)->markFunction)((jobject) self->F_frChopNhanh, mark, depth + 1);
	if (self->F_frChopCham)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frChopCham)->clazz)->markFunction)((jobject) self->F_frChopCham, mark, depth + 1);
	if (self->F_frEye)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_frEye)->clazz)->markFunction)((jobject) self->F_frEye, mark, depth + 1);
	if (self->F_strEffAura)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strEffAura)->clazz)->markFunction)((jobject) self->F_strEffAura, mark, depth + 1);
	if (self->F_fraEff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraEff)->clazz)->markFunction)((jobject) self->F_fraEff, mark, depth + 1);
	if (self->F_fraEffSub)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraEffSub)->clazz)->markFunction)((jobject) self->F_fraEffSub, mark, depth + 1);
	if (self->F_strEff_Set_Item)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strEff_Set_Item)->clazz)->markFunction)((jobject) self->F_strEff_Set_Item, mark, depth + 1);
	if (self->F_fraHat_behind)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraHat_behind)->clazz)->markFunction)((jobject) self->F_fraHat_behind, mark, depth + 1);
	if (self->F_fraHat_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraHat_font)->clazz)->markFunction)((jobject) self->F_fraHat_font, mark, depth + 1);
	if (self->F_fraHat_behind_2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraHat_behind_2)->clazz)->markFunction)((jobject) self->F_fraHat_behind_2, mark, depth + 1);
	if (self->F_fraHat_font_2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraHat_font_2)->clazz)->markFunction)((jobject) self->F_fraHat_font_2, mark, depth + 1);
	if (self->F_strHat_behind)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strHat_behind)->clazz)->markFunction)((jobject) self->F_strHat_behind, mark, depth + 1);
	if (self->F_strHat_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strHat_font)->clazz)->markFunction)((jobject) self->F_strHat_font, mark, depth + 1);
	if (self->F_strNgang)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strNgang)->clazz)->markFunction)((jobject) self->F_strNgang, mark, depth + 1);
	if (self->F_fr_start)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fr_start)->clazz)->markFunction)((jobject) self->F_fr_start, mark, depth + 1);
	if (self->F_fr_atk)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fr_atk)->clazz)->markFunction)((jobject) self->F_fr_atk, mark, depth + 1);
	if (self->F_fr_end)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fr_end)->clazz)->markFunction)((jobject) self->F_fr_end, mark, depth + 1);
	if (self->F_targetDame)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetDame)->clazz)->markFunction)((jobject) self->F_targetDame, mark, depth + 1);
	if (self->F_fraDanhHieu)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraDanhHieu)->clazz)->markFunction)((jobject) self->F_fraDanhHieu, mark, depth + 1);
}

void M_nro_Char_applyCharLevelPercent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:applyCharLevelPercent", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(415);
	frame[1].l = (jlong(1));
	LINE_NUMBER(416);
	frame[3].l = (jlong(0));
	LINE_NUMBER(417);
	frame[5].i = (jint(0));
	LINE_NUMBER(419);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_exps;
	frame[6].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_7:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_8;
	{
	LINE_NUMBER(420);
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cPower;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_exps;
	if ((longCompare(temp0, ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[6].i))))) < 0) goto label_10;
	}
	{
	LINE_NUMBER(421);
	jint temp0 = frame[6].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_exps;
	if (temp0 != ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_12;
	}
	{
	LINE_NUMBER(422);
	frame[1].l = (jlong(1));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(424);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_exps;
	jlong temp0 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, ((frame[6].i) + (jint(1))));
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_exps;
	frame[1].l = (temp0 - ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[6].i))));
	}
label_14:;
	{
	LINE_NUMBER(427);
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cPower;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_exps;
	frame[3].l = (temp0 - ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[6].i))));
	LINE_NUMBER(428);
	frame[5].i = (frame[6].i);
	LINE_NUMBER(429);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(419);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(433);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel = (frame[5].i);
	LINE_NUMBER(434);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cLevelPercent = (jlong((jint((((frame[3].l) * (jlong(10000ll))) / (frame[1].l))))));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(436);
	goto label_18;
label_2:;
	LINE_NUMBER(435);
	INST_ASTORE(1);
label_18:;
	LINE_NUMBER(437);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_Char_getdxSkill_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getdxSkill", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	jint temp0 = (jint)((nro_Skill *) NULL_CHECK(sp[0].o))->F_dx;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_nro_Char_getdySkill_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getdySkill", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	jint temp0 = (jint)((nro_Skill *) NULL_CHECK(sp[0].o))->F_dy;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_Char_taskAction_boolean(jcontext ctx, jbool param0) {
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:taskAction", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_contentInfo;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_index));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(451);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)SM_nro_NinjaUtil_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(453);
	clinit_nro_Npc(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Npc);
	jint temp0 = jint(5);
	jint temp1 = jint(0);
	jint temp2 = -100;
	jint temp3 = -100;
	jint temp4 = jint(5);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_info1;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[1].o))->F_charId;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	init_nro_Npc_int_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK(sp[2].o))->F_cgender))), (jint(2)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(454);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_cx = (-100);
	LINE_NUMBER(455);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_cy = (-100);
	LINE_NUMBER(456);
	sp[0].o = frame[3].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_info1;
	sp[1].o = (jobject)((nro_InfoMe *) NULL_CHECK(sp[1].o))->F_charId;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_avatar = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK(sp[2].o))->F_cgender))), (jint(2))));
	LINE_NUMBER(457);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_charID = (jint(5));
	LINE_NUMBER(458);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(459);
	SM_nro_ChatPopup_addNextPopUpMultiLine_java_lang_String_nro_Npc(ctx, (frame[1].o), (frame[3].o));
	}
label_13:;
	LINE_NUMBER(461);
	goto label_3;
label_5:;
	{
	LINE_NUMBER(462);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_3:;
	{
	LINE_NUMBER(466);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isHaveSelectSkill = (jint(1));
	LINE_NUMBER(467);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TASKx "_j))));
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_taskMaint;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_NinjaUtil *) NULL_CHECK(sp[1].o))->F_taskId));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(468);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) > (jint(2))) goto label_17;
	}
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_canFly = (jint(0));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_canFly = (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) (jobject(nullptr));
	LINE_NUMBER(475);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_taskId) != 0) goto label_21;
	}
	{
	LINE_NUMBER(476);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_activeClick = (jint(0));
	LINE_NUMBER(477);
	clinit_nro_Hint(ctx);
	SF_nro_Hint_isCloseMap = (jint(0));
	LINE_NUMBER(478);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) (jobject(nullptr));
	LINE_NUMBER(479);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isHaveSelectSkill = (jint(0));
	LINE_NUMBER(480);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) (jobject(nullptr));
	LINE_NUMBER(481);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_index) >= (jint(4))) goto label_28;
	}
	{
	LINE_NUMBER(482);
	clinit_nro_MagicTree(ctx);
	SF_nro_MagicTree_isPaint = (jint(0));
	LINE_NUMBER(483);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaintRada = (jint(-1));
	}
label_28:;
	{
	LINE_NUMBER(486);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_index) != (jint(4))) goto label_31;
	}
	{
	LINE_NUMBER(487);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isPaintRada = (jint(1));
	LINE_NUMBER(488);
	clinit_nro_MagicTree(ctx);
	SF_nro_MagicTree_isPaint = (jint(1));
	}
label_31:;
	{
	LINE_NUMBER(491);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_index) < (jint(5))) goto label_21;
	}
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[1].o))->F_cmdFocus;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(496);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_taskId) != (jint(1))) goto label_35;
	}
	{
	LINE_NUMBER(497);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isHaveSelectSkill = (jint(1));
	}
label_35:;
	{
	LINE_NUMBER(500);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_taskId) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[1].o))->F_cmdFocus;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(502);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[1].o))->F_cmdMenu;
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	}
label_37:;
	{
	LINE_NUMBER(505);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_taskId) < 0) goto label_40;
	}
	{
	LINE_NUMBER(506);
	clinit_nro_Panel(ctx);
	SF_nro_Panel_isPaintMap = (jint(1));
	goto label_42;
	}
label_40:;
	{
	LINE_NUMBER(508);
	clinit_nro_Panel(ctx);
	SF_nro_Panel_isPaintMap = (jint(0));
	}
label_42:;
	{
	LINE_NUMBER(511);
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[2].o)))->F_taskId) >= (12)) goto label_43;
	}
	{
	LINE_NUMBER(512);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_mainTab1;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_mainTabName = (jref) sp[1].o;
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(514);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_mainTab2;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_mainTabName = (jref) sp[1].o;
	}
label_45:;
	{
	LINE_NUMBER(517);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_tabName;
	jint temp0 = jint(0);
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_panel;
	sp[1].o = (jobject)((nro_Panel *) NULL_CHECK(sp[1].o))->F_mainTabName;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(518);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	if (((jint)((nro_NinjaUtil *) NULL_CHECK(sp[0].o))->F_taskId) <= (10)) goto label_47;
	}
	{
	LINE_NUMBER(519);
	SM_nro_Rms_saveRMSString_java_lang_String_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"fake"_j))), (((jobject) createStringLiteral(ctx, u8"aa"_j))));
	}
label_47:;
	LINE_NUMBER(522);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_nro_Char_getStrLevel_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getStrLevel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strLevel;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"+"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cLevelPercent) / (jlong(100ll))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cLevelPercent) % (jlong(100ll))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"%"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(527);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 <= (23)) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"c\u1ea5p "_j))));
	if (temp0 < 0) goto label_2;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)SM_nro_Res_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"c\u1ea5p "_j))), (((jobject) createStringLiteral(ctx, u8"c"_j))));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jint M_nro_Char_avatarz_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:avatarz", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(535);
	frame[1].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(537);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_idHead;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(538);
	jint temp0 = frame[1].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_idHead;
	if (temp0 != ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[2].i)))) goto label_5;
	}
	{
	LINE_NUMBER(539);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_idAvatar;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[2].i)));
	}
label_5:;
	{
	LINE_NUMBER(537);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_nro_Char_setPowerInfo_java_lang_String_short_short_short(jcontext ctx, jobject self, jobject param0, jshort param1, jshort param2, jshort param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setPowerInfo", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(547);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_powerPoint = (frame[2].i);
	LINE_NUMBER(548);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_strInfo = (jref) (frame[1].o);
	LINE_NUMBER(549);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_maxPowerPoint = (frame[3].i);
	LINE_NUMBER(550);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_secondPower = (frame[4].i);
	LINE_NUMBER(551);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sc= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" max= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_currS = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_lastS = temp0;
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_addInfo_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:addInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chatInfo;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	clinit_nro_Info(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Info);
	init_nro_Info(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_chatInfo = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(560);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chatInfo;
	((func_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)), (checkCast(ctx, &class_nro_Char, (jobject(nullptr)))), (jint(0)));
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_Char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(563);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_rank = (jint(0));
	LINE_NUMBER(30);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = (24);
	LINE_NUMBER(31);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = (24);
	LINE_NUMBER(37);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(5));
	LINE_NUMBER(38);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	LINE_NUMBER(44);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed = (jint(4));
	LINE_NUMBER(63);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(67);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cw = (22);
	LINE_NUMBER(68);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch = (32);
	LINE_NUMBER(69);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw = (11);
	LINE_NUMBER(70);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh = (16);
	LINE_NUMBER(72);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_canFly = (jint(1));
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vSkill"_j))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_vSkill = (jref) sp[1].o;
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vSkillFight"_j))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_vSkillFight = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vEff char"_j))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_vEff = (jref) sp[1].o;
	LINE_NUMBER(90);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_paintName = (jint(1));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"focus"_j))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_focus = (jref) sp[1].o;
	LINE_NUMBER(113);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_testCharId = (-9999);
	LINE_NUMBER(114);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_killCharId = (-9999);
	LINE_NUMBER(117);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isShadown = (jint(1));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"taskOrders"_j))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_taskOrders = (jref) sp[1].o;
	LINE_NUMBER(126);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez = (jint(0));
	LINE_NUMBER(136);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount = (jint(0));
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (8));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (jint(1));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_FrameMount = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vMovePoints"_j))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_vMovePoints = (jref) sp[1].o;
	LINE_NUMBER(189);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_havePet = (jint(1));
	LINE_NUMBER(192);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect = (jref) (jobject(nullptr));
	LINE_NUMBER(193);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu = (jref) (jobject(nullptr));
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (15));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(2));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_move = (jref) sp[1].o;
	LINE_NUMBER(205);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_strMount = (jref) (((jobject) createStringLiteral(ctx, u8"mount_"_j)));
	LINE_NUMBER(206);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_headICON = (jint(-1));
	LINE_NUMBER(212);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEff = (jint(-1));
	LINE_NUMBER(213);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask = (jint(-1));
	LINE_NUMBER(226);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0 = (jref) (jobject(nullptr));
	LINE_NUMBER(227);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1 = (jref) (jobject(nullptr));
	LINE_NUMBER(228);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2 = (jref) (jobject(nullptr));
	LINE_NUMBER(229);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr = (jref) (jobject(nullptr));
	LINE_NUMBER(230);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart = (jref) (jobject(nullptr));
	LINE_NUMBER(231);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCreateDark = (jint(0));
	LINE_NUMBER(237);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isUseSkillAfterCharge = (jint(0));
	LINE_NUMBER(238);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyAndCharge = (jint(0));
	LINE_NUMBER(239);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStandAndCharge = (jint(0));
	LINE_NUMBER(241);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_chargeCount = (jint(0));
	LINE_NUMBER(244);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue = (jlong(0));
	LINE_NUMBER(248);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_len = (24);
	LINE_NUMBER(249);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_w_hp_bar = (24);
	LINE_NUMBER(255);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fBag = (jint(0));
	LINE_NUMBER(259);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cH_new = (32);
	LINE_NUMBER(261);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeFocusToMob = (jint(0));
	LINE_NUMBER(280);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_defFrom1000TiemNang = (jint(1));
	LINE_NUMBER(281);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_criticalFrom1000Tiemnang = (jint(1));
	LINE_NUMBER(286);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isWaitMonkey = (jint(0));
	LINE_NUMBER(291);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_danhHieuEff = (jint(1));
	LINE_NUMBER(292);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSetPos = (jint(0));
	LINE_NUMBER(293);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tpos = (jint(0));
	LINE_NUMBER(304);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_perCentMp = (100);
	LINE_NUMBER(306);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_headTemp = (jint(-1));
	LINE_NUMBER(307);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bodyTemp = (jint(-1));
	LINE_NUMBER(308);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_legTemp = (jint(-1));
	LINE_NUMBER(309);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bagTemp = (jint(-1));
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"vEff"_j))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_vEffChar = (jref) sp[1].o;
	LINE_NUMBER(312);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fChopmat = (jint(0));
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (34));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (30)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (31)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (32)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (33)) = (jint(-1));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_frChopNhanh = (jref) sp[1].o;
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (23));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (jint(-1));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_frChopCham = (jref) sp[1].o;
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (30));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (12)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (13)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (14)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (15)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (16)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (17)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (18)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (19)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (20)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (21)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (22)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (23)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (24)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (25)) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (26)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (27)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (28)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[1].o, (29)) = (jint(-1));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_frEye = (jref) sp[1].o;
	LINE_NUMBER(320);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fHead = (jint(0));
	LINE_NUMBER(321);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_strEffAura = (jref) (((jobject) createStringLiteral(ctx, u8"aura_"_j)));
	LINE_NUMBER(322);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff = (jint(-1));
	LINE_NUMBER(327);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_strEff_Set_Item = (jref) (((jobject) createStringLiteral(ctx, u8"set_eff_"_j)));
	LINE_NUMBER(328);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idEff_Set_Item = (jint(-1));
	LINE_NUMBER(333);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_strHat_behind = (jref) (((jobject) createStringLiteral(ctx, u8"hat_sau_"_j)));
	LINE_NUMBER(334);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_strHat_font = (jref) (((jobject) createStringLiteral(ctx, u8"hat_truoc_"_j)));
	LINE_NUMBER(335);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_strNgang = (jref) (((jobject) createStringLiteral(ctx, u8"ngang_"_j)));
	LINE_NUMBER(336);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idHat = (jint(-1));
	LINE_NUMBER(342);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_typeFrame = (jint(0));
	LINE_NUMBER(347);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW = (jint(0));
	LINE_NUMBER(348);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_stt = (jint(0));
	LINE_NUMBER(351);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMafuba = (jint(0));
	LINE_NUMBER(355);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraDanhHieu = (jref) (jobject(nullptr));
	LINE_NUMBER(564);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (6);
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Char_myCharz_R_nro_Char(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:myCharz", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(568);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(569);
	clinit_nro_Char(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[0].o);
	clinit_nro_Char(ctx);
	SF_nro_Char_myChar = sp[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_me = (jint(1));
	LINE_NUMBER(570);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cmtoChar = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(573);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_Char_myPetz_R_nro_Char(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:myPetz", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(577);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myPet;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(578);
	clinit_nro_Char(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[0].o);
	clinit_nro_Char(ctx);
	SF_nro_Char_myPet = sp[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_me = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(581);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myPet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_nro_Char_clearMyChar(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:clearMyChar", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(585);
	clinit_nro_Char(ctx);
	SF_nro_Char_myChar = (jobject(nullptr));
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_boxSort(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:boxSort", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(590);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"items"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(594);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_isUpToUp) == 0) goto label_9;
	}
	{
	if (((jint)((nro_Item *) NULL_CHECK((frame[3].o)))->F_isExpires) != 0) goto label_9;
	}
	{
	LINE_NUMBER(596);
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, (frame[1].o), (frame[3].o));
	}
label_9:;
	{
	LINE_NUMBER(594);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(600);
	frame[2].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Item, sp[0].o);
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(602);
	frame[4].i = ((frame[2].i) + (jint(1)));
	}
label_17:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_15;
	}
	{
	LINE_NUMBER(604);
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = checkCast(ctx, &class_nro_Item, sp[0].o);
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[3].o)))->F_template;
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[5].o)))->F_template;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_20;
	}
	{
	if (((jint)((nro_Item *) NULL_CHECK((frame[3].o)))->F_isLock) != ((jint)((nro_Item *) NULL_CHECK((frame[5].o)))->F_isLock)) goto label_20;
	}
	{
	LINE_NUMBER(606);
	sp[0].o = frame[3].o;
	((nro_Item *) NULL_CHECK(sp[0].o))->F_quantity = (((jint)((nro_Item *) NULL_CHECK(sp[0].o))->F_quantity) + ((jint)((nro_Item *) NULL_CHECK((frame[5].o)))->F_quantity));
	LINE_NUMBER(607);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Item *) NULL_CHECK((frame[5].o)))->F_indexUI)) = (jobject(nullptr));
	LINE_NUMBER(608);
	((func_nro_MyVector_setElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_MyVector_setElementAt_java_lang_Object_int])(ctx, (frame[1].o), (jobject(nullptr)), (frame[4].i));
	}
label_20:;
	{
	LINE_NUMBER(602);
	INST_IINC(4, 1);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(600);
	INST_IINC(2, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(614);
	frame[2].i = (jint(0));
	}
label_24:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(616);
	frame[4].i = (jint(0));
	}
label_28:;
	{
	if ((frame[4].i) > (frame[2].i)) goto label_26;
	}
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))) != nullptr) goto label_30;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(619);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_indexUI = (frame[4].i);
	LINE_NUMBER(620);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBox;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	LINE_NUMBER(621);
	goto label_26;
	}
label_30:;
	{
	LINE_NUMBER(616);
	INST_IINC(4, 1);
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(614);
	INST_IINC(2, 1);
	goto label_24;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(630);
	goto label_35;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(627);
	frame[1].o = sp[0].o;
	LINE_NUMBER(628);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	LINE_NUMBER(629);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Char.boxSort()"_j))));
	}
label_35:;
	LINE_NUMBER(631);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getSkill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(634);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vSkill;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vSkill;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK((checkCast(ctx, &class_nro_Skill, sp[0].o))))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != ((jint)((nro_SkillTemplate *) NULL_CHECK((frame[1].o)))->F_id)) goto label_4;
	}
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vSkill;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_nro_Skill, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(634);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(640);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isInEnterOfflinePoint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(645);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[1].o)))->F_taskId) != 0) goto label_2;
	}
	{
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[1].o)))->F_index) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(648);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(650);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(651);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_nro_Waypoint, sp[0].o));
	LINE_NUMBER(652);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 < (frame[2].i)) goto label_9;
	}
	{
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	if (((jint)((nro_PopUp *) NULL_CHECK((checkCast(ctx, &class_nro_PopUp, sp[0].o))))->F_isPaint) != 0) goto label_9;
	}
	{
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(656);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) < ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_minX)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) > ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_maxX)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) < ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_minY)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) > ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_maxY)) goto label_11;
	}
	{
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_isEnter) == 0) goto label_11;
	}
	{
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_isOffline) == 0) goto label_11;
	}
	{
	LINE_NUMBER(658);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_11:;
	{
	LINE_NUMBER(650);
	frame[3].i = (jbyte(((frame[3].i) + (jint(1)))));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isInEnterOnlinePoint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(668);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint;
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[1].o)))->F_taskId) != 0) goto label_2;
	}
	{
	if (((jint)((nro_NinjaUtil *) NULL_CHECK((frame[1].o)))->F_index) >= (6)) goto label_2;
	}
	{
	LINE_NUMBER(669);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(671);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(673);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(674);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_nro_Waypoint, sp[0].o));
	LINE_NUMBER(675);
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 < (frame[2].i)) goto label_9;
	}
	{
	clinit_nro_PopUp(ctx);
	sp[0].o = (jobject)SF_nro_PopUp_vPopups;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	if (((jint)((nro_PopUp *) NULL_CHECK((checkCast(ctx, &class_nro_PopUp, sp[0].o))))->F_isPaint) != 0) goto label_9;
	}
	{
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(679);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) < ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_minX)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) > ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_maxX)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) < ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_minY)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) > ((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_maxY)) goto label_11;
	}
	{
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_isEnter) == 0) goto label_11;
	}
	{
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[4].o)))->F_isOffline) != 0) goto label_11;
	}
	{
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_11:;
	{
	LINE_NUMBER(673);
	frame[3].i = (jbyte(((frame[3].i) + (jint(1)))));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_nro_Char_isInWaypoint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isInWaypoint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(690);
	jint temp0 = (jint)SM_nro_TileMap_isInAirMap_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) < ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) - (48))) goto label_1;
	}
	{
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(692);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isTeleport) != 0) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isTeleport1) != 0) goto label_3;
	}
	{
	LINE_NUMBER(693);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(695);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(696);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_Waypoint, sp[0].o));
	LINE_NUMBER(697);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (47)) goto label_10;
	}
	sp->i = (jint)SM_nro_TileMap_isInAirMap_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_11;
label_10:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) > (((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_minY) + ((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_maxY))) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) <= ((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_minX)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) >= ((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_maxX)) goto label_11;
	}
	{
	LINE_NUMBER(699);
	jint temp0 = (jint)SM_nro_TileMap_isInAirMap_R_boolean(ctx);
	if (temp0 == 0) goto label_13;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == 0) goto label_13;
	}
	{
	LINE_NUMBER(700);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(703);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(706);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) < ((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_minX)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) > ((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_maxX)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) < ((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_minY)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) > ((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_maxY)) goto label_15;
	}
	{
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[3].o)))->F_isEnter) != 0) goto label_15;
	}
	{
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(695);
	frame[2].i = (jbyte(((frame[2].i) + (jint(1)))));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_nro_Char_soundUpdate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:soundUpdate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(719);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (10)) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) != (8)) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty) <= (20)) goto label_1;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_charFly) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charFly])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill;
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) < 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) > (6)) goto label_7;
	}
	{
	LINE_NUMBER(728);
	frame[1].i = (jint(1));
	LINE_NUMBER(729);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(732);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) < (14)) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) > (20)) goto label_11;
	}
	{
	LINE_NUMBER(733);
	frame[1].i = (jint(1));
	LINE_NUMBER(734);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(737);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) < (28)) goto label_14;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) > (34)) goto label_14;
	}
	{
	LINE_NUMBER(738);
	frame[1].i = (jint(1));
	LINE_NUMBER(739);
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) < (63)) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) > (69)) goto label_5;
	}
	{
	LINE_NUMBER(743);
	frame[1].i = (jint(1));
	LINE_NUMBER(744);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(748);
	frame[1].i = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(751);
	if ((frame[1].i) == 0) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_19;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) > ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_3;
	}
label_19:;
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(753);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) == (9)) goto label_21;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) == (10)) goto label_21;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) != (11)) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	jint temp0 = jint(1);
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_23;
	}
	(sp++)->f = jfloat(0.05f);
	goto label_24;
label_23:;
	(sp++)->f = jfloat(0.1f);
label_24:;
	{
	sp -= 3;
	((func_lib_sound_SoundMn_charPunch_boolean_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charPunch_boolean_float])(ctx, sp[0].o, sp[1].i, sp[2].f);
	LINE_NUMBER(755);
	popStackFrame(ctx);
	return;
	}
label_22:;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	jint temp0 = jint(0);
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_26;
	}
	(sp++)->f = jfloat(0.05f);
	goto label_27;
label_26:;
	(sp++)->f = jfloat(0.1f);
label_27:;
	POP_N(3); // Pop method args
	((func_lib_sound_SoundMn_charPunch_boolean_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charPunch_boolean_float])(ctx, sp[0].o, sp[1].i, sp[2].f);
label_3:;
	LINE_NUMBER(762);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:update", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(765);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_1;
	}
	{
	LINE_NUMBER(766);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (23);
	LINE_NUMBER(767);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_countMafuba = (jshort((((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_countMafuba) + (jint(1)))));
	LINE_NUMBER(768);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_countMafuba) <= (150)) goto label_5;
	}
	{
	LINE_NUMBER(769);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMafuba = (jint(0));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(773);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_countMafuba = (jint(0));
	LINE_NUMBER(774);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_5;
	}
	{
	LINE_NUMBER(775);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMabuHold) != 0) goto label_5;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(777);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_12;
	}
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (20));
	}
label_14:;
	{
	LINE_NUMBER(782);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(-1))) goto label_16;
	}
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmtoX = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (20));
	}
label_16:;
	{
	LINE_NUMBER(786);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmtoY = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (40));
	LINE_NUMBER(787);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	if (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmx) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_19;
	}
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_dir = (jint(-1));
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(790);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_dir = (jint(1));
	}
label_21:;
	{
	LINE_NUMBER(793);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	if (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmtoX) >= (100)) goto label_22;
	}
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmtoX = (100);
	}
label_22:;
	{
	LINE_NUMBER(797);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	if (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmtoX) <= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - (100))) goto label_12;
	}
	{
	LINE_NUMBER(798);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmtoX = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - (100));
	}
label_12:;
	{
	LINE_NUMBER(804);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	frame[1].o = sp[0].o;
	frame[2].o = sp[0].o;
	if (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmy) == ((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_cmtoY)) goto label_27;
	}
	{
	LINE_NUMBER(805);
	((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_g = ((((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_cmtoY) - ((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_cmy)) << (jint(2)));
	LINE_NUMBER(806);
	sp[0].o = frame[2].o;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_f = (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_f) + ((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_g));
	LINE_NUMBER(807);
	sp[0].o = frame[2].o;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmy = (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmy) + (((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_f) >> (jint(4))));
	LINE_NUMBER(808);
	sp[0].o = frame[2].o;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_f = (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_f) & (15));
	}
label_27:;
	{
	LINE_NUMBER(811);
	if (((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_cmx) == ((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_cmtoX)) goto label_32;
	}
	{
	LINE_NUMBER(812);
	((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_k = ((((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_cmtoX) - ((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_cmx)) << (jint(2)));
	LINE_NUMBER(813);
	sp[0].o = frame[2].o;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_j = (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_j) + ((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_k));
	LINE_NUMBER(814);
	sp[0].o = frame[2].o;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmx = (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_cmx) + (((jint)((nro_PetFollow *) NULL_CHECK((frame[2].o)))->F_j) >> (jint(4))));
	LINE_NUMBER(815);
	sp[0].o = frame[2].o;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_j = (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_j) & (15));
	}
label_32:;
	{
	LINE_NUMBER(818);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_37;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_PetFollow *) NULL_CHECK((frame[1].o)))->F_frame;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_c = ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_PetFollow *) NULL_CHECK((frame[1].o)))->F_count)));
	LINE_NUMBER(820);
	sp[0].o = frame[1].o;
	((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_count = (((jint)((nro_PetFollow *) NULL_CHECK(sp[0].o))->F_count) + (jint(1)));
	}
label_37:;
	{
	LINE_NUMBER(823);
	jint temp0 = (jint)((nro_PetFollow *) NULL_CHECK((frame[1].o)))->F_count;
	sp[0].o = (jobject)((nro_PetFollow *) NULL_CHECK((frame[1].o)))->F_frame;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	LINE_NUMBER(824);
	((nro_PetFollow *) NULL_CHECK((frame[1].o)))->F_count = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(828);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_41;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP), (jlong(0)))) > 0) goto label_41;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clanID) == (-100)) goto label_41;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_41;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(5))) goto label_41;
	}
	{
	LINE_NUMBER(829);
	((func_nro_Char_startDie_short_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_startDie_short_short])(ctx, (frame[0].o), (jshort(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx))), (jshort(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy))));
	}
label_41:;
	{
	LINE_NUMBER(833);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjureHp) == 0) goto label_43;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_twHp = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_twHp) + (jint(1)));
	LINE_NUMBER(835);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_twHp) != (20)) goto label_46;
	}
	{
	LINE_NUMBER(836);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_twHp = (jint(0));
	LINE_NUMBER(837);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjureHp = (jint(0));
	goto label_46;
	}
label_43:;
	{
	LINE_NUMBER(839);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dHP), ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP))) <= 0) goto label_49;
	}
	{
	LINE_NUMBER(840);
	jlong temp0 = (((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dHP) - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP)) >> (jint(1));
	frame[1].l = temp0;
	if ((longCompare(temp0, (jlong(1)))) >= 0) goto label_52;
	}
	{
	LINE_NUMBER(841);
	frame[1].l = (jlong(1));
	}
label_52:;
	{
	LINE_NUMBER(844);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_dHP = (((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_dHP) - (frame[1].l));
	goto label_46;
	}
label_49:;
	{
	LINE_NUMBER(846);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dHP = ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP);
	}
label_46:;
	{
	LINE_NUMBER(849);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_secondPower) == 0) goto label_54;
	}
	{
	LINE_NUMBER(850);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currS = temp0;
	LINE_NUMBER(851);
	if ((longCompare((((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currS) - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_lastS)), (jlong(1000ll)))) < 0) goto label_54;
	}
	{
	LINE_NUMBER(852);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_lastS = temp0;
	LINE_NUMBER(853);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_secondPower = (jshort((((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_secondPower) - (jint(1)))));
	}
label_54:;
	{
	LINE_NUMBER(857);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPaintNewSkill) == 0) goto label_59;
	}
	{
	LINE_NUMBER(858);
	if ((longCompare((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow), ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeReset_newSkill))) > 0) goto label_61;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_61;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (jint(5))) goto label_62;
	}
label_61:;
	{
	LINE_NUMBER(859);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeReset_newSkill = (jlong(0));
	LINE_NUMBER(860);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPaintNewSkill = (jint(0));
	}
label_62:;
	{
	LINE_NUMBER(863);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_stt) != 0) goto label_64;
	}
	{
	LINE_NUMBER(864);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFly) == 0) goto label_66;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW) >= (20)) goto label_66;
	}
	{
	LINE_NUMBER(865);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-3);
	LINE_NUMBER(866);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy));
	}
label_66:;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_start;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_69;
	}
	{
	LINE_NUMBER(870);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_start;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))));
	goto label_71;
	}
label_69:;
	{
	LINE_NUMBER(871);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_start;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_72;
	}
	{
	LINE_NUMBER(872);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_start;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_start;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((((jarray) nullCheck(ctx, sp[2].o))->length) - (jint(1)))));
	goto label_71;
	}
label_72:;
	{
	LINE_NUMBER(874);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_start;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW)));
	goto label_71;
	}
label_64:;
	{
	LINE_NUMBER(876);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_stt) != (jint(1))) goto label_74;
	}
	{
	LINE_NUMBER(877);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_atk;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_atk;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (temp0 % (((jarray) nullCheck(ctx, sp[2].o))->length))));
	LINE_NUMBER(878);
	jlong temp1 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp1 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeDame)), (jlong(0)))) <= 0) goto label_77;
	}
	{
	LINE_NUMBER(879);
	((func_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte])(ctx, (frame[0].o), (jint(2)), (jint(0)), (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(0)), (jint(0)), (jint(0)), (checkCast(ctx, getArrayClass(&class_nro_Point, 1), (jobject(nullptr)))), (jint(0)));
	}
label_77:;
	{
	LINE_NUMBER(883);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW) % (jint(5))) != 0) goto label_79;
	}
	{
	LINE_NUMBER(884);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_shock_scr = (jint(5));
	}
label_79:;
	{
	LINE_NUMBER(887);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_typeFrame) != (jint(1))) goto label_71;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW) >= (10)) goto label_71;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw) + (jint(1))) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	LINE_NUMBER(888);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_82;
	}
	INST_BIPUSH(8);
	goto label_83;
label_82:;
	INST_ICONST(4);
label_83:;
	POP_N(3); // Pop method args
	sp->i = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, sp[0].i, sp[1].i, sp[2].i);
	sp++;
	if ((--sp)->i != 0) goto label_71;
	{
	LINE_NUMBER(889);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	goto label_71;
	}
label_74:;
	{
	LINE_NUMBER(891);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_stt) != (jint(2))) goto label_71;
	}
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_end;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_86;
	}
	{
	LINE_NUMBER(893);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_end;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))));
	goto label_88;
	}
label_86:;
	{
	LINE_NUMBER(894);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_end;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_89;
	}
	{
	LINE_NUMBER(895);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_end;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_end;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((((jarray) nullCheck(ctx, sp[2].o))->length) - (jint(1)))));
	goto label_88;
	}
label_89:;
	{
	LINE_NUMBER(897);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fr_end;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cf = ((jint)ARRAY_ACCESS(jbyte, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW)));
	}
label_88:;
	{
	LINE_NUMBER(900);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFly) == 0) goto label_91;
	}
	{
	LINE_NUMBER(901);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(902);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	}
label_91:;
	{
	LINE_NUMBER(905);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPaintNewSkill = (jint(0));
	}
label_71:;
	{
	LINE_NUMBER(908);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_count_NEW = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_count_NEW) + (jint(1)));
	LINE_NUMBER(909);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_5;
	}
	{
	LINE_NUMBER(910);
	((func_nro_Char_updateShadown) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_updateShadown])(ctx, (frame[0].o));
	goto label_5;
	}
label_59:;
	{
	LINE_NUMBER(914);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_sleepEff) == 0) goto label_96;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) != 0) goto label_96;
	}
	{
	LINE_NUMBER(915);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (41), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(3)), (jint(1)), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_96:;
	{
	LINE_NUMBER(918);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_huytSao) == 0) goto label_98;
	}
	{
	LINE_NUMBER(919);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_huytSao = (jint(0));
	LINE_NUMBER(920);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (39), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(3)), (jint(3)), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_98:;
	{
	LINE_NUMBER(923);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_blindEff) == 0) goto label_101;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_101;
	}
	{
	LINE_NUMBER(924);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (113), (frame[0].o), (jint(1)));
	}
label_101:;
	{
	LINE_NUMBER(928);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_protectEff) == 0) goto label_103;
	}
	{
	LINE_NUMBER(929);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cH_new) + (73));
	LINE_NUMBER(930);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_106;
	}
	{
	LINE_NUMBER(931);
	sp[0].o = frame[0].o;
	clinit_nro_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[1].o, (33), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (frame[3].i), (jint(3)), (jint(3)), (jint(1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_eProtect = (jref) sp[1].o;
	}
label_106:;
	{
	LINE_NUMBER(934);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect;
	if (sp[0].o == nullptr) goto label_103;
	}
	{
	LINE_NUMBER(935);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect;
	((func_nro_Effect_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Effect_update])(ctx, sp[0].o);
	LINE_NUMBER(936);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(937);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_y = (frame[3].i);
	}
label_103:;
	{
	LINE_NUMBER(942);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_danhHieuEff) == 0) goto label_111;
	}
	{
	LINE_NUMBER(944);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	if (sp[0].o != nullptr) goto label_113;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_danhHieu;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID;
	LINE_NUMBER(945);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, temp0);
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_113;
	}
	{
	LINE_NUMBER(947);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)SM_nro_Res_split_java_lang_String_java_lang_String_int_R_Array1_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))), (jint(0)));
	frame[6].o = sp[0].o;
	jint temp0 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	frame[4].i = temp0;
	LINE_NUMBER(948);
	jint temp1 = (jint)SM_java_lang_Short_parseShort_java_lang_String_R_short(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(1)))));
	frame[7].i = temp1;
	LINE_NUMBER(949);
	sp[0].o = frame[0].o;
	clinit_nro_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[1].o, (frame[4].i), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cH_new) + (73)), (jint(1)), (jint(-1)), (jint(-1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_eDanhHieu = (jref) sp[1].o;
	LINE_NUMBER(950);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	jlong temp2 = jlong(((frame[7].i) * (1000)));
	jlong temp3 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_timeExist = (temp2 + temp3);
	}
label_113:;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	if (sp[0].o == nullptr) goto label_111;
	}
	{
	LINE_NUMBER(954);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	((func_nro_Effect_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Effect_update])(ctx, sp[0].o);
	LINE_NUMBER(955);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_x = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(956);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	((nro_Effect *) NULL_CHECK(sp[0].o))->F_y = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cH_new);
	LINE_NUMBER(957);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	jlong temp0 = (jlong)((nro_Effect *) NULL_CHECK(sp[0].o))->F_timeExist;
	jlong temp1 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare(temp0, temp1)) > 0) goto label_111;
	}
	{
	LINE_NUMBER(958);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu = (jref) (jobject(nullptr));
	LINE_NUMBER(959);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_danhHieu;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID));
	sp[0].o = (jobject)((func_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_111:;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_127;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) >= 0) goto label_127;
	}
	{
	LINE_NUMBER(965);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	}
label_127:;
	{
	LINE_NUMBER(968);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFusion) == 0) goto label_129;
	}
	{
	LINE_NUMBER(969);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_tFusion = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_tFusion) + (jint(1)));
	}
label_129:;
	{
	LINE_NUMBER(972);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isNhapThe) == 0) goto label_131;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (25)) != 0) goto label_131;
	}
	{
	LINE_NUMBER(973);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (114), (frame[0].o), (jint(1)));
	}
label_131:;
	{
	LINE_NUMBER(976);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSetPos) == 0) goto label_133;
	}
	{
	LINE_NUMBER(977);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_tpos = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_tpos) + (jint(1)));
	LINE_NUMBER(978);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tpos) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(979);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tpos = (jint(0));
	LINE_NUMBER(980);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSetPos = (jint(0));
	LINE_NUMBER(981);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xPos);
	LINE_NUMBER(982);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yPos);
	LINE_NUMBER(983);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_cp3 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cp2 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = temp0;
	LINE_NUMBER(984);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"set pox x= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xPos));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" y= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yPos));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(985);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_typePos) != (jint(1))) goto label_143;
	}
	{
	LINE_NUMBER(986);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_145;
	}
	{
	LINE_NUMBER(987);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(988);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	}
label_145:;
	{
	LINE_NUMBER(991);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(992);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_telePortSkill = (jint(0));
	LINE_NUMBER(993);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (173), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(1)));
	goto label_150;
	}
label_143:;
	{
	LINE_NUMBER(995);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (60), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(1)));
	}
label_150:;
	{
	LINE_NUMBER(998);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_151;
	}
	{
	LINE_NUMBER(999);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(1000);
	popStackFrame(ctx);
	return;
	}
label_151:;
	{
	LINE_NUMBER(1003);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	goto label_5;
	}
label_133:;
	{
	LINE_NUMBER(1007);
	M_nro_Char_soundUpdate(ctx, (frame[0].o));
	LINE_NUMBER(1008);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_stone) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1009);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez) == 0) goto label_156;
	}
	{
	LINE_NUMBER(1010);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_158;
	}
	{
	LINE_NUMBER(1011);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (113), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(1)));
	}
label_158:;
	{
	LINE_NUMBER(1014);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (23);
	LINE_NUMBER(1015);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_lastFreez)), (jlong(1000ll)))) < 0) goto label_162;
	}
	{
	LINE_NUMBER(1016);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_freezSeconds = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_freezSeconds) - (jint(1)));
	LINE_NUMBER(1017);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_lastFreez = (frame[1].l);
	LINE_NUMBER(1018);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_freezSeconds) >= 0) goto label_162;
	}
	{
	LINE_NUMBER(1019);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez = (jint(0));
	LINE_NUMBER(1020);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_seconds = (jint(0));
	LINE_NUMBER(1021);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_162;
	}
	{
	LINE_NUMBER(1022);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isLockMove = (jint(0));
	LINE_NUMBER(1023);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_dem = (jint(0));
	LINE_NUMBER(1024);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isFreez = (jint(0));
	}
label_162:;
	{
	LINE_NUMBER(1029);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1030);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_ty = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ty) + (jint(1)));
	LINE_NUMBER(1031);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_wt = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_wt) + (jint(1)));
	LINE_NUMBER(1032);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_fy;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wy) != 0) goto label_175;
	}
	INST_ICONST(1);
	goto label_176;
label_175:;
	INST_ICONST(-1);
label_176:;
	{
	sp -= 3;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fy = (sp[1].i + sp[2].i);
	LINE_NUMBER(1033);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wt) != (10)) goto label_5;
	}
	{
	LINE_NUMBER(1034);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_wt = (jint(0));
	LINE_NUMBER(1035);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wy) != 0) goto label_180;
	}
	INST_ICONST(1);
	goto label_181;
label_180:;
	INST_ICONST(0);
label_181:;
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_wy = sp[1].i;
	goto label_5;
label_156:;
	{
	LINE_NUMBER(1039);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isWaitMonkey) == 0) goto label_182;
	}
	{
	LINE_NUMBER(1040);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isLockMove = (jint(1));
	LINE_NUMBER(1041);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (17);
	LINE_NUMBER(1042);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_186;
	}
	{
	LINE_NUMBER(1043);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (154), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (10)), (jint(2)));
	}
label_186:;
	{
	LINE_NUMBER(1046);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_188;
	}
	{
	LINE_NUMBER(1047);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (jint(1)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (10)), (jint(1)));
	}
label_188:;
	{
	LINE_NUMBER(1050);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount) + (jint(1)));
	LINE_NUMBER(1051);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chargeCount) < (jint(((jfloat(500.0f)) * (clinit_lib_Time(ctx), (jfloat)SF_lib_Time_timeScale))))) goto label_5;
	}
	{
	LINE_NUMBER(1052);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isWaitMonkey = (jint(0));
	LINE_NUMBER(1053);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isLockMove = (jint(0));
	goto label_5;
	}
label_182:;
	{
	LINE_NUMBER(1059);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStandAndCharge) == 0) goto label_193;
	}
	{
	LINE_NUMBER(1060);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount) + (jint(1)));
	LINE_NUMBER(1061);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, temp0, ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy), (jint(2)));
	if (temp1 != 0) goto label_196;
	}
	INST_ICONST(1);
	goto label_197;
label_196:;
	INST_ICONST(0);
label_197:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1062);
	M_nro_Char_updateEffect(ctx, (frame[0].o));
	LINE_NUMBER(1063);
	M_nro_Char_updateSkillPaint(ctx, (frame[0].o));
	LINE_NUMBER(1064);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast = (jref) (jobject(nullptr));
	LINE_NUMBER(1065);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1066);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (17);
	LINE_NUMBER(1067);
	if ((frame[6].i) == 0) goto label_204;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) == (jint(2))) goto label_204;
	}
	{
	LINE_NUMBER(1068);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (12);
	}
label_204:;
	{
	LINE_NUMBER(1071);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_206;
	}
	{
	LINE_NUMBER(1072);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (170)) goto label_208;
	}
	{
	LINE_NUMBER(1073);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_206;
	}
	{
	LINE_NUMBER(1074);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_211;
	}
	{
	LINE_NUMBER(1075);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (18)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (8)), (jint(1)));
	LINE_NUMBER(1076);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (23)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (15)), (jint(1)));
	goto label_206;
	}
label_211:;
	{
	LINE_NUMBER(1078);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (18)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (8)), (jint(1)));
	LINE_NUMBER(1079);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (23)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (15)), (jint(1)));
	goto label_206;
	}
label_208:;
	{
	LINE_NUMBER(1083);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_215;
	}
	{
	LINE_NUMBER(1084);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (154), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (10)), (jint(1)));
	}
label_215:;
	{
	LINE_NUMBER(1087);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_206;
	}
	{
	LINE_NUMBER(1088);
	jint temp0 = 114;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (-20), (20));
	jint temp3 = temp1 + temp2;
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp5 = -20;
	jint temp6 = 20;
	LINE_NUMBER(1089);
	jint temp7 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp5, temp6);
	jint temp8 = temp4 + temp7;
	jint temp9 = jint(1);
	LINE_NUMBER(1088);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, temp0, temp3, temp8, temp9);
	}
label_206:;
	{
	LINE_NUMBER(1094);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_220;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_220;
	}
	{
	LINE_NUMBER(1095);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_222;
	}
	{
	LINE_NUMBER(1096);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (18)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (8)), (jint(1)));
	LINE_NUMBER(1097);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (23)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (15)), (jint(1)));
	goto label_220;
	}
label_222:;
	{
	LINE_NUMBER(1099);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (18)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (8)), (jint(1)));
	LINE_NUMBER(1100);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (23)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (15)), (jint(1)));
	}
label_220:;
	{
	LINE_NUMBER(1104);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_226;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_226;
	}
	{
	LINE_NUMBER(1105);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_228;
	}
	{
	LINE_NUMBER(1106);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (18)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (8)), (jint(1)));
	LINE_NUMBER(1107);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (23)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (15)), (jint(1)));
	goto label_226;
	}
label_228:;
	{
	LINE_NUMBER(1109);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (18)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (8)), (jint(1)));
	LINE_NUMBER(1110);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (70), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (23)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))) + (15)), (jint(1)));
	}
label_226:;
	{
	LINE_NUMBER(1114);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cur = temp0;
	LINE_NUMBER(1115);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"  7.5 gong namekLazer "_j))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1116);
	if ((longCompare((((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cur) - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_seconds))))) > 0) goto label_234;
	}
	{
	if ((longCompare((((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cur) - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(10000ll)))) <= 0) goto label_235;
	}
label_234:;
	{
	LINE_NUMBER(1117);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"<*> 8  namekLazer gong xong "_j))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1118);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	LINE_NUMBER(1119);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStandAndCharge = (jint(0));
	LINE_NUMBER(1120);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_239;
	}
	{
	LINE_NUMBER(1121);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(1122);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_242;
	}
	{
	LINE_NUMBER(1123);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_myskill;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Skill *) NULL_CHECK(sp[2].o))->F_skillId));
	LINE_NUMBER(1124);
	sp += 2;
	if ((frame[6].i) != 0) goto label_245;
	}
	INST_ICONST(0);
	goto label_246;
label_245:;
	INST_ICONST(1);
label_246:;
	{
	sp -= 3;
	LINE_NUMBER(1123);
	((func_nro_Char_setAutoSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setAutoSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
	LINE_NUMBER(1125);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (8));
	LINE_NUMBER(1126);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_myskill;
	if (((jint)((nro_Skill *) NULL_CHECK(sp[0].o))->F_skillId) < (77)) goto label_242;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_myskill;
	if (((jint)((nro_Skill *) NULL_CHECK(sp[0].o))->F_skillId) > (83)) goto label_242;
	}
	{
	LINE_NUMBER(1127);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(4)));
	}
label_242:;
	{
	LINE_NUMBER(1131);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_250;
	}
	{
	LINE_NUMBER(1132);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCreateDark = (jint(1));
	LINE_NUMBER(1133);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_myskill;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Skill *) NULL_CHECK(sp[2].o))->F_skillId));
	sp += 2;
	if ((frame[6].i) != 0) goto label_253;
	}
	INST_ICONST(0);
	goto label_254;
label_253:;
	INST_ICONST(1);
label_254:;
	POP_N(3); // Pop method args
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
label_250:;
	{
	LINE_NUMBER(1136);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_255;
	}
	{
	LINE_NUMBER(1137);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_myskill;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Skill *) NULL_CHECK(sp[2].o))->F_skillId));
	sp += 2;
	if ((frame[6].i) != 0) goto label_257;
	}
	INST_ICONST(0);
	goto label_258;
label_257:;
	INST_ICONST(1);
label_258:;
	POP_N(3); // Pop method args
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
	goto label_255;
label_239:;
	{
	LINE_NUMBER(1140);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_259;
	}
	{
	LINE_NUMBER(1141);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillTemplateId));
	sp += 2;
	if ((frame[6].i) != 0) goto label_261;
	}
	INST_ICONST(0);
	goto label_262;
label_261:;
	INST_ICONST(1);
label_262:;
	POP_N(3); // Pop method args
	((func_nro_Char_setAutoSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setAutoSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
label_259:;
	{
	LINE_NUMBER(1144);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_263;
	}
	{
	LINE_NUMBER(1145);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillTemplateId));
	sp += 2;
	if ((frame[6].i) != 0) goto label_265;
	}
	INST_ICONST(0);
	goto label_266;
label_265:;
	INST_ICONST(1);
label_266:;
	POP_N(3); // Pop method args
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
label_263:;
	{
	LINE_NUMBER(1148);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_255;
	}
	{
	LINE_NUMBER(1149);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillTemplateId));
	sp += 2;
	if ((frame[6].i) != 0) goto label_268;
	}
	INST_ICONST(0);
	goto label_269;
label_268:;
	INST_ICONST(1);
label_269:;
	POP_N(3); // Pop method args
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
label_255:;
	{
	LINE_NUMBER(1153);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_270;
	}
	{
	LINE_NUMBER(1154);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_activeSuperPower_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_activeSuperPower_int_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	}
label_270:;
	{
	LINE_NUMBER(1157);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"<*> 11 Ho\u00e0n th\u00e0nh skill not focus -  STAND"_j))));
	}
label_235:;
	{
	LINE_NUMBER(1160);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount) + (jint(1)));
	LINE_NUMBER(1161);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chargeCount) < (jint(((jfloat(500.0f)) * (clinit_lib_Time(ctx), (jfloat)SF_lib_Time_timeScale))))) goto label_5;
	}
	{
	LINE_NUMBER(1162);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	goto label_5;
	}
label_193:;
	{
	LINE_NUMBER(1165);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyAndCharge) == 0) goto label_274;
	}
	{
	LINE_NUMBER(1166);
	M_nro_Char_updateEffect(ctx, (frame[0].o));
	LINE_NUMBER(1167);
	M_nro_Char_updateSkillPaint(ctx, (frame[0].o));
	LINE_NUMBER(1168);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast = (jref) (jobject(nullptr));
	LINE_NUMBER(1169);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1170);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_posDisY = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_posDisY) + (jint(1)));
	LINE_NUMBER(1171);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)), (8192));
	if (temp0 == 0) goto label_281;
	}
	{
	LINE_NUMBER(1172);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	goto label_5;
	}
label_281:;
	{
	LINE_NUMBER(1174);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_posDisY) != (20)) goto label_283;
	}
	{
	LINE_NUMBER(1175);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_last = temp0;
	}
label_283:;
	{
	LINE_NUMBER(1178);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"<*> 11 g\u1ed3ng qua cau kinh khi  "_j))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1179);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_posDisY) > (20)) goto label_286;
	}
	{
	LINE_NUMBER(1180);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_288;
	}
	{
	LINE_NUMBER(1181);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(3));
	}
label_288:;
	{
	LINE_NUMBER(1184);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-3);
	LINE_NUMBER(1185);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy));
	LINE_NUMBER(1186);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	goto label_5;
	}
label_286:;
	{
	LINE_NUMBER(1188);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cur = temp0;
	LINE_NUMBER(1189);
	if ((longCompare((((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cur) - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_seconds))))) > 0) goto label_293;
	}
	{
	if ((longCompare((((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cur) - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(10000ll)))) > 0) goto label_293;
	}
	{
	LINE_NUMBER(1190);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (32);
	LINE_NUMBER(1191);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_296;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_296;
	}
	{
	LINE_NUMBER(1192);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (153), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)), (jint(2)));
	}
label_296:;
	{
	LINE_NUMBER(1195);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (170)) goto label_298;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) == (jint(2))) goto label_299;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_298;
	}
label_299:;
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_298;
	}
	{
	LINE_NUMBER(1197);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (153), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)), (jint(2)));
	}
label_298:;
	{
	LINE_NUMBER(1200);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_chargeCount) + (jint(1)));
	LINE_NUMBER(1201);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chargeCount) < (jint(((jfloat(500.0f)) * (clinit_lib_Time(ctx), (jfloat)SF_lib_Time_timeScale))))) goto label_5;
	}
	{
	LINE_NUMBER(1202);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	goto label_5;
	}
label_293:;
	{
	LINE_NUMBER(1206);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"<*> 12 k\u1ebft th\u00fac skill  qua cau kinh khi \tFLY "_j))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1207);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyAndCharge = (jint(0));
	LINE_NUMBER(1208);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_305;
	}
	{
	LINE_NUMBER(1209);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCreateDark = (jint(1));
	LINE_NUMBER(1210);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, temp0, ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy), (jint(2)));
	frame[6].i = temp1;
	LINE_NUMBER(1211);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isUseSkillAfterCharge = (jint(1));
	LINE_NUMBER(1212);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_myskill;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Skill *) NULL_CHECK(sp[2].o))->F_skillId));
	sp += 2;
	if ((frame[6].i) == 0) goto label_310;
	}
	INST_ICONST(0);
	goto label_311;
label_310:;
	INST_ICONST(1);
label_311:;
	POP_N(3); // Pop method args
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
	goto label_5;
label_305:;
	{
	LINE_NUMBER(1214);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (170)) goto label_5;
	}
	{
	LINE_NUMBER(1215);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCreateDark = (jint(1));
	LINE_NUMBER(1216);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isUseSkillAfterCharge = (jint(1));
	LINE_NUMBER(1217);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)));
	frame[6].i = temp0;
	LINE_NUMBER(1218);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillTemplateId));
	sp += 2;
	if ((frame[6].i) == 0) goto label_316;
	}
	INST_ICONST(0);
	goto label_317;
label_316:;
	INST_ICONST(1);
label_317:;
	POP_N(3); // Pop method args
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
	goto label_5;
label_274:;
	{
	LINE_NUMBER(1226);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_318;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isTouch;
	if ((--sp)->i == 0) goto label_318;
	{
	LINE_NUMBER(1227);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_320;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID) < 0) goto label_320;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) <= (100)) goto label_320;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) >= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - (100))) goto label_320;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1228);
	sp[0].o = (jobject)((func_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_320;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1229);
	sp[0].o = (jobject)((func_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_320;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isAttacPlayerStatus_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isAttacPlayerStatus_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_320;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (51)) goto label_320;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (52)) goto label_320;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_vPlayerMenu;
	LINE_NUMBER(1231);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_320;
	}
	{
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_popUpYesNo;
	if (sp[0].o != nullptr) goto label_320;
	}
	{
	LINE_NUMBER(1232);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)));
	frame[3].i = temp1;
	LINE_NUMBER(1233);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	jint temp3 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (temp2 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy)));
	frame[5].i = temp3;
	LINE_NUMBER(1234);
	if ((frame[3].i) >= (60)) goto label_327;
	}
	{
	if ((frame[5].i) >= (40)) goto label_327;
	}
	{
	LINE_NUMBER(1235);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	if (sp[0].o != nullptr) goto label_329;
	}
	{
	LINE_NUMBER(1236);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_MENU;
	init_nro_Command_java_lang_String_int(ctx, sp[1].o, sp[2].o, (11111));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cmdMenu = (jref) sp[1].o;
	LINE_NUMBER(1237);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_isPlaySoundButton = (jint(0));
	}
label_329:;
	{
	LINE_NUMBER(1240);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(1241);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmdMenu;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = (((temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_ch)) - (30)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	goto label_318;
	}
label_327:;
	{
	LINE_NUMBER(1243);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmdMenu = (jref) (jobject(nullptr));
	goto label_318;
	}
label_320:;
	{
	LINE_NUMBER(1246);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmdMenu = (jref) (jobject(nullptr));
	}
label_318:;
	{
	LINE_NUMBER(1250);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isShadown) == 0) goto label_333;
	}
	{
	LINE_NUMBER(1251);
	((func_nro_Char_updateShadown) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_updateShadown])(ctx, (frame[0].o));
	}
label_333:;
	{
	LINE_NUMBER(1254);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isTeleport) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1255);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chatInfo;
	if (sp[0].o == nullptr) goto label_336;
	}
	{
	LINE_NUMBER(1256);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chatInfo;
	((func_nro_Info_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Info_update])(ctx, sp[0].o);
	}
label_336:;
	{
	LINE_NUMBER(1259);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowLife) <= 0) goto label_338;
	}
	{
	LINE_NUMBER(1260);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_shadowLife = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_shadowLife) - (jint(1)));
	}
label_338:;
	{
	LINE_NUMBER(1263);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_resultTest) <= 0) goto label_340;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_340;
	}
	{
	LINE_NUMBER(1264);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_resultTest = (jbyte((((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_resultTest) - (jint(1)))));
	LINE_NUMBER(1265);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_resultTest) == (30)) goto label_343;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_resultTest) != (60)) goto label_340;
	}
label_343:;
	{
	LINE_NUMBER(1266);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_resultTest = (jint(0));
	}
label_340:;
	{
	LINE_NUMBER(1270);
	M_nro_Char_updateSkillPaint(ctx, (frame[0].o));
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	if (sp[0].o == nullptr) goto label_345;
	}
	{
	LINE_NUMBER(1272);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tMobMeBorn) == 0) goto label_347;
	}
	{
	LINE_NUMBER(1273);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_tMobMeBorn = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_tMobMeBorn) - (jint(1)));
	}
label_347:;
	{
	LINE_NUMBER(1276);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tMobMeBorn) != 0) goto label_345;
	}
	{
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_350;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (30);
	sp[0].i = temp0;
	sp += 1;
	goto label_351;
	}
label_350:;
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (30);
	sp[0].i = temp0;
	sp += 1;
	}
label_351:;
	{
	sp -= 2;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_xFirst = sp[1].i;
	LINE_NUMBER(1278);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_yFirst = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (60));
	LINE_NUMBER(1279);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_xFirst;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	frame[5].i = (temp0 - ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(1280);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	jint temp1 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_yFirst;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	frame[4].i = (temp1 - ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(1281);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1282);
	sp[0].o = frame[7].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_x = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) + ((frame[5].i) / (jint(4))));
	LINE_NUMBER(1283);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1284);
	sp[0].o = frame[7].o;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_y = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) + ((frame[4].i) / (jint(4))));
	LINE_NUMBER(1285);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobMe;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_dir = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir);
	}
label_345:;
	{
	LINE_NUMBER(1289);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	if (sp[0].o == nullptr) goto label_360;
	}
	{
	LINE_NUMBER(1290);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	((func_nro_Arrow_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Arrow_update])(ctx, sp[0].o);
	}
label_360:;
	{
	LINE_NUMBER(1293);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	if (sp[0].o == nullptr) goto label_362;
	}
	{
	LINE_NUMBER(1294);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	((func_nro_PlayerDart_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PlayerDart_update])(ctx, sp[0].o);
	}
label_362:;
	{
	LINE_NUMBER(1297);
	M_nro_Char_updateEffect(ctx, (frame[0].o));
	LINE_NUMBER(1298);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_365;
	}
	{
	LINE_NUMBER(1299);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1300);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (32), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (24)), (jint(3)), (jint(5)), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	goto label_5;
	}
label_365:;
	{
	LINE_NUMBER(1303);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_blindEff) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1304);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_sleepEff) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1305);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder) == 0) goto label_370;
	}
	{
	LINE_NUMBER(1306);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold;
	if (sp[0].o == nullptr) goto label_372;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_373;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) != (jint(5))) goto label_372;
	}
label_373:;
	{
	LINE_NUMBER(1308);
	((func_nro_Char_removeHoleEff) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_removeHoleEff])(ctx, (frame[0].o));
	}
label_372:;
	{
	LINE_NUMBER(1311);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold;
	if (sp[0].o == nullptr) goto label_374;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) != (jint(1))) goto label_374;
	}
	{
	LINE_NUMBER(1312);
	((func_nro_Char_removeHoleEff) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_removeHoleEff])(ctx, (frame[0].o));
	}
label_374:;
	{
	LINE_NUMBER(1315);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_376;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (jint(2))) goto label_376;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_376;
	}
	{
	LINE_NUMBER(1316);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder = (jint(0));
	LINE_NUMBER(1317);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold = (jref) (jobject(nullptr));
	LINE_NUMBER(1318);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold = (jref) (jobject(nullptr));
	}
label_376:;
	{
	LINE_NUMBER(1321);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)));
	if (temp0 == 0) goto label_380;
	}
	{
	LINE_NUMBER(1322);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (16);
	goto label_5;
	}
label_380:;
	{
	LINE_NUMBER(1324);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (31);
	goto label_5;
	}
label_370:;
	{
	LINE_NUMBER(1327);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP), (jlong(0)))) <= 0) goto label_382;
	}
	{
	LINE_NUMBER(1328);
	frame[3].i = (jint(0));
	}
label_384:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEff;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_385;
	}
	{
	LINE_NUMBER(1329);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEff;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[7].o = (checkCast(ctx, &class_nro_EffectChar, sp[0].o));
	LINE_NUMBER(1330);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isEff1) == 0) goto label_388;
	}
	{
	LINE_NUMBER(1331);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP = (((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP) + (jlong(((jint)((nro_EffectChar *) NULL_CHECK((frame[7].o)))->F_param))));
	LINE_NUMBER(1332);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP) + (jlong(((jint)((nro_EffectChar *) NULL_CHECK((frame[7].o)))->F_param))));
	}
label_388:;
	{
	LINE_NUMBER(1328);
	INST_IINC(3, 1);
	goto label_384;
	}
label_385:;
	{
	LINE_NUMBER(1336);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff5BuffHp) <= 0) goto label_391;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isEff2;
	if ((--sp)->i == 0) goto label_391;
	{
	LINE_NUMBER(1337);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP = (((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP) + (jlong(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff5BuffHp))));
	}
label_391:;
	{
	LINE_NUMBER(1340);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff5BuffMp) <= 0) goto label_393;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isEff2;
	if ((--sp)->i == 0) goto label_393;
	{
	LINE_NUMBER(1341);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP) + (jlong(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff5BuffMp))));
	}
label_393:;
	{
	LINE_NUMBER(1344);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP), ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull))) <= 0) goto label_395;
	}
	{
	LINE_NUMBER(1345);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP = ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull);
	}
label_395:;
	{
	LINE_NUMBER(1348);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP), ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull))) <= 0) goto label_382;
	}
	{
	LINE_NUMBER(1349);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP = ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull);
	}
label_382:;
	{
	LINE_NUMBER(1353);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmtoChar) == 0) goto label_398;
	}
	{
	LINE_NUMBER(1354);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoX = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW2));
	LINE_NUMBER(1355);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoY = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH23)) - (jint(1)));
	LINE_NUMBER(1356);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouchControl) != 0) goto label_398;
	}
	{
	LINE_NUMBER(1357);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoX = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmtoX) + ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW6) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir)));
	}
label_398:;
	{
	LINE_NUMBER(1361);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tick = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tick) + (jint(1))) % (100));
	LINE_NUMBER(1362);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_404;
	}
	{
	LINE_NUMBER(1363);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_406;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	LINE_NUMBER(1364);
	jint temp0 = (jint)((func_nro_MyVector_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_406;
	}
	{
	LINE_NUMBER(1365);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	}
label_406:;
	{
	LINE_NUMBER(1368);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) >= (10)) goto label_409;
	}
	{
	LINE_NUMBER(1369);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(1370);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = (10);
	goto label_412;
	}
label_409:;
	{
	LINE_NUMBER(1371);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) <= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - (10))) goto label_412;
	}
	{
	LINE_NUMBER(1372);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxw) - (10));
	LINE_NUMBER(1373);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	}
label_412:;
	{
	LINE_NUMBER(1376);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_ischangingMap) != 0) goto label_415;
	}
	{
	jint temp0 = (jint)M_nro_Char_isInWaypoint_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_415;
	}
	{
	LINE_NUMBER(1377);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(1378);
	jint temp0 = (jint)SM_nro_TileMap_isTrainingMap_R_boolean(ctx);
	if (temp0 == 0) goto label_418;
	}
	{
	LINE_NUMBER(1379);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getMapOffline) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getMapOffline])(ctx, sp[0].o);
	LINE_NUMBER(1380);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(1));
	goto label_421;
	}
label_418:;
	{
	LINE_NUMBER(1382);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestChangeMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestChangeMap])(ctx, sp[0].o);
	}
label_421:;
	{
	LINE_NUMBER(1385);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(1));
	LINE_NUMBER(1386);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(1));
	LINE_NUMBER(1387);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(1388);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(1389);
	SM_nro_InfoDlg_showWait(ctx);
	LINE_NUMBER(1390);
	popStackFrame(ctx);
	return;
	}
label_415:;
	{
	LINE_NUMBER(1393);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(4))) goto label_427;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend);
	LINE_NUMBER(1394);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	jint temp2 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend);
	LINE_NUMBER(1395);
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp2);
	if ((temp1 + temp3) < (70)) goto label_427;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)) > 0) goto label_427;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_427;
	}
	{
	LINE_NUMBER(1397);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_427:;
	{
	LINE_NUMBER(1400);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isLockMove) == 0) goto label_431;
	}
	{
	LINE_NUMBER(1401);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_431:;
	{
	LINE_NUMBER(1404);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_433;
	}
	{
	LINE_NUMBER(1405);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)));
	if (temp1 > (16)) goto label_435;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd);
	LINE_NUMBER(1406);
	jint temp2 = (jint)SM_nro_Char_abs_int_R_int(ctx, temp1);
	if (temp2 > (16)) goto label_435;
	}
	{
	LINE_NUMBER(1407);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) / (jint(2)));
	LINE_NUMBER(1408);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd);
	LINE_NUMBER(1409);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1410);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_clickMoving = (jint(0));
	LINE_NUMBER(1411);
	M_nro_Char_checkPerformEndMovePointAction(ctx, (frame[0].o));
	LINE_NUMBER(1412);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(1413);
	jint temp3 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp3 & (jint(2))) != (jint(2))) goto label_444;
	}
	{
	LINE_NUMBER(1414);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	goto label_446;
	}
label_444:;
	{
	LINE_NUMBER(1416);
	M_nro_Char_setCharFallFromJump(ctx, (frame[0].o));
	LINE_NUMBER(1417);
	M_nro_Char_checkDelayFallIfTooHigh(ctx, (frame[0].o));
	}
label_446:;
	{
	LINE_NUMBER(1420);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	goto label_433;
	}
label_435:;
	{
	LINE_NUMBER(1422);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	sp += 1;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_448;
	}
	INST_ICONST(1);
	goto label_449;
label_448:;
	INST_ICONST(-1);
label_449:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(1423);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)));
	if (temp0 == 0) goto label_451;
	}
	{
	LINE_NUMBER(1424);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(2));
	LINE_NUMBER(1425);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_454;
	}
	{
	LINE_NUMBER(1426);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1427);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	}
label_454:;
	{
	LINE_NUMBER(1430);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_457;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_457;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) >= (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (24))) goto label_457;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp2 = (jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd;
	LINE_NUMBER(1432);
	jint temp3 = (jint)SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 != 0) goto label_457;
	}
	{
	LINE_NUMBER(1434);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1435);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-5);
	LINE_NUMBER(1436);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd)));
	sp += 1;
	if (temp1 > (10)) goto label_462;
	}
	INST_ICONST(0);
	goto label_463;
label_462:;
	{
	LINE_NUMBER(1437);
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir);
	sp[0].i = temp0;
	sp += 1;
	}
label_463:;
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = sp[1].i;
	goto label_464;
label_457:;
	{
	LINE_NUMBER(1438);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)));
	if (temp1 > (10)) goto label_464;
	}
	{
	LINE_NUMBER(1439);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) goto label_466;
	}
	{
	LINE_NUMBER(1440);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) goto label_464;
	}
	{
	LINE_NUMBER(1441);
	frame[6].i = (jint(0));
	LINE_NUMBER(1443);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_470;
	}
	{
	LINE_NUMBER(1444);
	frame[7].i = (jint(1));
	goto label_473;
	}
label_470:;
	{
	LINE_NUMBER(1446);
	frame[7].i = (jint(-1));
	}
label_473:;
	{
	LINE_NUMBER(1449);
	frame[4].i = (jint(0));
	}
label_474:;
	{
	if ((frame[4].i) >= (jint(2))) goto label_475;
	}
	{
	LINE_NUMBER(1450);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw) * (frame[7].i))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh) * (frame[4].i))), (jint(2)));
	if (temp0 == 0) goto label_477;
	}
	{
	LINE_NUMBER(1453);
	frame[6].i = (jint(1));
	LINE_NUMBER(1454);
	goto label_475;
	}
label_477:;
	{
	LINE_NUMBER(1449);
	INST_IINC(4, 1);
	goto label_474;
	}
label_475:;
	{
	LINE_NUMBER(1458);
	if ((frame[6].i) == 0) goto label_480;
	}
	{
	LINE_NUMBER(1459);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1460);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_clickMoving = (jint(0));
	LINE_NUMBER(1461);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(1462);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(1463);
	M_nro_Char_checkPerformEndMovePointAction(ctx, (frame[0].o));
	goto label_486;
	}
label_480:;
	{
	LINE_NUMBER(1465);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_charJump) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charJump])(ctx, sp[0].o);
	LINE_NUMBER(1466);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd);
	LINE_NUMBER(1467);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1468);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-5);
	LINE_NUMBER(1469);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(1470);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Jum lun"_j))));
	}
label_486:;
	LINE_NUMBER(1472);
	goto label_464;
label_466:;
	{
	LINE_NUMBER(1474);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_charJump) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charJump])(ctx, sp[0].o);
	LINE_NUMBER(1475);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd);
	LINE_NUMBER(1476);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1477);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-5);
	LINE_NUMBER(1478);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	}
label_464:;
	{
	LINE_NUMBER(1482);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_496;
	}
	{
	LINE_NUMBER(1483);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)), (jint(4)));
	if (temp0 == 0) goto label_433;
	}
	{
	LINE_NUMBER(1485);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1486);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1487);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-5);
	goto label_433;
	}
label_496:;
	{
	LINE_NUMBER(1489);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)) - (jint(1))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)), (8));
	if (temp0 == 0) goto label_433;
	}
	{
	LINE_NUMBER(1491);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1492);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1493);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-5);
	goto label_433;
	}
label_451:;
	{
	LINE_NUMBER(1496);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) >= (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (10))) goto label_504;
	}
	{
	LINE_NUMBER(1497);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1498);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-5);
	LINE_NUMBER(1499);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd)));
	if (temp1 > (10)) goto label_508;
	}
	{
	LINE_NUMBER(1500);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd);
	LINE_NUMBER(1501);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	}
label_508:;
	{
	LINE_NUMBER(1504);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isAutoAttack) == 0) goto label_511;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_511;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) >= (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (24))) goto label_511;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp2 = (jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd;
	LINE_NUMBER(1506);
	jint temp3 = (jint)SM_nro_AutoTrainMenu_hasCeilingAbove_int_int_int_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 != 0) goto label_511;
	}
	{
	LINE_NUMBER(1508);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1509);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-5);
	LINE_NUMBER(1510);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd)));
	sp += 1;
	if (temp1 > (10)) goto label_516;
	}
	{
	LINE_NUMBER(1511);
	jint temp0 = jint(0);
	sp[0].i = temp0;
	sp += 1;
	goto label_518;
	}
label_516:;
	{
	LINE_NUMBER(1512);
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir);
	sp[0].i = temp0;
	sp += 1;
	}
label_518:;
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = sp[1].i;
	goto label_519;
label_511:;
	{
	LINE_NUMBER(1513);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)));
	if (temp1 > (10)) goto label_520;
	}
	{
	LINE_NUMBER(1514);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	goto label_519;
	}
label_520:;
	{
	LINE_NUMBER(1516);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	goto label_519;
	}
label_504:;
	{
	LINE_NUMBER(1518);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)));
	if (temp0 == 0) goto label_522;
	}
	{
	LINE_NUMBER(1519);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1520);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_clickMoving = (jint(0));
	LINE_NUMBER(1521);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(1522);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(1523);
	M_nro_Char_checkPerformEndMovePointAction(ctx, (frame[0].o));
	goto label_519;
	}
label_522:;
	{
	LINE_NUMBER(1525);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (10)) goto label_528;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (jint(2))) goto label_529;
	}
label_528:;
	{
	LINE_NUMBER(1526);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	}
label_529:;
	{
	LINE_NUMBER(1529);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	}
label_519:;
	{
	LINE_NUMBER(1532);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) goto label_433;
	}
	{
	LINE_NUMBER(1533);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_531;
	}
	{
	LINE_NUMBER(1534);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)), (jint(4)));
	if (temp0 == 0) goto label_433;
	}
	{
	LINE_NUMBER(1536);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(1537);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(1538);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1539);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_clickMoving = (jint(0));
	LINE_NUMBER(1540);
	M_nro_Char_checkPerformEndMovePointAction(ctx, (frame[0].o));
	goto label_433;
	}
label_531:;
	{
	LINE_NUMBER(1542);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)) - (jint(1))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)), (8));
	if (temp0 == 0) goto label_433;
	}
	{
	LINE_NUMBER(1544);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(1545);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(1546);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1547);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_clickMoving = (jint(0));
	LINE_NUMBER(1548);
	M_nro_Char_checkPerformEndMovePointAction(ctx, (frame[0].o));
	}
label_433:;
	{
	LINE_NUMBER(1555);
	M_nro_Char_searchFocus(ctx, (frame[0].o));
	goto label_543;
	}
label_404:;
	{
	LINE_NUMBER(1557);
	M_nro_Char_checkHideCharName(ctx, (frame[0].o));
	LINE_NUMBER(1558);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_545;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (6)) goto label_543;
	}
label_545:;
	{
	LINE_NUMBER(1560);
	frame[6].i = (jint(0));
	LINE_NUMBER(1561);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_547;
	}
	{
	LINE_NUMBER(1562);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp0 = (jint)SM_nro_Char_abs_int_R_int(ctx, (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	if (temp0 >= (17)) goto label_549;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(1563);
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, temp0);
	if (temp1 >= (25)) goto label_549;
	}
	{
	LINE_NUMBER(1564);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd);
	LINE_NUMBER(1565);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd);
	LINE_NUMBER(1566);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(1567);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_555;
	}
	{
	LINE_NUMBER(1568);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(1569);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(1570);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(1571);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	goto label_560;
	}
label_555:;
	{
	LINE_NUMBER(1573);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(1574);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(1575);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	}
label_560:;
	{
	LINE_NUMBER(1578);
	frame[6].i = (jint(1));
	LINE_NUMBER(1579);
	goto label_564;
	}
label_549:;
	{
	LINE_NUMBER(1582);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusBeforeNothing) == (10)) goto label_565;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) != (8)) goto label_566;
	}
label_565:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vMovePoints;
	LINE_NUMBER(1583);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 > 0) goto label_547;
	}
label_566:;
	{
	LINE_NUMBER(1584);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (temp0 != ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd)) goto label_568;
	}
	{
	LINE_NUMBER(1585);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (temp0 == ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) goto label_564;
	}
	{
	LINE_NUMBER(1586);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((temp0 + ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd)) / (jint(2)));
	LINE_NUMBER(1587);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) + (jint(2)));
	goto label_564;
	}
label_568:;
	{
	LINE_NUMBER(1589);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (temp0 >= ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd)) goto label_572;
	}
	{
	LINE_NUMBER(1590);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (12);
	LINE_NUMBER(1591);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((temp0 + ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd)) / (jint(2)));
	LINE_NUMBER(1592);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) >= 0) goto label_576;
	}
	{
	LINE_NUMBER(1593);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	}
label_576:;
	{
	LINE_NUMBER(1596);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy));
	LINE_NUMBER(1597);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_579;
	}
	{
	LINE_NUMBER(1598);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(1599);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	}
label_579:;
	{
	LINE_NUMBER(1602);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy) + (jint(1)));
	LINE_NUMBER(1603);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) <= (16)) goto label_564;
	}
	{
	LINE_NUMBER(1604);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((temp0 + ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd)) / (jint(2)));
	goto label_564;
	}
label_572:;
	{
	LINE_NUMBER(1607);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	LINE_NUMBER(1608);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((temp0 + ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd)) / (jint(2)));
	LINE_NUMBER(1609);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((temp1 + ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd)) / (jint(2)));
	LINE_NUMBER(1611);
	goto label_564;
	}
label_547:;
	{
	LINE_NUMBER(1615);
	frame[6].i = (jint(1));
	}
label_564:;
	{
	LINE_NUMBER(1618);
	if ((frame[6].i) == 0) goto label_543;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vMovePoints;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_543;
	}
	{
	LINE_NUMBER(1619);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vMovePoints;
	sp[1].o = (jobject)((func_nro_MyVector_firstElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_firstElement_R_java_lang_Object])(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) (checkCast(ctx, &class_nro_MovePoint, sp[1].o));
	LINE_NUMBER(1620);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vMovePoints;
	((func_nro_MyVector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(1621);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_status) != (jint(2))) goto label_590;
	}
	{
	LINE_NUMBER(1622);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (12)));
	if ((temp0 & (jint(2))) == (jint(2))) goto label_592;
	}
	{
	LINE_NUMBER(1623);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1624);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(1625);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (jint(0));
	LINE_NUMBER(1626);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = ((-(temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd))) / (10));
	LINE_NUMBER(1627);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = ((-(temp1 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd))) / (10));
	LINE_NUMBER(1628);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp2 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) <= 0) goto label_599;
	}
	{
	LINE_NUMBER(1629);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	goto label_543;
	}
label_599:;
	{
	LINE_NUMBER(1630);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) >= 0) goto label_543;
	}
	{
	LINE_NUMBER(1631);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	goto label_543;
	}
label_592:;
	{
	LINE_NUMBER(1634);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(2));
	LINE_NUMBER(1635);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) <= 0) goto label_603;
	}
	{
	LINE_NUMBER(1636);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	goto label_605;
	}
label_603:;
	{
	LINE_NUMBER(1637);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) >= 0) goto label_605;
	}
	{
	LINE_NUMBER(1638);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	}
label_605:;
	{
	LINE_NUMBER(1641);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1642);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	goto label_543;
	}
label_590:;
	{
	LINE_NUMBER(1644);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_status) != (jint(3))) goto label_608;
	}
	{
	LINE_NUMBER(1645);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (23)));
	if ((temp0 & (jint(2))) == (jint(2))) goto label_610;
	}
	{
	LINE_NUMBER(1646);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(1647);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(1648);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (jint(0));
	LINE_NUMBER(1649);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = ((-(temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd))) / (10));
	LINE_NUMBER(1650);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = ((-(temp1 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd))) / (10));
	LINE_NUMBER(1651);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp2 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) <= 0) goto label_617;
	}
	{
	LINE_NUMBER(1652);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	goto label_543;
	}
label_617:;
	{
	LINE_NUMBER(1653);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) >= 0) goto label_543;
	}
	{
	LINE_NUMBER(1654);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	goto label_543;
	}
label_610:;
	{
	LINE_NUMBER(1657);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(3));
	LINE_NUMBER(1658);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(1659);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(1660);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp2 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) <= 0) goto label_623;
	}
	{
	LINE_NUMBER(1661);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	goto label_625;
	}
label_623:;
	{
	LINE_NUMBER(1662);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) >= 0) goto label_625;
	}
	{
	LINE_NUMBER(1663);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	}
label_625:;
	{
	LINE_NUMBER(1666);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = ((temp1 / (10)) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1668);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-10);
	goto label_543;
	}
label_608:;
	{
	LINE_NUMBER(1670);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_status) != (jint(4))) goto label_628;
	}
	{
	LINE_NUMBER(1671);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(1672);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) <= 0) goto label_631;
	}
	{
	LINE_NUMBER(1673);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	goto label_633;
	}
label_631:;
	{
	LINE_NUMBER(1674);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) >= 0) goto label_633;
	}
	{
	LINE_NUMBER(1675);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	}
label_633:;
	{
	LINE_NUMBER(1678);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = ((temp1 / (9)) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1680);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	goto label_543;
	}
label_628:;
	{
	LINE_NUMBER(1682);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_xEnd);
	LINE_NUMBER(1683);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_MovePoint *) NULL_CHECK(sp[1].o))->F_yEnd);
	LINE_NUMBER(1684);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_543:;
	{
	LINE_NUMBER(1690);
	switch(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe)) {
		case 1: goto label_638;
		case 2: goto label_639;
		case 3: goto label_640;
		case 4: goto label_641;
		case 5: goto label_642;
		case 6: goto label_643;
		case 7: goto label_644;
		case 8: goto label_644;
		case 9: goto label_645;
		case 10: goto label_646;
		case 11: goto label_644;
		case 12: goto label_647;
		case 13: goto label_644;
		case 14: goto label_648;
		case 15: goto label_644;
		case 16: goto label_649;
		default: goto label_644;
	}
	}
label_638:;
	{
	LINE_NUMBER(1692);
	M_nro_Char_updateCharStand(ctx, (frame[0].o));
	LINE_NUMBER(1693);
	goto label_651;
	}
label_639:;
	{
	LINE_NUMBER(1695);
	M_nro_Char_updateCharRun(ctx, (frame[0].o));
	LINE_NUMBER(1696);
	goto label_651;
	}
label_640:;
	{
	LINE_NUMBER(1698);
	M_nro_Char_updateCharJump(ctx, (frame[0].o));
	LINE_NUMBER(1699);
	goto label_651;
	}
label_641:;
	{
	LINE_NUMBER(1701);
	M_nro_Char_updateCharFall(ctx, (frame[0].o));
	LINE_NUMBER(1702);
	goto label_651;
	}
label_642:;
	{
	LINE_NUMBER(1704);
	M_nro_Char_updateCharDeadFly(ctx, (frame[0].o));
	LINE_NUMBER(1705);
	goto label_651;
	}
label_643:;
	{
	LINE_NUMBER(1707);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjure) > 0) goto label_656;
	}
	{
	LINE_NUMBER(1708);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	goto label_658;
	}
label_656:;
	{
	LINE_NUMBER(1709);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusBeforeNothing) != (10)) goto label_659;
	}
	{
	LINE_NUMBER(1710);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	goto label_658;
	}
label_659:;
	{
	LINE_NUMBER(1711);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) > (jint(1))) goto label_658;
	}
	{
	LINE_NUMBER(1712);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(1713);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) <= (6)) goto label_663;
	}
	{
	LINE_NUMBER(1714);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	goto label_665;
	}
label_663:;
	{
	LINE_NUMBER(1716);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(1));
	}
label_665:;
	{
	LINE_NUMBER(1719);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) <= (10)) goto label_658;
	}
	{
	LINE_NUMBER(1720);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	}
label_658:;
	{
	LINE_NUMBER(1724);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) == (7)) goto label_667;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) == (12)) goto label_667;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1));
	LINE_NUMBER(1725);
	jint temp2 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, temp0, temp1);
	if ((temp2 & (jint(2))) == (jint(2))) goto label_667;
	}
	{
	LINE_NUMBER(1726);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(1727);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(1728);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(1729);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	}
label_667:;
	{
	LINE_NUMBER(1732);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_644;
	}
	{
	LINE_NUMBER(1733);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp3 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp3) + (jint(1)));
	LINE_NUMBER(1734);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) <= (10)) goto label_675;
	}
	{
	LINE_NUMBER(1735);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))));
	if ((temp0 & (jint(2))) == (jint(2))) goto label_677;
	}
	{
	LINE_NUMBER(1736);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (jint(5)));
	goto label_675;
	}
label_677:;
	{
	LINE_NUMBER(1738);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	}
label_675:;
	{
	LINE_NUMBER(1742);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) <= (50)) goto label_644;
	}
	{
	LINE_NUMBER(1743);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(1744);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_644:;
	LINE_NUMBER(1753);
	goto label_651;
label_645:;
	{
	LINE_NUMBER(1755);
	M_nro_Char_updateCharAutoJump(ctx, (frame[0].o));
	LINE_NUMBER(1756);
	goto label_651;
	}
label_646:;
	{
	LINE_NUMBER(1758);
	M_nro_Char_updateCharFly(ctx, (frame[0].o));
	LINE_NUMBER(1759);
	goto label_651;
	}
label_647:;
	{
	LINE_NUMBER(1761);
	M_nro_Char_updateSkillStand(ctx, (frame[0].o));
	LINE_NUMBER(1762);
	goto label_651;
	}
label_648:;
	{
	LINE_NUMBER(1764);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(1765);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) <= (30)) goto label_685;
	}
	{
	LINE_NUMBER(1766);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	}
label_685:;
	{
	LINE_NUMBER(1769);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) % (15)) >= (jint(5))) goto label_687;
	}
	{
	LINE_NUMBER(1770);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	goto label_651;
	}
label_687:;
	{
	LINE_NUMBER(1772);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(1));
	LINE_NUMBER(1774);
	goto label_651;
	}
label_649:;
	{
	LINE_NUMBER(1776);
	M_nro_Char_updateResetPoint(ctx, (frame[0].o));
	}
label_651:;
	{
	LINE_NUMBER(1779);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjure) <= 0) goto label_690;
	}
	{
	LINE_NUMBER(1780);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (23);
	LINE_NUMBER(1781);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_isInjure = (jbyte((((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isInjure) - (jint(1)))));
	}
label_690:;
	{
	LINE_NUMBER(1784);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdx) != 0) goto label_693;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdy) == 0) goto label_694;
	}
label_693:;
	{
	LINE_NUMBER(1785);
	((func_nro_Char_startDie_short_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_startDie_short_short])(ctx, (frame[0].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdy));
	LINE_NUMBER(1786);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdx = (jint(0));
	LINE_NUMBER(1787);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdy = (jint(0));
	}
label_694:;
	{
	LINE_NUMBER(1790);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (sp[0].o == nullptr) goto label_697;
	}
	{
	LINE_NUMBER(1791);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (jint(0)))) != 0) goto label_699;
	}
	{
	LINE_NUMBER(1792);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (jshort((((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0)) + (jint(1)))));
	LINE_NUMBER(1793);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (60), (frame[0].o), (jint(1)));
	goto label_697;
	}
label_699:;
	{
	LINE_NUMBER(1794);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (jint(0)))) >= (10)) goto label_702;
	}
	{
	LINE_NUMBER(1795);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (jshort((((jint)ARRAY_ACCESS(jshort, sp[0].o, temp0)) + (jint(1)))));
	goto label_697;
	}
label_702:;
	{
	LINE_NUMBER(1797);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)ARRAY_ACCESS(jshort, sp[1].o, (jint(1))));
	LINE_NUMBER(1798);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)ARRAY_ACCESS(jshort, sp[1].o, (jint(2))));
	LINE_NUMBER(1799);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast = (jref) (jobject(nullptr));
	LINE_NUMBER(1800);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (60), (frame[0].o), (jint(1)));
	LINE_NUMBER(1801);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_697;
	}
	{
	LINE_NUMBER(1802);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) == (jint(2))) goto label_709;
	}
	{
	LINE_NUMBER(1803);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(1804);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((func_nro_Char_setAutoSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setAutoSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (38))), (jint(1)));
	goto label_697;
	}
label_709:;
	{
	LINE_NUMBER(1806);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(1807);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((func_nro_Char_setAutoSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setAutoSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (38))), (jint(0)));
	}
label_697:;
	{
	LINE_NUMBER(1813);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (10)) goto label_713;
	}
	{
	LINE_NUMBER(1814);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy = (jint(0));
	}
label_713:;
	{
	LINE_NUMBER(1817);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge) == 0) goto label_715;
	}
	{
	LINE_NUMBER(1818);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (17);
	LINE_NUMBER(1819);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) != 0) goto label_718;
	}
	{
	LINE_NUMBER(1820);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (jint(1)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (jint(1)));
	}
label_718:;
	{
	LINE_NUMBER(1824);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_715;
	}
	{
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_last)), (jlong(1000ll)))) < 0) goto label_715;
	}
	{
	LINE_NUMBER(1825);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"%= "_j))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_damage));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(1826);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_last = (frame[1].l);
	LINE_NUMBER(1827);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP;
	jlong temp1 = (jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP = (temp0 + ((temp1 * (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_damage)))) / (jlong(100ll))));
	LINE_NUMBER(1828);
	sp[0].o = frame[0].o;
	jlong temp2 = (jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP;
	jlong temp3 = (jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (temp2 + ((temp3 * (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_damage)))) / (jlong(100ll))));
	LINE_NUMBER(1829);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP), ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull))) >= 0) goto label_726;
	}
	{
	LINE_NUMBER(1830);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"+"_j))));
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, ((temp0 * (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_damage)))) / (jlong(100ll))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_HP;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_GameScr_startFlyText_java_lang_String_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (20)), (jint(0)), (jint(-1)), (9));
	}
label_726:;
	{
	LINE_NUMBER(1836);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP), ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull))) >= 0) goto label_728;
	}
	{
	LINE_NUMBER(1837);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"+"_j))));
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, ((temp0 * (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_damage)))) / (jlong(100ll))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_KI;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_GameScr_startFlyText_java_lang_String_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (20)), (jint(0)), (-2), (10));
	}
label_728:;
	{
	LINE_NUMBER(1842);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_HP_MPup) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_HP_MPup])(ctx, sp[0].o);
	LINE_NUMBER(1843);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(2)));
	}
label_715:;
	{
	LINE_NUMBER(1847);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyUp) == 0) goto label_731;
	}
	{
	LINE_NUMBER(1848);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_733;
	}
	{
	LINE_NUMBER(1849);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(1));
	LINE_NUMBER(1850);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(3));
	LINE_NUMBER(1851);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-8);
	LINE_NUMBER(1852);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) > ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) - (240))) goto label_731;
	}
	{
	LINE_NUMBER(1853);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyUp = (jint(0));
	LINE_NUMBER(1854);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(0));
	LINE_NUMBER(1855);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	goto label_731;
	}
label_733:;
	{
	LINE_NUMBER(1858);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(3));
	LINE_NUMBER(1859);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (-8);
	LINE_NUMBER(1860);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) > ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) - (240))) goto label_731;
	}
	{
	LINE_NUMBER(1861);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(1862);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyUp = (jint(0));
	LINE_NUMBER(1863);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(1864);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	}
label_731:;
	{
	LINE_NUMBER(1869);
	M_nro_Char_updateMount(ctx, (frame[0].o));
	LINE_NUMBER(1870);
	M_nro_Char_updEffChar(ctx, (frame[0].o));
	LINE_NUMBER(1871);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) != (934)) goto label_749;
	}
	{
	LINE_NUMBER(1872);
	if ((longCompare(((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeAddChopmat)), (jlong(0)))) <= 0) goto label_751;
	}
	{
	LINE_NUMBER(1873);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fChopmat = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_fChopmat) + (jint(1)));
	LINE_NUMBER(1874);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fChopmat;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frEye;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_749;
	}
	{
	LINE_NUMBER(1875);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fChopmat = (jint(0));
	LINE_NUMBER(1876);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	jlong temp0 = (jlong)SF_main_GameCanvas_timeNow;
	jint temp1 = 2000;
	jint temp2 = 3500;
	LINE_NUMBER(1877);
	jint temp3 = (jint)SM_nro_Res_random_int_int_R_int(ctx, temp1, temp2);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_timeAddChopmat = (temp0 + (jlong(temp3)));
	LINE_NUMBER(1878);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frChopCham;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_frEye = (jref) sp[1].o;
	LINE_NUMBER(1879);
	jint temp4 = (jint)SM_nro_Res_rnd_int_R_int(ctx, (jint(2)));
	if (temp4 != 0) goto label_749;
	}
	{
	LINE_NUMBER(1880);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frChopNhanh;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_frEye = (jref) sp[1].o;
	goto label_749;
	}
label_751:;
	{
	LINE_NUMBER(1884);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fChopmat = (jint(0));
	}
label_749:;
	{
	LINE_NUMBER(1888);
	M_nro_Char_updateFHead(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(1901);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateEffect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1904);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1905);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(1906);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1907);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1908);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (((jint)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFly) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1909);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	((func_nro_Mob_updateInjure) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_updateInjure])(ctx, sp[0].o);
	LINE_NUMBER(1910);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	((nro_Mob *) NULL_CHECK(sp[0].o))->F_injureBy = (jref) (frame[0].o);
	LINE_NUMBER(1911);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1912);
	frame[2].i = (jint(1));
	LINE_NUMBER(1913);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_util_Random_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextInt_int_R_int])(ctx, sp[0].o, (11));
	}
label_13:;
	{
	LINE_NUMBER(1916);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	frame[2].i = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_h) >> (jint(1)));
	LINE_NUMBER(1917);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	jint temp0 = (jint)((func_nro_Mob_isBigBoss_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_isBigBoss_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1918);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	jint temp0 = (jint)((func_nro_Mob_getY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Mob_getY_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 + (20));
	}
label_17:;
	{
	LINE_NUMBER(1921);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	jint temp0 = (jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eMob;
	jint temp1 = (jint)SM_nro_GameScr_startSplash_int_int_int_R_boolean(ctx, temp0, (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - (frame[2].i)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1922);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFly = (jint(1));
	LINE_NUMBER(1923);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1924);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eChar;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (((jint)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFly) != 0) goto label_9;
	}
	{
	LINE_NUMBER(1925);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eChar;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID) < 0) goto label_22;
	}
	{
	LINE_NUMBER(1926);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eChar;
	((func_nro_Char_doInjure) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_doInjure])(ctx, sp[0].o);
	}
label_22:;
	{
	LINE_NUMBER(1929);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eChar;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eChar;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_eChar;
	jint temp2 = (jint)SM_nro_GameScr_startSplash_int_int_int_R_boolean(ctx, temp0, (temp1 - (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ch) >> (jint(1)))), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(1931);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_isFly = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(1934);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_index = (((jint)((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(1935);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp0 = (jint)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_index;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_arrEfInfo;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1936);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(1905);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1942);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask) < 0) goto label_27;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_27;
	}
	{
	LINE_NUMBER(1943);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_indexEffTask = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_indexEffTask) + (jint(1)));
	LINE_NUMBER(1944);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_27;
	}
	{
	LINE_NUMBER(1945);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask = (jint(-1));
	LINE_NUMBER(1946);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask = (jref) (jobject(nullptr));
	}
label_27:;
	LINE_NUMBER(1950);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_checkPerformEndMovePointAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:checkPerformEndMovePointAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1953);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_endMovePointCommand;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1954);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_endMovePointCommand;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1955);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_endMovePointCommand = (jref) (jobject(nullptr));
	LINE_NUMBER(1956);
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Command_performAction])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(1959);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_checkHideCharName(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:checkHideCharName", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1962);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) != 0) goto label_9;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID) < 0) goto label_9;
	}
	{
	LINE_NUMBER(1963);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_paintName = (jint(1));
	LINE_NUMBER(1966);
	frame[1].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_13;
	}
	{
	LINE_NUMBER(1967);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1970);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1972);
	goto label_15;
label_2:;
	LINE_NUMBER(1971);
	INST_ASTORE(3);
label_15:;
	{
	LINE_NUMBER(1974);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[0].o));
	if (temp0 != 0) goto label_16;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy) != ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) goto label_17;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	if (temp0 < (35)) goto label_18;
	}
label_17:;
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy)) >= (32)) goto label_16;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy)) <= 0) goto label_16;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(1975);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, temp0);
	if (temp1 >= (24)) goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(1976);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_paintName = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(1966);
	INST_IINC(1, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1980);
	frame[1].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_9;
	}
	{
	LINE_NUMBER(1981);
	frame[2].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1984);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_nro_Npc, sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1986);
	goto label_22;
label_6:;
	LINE_NUMBER(1985);
	INST_ASTORE(3);
label_22:;
	{
	LINE_NUMBER(1988);
	if ((frame[2].o) == nullptr) goto label_23;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy) != ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) goto label_23;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	if (temp0 >= (24)) goto label_23;
	}
	{
	LINE_NUMBER(1989);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_paintName = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(1980);
	INST_IINC(1, 1);
	goto label_20;
	}
label_9:;
	LINE_NUMBER(1994);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateSkillPaint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateSkillPaint", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1997);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(1998);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	jint temp0 = (jint)((func_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) != 0) goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(2000);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_6;
	}
	{
	LINE_NUMBER(2001);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(2002);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(2004);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (6);
	}
label_10:;
	{
	LINE_NUMBER(2007);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2010);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill = (jint(0));
	LINE_NUMBER(2011);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint = (jref) (jobject(nullptr));
	LINE_NUMBER(2012);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint = (jref) (jobject(nullptr));
	LINE_NUMBER(2013);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = jobject(nullptr);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_eff2 = (jref) sp[3].o;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_eff1 = (jref) sp[3].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_eff0 = (jref) sp[3].o;
	LINE_NUMBER(2014);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_i2 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_i1 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i0 = temp0;
	LINE_NUMBER(2015);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(2016);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(2017);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints = (jref) (jobject(nullptr));
	LINE_NUMBER(2018);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(2019);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr = (jref) (jobject(nullptr));
	LINE_NUMBER(2020);
	jint temp5 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp5 & (jint(2))) == (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(2021);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (jint(5));
	}
label_3:;
	{
	LINE_NUMBER(2025);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill;
	sp[0].o = frame[0].o;
	LINE_NUMBER(2026);
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, sp[0].o);
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_22;
	}
	{
	LINE_NUMBER(2027);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_25;
	}
	{
	LINE_NUMBER(2028);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_27;
	}
	{
	LINE_NUMBER(2029);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(2031);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (6);
	}
label_29:;
	{
	LINE_NUMBER(2034);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(2037);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill = (jint(0));
	LINE_NUMBER(2038);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint = (jref) (jobject(nullptr));
	LINE_NUMBER(2039);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint = (jref) (jobject(nullptr));
	LINE_NUMBER(2040);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = jobject(nullptr);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_eff2 = (jref) sp[3].o;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_eff1 = (jref) sp[3].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_eff0 = (jref) sp[3].o;
	LINE_NUMBER(2041);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_i2 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_i1 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i0 = temp0;
	LINE_NUMBER(2042);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr = (jref) (jobject(nullptr));
	LINE_NUMBER(2043);
	jint temp5 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp5 & (jint(2))) == (jint(2))) goto label_22;
	}
	{
	LINE_NUMBER(2044);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (jint(5));
	}
label_22:;
	{
	LINE_NUMBER(2049);
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill) < 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill) > ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_1;
	}
	{
	LINE_NUMBER(2050);
	if (((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_effS0Id) == 0) goto label_39;
	}
	{
	LINE_NUMBER(2051);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_eff0 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_effS0Id) - (jint(1)))));
	LINE_NUMBER(2052);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_dy0 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_dx0 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i0 = temp0;
	}
label_39:;
	{
	LINE_NUMBER(2055);
	if (((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_effS1Id) == 0) goto label_42;
	}
	{
	LINE_NUMBER(2056);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_eff1 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_effS1Id) - (jint(1)))));
	LINE_NUMBER(2057);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_dy1 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_dx1 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i1 = temp0;
	}
label_42:;
	{
	LINE_NUMBER(2060);
	if (((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_effS2Id) == 0) goto label_45;
	}
	{
	LINE_NUMBER(2061);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_eff2 = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_effS2Id) - (jint(1)))));
	LINE_NUMBER(2062);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_dy2 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_dx2 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i2 = temp0;
	}
label_45:;
	{
	LINE_NUMBER(2065);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill);
	LINE_NUMBER(2066);
	if ((frame[1].o) == nullptr) goto label_49;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))) == nullptr) goto label_49;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_49;
	{
	if ((frame[2].i) > ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_49;
	}
	{
	if (((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_arrowId) == 0) goto label_49;
	}
	{
	LINE_NUMBER(2068);
	jint temp0 = (jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_arrowId;
	frame[3].i = temp0;
	if (temp0 < (100)) goto label_52;
	}
	{
	LINE_NUMBER(2069);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	sp += 1;
	goto label_55;
	}
label_54:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((nro_Char *) NULL_CHECK(sp[-1].o))->F_mobFocus;
label_55:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2070);
	frame[5].o = (frame[4].o);
	LINE_NUMBER(2071);
	if ((frame[4].o) == nullptr) goto label_58;
	}
	{
	LINE_NUMBER(2072);
	jint temp0 = (jint)((func_nro_IMapObject_getX_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getX_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[5].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[5].o))));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	frame[6].i = temp1;
	LINE_NUMBER(2073);
	jint temp2 = (jint)((func_nro_IMapObject_getY_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getY_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[5].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[5].o))));
	jint temp3 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp2 - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)));
	frame[7].i = temp3;
	LINE_NUMBER(2075);
	if ((frame[6].i) <= ((frame[7].i) * (jint(4)))) goto label_62;
	}
	{
	LINE_NUMBER(2076);
	frame[8].i = (jint(0));
	goto label_65;
	}
label_62:;
	{
	LINE_NUMBER(2078);
	jint temp0 = (jint)((func_nro_IMapObject_getY_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getY_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[5].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[5].o))));
	if (temp0 >= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) goto label_66;
	}
	{
	LINE_NUMBER(2079);
	frame[8].i = (-3);
	goto label_69;
	}
label_66:;
	{
	LINE_NUMBER(2081);
	frame[8].i = (jint(3));
	}
label_69:;
	{
	LINE_NUMBER(2085);
	if ((isInstance(ctx, (frame[5].o), &class_nro_BigBoss)) == 0) goto label_65;
	}
	{
	sp[0].o = checkCast(ctx, &class_nro_BigBoss, (frame[5].o));
	frame[9].o = sp[0].o;
	if (((jint)((nro_BigBoss *) NULL_CHECK(sp[0].o))->F_haftBody) == 0) goto label_65;
	}
	{
	LINE_NUMBER(2086);
	frame[8].i = (-20);
	}
label_65:;
	{
	LINE_NUMBER(2090);
	sp[0].o = frame[0].o;
	clinit_nro_PlayerDart(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PlayerDart);
	sp[2].o = frame[0].o;
	jint temp0 = (frame[3].i) - (100);
	sp[3].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint;
	init_nro_PlayerDart_nro_Char_int_nro_SkillPaint_int_int(ctx, sp[1].o, sp[2].o, temp0, sp[3].o, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_adx) - (10)) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir))), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_ady)) + (frame[8].i)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_dart = (jref) sp[1].o;
	LINE_NUMBER(2092);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_73;
	}
	{
	LINE_NUMBER(2093);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (jint(1))) goto label_75;
	}
	{
	LINE_NUMBER(2094);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_traidatKame) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_traidatKame])(ctx, sp[0].o);
	goto label_73;
	}
label_75:;
	{
	LINE_NUMBER(2095);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (jint(3))) goto label_77;
	}
	{
	LINE_NUMBER(2096);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_namekKame) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_namekKame])(ctx, sp[0].o);
	goto label_73;
	}
label_77:;
	{
	LINE_NUMBER(2097);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (jint(5))) goto label_79;
	}
	{
	LINE_NUMBER(2098);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_xaydaKame) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_xaydaKame])(ctx, sp[0].o);
	goto label_73;
	}
label_79:;
	{
	LINE_NUMBER(2099);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (11)) goto label_73;
	}
	{
	LINE_NUMBER(2100);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_nameLazer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_nameLazer])(ctx, sp[0].o);
	}
label_73:;
	LINE_NUMBER(2103);
	goto label_82;
label_58:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyAndCharge) != 0) goto label_83;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isUseSkillAfterCharge) == 0) goto label_82;
	}
label_83:;
	{
	LINE_NUMBER(2104);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	}
label_82:;
	LINE_NUMBER(2106);
	goto label_49;
label_52:;
	{
	LINE_NUMBER(2107);
	sp[0].o = frame[0].o;
	clinit_nro_Arrow(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Arrow);
	sp[2].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[3].o = (jobject)SF_nro_GameScr_arrs;
	init_nro_Arrow_nro_Char_nro_Arrowpaint(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, ((frame[3].i) - (jint(1))))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_arr = (jref) sp[1].o;
	LINE_NUMBER(2108);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_life = (10);
	LINE_NUMBER(2109);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ax = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_adx));
	LINE_NUMBER(2110);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	((nro_Arrow *) NULL_CHECK(sp[0].o))->F_ay = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)))))->F_ady));
	}
label_49:;
	{
	LINE_NUMBER(2114);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_87;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_88;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o != nullptr) goto label_87;
	}
label_88:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_89;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_89;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	LINE_NUMBER(2116);
	jint temp0 = (jint)((func_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_91;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isSelectingSkillBuffToPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isSelectingSkillBuffToPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_89;
	}
label_91:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	if (sp[0].o != nullptr) goto label_89;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	if (sp[0].o != nullptr) goto label_89;
	}
label_87:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill) < ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_89;
	}
	{
	LINE_NUMBER(2119);
	((func_nro_Char_setAttack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_setAttack])(ctx, (frame[0].o));
	}
label_89:;
	{
	LINE_NUMBER(2122);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_93;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_93;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_93;
	}
	{
	LINE_NUMBER(2123);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_indexSkill = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_indexSkill) + (jint(1)));
	}
label_93:;
	{
	LINE_NUMBER(2126);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2127);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(2128);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_97;
	}
	{
	LINE_NUMBER(2129);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	frame[3].o = sp[0].o;
	goto label_99;
	}
label_97:;
	{
	LINE_NUMBER(2130);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_99;
	}
	{
	LINE_NUMBER(2131);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	frame[3].o = sp[0].o;
	}
label_99:;
	{
	LINE_NUMBER(2134);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2135);
	jint temp0 = (jint)((func_nro_IMapObject_getX_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getX_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[3].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[3].o))));
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	if (temp1 >= (10)) goto label_102;
	}
	{
	LINE_NUMBER(2136);
	jint temp0 = (jint)((func_nro_IMapObject_getX_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getX_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[3].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[3].o))));
	if (temp0 <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_104;
	}
	{
	LINE_NUMBER(2137);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (10));
	goto label_102;
	}
label_104:;
	{
	LINE_NUMBER(2139);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (10));
	}
label_102:;
	{
	LINE_NUMBER(2143);
	jint temp0 = (jint)((func_nro_IMapObject_getX_R_int) resolveInterfaceMethod(ctx, &class_nro_IMapObject, INDEX_nro_IMapObject_getX_R_int, (checkCast(ctx, &class_nro_IMapObject, (frame[3].o)))))(ctx, (checkCast(ctx, &class_nro_IMapObject, (frame[3].o))));
	if (temp0 <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_106;
	}
	{
	LINE_NUMBER(2144);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	LINE_NUMBER(2145);
	popStackFrame(ctx);
	return;
	}
label_106:;
	{
	LINE_NUMBER(2148);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	}
label_1:;
	LINE_NUMBER(2154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_SetNum_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:SetNum", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2157);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2158);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REST POINT x= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" y= "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_outz_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(2159);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(2160);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (frame[2].i)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(2161);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = (frame[1].i);
	LINE_NUMBER(2162);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(0));
	LINE_NUMBER(2163);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(0));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(2165);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (16);
	LINE_NUMBER(2166);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (frame[1].i);
	LINE_NUMBER(2167);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (frame[2].i);
	LINE_NUMBER(2168);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(2169);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cxSend = (frame[1].i);
	LINE_NUMBER(2170);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cySend = (frame[2].i);
	}
label_8:;
	LINE_NUMBER(2172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateCharDeadFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharDeadFly", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2175);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez = (jint(0));
	LINE_NUMBER(2176);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2177);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge = (jint(0));
	LINE_NUMBER(2178);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_taitaoPause) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_taitaoPause])(ctx, sp[0].o);
	LINE_NUMBER(2179);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(3)));
	}
label_2:;
	{
	LINE_NUMBER(2182);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(2183);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) / (jint(4))));
	LINE_NUMBER(2184);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) <= (7)) goto label_8;
	}
	{
	LINE_NUMBER(2185);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) / (jint(4))));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(2187);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) - (10)));
	}
label_10:;
	{
	LINE_NUMBER(2190);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	if (temp0 >= (jint(4))) goto label_11;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)));
	if (temp0 >= (10)) goto label_11;
	}
	{
	LINE_NUMBER(2191);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2);
	LINE_NUMBER(2192);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3);
	LINE_NUMBER(2193);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (14);
	LINE_NUMBER(2194);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_11;
	}
	{
	LINE_NUMBER(2195);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((func_nro_GameScr_resetButton) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_GameScr_resetButton])(ctx, sp[0].o);
	LINE_NUMBER(2196);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(2200);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (23);
	LINE_NUMBER(2201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_updateResetPoint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateResetPoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2204);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(2205);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(2206);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(2207);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(2208);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) / (jint(4))));
	LINE_NUMBER(2209);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) <= (7)) goto label_6;
	}
	{
	LINE_NUMBER(2210);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) / (jint(4))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(2212);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) - (10)));
	}
label_8:;
	{
	LINE_NUMBER(2215);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	if (temp0 >= (jint(4))) goto label_9;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)));
	if (temp0 >= (10)) goto label_9;
	}
	{
	LINE_NUMBER(2216);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2);
	LINE_NUMBER(2217);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3);
	LINE_NUMBER(2218);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(2219);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(2220);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(0));
	LINE_NUMBER(2221);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(2224);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (23);
	LINE_NUMBER(2225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_updateSkillStand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateSkillStand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2228);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty = (jint(0));
	LINE_NUMBER(2229);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(2230);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(2231);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)));
	if ((temp0 & (jint(4))) != (jint(4))) goto label_5;
	}
	{
	LINE_NUMBER(2232);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(2234);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)));
	if ((temp0 & (8)) != (8)) goto label_5;
	}
	{
	LINE_NUMBER(2235);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(2238);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) goto label_8;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) + (24)), (8192));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2239);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(2240);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(2241);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(2242);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (jint(0));
	LINE_NUMBER(2243);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(1));
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(2245);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileYofPixel_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp0;
	}
label_8:;
	{
	LINE_NUMBER(2249);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	LINE_NUMBER(2250);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy));
	LINE_NUMBER(2251);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(2252);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp0;
	}
label_17:;
	{
	LINE_NUMBER(2255);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) != 0) goto label_19;
	}
	{
	LINE_NUMBER(2256);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) == (jint(2))) goto label_21;
	}
	{
	LINE_NUMBER(2257);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(2258);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cspeed) >> (jint(1))) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(2259);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cp2 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = temp0;
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(2261);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) >= 0) goto label_25;
	}
	{
	LINE_NUMBER(2262);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy) + (jint(1)));
	LINE_NUMBER(2263);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) != 0) goto label_21;
	}
	{
	LINE_NUMBER(2264);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(1));
	goto label_21;
	}
label_25:;
	{
	LINE_NUMBER(2267);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) >= (20)) goto label_29;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) % (jint(5))) != 0) goto label_29;
	}
	{
	LINE_NUMBER(2268);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy) + (jint(1)));
	}
label_29:;
	{
	LINE_NUMBER(2271);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) <= (jint(3))) goto label_31;
	}
	{
	LINE_NUMBER(2272);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(3));
	}
label_31:;
	{
	LINE_NUMBER(2275);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3))));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_21;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	jint temp1 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3))));
	if (temp0 > temp1) goto label_21;
	}
	{
	LINE_NUMBER(2276);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(2277);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp3;
	}
label_21:;
	{
	LINE_NUMBER(2281);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) <= 0) goto label_35;
	}
	{
	LINE_NUMBER(2282);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx) - (jint(1)));
	goto label_37;
	}
label_35:;
	{
	LINE_NUMBER(2284);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) >= 0) goto label_37;
	}
	{
	LINE_NUMBER(2285);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx) + (jint(1)));
	}
label_37:;
	LINE_NUMBER(2289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateCharAutoJump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharAutoJump", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2292);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez = (jint(0));
	LINE_NUMBER(2293);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge) == 0) goto label_2;
	}
	{
	LINE_NUMBER(2294);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge = (jint(0));
	LINE_NUMBER(2295);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_taitaoPause) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_taitaoPause])(ctx, sp[0].o);
	LINE_NUMBER(2296);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(3)));
	}
label_2:;
	{
	LINE_NUMBER(2299);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir)));
	LINE_NUMBER(2300);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvyJump));
	LINE_NUMBER(2301);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvyJump = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvyJump) + (jint(1)));
	LINE_NUMBER(2302);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) != 0) goto label_9;
	}
	{
	LINE_NUMBER(2303);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(2305);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (23);
	}
label_11:;
	{
	LINE_NUMBER(2308);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvyJump) != (-3)) goto label_12;
	}
	{
	LINE_NUMBER(2309);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (8);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(2310);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvyJump) != (-2)) goto label_15;
	}
	{
	LINE_NUMBER(2311);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (9);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(2312);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvyJump) != (jint(-1))) goto label_17;
	}
	{
	LINE_NUMBER(2313);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (10);
	goto label_14;
	}
label_17:;
	{
	LINE_NUMBER(2314);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvyJump) != 0) goto label_14;
	}
	{
	LINE_NUMBER(2315);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (11);
	}
label_14:;
	{
	LINE_NUMBER(2318);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvyJump) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2319);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (6);
	LINE_NUMBER(2320);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(2321);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vMovePoints;
	sp[0].o = (jobject)((func_nro_MyVector_firstElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_firstElement_R_java_lang_Object])(ctx, sp[0].o);
	((nro_MovePoint *) NULL_CHECK((checkCast(ctx, &class_nro_MovePoint, sp[0].o))))->F_status = (jint(4));
	LINE_NUMBER(2322);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(2323);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(1));
	}
label_20:;
	LINE_NUMBER(2326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:hide", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2329);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isHide = (jint(1));
	LINE_NUMBER(2330);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (107), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (25)), (jint(3)), (15), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(2331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_show(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:show", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2334);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isHide = (jint(0));
	LINE_NUMBER(2335);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (107), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (25)), (jint(3)), (10), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(2336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_updateCharStand(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharStand", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2339);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSoundJump = (jint(0));
	LINE_NUMBER(2340);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isAttack = (jint(0));
	LINE_NUMBER(2341);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(2342);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(2343);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(2344);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) <= (30)) goto label_6;
	}
	{
	LINE_NUMBER(2345);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(2348);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) % (15)) >= (jint(5))) goto label_8;
	}
	{
	LINE_NUMBER(2349);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(2351);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(2354);
	M_nro_Char_updateCharInBridge(ctx, (frame[0].o));
	LINE_NUMBER(2355);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_12;
	}
	{
	LINE_NUMBER(2356);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp3 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp3) + (jint(1)));
	LINE_NUMBER(2357);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) <= (50)) goto label_12;
	}
	{
	LINE_NUMBER(2358);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(2359);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(2363);
	M_nro_Char_updateSuperEff(ctx, (frame[0].o));
	LINE_NUMBER(2364);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_18;
	}
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (50)) goto label_18;
	}
	{
	LINE_NUMBER(2366);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	sp[0].o = checkCast(ctx, &class_nro_Char, sp[0].o);
	frame[1].o = sp[0].o;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_changePos) != 0) goto label_21;
	}
	{
	LINE_NUMBER(2367);
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_statusMe) == (jint(2))) goto label_23;
	}
	{
	LINE_NUMBER(2368);
	((func_nro_Char_moveTo_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Char_moveTo_int_int_int])(ctx, (frame[1].o), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (45)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(0)));
	}
label_23:;
	{
	LINE_NUMBER(2371);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	LINE_NUMBER(2372);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (45)) - ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx)));
	if (temp1 > (10)) goto label_26;
	}
	{
	LINE_NUMBER(2373);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_changePos = (jint(1));
	goto label_26;
	}
label_21:;
	{
	LINE_NUMBER(2376);
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_statusMe) == (jint(2))) goto label_28;
	}
	{
	LINE_NUMBER(2377);
	((func_nro_Char_moveTo_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Char_moveTo_int_int_int])(ctx, (frame[1].o), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (45)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(0)));
	}
label_28:;
	{
	LINE_NUMBER(2380);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	LINE_NUMBER(2381);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (45)) - ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx)));
	if (temp1 > (10)) goto label_26;
	}
	{
	LINE_NUMBER(2382);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_changePos = (jint(0));
	}
label_26:;
	{
	LINE_NUMBER(2386);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (100)) != 0) goto label_18;
	}
	{
	LINE_NUMBER(2387);
	((func_nro_Char_addInfo_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_nro_Char_addInfo_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"C\u1eafc c\u00f9m cum c\u00f3 1 \u0111\u00f9m d\u01b0\u1edbi h\u00e1ng"_j))));
	}
label_18:;
	LINE_NUMBER(2391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateSuperEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateSuperEff", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2394);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCopy) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2395);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFusion) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2396);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSetPos) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2397);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPet) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMiniPet) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2398);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2399);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) == (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(2400);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_8;
	}
	{
	LINE_NUMBER(2401);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isPaintAura2) != 0) goto label_10;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff) < 0) goto label_10;
	}
	LINE_NUMBER(2402);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(2404);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff) < 0) goto label_10;
	}
	LINE_NUMBER(2405);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(2408);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_ty = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ty) + (jint(1)));
	LINE_NUMBER(2409);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) >= (14)) goto label_1;
	}
	{
	LINE_NUMBER(2410);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (9)) goto label_15;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_15;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty) == (40)) goto label_16;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty) != (50)) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(2411);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2412);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2413);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(2416);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty) <= (50)) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (9)) goto label_1;
	}
	{
	LINE_NUMBER(2417);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2418);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (13)) goto label_22;
	}
	{
	LINE_NUMBER(2419);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (25)) != 0) goto label_24;
	}
	{
	LINE_NUMBER(2420);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (114), (frame[0].o), (jint(1)));
	}
label_24:;
	{
	LINE_NUMBER(2423);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2424);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (132), (frame[0].o), (jint(1)));
	goto label_20;
	}
label_22:;
	{
	LINE_NUMBER(2426);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (25)) != 0) goto label_20;
	}
	{
	LINE_NUMBER(2427);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, ((173) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) - (10))), (frame[0].o), (jint(1)));
	}
label_20:;
	{
	LINE_NUMBER(2431);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(2432);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) != 0) goto label_30;
	}
	{
	LINE_NUMBER(2433);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (132), (frame[0].o), (jint(1)));
	}
label_30:;
	{
	LINE_NUMBER(2436);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (13)) goto label_28;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) != 0) goto label_28;
	}
	{
	LINE_NUMBER(2437);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (131), (frame[0].o), (jint(1)));
	}
label_28:;
	{
	LINE_NUMBER(2441);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(2442);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (7)) != 0) goto label_34;
	}
	{
	LINE_NUMBER(2443);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (131), (frame[0].o), (jint(1)));
	}
label_34:;
	{
	LINE_NUMBER(2446);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (13)) goto label_1;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (25)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2447);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (114), (frame[0].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2459);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_nro_Char_getSoundVolumn_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getSoundVolumn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2462);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2463);
	popStackFrame(ctx);
	return (jfloat(0.1f));
	}
label_1:;
	{
	LINE_NUMBER(2465);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	frame[1].i = temp0;
	LINE_NUMBER(2466);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	if ((frame[1].i) > (50)) goto label_4;
	}
	{
	LINE_NUMBER(2467);
	popStackFrame(ctx);
	return (jfloat(0.1f));
	}
label_4:;
	{
	LINE_NUMBER(2469);
	popStackFrame(ctx);
	return (jfloat(0.05f));
	}

	popStackFrame(ctx);
}

void M_nro_Char_updateCharRun(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharRun", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2473);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) < (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) > ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_1;
	}
	{
	LINE_NUMBER(2474);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != 0) goto label_3;
	}
	{
	LINE_NUMBER(2475);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	jfloat temp0 = (jfloat)((func_nro_Char_getSoundVolumn_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_getSoundVolumn_R_float])(ctx, (frame[0].o));
	((func_lib_sound_SoundMn_charRun_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charRun_float])(ctx, sp[0].o, temp0);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(2477);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	jfloat temp0 = (jfloat)((func_nro_Char_getSoundVolumn_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_getSoundVolumn_R_float])(ctx, (frame[0].o));
	((func_lib_sound_SoundMn_monkeyRun_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_monkeyRun_float])(ctx, sp[0].o, temp0);
	}
label_1:;
	{
	LINE_NUMBER(2481);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty = (jint(0));
	LINE_NUMBER(2482);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez = (jint(0));
	LINE_NUMBER(2483);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2484);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge = (jint(0));
	LINE_NUMBER(2485);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_taitaoPause) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_taitaoPause])(ctx, sp[0].o);
	LINE_NUMBER(2486);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(3)));
	}
label_7:;
	{
	LINE_NUMBER(2489);
	frame[1].i = (jint(0));
	LINE_NUMBER(2490);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(2491);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)));
	frame[1].i = temp1;
	}
label_12:;
	{
	LINE_NUMBER(2494);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(2495);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) < (10)) goto label_15;
	}
	{
	LINE_NUMBER(2496);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(2497);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cBonusSpeed = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2500);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) >> (jint(1))) + (jint(2)));
	LINE_NUMBER(2501);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(1))));
	if ((temp0 & (64)) != (64)) goto label_19;
	}
	{
	LINE_NUMBER(2502);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) >> (jint(1))));
	goto label_21;
	}
label_19:;
	{
	LINE_NUMBER(2504);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	}
label_21:;
	{
	LINE_NUMBER(2507);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(2508);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)), (jint(4)));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(2509);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_26;
	}
	{
	LINE_NUMBER(2510);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(2511);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	goto label_24;
	}
label_26:;
	{
	LINE_NUMBER(2513);
	M_nro_Char_stop(ctx, (frame[0].o));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(2516);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)) - (jint(1))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chh)), (8));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(2517);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_30;
	}
	{
	LINE_NUMBER(2518);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(2519);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)) - (jint(1))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((temp0 + (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	goto label_24;
	}
label_30:;
	{
	LINE_NUMBER(2521);
	M_nro_Char_stop(ctx, (frame[0].o));
	}
label_24:;
	{
	LINE_NUMBER(2525);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_33;
	}
	{
	LINE_NUMBER(2526);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) <= 0) goto label_35;
	}
	{
	LINE_NUMBER(2527);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx) - (jint(1)));
	goto label_33;
	}
label_35:;
	{
	LINE_NUMBER(2528);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) >= 0) goto label_37;
	}
	{
	LINE_NUMBER(2529);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx) + (jint(1)));
	goto label_33;
	}
label_37:;
	{
	LINE_NUMBER(2531);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend)) == 0) goto label_39;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_39;
	}
	{
	LINE_NUMBER(2532);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_39:;
	{
	LINE_NUMBER(2535);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(2536);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cBonusSpeed = (jint(0));
	}
label_33:;
	{
	LINE_NUMBER(2540);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) == (jint(2))) goto label_42;
	}
	{
	LINE_NUMBER(2541);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_44;
	}
	{
	LINE_NUMBER(2542);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend)) != 0) goto label_46;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)) == 0) goto label_47;
	}
label_46:;
	{
	LINE_NUMBER(2543);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_47:;
	{
	LINE_NUMBER(2546);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	LINE_NUMBER(2547);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(2548);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (jint(0));
	LINE_NUMBER(2549);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = ((jint(3)) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir));
	LINE_NUMBER(2550);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (jint(0));
	goto label_42;
	}
label_44:;
	{
	LINE_NUMBER(2552);
	M_nro_Char_stop(ctx, (frame[0].o));
	}
label_42:;
	{
	LINE_NUMBER(2556);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_52;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)));
	if (temp1 <= (frame[1].i)) goto label_52;
	}
	{
	LINE_NUMBER(2557);
	M_nro_Char_stop(ctx, (frame[0].o));
	}
label_52:;
	{
	LINE_NUMBER(2560);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) << (jint(3)))), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2561);
	M_nro_Char_updateCharInBridge(ctx, (frame[0].o));
	LINE_NUMBER(2562);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(2563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:stop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2566);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (6);
	LINE_NUMBER(2567);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(2568);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(2569);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(2570);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cp2 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = temp0;
	LINE_NUMBER(2571);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_nro_Char_abs_int_R_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:abs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2574);
	if ((frame[0].i) <= 0) goto label_1;
	}
	INST_ILOAD(0);
	goto label_2;
label_1:;
	INST_ILOAD(0);
	INST_INEG();
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateCharJump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharJump", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2578);
	M_nro_Char_setMountIsStart(ctx, (frame[0].o));
	LINE_NUMBER(2579);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(2580);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty = (jint(0));
	LINE_NUMBER(2581);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez = (jint(0));
	LINE_NUMBER(2582);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge) == 0) goto label_5;
	}
	{
	LINE_NUMBER(2583);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge = (jint(0));
	LINE_NUMBER(2584);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_taitaoPause) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_taitaoPause])(ctx, sp[0].o);
	LINE_NUMBER(2585);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(3)));
	}
label_5:;
	{
	LINE_NUMBER(2588);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	LINE_NUMBER(2589);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy));
	LINE_NUMBER(2590);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(2591);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = (jint(0));
	LINE_NUMBER(2592);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(2595);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy) + (jint(1)));
	LINE_NUMBER(2596);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(2597);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(2600);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(2603);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	frame[1].i = temp0;
	if (temp0 <= 0) goto label_20;
	}
	{
	LINE_NUMBER(2604);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) <= (frame[1].i)) goto label_22;
	}
	{
	LINE_NUMBER(2605);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (frame[1].i);
	}
label_22:;
	{
	LINE_NUMBER(2608);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) < 0) goto label_24;
	}
	LINE_NUMBER(2609);
	goto label_17;
label_20:;
	{
	LINE_NUMBER(2611);
	if ((frame[1].i) >= 0) goto label_24;
	}
	{
	LINE_NUMBER(2612);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) >= (frame[1].i)) goto label_27;
	}
	{
	LINE_NUMBER(2613);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (frame[1].i);
	}
label_27:;
	{
	LINE_NUMBER(2616);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) > 0) goto label_24;
	}
	LINE_NUMBER(2617);
	goto label_17;
label_24:;
	{
	LINE_NUMBER(2621);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (frame[1].i);
	}
label_17:;
	{
	LINE_NUMBER(2625);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_30;
	}
	{
	LINE_NUMBER(2626);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(1))));
	if ((temp0 & (jint(4))) != (jint(4))) goto label_32;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw);
	LINE_NUMBER(2627);
	jint temp2 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, temp1);
	if (temp0 > (temp2 + (12))) goto label_32;
	}
	{
	LINE_NUMBER(2628);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	LINE_NUMBER(2629);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(2631);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(1))));
	if ((temp0 & (8)) != (8)) goto label_32;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw);
	LINE_NUMBER(2632);
	jint temp2 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, temp1);
	if (temp0 < (temp2 + (12))) goto label_32;
	}
	{
	LINE_NUMBER(2633);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (24)) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	LINE_NUMBER(2634);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(2637);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) != 0) goto label_39;
	}
	{
	LINE_NUMBER(2638);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_41;
	}
	{
	LINE_NUMBER(2639);
	M_nro_Char_setCharFallFromJump(ctx, (frame[0].o));
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(2641);
	M_nro_Char_stop(ctx, (frame[0].o));
	}
label_39:;
	{
	LINE_NUMBER(2645);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_43;
	}
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_ischangingMap;
	if ((--sp)->i != 0) goto label_43;
	{
	jint temp0 = (jint)M_nro_Char_isInWaypoint_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(2646);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(2647);
	jint temp0 = (jint)SM_nro_TileMap_isTrainingMap_R_boolean(ctx);
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(2648);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(1));
	LINE_NUMBER(2649);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getMapOffline) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getMapOffline])(ctx, sp[0].o);
	goto label_49;
	}
label_46:;
	{
	LINE_NUMBER(2651);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestChangeMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestChangeMap])(ctx, sp[0].o);
	}
label_49:;
	{
	LINE_NUMBER(2654);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(1));
	LINE_NUMBER(2655);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(1));
	LINE_NUMBER(2656);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(2657);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(2658);
	SM_nro_InfoDlg_showWait(ctx);
	goto label_54;
	}
label_43:;
	{
	LINE_NUMBER(2660);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (16)) goto label_55;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) + (24)), (8192));
	if (temp0 != 0) goto label_56;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) >= 0) goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(2661);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(2662);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(2663);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (jint(0));
	LINE_NUMBER(2664);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(1));
	LINE_NUMBER(2665);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (jint(0));
	LINE_NUMBER(2666);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) >= 0) goto label_62;
	}
	{
	LINE_NUMBER(2667);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = (jint(0));
	}
label_62:;
	{
	LINE_NUMBER(2670);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileYofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (25)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp0;
	LINE_NUMBER(2671);
	SM_main_GameCanvas_clearKeyHold(ctx);
	}
label_55:;
	{
	LINE_NUMBER(2674);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3) >= 0) goto label_65;
	}
	{
	LINE_NUMBER(2675);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp3 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp3) + (jint(1)));
	}
label_65:;
	{
	LINE_NUMBER(2678);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	LINE_NUMBER(2679);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_54;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_54;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (temp0 >= ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd)) goto label_54;
	}
	{
	LINE_NUMBER(2680);
	M_nro_Char_stop(ctx, (frame[0].o));
	}
label_54:;
	LINE_NUMBER(2684);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setCharFallFromJump(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setCharFallFromJump", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2687);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cyStartFall = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(2688);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(2689);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (jint(0));
	LINE_NUMBER(2690);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (10);
	LINE_NUMBER(2691);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) << (jint(2)));
	LINE_NUMBER(2692);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(2693);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileYofPixel_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (temp0 + (12));
	LINE_NUMBER(2694);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_8;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend)) != 0) goto label_9;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)) == 0) goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(2695);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cxSend)));
	if (temp1 > (96)) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_Res_abs_int_R_int(ctx, (temp0 - ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cySend)));
	if (temp1 <= (24)) goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(2696);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(2699);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateCharFall(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharFall", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2702);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2703);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty = (jint(0));
	LINE_NUMBER(2704);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(4))) < (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh)) goto label_4;
	}
	{
	LINE_NUMBER(2705);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(2706);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_7;
	}
	{
	LINE_NUMBER(2707);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_charFall) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charFall])(ctx, sp[0].o);
	}
label_7:;
	{
	LINE_NUMBER(2710);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(2711);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(2713);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) % (24)) != 0) goto label_10;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(2714);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (jint(0));
	LINE_NUMBER(2715);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_13;
	}
	{
	LINE_NUMBER(2716);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)) > 0) goto label_15;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend)) != 0) goto label_15;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)) >= 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(2717);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(2720);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(2721);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cp2 = temp3;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = temp3;
	LINE_NUMBER(2722);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(2723);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(2724);
	popStackFrame(ctx);
	return;
	}
label_13:;
	{
	LINE_NUMBER(2727);
	M_nro_Char_stop(ctx, (frame[0].o));
	LINE_NUMBER(2728);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	LINE_NUMBER(2729);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2730);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2731);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(2734);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(2735);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_delayFall = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_delayFall) - (jint(1)));
	LINE_NUMBER(2736);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall) % (10)) <= (jint(5))) goto label_28;
	}
	{
	LINE_NUMBER(2737);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (jint(1)));
	goto label_1;
	}
label_28:;
	{
	LINE_NUMBER(2739);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (jint(1)));
	goto label_1;
	}
label_25:;
	{
	LINE_NUMBER(2742);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) >= (-4)) goto label_30;
	}
	{
	LINE_NUMBER(2743);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(2745);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (12);
	}
label_32:;
	{
	LINE_NUMBER(2748);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	LINE_NUMBER(2749);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(2752);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp0 = ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	frame[1].i = temp0;
	if (temp0 <= 0) goto label_37;
	}
	{
	LINE_NUMBER(2753);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) <= (frame[1].i)) goto label_39;
	}
	{
	LINE_NUMBER(2754);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (frame[1].i);
	}
label_39:;
	{
	LINE_NUMBER(2757);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) < 0) goto label_41;
	}
	LINE_NUMBER(2758);
	goto label_34;
label_37:;
	{
	LINE_NUMBER(2760);
	if ((frame[1].i) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(2761);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) >= (frame[1].i)) goto label_44;
	}
	{
	LINE_NUMBER(2762);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (frame[1].i);
	}
label_44:;
	{
	LINE_NUMBER(2765);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) > 0) goto label_41;
	}
	LINE_NUMBER(2766);
	goto label_34;
label_41:;
	{
	LINE_NUMBER(2770);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (frame[1].i);
	}
label_34:;
	{
	LINE_NUMBER(2774);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvy) + (jint(1)));
	LINE_NUMBER(2775);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) <= (8)) goto label_48;
	}
	{
	LINE_NUMBER(2776);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (8);
	}
label_48:;
	{
	LINE_NUMBER(2779);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint;
	if (sp[0].o != nullptr) goto label_50;
	}
	{
	LINE_NUMBER(2780);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy));
	}
label_50:;
	{
	LINE_NUMBER(2783);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_52;
	}
	{
	LINE_NUMBER(2784);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(1))));
	if ((temp0 & (jint(4))) != (jint(4))) goto label_54;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw);
	LINE_NUMBER(2785);
	jint temp2 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, temp1);
	if (temp0 > (temp2 + (12))) goto label_54;
	}
	{
	LINE_NUMBER(2786);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	LINE_NUMBER(2787);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	goto label_54;
	}
label_52:;
	{
	LINE_NUMBER(2789);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(1))));
	if ((temp0 & (8)) != (8)) goto label_54;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw);
	LINE_NUMBER(2790);
	jint temp2 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, temp1);
	if (temp0 < (temp2 + (12))) goto label_54;
	}
	{
	LINE_NUMBER(2791);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (24)) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	LINE_NUMBER(2792);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	}
label_54:;
	{
	LINE_NUMBER(2795);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) <= (jint(3))) goto label_61;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cyStartFall) == 0) goto label_62;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cyStartFall;
	jint temp1 = (jint)SM_nro_TileMap_tileYofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3))));
	if (temp0 > temp1) goto label_61;
	}
label_62:;
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3));
	LINE_NUMBER(2796);
	jint temp2 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, temp0, temp1);
	if ((temp2 & (jint(2))) != (jint(2))) goto label_61;
	}
	{
	LINE_NUMBER(2797);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_65;
	}
	{
	LINE_NUMBER(2798);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cyStartFall = (jint(0));
	LINE_NUMBER(2799);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(2800);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cp2 = temp3;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = temp3;
	LINE_NUMBER(2801);
	sp[0].o = frame[0].o;
	jint temp6 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp6;
	LINE_NUMBER(2802);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(2803);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_72;
	}
	{
	LINE_NUMBER(2804);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_charFall) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_charFall])(ctx, sp[0].o);
	}
label_72:;
	{
	LINE_NUMBER(2807);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(2808);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2809);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2810);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(2811);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)) <= 0) goto label_78;
	}
	{
	LINE_NUMBER(2812);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2813);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(2814);
	popStackFrame(ctx);
	return;
	}
label_78:;
	{
	LINE_NUMBER(2816);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend)) != 0) goto label_82;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)) >= 0) goto label_1;
	}
label_82:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	LINE_NUMBER(2817);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(2818);
	popStackFrame(ctx);
	return;
	}
label_65:;
	{
	LINE_NUMBER(2821);
	M_nro_Char_stop(ctx, (frame[0].o));
	LINE_NUMBER(2822);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp0;
	LINE_NUMBER(2823);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	LINE_NUMBER(2824);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2825);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp2 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(2826);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(2827);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	goto label_1;
	}
label_61:;
	{
	LINE_NUMBER(2831);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (12);
	LINE_NUMBER(2832);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_1;
	}
	{
	LINE_NUMBER(2833);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))));
	if ((temp0 & (jint(2))) != (jint(2))) goto label_93;
	}
	{
	LINE_NUMBER(2834);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	}
label_93:;
	{
	LINE_NUMBER(2837);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (temp0 <= ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd)) goto label_1;
	}
	{
	LINE_NUMBER(2838);
	M_nro_Char_stop(ctx, (frame[0].o));
	LINE_NUMBER(2839);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = temp0;
	LINE_NUMBER(2840);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(2848);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateCharFly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharFly", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2851);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != (jint(1))) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_1;
	}
	INST_ICONST(2);
	goto label_2;
label_1:;
	INST_ICONST(1);
label_2:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(2852);
	M_nro_Char_setMountIsStart(ctx, (frame[0].o));
	LINE_NUMBER(2853);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (16)) goto label_5;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) + (24)), (8192));
	if (temp0 != 0) goto label_6;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) < 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(2859);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(2860);
	frame[4].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(2861);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_FlyMove;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(2862);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[5].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_FlyMove;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(2863);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_FlyMove;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (frame[5].i))) != (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(2864);
	frame[2].i = (jint(1));
	LINE_NUMBER(2865);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(2862);
	INST_IINC(5, 1);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(2870);
	frame[2].i = (jint(0));
	}
label_16:;
	{
	LINE_NUMBER(2873);
	if ((frame[2].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(2874);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_19;
	}
	{
	LINE_NUMBER(2875);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	}
label_19:;
	{
	LINE_NUMBER(2878);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) <= (jint(4))) goto label_21;
	}
	{
	LINE_NUMBER(2879);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(2882);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) + (jint(2)));
	goto label_23;
	}
label_17:;
	{
	LINE_NUMBER(2884);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1) + (jint(1)));
	LINE_NUMBER(2885);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) < (9)) goto label_25;
	}
	{
	LINE_NUMBER(2886);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(2887);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_28;
	}
	{
	LINE_NUMBER(2888);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	}
label_28:;
	{
	LINE_NUMBER(2891);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cBonusSpeed = (jint(0));
	}
label_25:;
	{
	LINE_NUMBER(2894);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (8);
	LINE_NUMBER(2895);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	if (temp0 > (jint(4))) goto label_31;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_31;
	}
	{
	LINE_NUMBER(2896);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(2897);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp1 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)));
	frame[4].i = temp1;
	LINE_NUMBER(2898);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	jint temp3 = (jint)SM_nro_Char_abs_int_R_int(ctx, (temp2 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd)));
	frame[5].i = temp3;
	LINE_NUMBER(2899);
	if ((frame[4].i) <= ((frame[5].i) * (10))) goto label_37;
	}
	{
	LINE_NUMBER(2900);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (8);
	goto label_31;
	}
label_37:;
	{
	LINE_NUMBER(2901);
	if ((frame[4].i) <= (frame[5].i)) goto label_39;
	}
	{
	if ((frame[4].i) <= (48)) goto label_39;
	}
	{
	if ((frame[5].i) <= (32)) goto label_39;
	}
	{
	LINE_NUMBER(2902);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (8);
	goto label_31;
	}
label_39:;
	{
	LINE_NUMBER(2904);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	goto label_31;
	}
label_33:;
	{
	LINE_NUMBER(2907);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(2908);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	}
label_41:;
	{
	LINE_NUMBER(2911);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) <= (16)) goto label_43;
	}
	{
	LINE_NUMBER(2912);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (16);
	}
label_43:;
	{
	LINE_NUMBER(2915);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	}
label_31:;
	{
	LINE_NUMBER(2919);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_23;
	}
	{
	LINE_NUMBER(2920);
	jint temp0 = (jint)SM_nro_Char_abs_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	if (temp0 >= (jint(2))) goto label_46;
	}
	{
	LINE_NUMBER(2921);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) << (jint(1))) * (frame[1].i));
	}
label_46:;
	{
	LINE_NUMBER(2924);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) == 0) goto label_48;
	}
	{
	LINE_NUMBER(2925);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	}
label_48:;
	{
	LINE_NUMBER(2928);
	jint temp0 = (jint)SM_nro_Char_abs_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx));
	if (temp0 > (jint(2))) goto label_23;
	}
	{
	LINE_NUMBER(2929);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp2 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cp2) + (jint(1)));
	LINE_NUMBER(2930);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2) <= (32)) goto label_23;
	}
	{
	LINE_NUMBER(2931);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(2932);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(2933);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	}
label_23:;
	{
	LINE_NUMBER(2939);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_55;
	}
	{
	LINE_NUMBER(2940);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(1))), (jint(4)));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(2941);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(2942);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (temp0 - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	LINE_NUMBER(2943);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) != 0) goto label_57;
	}
	{
	LINE_NUMBER(2944);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(2947);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)) - (jint(1))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(1))), (8));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(2948);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(2949);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_TileMap_tileXofPixel_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw)) - (jint(1))));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((temp0 + (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_chw));
	LINE_NUMBER(2950);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) != 0) goto label_57;
	}
	{
	LINE_NUMBER(2951);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_57:;
	{
	LINE_NUMBER(2955);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) * (frame[1].i)));
	LINE_NUMBER(2956);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) * (frame[1].i)));
	LINE_NUMBER(2957);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) != 0) goto label_68;
	}
	{
	if (((frame[3].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) != 0) goto label_68;
	}
	{
	LINE_NUMBER(2958);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_ty = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ty) + (jint(1)));
	LINE_NUMBER(2959);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_wt = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_wt) + (jint(1)));
	LINE_NUMBER(2960);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_fy;
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wy) != 0) goto label_72;
	}
	INST_ICONST(1);
	goto label_73;
label_72:;
	INST_ICONST(-1);
label_73:;
	{
	sp -= 3;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fy = (sp[1].i + sp[2].i);
	LINE_NUMBER(2961);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wt) != (10)) goto label_75;
	}
	{
	LINE_NUMBER(2962);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_wt = (jint(0));
	LINE_NUMBER(2963);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wy) != 0) goto label_78;
	}
	INST_ICONST(1);
	goto label_79;
label_78:;
	INST_ICONST(0);
label_79:;
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_wy = sp[1].i;
label_75:;
	{
	LINE_NUMBER(2966);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty) <= (20)) goto label_68;
	}
	{
	LINE_NUMBER(2967);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (10);
	LINE_NUMBER(2968);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_68;
	}
	{
	LINE_NUMBER(2969);
	jint temp0 = 111;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_83;
	}
	INST_BIPUSH(-17);
	goto label_84;
label_83:;
	INST_BIPUSH(27);
label_84:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)) + (13);
	jint temp2 = jint(1);
	LINE_NUMBER(2970);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp += 3;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) == (jint(1))) goto label_86;
	}
	INST_ICONST(2);
	goto label_87;
label_86:;
	INST_ICONST(0);
label_87:;
	LINE_NUMBER(2969);
	POP_N(5); // Pop method args
	SM_nro_ServerEffect_addServerEffect_int_int_int_int_int(ctx, sp[0].i, sp[1].i, sp[2].i, sp[3].i, sp[4].i);
label_68:;
	{
	LINE_NUMBER(2975);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_88;
	}
	{
	LINE_NUMBER(2976);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) <= 0) goto label_90;
	}
	{
	LINE_NUMBER(2977);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx) - (jint(1)));
	goto label_92;
	}
label_90:;
	{
	LINE_NUMBER(2978);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx) >= 0) goto label_93;
	}
	{
	LINE_NUMBER(2979);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx) + (jint(1)));
	goto label_92;
	}
label_93:;
	{
	LINE_NUMBER(2980);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) != 0) goto label_92;
	}
	{
	LINE_NUMBER(2981);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(2982);
	M_nro_Char_checkDelayFallIfTooHigh(ctx, (frame[0].o));
	LINE_NUMBER(2983);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_92:;
	{
	LINE_NUMBER(2986);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) < 0) goto label_98;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (sp[0].o == nullptr) goto label_99;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint;
	if (((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_yEnd) < (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (10))) goto label_98;
	}
label_99:;
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (20);
	LINE_NUMBER(2987);
	jint temp2 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, temp0, temp1);
	if ((temp2 & (jint(2))) == (jint(2))) goto label_101;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (40);
	LINE_NUMBER(2988);
	jint temp2 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, temp0, temp1);
	if ((temp2 & (jint(2))) != (jint(2))) goto label_98;
	}
label_101:;
	{
	LINE_NUMBER(2989);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy) != 0) goto label_103;
	}
	{
	LINE_NUMBER(2990);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (jint(0));
	}
label_103:;
	{
	LINE_NUMBER(2993);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cyStartFall = (jint(0));
	LINE_NUMBER(2994);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cvy = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cvx = temp0;
	LINE_NUMBER(2995);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp3 = jint(0);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cp2 = temp3;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = temp3;
	LINE_NUMBER(2996);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(2997);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(3)));
	}
label_98:;
	{
	LINE_NUMBER(3000);
	jint temp0 = (jint)SM_nro_Char_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cxSend)));
	if (temp0 > (96)) goto label_109;
	}
	{
	jint temp0 = (jint)SM_nro_Char_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cySend)));
	if (temp0 <= (24)) goto label_88;
	}
label_109:;
	{
	LINE_NUMBER(3001);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_88:;
	LINE_NUMBER(3005);
	goto label_110;
label_6:;
	{
	LINE_NUMBER(3006);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) >= 0) goto label_111;
	}
	{
	LINE_NUMBER(3007);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch);
	}
label_111:;
	{
	LINE_NUMBER(3010);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (7);
	LINE_NUMBER(3011);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(4));
	LINE_NUMBER(3012);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvx = (jint(0));
	LINE_NUMBER(3013);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (jint(0));
	LINE_NUMBER(3014);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_110:;
	LINE_NUMBER(3016);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateMount(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateMount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3019);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_frameMount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_frameMount) + (jint(1)));
	LINE_NUMBER(3020);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	if (temp0 <= ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(3021);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(3024);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_frameNewMount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_frameNewMount) + (jint(1)));
	LINE_NUMBER(3025);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameNewMount) <= (1000)) goto label_5;
	}
	{
	LINE_NUMBER(3026);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameNewMount = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(3029);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount) == 0) goto label_7;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) != 0) goto label_7;
	}
	{
	LINE_NUMBER(3030);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(3031);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) != 0) goto label_10;
	}
	{
	LINE_NUMBER(3032);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) < ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xdis)) goto label_12;
	}
	{
	LINE_NUMBER(3033);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xdis));
	LINE_NUMBER(3034);
	popStackFrame(ctx);
	return;
	}
label_12:;
	{
	LINE_NUMBER(3037);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(3038);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount = (jint(1));
	LINE_NUMBER(3039);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount = (jint(0));
	LINE_NUMBER(3040);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(3043);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) != (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(3044);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount)) < ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xdis)) goto label_20;
	}
	{
	LINE_NUMBER(3045);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xdis));
	LINE_NUMBER(3046);
	popStackFrame(ctx);
	return;
	}
label_20:;
	{
	LINE_NUMBER(3049);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(3050);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount = (jint(1));
	LINE_NUMBER(3051);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount = (jint(0));
	LINE_NUMBER(3052);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(3055);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) == 0) goto label_26;
	}
	{
	LINE_NUMBER(3056);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_28;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) >= (24)) goto label_29;
	}
label_28:;
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) >= (24)) goto label_29;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount) != 0) goto label_29;
	}
	{
	LINE_NUMBER(3057);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount = (jint(0));
	LINE_NUMBER(3058);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount = (jint(0));
	LINE_NUMBER(3059);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount = (jint(1));
	LINE_NUMBER(3060);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dyMount = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(3063);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) % (15)) >= (jint(5))) goto label_34;
	}
	{
	LINE_NUMBER(3064);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(0));
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(3066);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (jint(1));
	}
label_36:;
	{
	LINE_NUMBER(3069);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir);
	LINE_NUMBER(3070);
	M_nro_Char_updateSuperEff(ctx, (frame[0].o));
	LINE_NUMBER(3071);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) >= 0) goto label_39;
	}
	{
	LINE_NUMBER(3072);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount = (jint(0));
	LINE_NUMBER(3073);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount = (-19);
	goto label_42;
	}
label_39:;
	{
	LINE_NUMBER(3074);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) != (jint(1))) goto label_42;
	}
	{
	LINE_NUMBER(3075);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount = (jint(2));
	LINE_NUMBER(3076);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount = (-31);
	LINE_NUMBER(3077);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEventMount) == 0) goto label_42;
	}
	{
	LINE_NUMBER(3078);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount = (-38);
	}
label_42:;
	{
	LINE_NUMBER(3082);
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(3083);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount = (-15);
	goto label_49;
	}
label_47:;
	{
	LINE_NUMBER(3085);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount = (-17);
	}
label_49:;
	{
	LINE_NUMBER(3088);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(3089);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(3090);
	popStackFrame(ctx);
	return;
	}
label_26:;
	{
	LINE_NUMBER(3093);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount) == 0) goto label_52;
	}
	{
	LINE_NUMBER(3094);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) != 0) goto label_54;
	}
	{
	LINE_NUMBER(3095);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) - (100))) goto label_56;
	}
	{
	LINE_NUMBER(3096);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount) - (20));
	LINE_NUMBER(3097);
	popStackFrame(ctx);
	return;
	}
label_56:;
	{
	LINE_NUMBER(3100);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount = (jint(0));
	LINE_NUMBER(3101);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount = (jint(0));
	LINE_NUMBER(3102);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount = (jint(0));
	LINE_NUMBER(3103);
	popStackFrame(ctx);
	return;
	}
label_54:;
	{
	LINE_NUMBER(3106);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) != (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(3107);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) >= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) + (50))) goto label_63;
	}
	{
	LINE_NUMBER(3108);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_idcharMount) + (20));
	LINE_NUMBER(3109);
	popStackFrame(ctx);
	return;
	}
label_63:;
	{
	LINE_NUMBER(3112);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount = (jint(0));
	LINE_NUMBER(3113);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount = (jint(0));
	LINE_NUMBER(3114);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount = (jint(0));
	LINE_NUMBER(3115);
	popStackFrame(ctx);
	return;
	}
label_52:;
	{
	LINE_NUMBER(3117);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount) == 0) goto label_69;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) == 0) goto label_69;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount) != 0) goto label_18;
	}
label_69:;
	{
	LINE_NUMBER(3118);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) - (100));
	LINE_NUMBER(3119);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (100));
	}
label_18:;
	LINE_NUMBER(3123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Char_getMountData(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getMountData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(3126);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50)))))->F_data;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3127);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (50));
	clinit_nro_EffectData(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_EffectData);
	init_nro_EffectData(ctx, sp[1].o);
	((nro_MobTemplate *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(3128);
	frame[0].o = (((jobject) createStringLiteral(ctx, u8"/Mob/50"_j)));
	LINE_NUMBER(3129);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8""_j))))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream])(ctx, sp[0].o, (frame[0].o));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(3130);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50)))))->F_data;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/data"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_EffectData_readData_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_readData_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3131);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50)))))->F_data;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/img.png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	((nro_EffectData *) NULL_CHECK(sp[0].o))->F_img = (jref) sp[1].o;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(3133);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestModTemplate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestModTemplate_int])(ctx, sp[0].o, (50));
	}
label_8:;
	{
	LINE_NUMBER(3136);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_lastMob;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"50"_j))));
	}
label_1:;
	LINE_NUMBER(3139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_checkFrameTick_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:checkFrameTick", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3142);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_t = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_t) + (jint(1)));
	LINE_NUMBER(3143);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_t) <= ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1)))) goto label_2;
	}
	{
	LINE_NUMBER(3144);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_t = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(3147);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fM = ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_t)));
	LINE_NUMBER(3148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_paintMount2_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintMount2", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3151);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) <= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) >= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_1;
	}
	{
	LINE_NUMBER(3153);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3154);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount) != 0) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount) != 0) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) == 0) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(3155);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) < (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)) goto label_6;
	}
	{
	LINE_NUMBER(3156);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strMount;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) - (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_1"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(3157);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[2].o), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameNewMount) / (jint(2))) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[2].o)))->F_nFrame)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (jint(3)), (frame[1].o));
	}
label_9:;
	LINE_NUMBER(3161);
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(3164);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSpeacialMount) == 0) goto label_11;
	}
	{
	LINE_NUMBER(3165);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_move;
	((func_nro_Char_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3166);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50))) == nullptr) goto label_14;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50)))))->F_data;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(3167);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50)))))->F_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fM;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_16;
	}
	INST_BIPUSH(-8);
	goto label_17;
label_16:;
	INST_BIPUSH(8);
label_17:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + (35);
	LINE_NUMBER(3168);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_19;
	}
	INST_ICONST(0);
	goto label_20;
label_19:;
	INST_ICONST(1);
label_20:;
	{
	sp -= 6;
	jint temp0 = jint(0);
	LINE_NUMBER(3167);
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, temp0);
	LINE_NUMBER(3169);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(3172);
	SM_nro_Char_getMountData(ctx);
	LINE_NUMBER(3173);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(3176);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEventMount) == 0) goto label_24;
	}
	{
	LINE_NUMBER(3177);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgEventMount;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (60)), (60), (60), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3179);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(3182);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != 0) goto label_27;
	}
	{
	LINE_NUMBER(3183);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_29;
	}
	{
	LINE_NUMBER(3184);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_TD;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3186);
	popStackFrame(ctx);
	return;
	}
label_29:;
	{
	LINE_NUMBER(3189);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_TD_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3191);
	popStackFrame(ctx);
	return;
	}
label_27:;
	{
	LINE_NUMBER(3194);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(3195);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_34;
	}
	{
	LINE_NUMBER(3196);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM_1;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3198);
	popStackFrame(ctx);
	return;
	}
label_34:;
	{
	LINE_NUMBER(3201);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM_1_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3203);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(3206);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3207);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) < (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)) goto label_39;
	}
	{
	LINE_NUMBER(3208);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strMount;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) - (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_1"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_42;
	}
	{
	LINE_NUMBER(3209);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[2].o), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameNewMount) / (jint(2))) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[2].o)))->F_nFrame)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (jint(3)), (frame[1].o));
	}
label_42:;
	LINE_NUMBER(3213);
	popStackFrame(ctx);
	INST_RETURN();
label_39:;
	{
	LINE_NUMBER(3216);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSpeacialMount) == 0) goto label_44;
	}
	{
	LINE_NUMBER(3217);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_move;
	((func_nro_Char_checkFrameTick_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_checkFrameTick_Array1_int])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(3218);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50))) == nullptr) goto label_47;
	}
	{
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50)))))->F_data;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(3219);
	clinit_nro_Mob(ctx);
	sp[0].o = (jobject)SF_nro_Mob_arrMobTemplate;
	sp[0].o = (jobject)((nro_MobTemplate *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (50)))))->F_data;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fM;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_49;
	}
	INST_BIPUSH(-8);
	goto label_50;
label_49:;
	INST_BIPUSH(8);
label_50:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + (35);
	LINE_NUMBER(3220);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_52;
	}
	INST_ICONST(0);
	goto label_53;
label_52:;
	INST_ICONST(1);
label_53:;
	{
	sp -= 6;
	jint temp0 = jint(0);
	LINE_NUMBER(3219);
	((func_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_EffectData_paintFrame_lib_mGraphics_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, temp0);
	LINE_NUMBER(3221);
	popStackFrame(ctx);
	return;
	}
label_47:;
	{
	LINE_NUMBER(3224);
	SM_nro_Char_getMountData(ctx);
	LINE_NUMBER(3225);
	popStackFrame(ctx);
	return;
	}
label_44:;
	{
	LINE_NUMBER(3228);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEventMount) == 0) goto label_57;
	}
	{
	LINE_NUMBER(3229);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgEventMount;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (60)), (60), (60), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3231);
	popStackFrame(ctx);
	return;
	}
label_57:;
	{
	LINE_NUMBER(3234);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3235);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != 0) goto label_61;
	}
	{
	LINE_NUMBER(3236);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_63;
	}
	{
	LINE_NUMBER(3237);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_TD;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3239);
	popStackFrame(ctx);
	return;
	}
label_63:;
	{
	LINE_NUMBER(3242);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_TD_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3244);
	popStackFrame(ctx);
	return;
	}
label_61:;
	{
	LINE_NUMBER(3247);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(3248);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_68;
	}
	{
	LINE_NUMBER(3249);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM_1;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	LINE_NUMBER(3251);
	popStackFrame(ctx);
	return;
	}
label_68:;
	{
	LINE_NUMBER(3254);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM_1_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	}
label_1:;
	LINE_NUMBER(3261);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setMountIsStart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setMountIsStart", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3265);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3266);
	frame[2].i = (jint(0));
	LINE_NUMBER(3267);
	frame[1].i = (jint(-1));
	LINE_NUMBER(3268);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	frame[3].o = sp[0].o;
	LINE_NUMBER(3270);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_7;
	}
	{
	LINE_NUMBER(3271);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) == (24)) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) != (23)) goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(3272);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_part) < 0) goto label_11;
	}
	{
	LINE_NUMBER(3273);
	clinit_nro_Char(ctx);
	jint temp0 = (jint)SF_nro_Char_ID_NEW_MOUNT;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))->F_template;
	frame[1].i = (jshort((temp0 + ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_part))));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(3275);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))->F_template;
	frame[1].i = ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id);
	}
label_13:;
	{
	LINE_NUMBER(3278);
	frame[2].i = (jint(1));
	LINE_NUMBER(3279);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(3270);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(3283);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip = (jint(0));
	LINE_NUMBER(3284);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSpeacialMount = (jint(0));
	LINE_NUMBER(3285);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEventMount = (jint(0));
	LINE_NUMBER(3286);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount = (jint(-1));
	LINE_NUMBER(3287);
	if ((frame[1].i) == (349)) goto label_19;
	}
	{
	if ((frame[1].i) == (350)) goto label_19;
	}
	{
	if ((frame[1].i) == (351)) goto label_19;
	}
	{
	LINE_NUMBER(3288);
	if ((frame[1].i) != (396)) goto label_21;
	}
	{
	LINE_NUMBER(3289);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEventMount = (jint(1));
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(3290);
	if ((frame[1].i) != (532)) goto label_24;
	}
	{
	LINE_NUMBER(3291);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSpeacialMount = (jint(1));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(3292);
	if ((frame[1].i) < (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)) goto label_23;
	}
	{
	LINE_NUMBER(3293);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount = (jshort((frame[1].i)));
	goto label_23;
	}
label_19:;
	{
	LINE_NUMBER(3296);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(3299);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isHaveMount = (frame[2].i);
	LINE_NUMBER(3300);
	jint temp0 = (jint)SM_nro_TileMap_isVoDaiMap_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(3301);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isHaveMount = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(3305);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isHaveMount) == 0) goto label_29;
	}
	{
	LINE_NUMBER(3306);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) > (20)) goto label_31;
	}
	{
	LINE_NUMBER(3307);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dxMount = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	}
label_31:;
	{
	LINE_NUMBER(3310);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dyMount) >= (100)) goto label_33;
	}
	{
	LINE_NUMBER(3311);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dxMount) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_dyMount = temp0;
	}
label_33:;
	{
	LINE_NUMBER(3314);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dyMount) < (70)) goto label_29;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) <= (30)) goto label_29;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount) != 0) goto label_29;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount) != 0) goto label_29;
	}
	{
	LINE_NUMBER(3315);
	frame[2].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender);
	LINE_NUMBER(3316);
	frame[1].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir);
	LINE_NUMBER(3317);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID);
	LINE_NUMBER(3318);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount = (frame[1].i);
	LINE_NUMBER(3319);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount = (frame[2].i);
	LINE_NUMBER(3320);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xdis = (30);
	LINE_NUMBER(3321);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) >= 0) goto label_42;
	}
	{
	LINE_NUMBER(3322);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount = (jint(0));
	LINE_NUMBER(3323);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) + (50));
	LINE_NUMBER(3324);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount = (-19);
	goto label_46;
	}
label_42:;
	{
	LINE_NUMBER(3325);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount) != (jint(1))) goto label_46;
	}
	{
	LINE_NUMBER(3326);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount = (jint(2));
	LINE_NUMBER(3327);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) - (100));
	LINE_NUMBER(3328);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount = (-33);
	}
label_46:;
	{
	LINE_NUMBER(3331);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount = (-17);
	LINE_NUMBER(3332);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(3333);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount = (jint(0));
	LINE_NUMBER(3334);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameNewMount = (jint(0));
	LINE_NUMBER(3335);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount = (jint(0));
	LINE_NUMBER(3336);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount = (jint(0));
	LINE_NUMBER(3337);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount = (jint(1));
	}
label_29:;
	LINE_NUMBER(3341);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_checkDelayFallIfTooHigh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:checkDelayFallIfTooHigh", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3344);
	frame[1].i = (jint(1));
	LINE_NUMBER(3346);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (150)) goto label_3;
	}
	{
	LINE_NUMBER(3347);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (frame[2].i)));
	if ((temp0 & (jint(2))) == (jint(2))) goto label_5;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (frame[2].i)) <= (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmh) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) - (24))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(3349);
	frame[1].i = (jint(0));
	LINE_NUMBER(3350);
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(3346);
	INST_IINC(2, 24);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(3354);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(3355);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_delayFall = (40);
	}
label_8:;
	LINE_NUMBER(3358);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setDefaultPart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setDefaultPart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3361);
	((func_nro_Char_setDefaultWeapon) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_setDefaultWeapon])(ctx, (frame[0].o));
	LINE_NUMBER(3362);
	((func_nro_Char_setDefaultBody) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_setDefaultBody])(ctx, (frame[0].o));
	LINE_NUMBER(3363);
	((func_nro_Char_setDefaultLeg) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_setDefaultLeg])(ctx, (frame[0].o));
	LINE_NUMBER(3364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_setDefaultWeapon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setDefaultWeapon", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3367);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3368);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_wp = (jint(0));
	}
label_1:;
	LINE_NUMBER(3371);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setDefaultBody(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setDefaultBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3374);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3375);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_body = (57);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(3376);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(3377);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_body = (59);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(3379);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(3380);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_body = (57);
	}
label_3:;
	LINE_NUMBER(3384);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setDefaultLeg(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setDefaultLeg", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3387);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3388);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg = (58);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(3389);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(3390);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg = (60);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(3392);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(3393);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg = (58);
	}
label_3:;
	LINE_NUMBER(3397);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isSelectingSkillUseAlone_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isSelectingSkillUseAlone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3400);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	jint temp0 = (jint)((func_nro_SkillTemplate_isUseAlone_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_SkillTemplate_isUseAlone_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_x_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3404);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	jint temp0 = (jint)((func_nro_SkillTemplate_isSkillSpec_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_SkillTemplate_isSkillSpec_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isSelectingSkillBuffToPlayer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isSelectingSkillBuffToPlayer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3408);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	jint temp0 = (jint)((func_nro_SkillTemplate_isBuffToPlayer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_SkillTemplate_isBuffToPlayer_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isUseChargeSkill_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isUseChargeSkill", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3412);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isUseSkillAfterCharge) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) == (10)) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (11)) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setSkillPaint_nro_SkillPaint_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setSkillPaint", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3417);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isJump = (jint(0));
	LINE_NUMBER(3418);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_stone) != 0) goto label_2;
	}
	{
	LINE_NUMBER(3419);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (9)) goto label_4;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP), (((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull) / (jlong(10ll))))) <= 0) goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(3420);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3421);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(3422);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	}
label_7:;
	{
	LINE_NUMBER(3425);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) == (jint(1))) goto label_10;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) != 0) goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(3426);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(3429);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (14)) goto label_12;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) != (jint(5))) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(3430);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	}
label_11:;
	{
	LINE_NUMBER(3433);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (23)) goto label_13;
	}
	{
	LINE_NUMBER(3434);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_holdEffID) == 0) goto label_15;
	}
	LINE_NUMBER(3435);
	popStackFrame(ctx);
	INST_RETURN();
label_15:;
	{
	LINE_NUMBER(3438);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_holdEffID) == 0) goto label_17;
	}
	LINE_NUMBER(3439);
	popStackFrame(ctx);
	INST_RETURN();
label_17:;
	{
	LINE_NUMBER(3442);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_13;
	}
	LINE_NUMBER(3443);
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(3447);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_sleepEff) != 0) goto label_20;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_blindEff) == 0) goto label_5;
	}
label_20:;
	LINE_NUMBER(3448);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(3452);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	if (sp[0].o != nullptr) goto label_2;
	}
label_21:;
	{
	LINE_NUMBER(3453);
	jint temp0 = (jint)SM_nro_TileMap_isOfflineMap_R_boolean(ctx);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(3454);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(3455);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_24;
	}
	{
	LINE_NUMBER(3456);
	jint temp0 = (jint)((func_nro_Char_isSelectingSkillBuffToPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isSelectingSkillBuffToPlayer_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o != nullptr) goto label_26;
	}
	LINE_NUMBER(3457);
	popStackFrame(ctx);
	INST_RETURN();
label_26:;
	{
	LINE_NUMBER(3460);
	jlong temp0 = frame[3].l;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	jlong temp1 = temp0 - ((jlong)((nro_Skill *) NULL_CHECK(sp[0].o))->F_lastTimeUseThisSkill);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if ((longCompare(temp1, (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[0].o))->F_coolDown))))) >= 0) goto label_28;
	}
	{
	LINE_NUMBER(3461);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Skill *) NULL_CHECK(sp[0].o))->F_paintCanNotUseSkill = (jint(1));
	LINE_NUMBER(3462);
	popStackFrame(ctx);
	return;
	}
label_28:;
	{
	LINE_NUMBER(3465);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Skill *) NULL_CHECK(sp[0].o))->F_lastTimeUseThisSkill = (frame[3].l);
	LINE_NUMBER(3466);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) != (jint(2))) goto label_32;
	}
	{
	LINE_NUMBER(3467);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP = (jlong(1));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(3468);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) == (jint(1))) goto label_35;
	}
	{
	LINE_NUMBER(3469);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (temp0 - (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_manaUse))));
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(3471);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (temp0 - (((jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_manaUse))) * ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull)) / (jlong(100ll))));
	}
label_34:;
	{
	LINE_NUMBER(3474);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cStamina = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cStamina) - (jint(1)));
	LINE_NUMBER(3475);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isInjureMp = (jint(1));
	LINE_NUMBER(3476);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_twMp = (jlong(0));
	LINE_NUMBER(3477);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP), (jlong(0)))) >= 0) goto label_24;
	}
	{
	LINE_NUMBER(3478);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP = (jlong(0));
	}
label_24:;
	{
	LINE_NUMBER(3482);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_41;
	}
	{
	LINE_NUMBER(3483);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (10)) goto label_43;
	}
	{
	LINE_NUMBER(3484);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(4)));
	}
label_43:;
	{
	LINE_NUMBER(3487);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (11)) goto label_45;
	}
	{
	LINE_NUMBER(3488);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(4)));
	}
label_45:;
	{
	LINE_NUMBER(3491);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (7)) goto label_47;
	}
	{
	LINE_NUMBER(3492);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_hoisinh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_hoisinh])(ctx, sp[0].o);
	}
label_47:;
	{
	LINE_NUMBER(3495);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (6)) goto label_49;
	}
	{
	LINE_NUMBER(3496);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(3497);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isUseFreez = (jint(1));
	LINE_NUMBER(3498);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_thaiduonghasan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_thaiduonghasan])(ctx, sp[0].o);
	}
label_49:;
	{
	LINE_NUMBER(3501);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (8)) goto label_53;
	}
	{
	LINE_NUMBER(3502);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge) != 0) goto label_55;
	}
	{
	LINE_NUMBER(3503);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_taitao) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_taitao])(ctx, sp[0].o);
	LINE_NUMBER(3504);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(3505);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge = (jint(1));
	LINE_NUMBER(3506);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cur = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_last = temp0;
	goto label_53;
	}
label_55:;
	{
	LINE_NUMBER(3508);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(3)));
	LINE_NUMBER(3509);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCharge = (jint(0));
	LINE_NUMBER(3510);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_taitaoPause) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_taitaoPause])(ctx, sp[0].o);
	}
label_53:;
	{
	LINE_NUMBER(3514);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (13)) goto label_62;
	}
	{
	LINE_NUMBER(3515);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) == 0) goto label_64;
	}
	{
	LINE_NUMBER(3516);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(3517);
	popStackFrame(ctx);
	return;
	}
label_64:;
	{
	LINE_NUMBER(3520);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCreateDark) == 0) goto label_67;
	}
	LINE_NUMBER(3521);
	popStackFrame(ctx);
	INST_RETURN();
label_67:;
	{
	LINE_NUMBER(3524);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_gong) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_gong])(ctx, sp[0].o);
	LINE_NUMBER(3525);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (6));
	LINE_NUMBER(3526);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_chargeCount = (jint(0));
	LINE_NUMBER(3527);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isWaitMonkey = (jint(1));
	LINE_NUMBER(3528);
	popStackFrame(ctx);
	return;
	}
label_62:;
	{
	LINE_NUMBER(3531);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (14)) goto label_73;
	}
	{
	LINE_NUMBER(3532);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_gong) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_gong])(ctx, sp[0].o);
	LINE_NUMBER(3533);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (7));
	LINE_NUMBER(3534);
	((func_nro_Char_useChargeSkill_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_useChargeSkill_boolean])(ctx, (frame[0].o), (jint(1)));
	}
label_73:;
	{
	LINE_NUMBER(3537);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (21)) goto label_77;
	}
	{
	LINE_NUMBER(3538);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (10));
	LINE_NUMBER(3539);
	popStackFrame(ctx);
	return;
	}
label_77:;
	{
	LINE_NUMBER(3542);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (12)) goto label_80;
	}
	{
	LINE_NUMBER(3543);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (8));
	}
label_80:;
	{
	LINE_NUMBER(3546);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (19)) goto label_82;
	}
	{
	LINE_NUMBER(3547);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (9));
	LINE_NUMBER(3548);
	popStackFrame(ctx);
	return;
	}
label_82:;
	{
	LINE_NUMBER(3551);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (23)) goto label_41;
	}
	{
	LINE_NUMBER(3552);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_troi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_troi])(ctx, sp[0].o);
	}
label_41:;
	{
	LINE_NUMBER(3556);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != (jint(1))) goto label_86;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < (35)) goto label_86;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (41)) goto label_86;
	}
	{
	LINE_NUMBER(3557);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_sks;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (106)));
	}
label_86:;
	{
	LINE_NUMBER(3560);
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < (128)) goto label_88;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (134)) goto label_88;
	}
	{
	LINE_NUMBER(3561);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_sks;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) - (65))));
	LINE_NUMBER(3562);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_91;
	}
	{
	LINE_NUMBER(3563);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx);
	LINE_NUMBER(3564);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy);
	LINE_NUMBER(3565);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_91:;
	{
	LINE_NUMBER(3568);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_95;
	}
	{
	LINE_NUMBER(3569);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cx = ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(3570);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cy = ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(3571);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	}
label_95:;
	{
	LINE_NUMBER(3574);
	SM_nro_ServerEffect_addServerEffect_int_int_int_int(ctx, (60), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(1)));
	LINE_NUMBER(3575);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_telePortSkill = (jint(1));
	}
label_88:;
	{
	LINE_NUMBER(3578);
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < (107)) goto label_100;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (113)) goto label_100;
	}
	{
	LINE_NUMBER(3579);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_sks;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) - (44))));
	LINE_NUMBER(3580);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (23), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)))), (jint(3)), (jint(2)), (jint(1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_100:;
	{
	LINE_NUMBER(3583);
	((func_nro_Char_setAutoSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_setAutoSkillPaint_nro_SkillPaint_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}
label_2:;
	LINE_NUMBER(3588);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_Char_useSkillNotFocus(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:useSkillNotFocus", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(3591);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(3592);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK(sp[2].o))->F_myskill;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Skill *) NULL_CHECK(sp[2].o))->F_skillId));
	LINE_NUMBER(3593);
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[2].o))->F_cx;
	sp[2].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, temp0, ((jint)((nro_Char *) NULL_CHECK(sp[2].o))->F_cy), (jint(2)));
	sp += 2;
	if (temp1 == 0) goto label_3;
	}
	INST_ICONST(0);
	goto label_4;
label_3:;
	INST_ICONST(1);
label_4:;
	{
	sp -= 3;
	LINE_NUMBER(3592);
	((func_nro_Char_setSkillPaint_nro_SkillPaint_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
	LINE_NUMBER(3594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_sendUseChargeSkill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:sendUseChargeSkill", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3597);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez) != 0) goto label_2;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isTeleport1) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(3598);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[1].l = temp0;
	LINE_NUMBER(3599);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_4;
	}
	{
	jlong temp0 = frame[1].l;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	jlong temp1 = temp0 - ((jlong)((nro_Skill *) NULL_CHECK(sp[0].o))->F_lastTimeUseThisSkill);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if ((longCompare(temp1, (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[0].o))->F_coolDown))))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(3600);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Skill *) NULL_CHECK(sp[0].o))->F_paintCanNotUseSkill = (jint(1));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(3602);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (10)) goto label_7;
	}
	{
	LINE_NUMBER(3603);
	((func_nro_Char_useChargeSkill_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_useChargeSkill_boolean])(ctx, (frame[0].o), (jint(0)));
	}
label_7:;
	{
	LINE_NUMBER(3606);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) != (11)) goto label_6;
	}
	{
	LINE_NUMBER(3607);
	((func_nro_Char_useChargeSkill_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_useChargeSkill_boolean])(ctx, (frame[0].o), (jint(1)));
	}
label_6:;
	LINE_NUMBER(3611);
	goto label_10;
label_2:;
	{
	LINE_NUMBER(3612);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	}
label_10:;
	LINE_NUMBER(3614);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_stopUseChargeSkill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:stopUseChargeSkill", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3617);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyAndCharge = (jint(0));
	LINE_NUMBER(3618);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStandAndCharge = (jint(0));
	LINE_NUMBER(3619);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isUseSkillAfterCharge = (jint(0));
	LINE_NUMBER(3620);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCreateDark = (jint(0));
	LINE_NUMBER(3621);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(5))) goto label_5;
	}
	{
	LINE_NUMBER(3622);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isLockMove = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(3625);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(3626);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_useChargeSkill_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:useChargeSkill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3629);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCreateDark) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3630);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(3631);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(3632);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStandAndCharge) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3633);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_chargeCount = (jint(0));
	LINE_NUMBER(3634);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_seconds = (jint(50000));
	LINE_NUMBER(3635);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_posDisY = (jint(0));
	LINE_NUMBER(3636);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_last = temp0;
	LINE_NUMBER(3637);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_11;
	}
	{
	LINE_NUMBER(3638);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isLockMove = (jint(1));
	LINE_NUMBER(3639);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_14;
	}
	{
	LINE_NUMBER(3640);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(4)));
	}
label_14:;
	{
	LINE_NUMBER(3643);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (170)) goto label_11;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) == (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(3644);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(4)));
	}
label_11:;
	{
	LINE_NUMBER(3648);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_17;
	}
	{
	LINE_NUMBER(3649);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_gongName) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_gongName])(ctx, sp[0].o);
	}
label_17:;
	{
	LINE_NUMBER(3651);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (170)) goto label_19;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) == (jint(1))) goto label_19;
	}
	{
	LINE_NUMBER(3652);
	sp[0].o = (jobject)SM_lib_sound_SoundMn_gI_R_lib_sound_SoundMn(ctx);
	((func_lib_sound_SoundMn_gongName) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_sound_SoundMn_gongName])(ctx, sp[0].o);
	}
label_19:;
	{
	LINE_NUMBER(3655);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStandAndCharge = (jint(1));
	LINE_NUMBER(3656);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(3658);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyAndCharge) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3659);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_23;
	}
	{
	LINE_NUMBER(3660);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(3661);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isLockMove = (jint(1));
	LINE_NUMBER(3662);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_skill_not_focus_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_skill_not_focus_byte])(ctx, sp[0].o, (jint(4)));
	}
label_23:;
	{
	LINE_NUMBER(3665);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isUseSkillAfterCharge = (jint(0));
	LINE_NUMBER(3666);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_chargeCount = (jint(0));
	LINE_NUMBER(3667);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyAndCharge = (jint(1));
	LINE_NUMBER(3668);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_posDisY = (jint(0));
	LINE_NUMBER(3669);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_seconds = (jint(50000));
	}
label_1:;
	LINE_NUMBER(3673);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setAutoSkillPaint_nro_SkillPaint_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setAutoSkillPaint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3676);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint = (jref) (frame[1].o);
	LINE_NUMBER(3678);
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < 0) goto label_2;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (6)) goto label_2;
	}
	{
	LINE_NUMBER(3679);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) + (jint(4))));
	jint temp1 = temp0 - (jint(1));
	frame[3].i = temp1;
	if (temp1 >= 0) goto label_5;
	}
	{
	LINE_NUMBER(3680);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(3683);
	if ((frame[3].i) <= (6)) goto label_7;
	}
	{
	LINE_NUMBER(3684);
	frame[3].i = (6);
	}
label_7:;
	{
	LINE_NUMBER(3687);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaintRandomPaint = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)));
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(3688);
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < (14)) goto label_10;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (20)) goto label_10;
	}
	{
	LINE_NUMBER(3689);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), ((((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) - (14)) + (jint(4))));
	jint temp1 = temp0 - (jint(1));
	frame[3].i = temp1;
	if (temp1 >= 0) goto label_13;
	}
	{
	LINE_NUMBER(3690);
	frame[3].i = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(3693);
	if ((frame[3].i) <= (6)) goto label_15;
	}
	{
	LINE_NUMBER(3694);
	frame[3].i = (6);
	}
label_15:;
	{
	LINE_NUMBER(3697);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaintRandomPaint = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[3].i) + (14))));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(3698);
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < (28)) goto label_17;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (34)) goto label_17;
	}
	{
	LINE_NUMBER(3699);
	jint temp0 = jint(0);
	sp[0].i = temp0;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != (jint(1))) goto label_19;
	}
	INST_BIPUSH(105);
	goto label_20;
label_19:;
	INST_ALOAD(1);
	sp[-1].i = ((nro_SkillPaint *) NULL_CHECK(sp[-1].o))->F_id;
label_20:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != (jint(1))) goto label_21;
	}
	INST_BIPUSH(105);
	goto label_22;
label_21:;
	INST_BIPUSH(28);
label_22:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, sp[0].i, ((sp[1].i - sp[2].i) + (jint(4))));
	jint temp1 = temp0 - (jint(1));
	frame[3].i = temp1;
	if (temp1 >= 0) goto label_24;
	}
	{
	LINE_NUMBER(3701);
	frame[3].i = (jint(0));
	}
label_24:;
	{
	LINE_NUMBER(3704);
	if ((frame[3].i) <= (6)) goto label_26;
	}
	{
	LINE_NUMBER(3705);
	frame[3].i = (6);
	}
label_26:;
	{
	LINE_NUMBER(3708);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(3709);
	frame[3].i = (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(3712);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	jint temp0 = frame[3].i;
	sp[2].i = temp0;
	sp += 3;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != (jint(1))) goto label_30;
	}
	INST_BIPUSH(105);
	goto label_31;
label_30:;
	INST_BIPUSH(28);
label_31:;
	{
	sp -= 4;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaintRandomPaint = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (sp[2].i + sp[3].i)));
	goto label_9;
	}
label_17:;
	{
	LINE_NUMBER(3713);
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < (63)) goto label_32;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (69)) goto label_32;
	}
	{
	LINE_NUMBER(3714);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), ((((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) - (63)) + (jint(4))));
	jint temp1 = temp0 - (jint(1));
	frame[3].i = temp1;
	if (temp1 >= 0) goto label_35;
	}
	{
	LINE_NUMBER(3715);
	frame[3].i = (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(3718);
	if ((frame[3].i) <= (6)) goto label_37;
	}
	{
	LINE_NUMBER(3719);
	frame[3].i = (6);
	}
label_37:;
	{
	LINE_NUMBER(3722);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaintRandomPaint = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[3].i) + (63))));
	goto label_9;
	}
label_32:;
	{
	LINE_NUMBER(3723);
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) < (107)) goto label_39;
	}
	{
	if (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) > (109)) goto label_39;
	}
	{
	LINE_NUMBER(3724);
	jint temp0 = (jint)SM_nro_Res_random_int_int_R_int(ctx, (jint(0)), ((((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_id) - (107)) + (jint(4))));
	jint temp1 = temp0 - (jint(1));
	frame[3].i = temp1;
	if (temp1 >= 0) goto label_42;
	}
	{
	LINE_NUMBER(3725);
	frame[3].i = (jint(0));
	}
label_42:;
	{
	LINE_NUMBER(3728);
	if ((frame[3].i) <= (6)) goto label_44;
	}
	{
	LINE_NUMBER(3729);
	frame[3].i = (6);
	}
label_44:;
	{
	LINE_NUMBER(3732);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_sks;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaintRandomPaint = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[3].i) + (107))));
	goto label_9;
	}
label_39:;
	{
	LINE_NUMBER(3734);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint = (jref) (frame[1].o);
	}
label_9:;
	{
	LINE_NUMBER(3737);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_sType = (frame[2].i);
	LINE_NUMBER(3738);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill = (jint(0));
	LINE_NUMBER(3739);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	sp[4].o = frame[0].o;
	sp[5].o = frame[0].o;
	sp[6].o = frame[0].o;
	sp[7].o = frame[0].o;
	sp[8].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[8].o))->F_dy2 = temp0;
	((nro_Char *) NULL_CHECK(sp[7].o))->F_dy1 = temp0;
	((nro_Char *) NULL_CHECK(sp[6].o))->F_dy0 = temp0;
	((nro_Char *) NULL_CHECK(sp[5].o))->F_dx2 = temp0;
	((nro_Char *) NULL_CHECK(sp[4].o))->F_dx1 = temp0;
	((nro_Char *) NULL_CHECK(sp[3].o))->F_dx0 = temp0;
	((nro_Char *) NULL_CHECK(sp[2].o))->F_i2 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_i1 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i0 = temp0;
	LINE_NUMBER(3740);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0 = (jref) (jobject(nullptr));
	LINE_NUMBER(3741);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1 = (jref) (jobject(nullptr));
	LINE_NUMBER(3742);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2 = (jref) (jobject(nullptr));
	LINE_NUMBER(3743);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cvy = (jint(0));
	LINE_NUMBER(3744);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:skillInfoPaint", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3747);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3748);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(3749);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(3750);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(3752);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_sType) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint;
	sp[0].o = (jobject)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_skillStand;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint;
	sp[0].o = (jobject)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_skillfly;
	sp += 1;
	}
label_6:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setAttack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setAttack", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3758);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3759);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint;
	frame[1].o = sp[0].o;
	LINE_NUMBER(3760);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(3761);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_skillPaint;
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(3764);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3765);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vMob"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(3766);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vChar"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(3767);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(3768);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(3769);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(3770);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(3773);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[3].o));
	sp[1].o = (jobject)createArray(ctx, &class_nro_EffectPaint, (temp0 + temp1));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_effPaints = (jref) sp[1].o;
	LINE_NUMBER(3776);
	frame[4].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_16;
	}
	{
	LINE_NUMBER(3777);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp0 = frame[4].i;
	clinit_nro_EffectPaint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_EffectPaint);
	init_nro_EffectPaint(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3778);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_effectHappenOnMob) - (jint(1)))));
	LINE_NUMBER(3779);
	jint temp1 = (jint)((func_nro_Char_isSelectingSkillUseAlone_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isSelectingSkillUseAlone_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_20;
	}
	{
	LINE_NUMBER(3780);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[4].i));
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_eMob = (jref) (checkCast(ctx, &class_nro_Mob, sp[1].o));
	}
label_20:;
	{
	LINE_NUMBER(3776);
	INST_IINC(4, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(3784);
	frame[4].i = (jint(0));
	}
label_22:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_23;
	}
	{
	LINE_NUMBER(3785);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	jint temp2 = temp0 + temp1;
	clinit_nro_EffectPaint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_EffectPaint);
	init_nro_EffectPaint(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(3786);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp3 = frame[4].i;
	jint temp4 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp3 + temp4));
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_effectHappenOnMob) - (jint(1)))));
	LINE_NUMBER(3787);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp5 = frame[4].i;
	jint temp6 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp5 + temp6));
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_eChar = (jref) (checkCast(ctx, &class_nro_Char, sp[1].o));
	LINE_NUMBER(3784);
	INST_IINC(4, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(3790);
	frame[5].i = (jint(0));
	LINE_NUMBER(3791);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(3792);
	frame[5].i = (jint(1));
	goto label_31;
	}
label_29:;
	{
	LINE_NUMBER(3793);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(3794);
	frame[5].i = (jint(2));
	}
label_31:;
	{
	LINE_NUMBER(3797);
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_33;
	}
	{
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_33;
	}
	{
	LINE_NUMBER(3798);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	}
label_33:;
	{
	LINE_NUMBER(3801);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_35;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isSelectingSkillUseAlone_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isSelectingSkillUseAlone_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_35;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isJump) != 0) goto label_35;
	}
	{
	LINE_NUMBER(3802);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_sendPlayerAttack_nro_MyVector_nro_MyVector_int])(ctx, sp[0].o, (frame[2].o), (frame[3].o), (frame[5].i));
	LINE_NUMBER(3803);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isJump = (jint(1));
	LINE_NUMBER(3804);
	popStackFrame(ctx);
	return;
	}
label_35:;
	LINE_NUMBER(3806);
	goto label_6;
label_1:;
	{
	LINE_NUMBER(3808);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaintRandomPaint;
	frame[1].o = sp[0].o;
	LINE_NUMBER(3809);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(3810);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	sp[0].o = (jobject)((nro_PlayerDart *) NULL_CHECK(sp[0].o))->F_skillPaint;
	frame[1].o = sp[0].o;
	}
label_40:;
	{
	LINE_NUMBER(3813);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3815);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attMobs;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(3816);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attMobs;
	sp[1].o = (jobject)createArray(ctx, &class_nro_EffectPaint, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_effPaints = (jref) sp[1].o;
	LINE_NUMBER(3818);
	frame[2].i = (jint(0));
	}
label_46:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attMobs;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_47;
	}
	{
	LINE_NUMBER(3819);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp0 = frame[2].i;
	clinit_nro_EffectPaint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_EffectPaint);
	init_nro_EffectPaint(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3820);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_effectHappenOnMob) - (jint(1)))));
	LINE_NUMBER(3821);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attMobs;
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_eMob = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(3818);
	INST_IINC(2, 1);
	goto label_46;
	}
label_47:;
	{
	LINE_NUMBER(3824);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_attMobs = (jref) (jobject(nullptr));
	LINE_NUMBER(3825);
	popStackFrame(ctx);
	return;
	}
label_43:;
	{
	LINE_NUMBER(3828);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attChars;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(3829);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attChars;
	sp[1].o = (jobject)createArray(ctx, &class_nro_EffectPaint, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_effPaints = (jref) sp[1].o;
	LINE_NUMBER(3831);
	frame[2].i = (jint(0));
	}
label_55:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attChars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_56;
	}
	{
	LINE_NUMBER(3832);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp0 = frame[2].i;
	clinit_nro_EffectPaint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_EffectPaint);
	init_nro_EffectPaint(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(3833);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((nro_SkillPaint *) NULL_CHECK((frame[1].o)))->F_effectHappenOnMob) - (jint(1)))));
	LINE_NUMBER(3834);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_attChars;
	((nro_EffectPaint *) NULL_CHECK(sp[0].o))->F_eChar = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	LINE_NUMBER(3831);
	INST_IINC(2, 1);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(3837);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_attChars = (jref) (jobject(nullptr));
	}
label_6:;
	LINE_NUMBER(3842);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isOutX_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isOutX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3845);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_1;
	}
	{
	LINE_NUMBER(3846);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(3848);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) <= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW))) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isPaint_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isPaint", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(3853);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)) goto label_1;
	}
	{
	LINE_NUMBER(3854);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(3855);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) <= (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH)) + (30))) goto label_3;
	}
	{
	LINE_NUMBER(3856);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(3857);
	jint temp0 = (jint)((func_nro_Char_isOutX_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isOutX_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(3858);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(3859);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSetPos) == 0) goto label_7;
	}
	{
	LINE_NUMBER(3860);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(3862);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFusion) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Char_createShadow_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:createShadow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(3867);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowX = (frame[1].i);
	LINE_NUMBER(3868);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowY = (frame[2].i);
	LINE_NUMBER(3869);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowLife = (10);
	LINE_NUMBER(3870);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_setMabuHold_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setMabuHold", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(3873);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMabuHold = (frame[1].i);
	LINE_NUMBER(3874);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paint", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3877);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isHide) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3878);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3879);
	M_nro_Char_paintCharWithoutSkill_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(3880);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMabuHold) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3881);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cmtoChar) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3882);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoX = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW2));
	LINE_NUMBER(3883);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoY = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH23)) - (jint(1)));
	LINE_NUMBER(3884);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouchControl) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3885);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_cmtoX = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmtoX) + ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW6) * ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir)));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(3889);
	jint temp0 = (jint)((func_nro_Char_isPaint_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isPaint_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(3893);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(3894);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_petFollow;
	frame[5].o = sp[0].o;
	LINE_NUMBER(3895);
	frame[2].i = (32);
	LINE_NUMBER(3896);
	frame[3].i = (32);
	LINE_NUMBER(3897);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(5))) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(3898);
	if (((jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_fimg) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(3899);
	frame[2].i = ((jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_wimg);
	LINE_NUMBER(3900);
	frame[3].i = ((jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_himg);
	LINE_NUMBER(3901);
	frame[4].i = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(3904);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_smallID;
	jint temp1 = (jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_c;
	jint temp2 = (jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_cmx;
	jint temp3 = (((jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_cmy) + (jint(3))) + (frame[4].i);
	jint temp4 = frame[2].i;
	jint temp5 = frame[3].i;
	LINE_NUMBER(3905);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp[4].i = temp3;
	sp[5].i = temp4;
	sp[6].i = temp5;
	sp += 7;
	if (((jint)((nro_PetFollow *) NULL_CHECK((frame[5].o)))->F_dir) != (jint(1))) goto label_25;
	}
	INST_ICONST(0);
	goto label_26;
label_25:;
	INST_ICONST(2);
label_26:;
	{
	sp -= 8;
	clinit_nro_StaticObj(ctx);
	jint temp0 = (jint)SF_nro_StaticObj_VCENTER_HCENTER;
	LINE_NUMBER(3904);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, temp0);
	}
label_12:;
	{
	LINE_NUMBER(3909);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) <= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)) goto label_28;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) >= ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w))) goto label_28;
	}
	{
	LINE_NUMBER(3910);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_30;
	}
	{
	LINE_NUMBER(3911);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEndMount) != 0) goto label_32;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isStartMount) != 0) goto label_32;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) == 0) goto label_28;
	}
label_32:;
	{
	LINE_NUMBER(3912);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) < (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)) goto label_33;
	}
	{
	LINE_NUMBER(3913);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strMount;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) - (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(3914);
	sp[0].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(3915);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[5].o), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameNewMount) / (jint(2))) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[5].o)))->F_nFrame)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (jint(3)), (frame[1].o));
	goto label_28;
	}
label_33:;
	{
	LINE_NUMBER(3918);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSpeacialMount) != 0) goto label_28;
	}
	{
	LINE_NUMBER(3919);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEventMount) == 0) goto label_39;
	}
	{
	LINE_NUMBER(3920);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgEventMountWing;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (60)), (60), (60), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_39:;
	{
	LINE_NUMBER(3923);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != (jint(2))) goto label_41;
	}
	{
	LINE_NUMBER(3924);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_43;
	}
	{
	LINE_NUMBER(3925);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_XD;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_43:;
	{
	LINE_NUMBER(3929);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_XD_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_41:;
	{
	LINE_NUMBER(3933);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(3934);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_46;
	}
	{
	LINE_NUMBER(3935);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_46:;
	{
	LINE_NUMBER(3939);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_30:;
	{
	LINE_NUMBER(3946);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_28;
	}
	{
	LINE_NUMBER(3947);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) < (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)) goto label_49;
	}
	{
	LINE_NUMBER(3948);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strMount;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idMount) - (clinit_nro_Char(ctx), (jint)SF_nro_Char_ID_NEW_MOUNT)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(3949);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, (frame[5].o), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameNewMount) / (jint(2))) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[5].o)))->F_nFrame)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (jint(3)), (frame[1].o));
	goto label_28;
	}
label_49:;
	{
	LINE_NUMBER(3952);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSpeacialMount) != 0) goto label_28;
	}
	{
	LINE_NUMBER(3953);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isEventMount) == 0) goto label_54;
	}
	{
	LINE_NUMBER(3954);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgEventMountWing;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (60)), (60), (60), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_54:;
	{
	LINE_NUMBER(3956);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMount) == 0) goto label_28;
	}
	{
	LINE_NUMBER(3957);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != (jint(2))) goto label_57;
	}
	{
	LINE_NUMBER(3958);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_59;
	}
	{
	LINE_NUMBER(3959);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_XD;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_59:;
	{
	LINE_NUMBER(3963);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_XD_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_57:;
	{
	LINE_NUMBER(3967);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_genderMount) != (jint(1))) goto label_28;
	}
	{
	LINE_NUMBER(3968);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMountVip) != 0) goto label_62;
	}
	{
	LINE_NUMBER(3969);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	goto label_28;
	}
label_62:;
	{
	LINE_NUMBER(3973);
	sp[0].o = frame[1].o;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_imgMount_NM_VIP;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_FrameMount;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)ARRAY_ACCESS(jbyte, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frameMount))) * (40)), (50), (40), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_transMount), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idcharMount) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMount)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xChar) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMount)) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), (jint(0)));
	}
label_28:;
	{
	LINE_NUMBER(3983);
	jint temp0 = (jint)SM_nro_TileMap_isInAirMap_R_boolean(ctx);
	if (temp0 == 0) goto label_64;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) >= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_pxh) - (48))) goto label_1;
	}
label_64:;
	{
	LINE_NUMBER(3984);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isTeleport) != 0) goto label_1;
	}
	{
	LINE_NUMBER(3985);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder) == 0) goto label_66;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_66;
	}
	{
	LINE_NUMBER(3986);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[1].o), (jint(16185600)));
	LINE_NUMBER(3987);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold;
	if (sp[0].o == nullptr) goto label_69;
	}
	{
	LINE_NUMBER(3988);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold;
	jint temp2 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold;
	jint temp3 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold;
	((func_lib_mGraphics_drawLine_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawLine_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, (temp3 - (((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_ch) / (jint(2)))));
	}
label_69:;
	{
	LINE_NUMBER(3992);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold;
	if (sp[0].o == nullptr) goto label_66;
	}
	{
	LINE_NUMBER(3993);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch) / (jint(2)));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold;
	jint temp2 = (jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold;
	jint temp3 = (jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold;
	((func_lib_mGraphics_drawLine_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawLine_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, (temp3 - (((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_h) / (jint(2)))));
	}
label_66:;
	{
	LINE_NUMBER(3999);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_72;
	}
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_isPaintAura2;
	if ((--sp)->i == 0) goto label_73;
label_72:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff) >= 0) goto label_73;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_74;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (6)) goto label_73;
	}
label_74:;
	{
	LINE_NUMBER(4000);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(0)))) <= 0) goto label_73;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCopy) != 0) goto label_73;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (17)) goto label_73;
	}
	{
	LINE_NUMBER(4001);
	frame[6].i = (7598);
	LINE_NUMBER(4002);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (19)) goto label_77;
	}
	{
	LINE_NUMBER(4003);
	frame[6].i = (7676);
	}
label_77:;
	{
	LINE_NUMBER(4006);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (22)) goto label_79;
	}
	{
	LINE_NUMBER(4007);
	frame[6].i = (7677);
	}
label_79:;
	{
	LINE_NUMBER(4010);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (25)) goto label_81;
	}
	{
	LINE_NUMBER(4011);
	frame[6].i = (7678);
	}
label_81:;
	{
	LINE_NUMBER(4014);
	if ((frame[6].i) == (jint(-1))) goto label_73;
	}
	{
	LINE_NUMBER(4015);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_85;
	}
	{
	LINE_NUMBER(4016);
	SM_nro_SmallImage_createImage_int(ctx, (frame[6].i));
	goto label_73;
	}
label_85:;
	{
	LINE_NUMBER(4018);
	((nro_Small *) NULL_CHECK((frame[7].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[7].o)))->F_timeUpdate);
	LINE_NUMBER(4019);
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4))) % (jint(4));
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp1 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = (temp0 * (temp1 / (jint(4))));
	LINE_NUMBER(4020);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp2 = jint(0);
	jint temp3 = frame[2].i;
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp4 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	LINE_NUMBER(4021);
	jint temp5 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	jint temp6 = temp5 / (jint(4));
	jint temp7 = jint(0);
	jint temp8 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp9 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(2));
	jint temp10 = 33;
	LINE_NUMBER(4020);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4, temp6, temp7, temp8, temp9, temp10);
	}
label_73:;
	{
	LINE_NUMBER(4026);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_91;
	}
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_isPaintAura;
	if ((--sp)->i == 0) goto label_92;
label_91:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff) < 0) goto label_92;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_93;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (6)) goto label_92;
	}
label_93:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_92;
	}
	{
	LINE_NUMBER(4027);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(0)))) <= 0) goto label_92;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strEffAura;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_0"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(4028);
	sp[0].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_92;
	}
	{
	LINE_NUMBER(4029);
	sp[0].o = frame[5].o;
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4))) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[5].o)))->F_nFrame);
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_98;
	}
	INST_ICONST(0);
	goto label_99;
label_98:;
	INST_ICONST(2);
label_99:;
	{
	sp -= 5;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, (33), (frame[1].o));
	}
label_92:;
	{
	LINE_NUMBER(4033);
	M_nro_Char_paintEffBehind_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4034);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idEff_Set_Item) == (jint(-1))) goto label_101;
	}
	{
	LINE_NUMBER(4035);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraEff;
	if (sp[0].o == nullptr) goto label_103;
	}
	{
	LINE_NUMBER(4036);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraEff;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraEff;
	jint temp1 = temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(3));
	LINE_NUMBER(4037);
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_106;
	}
	INST_ICONST(0);
	goto label_107;
label_106:;
	INST_ICONST(2);
label_107:;
	{
	sp -= 5;
	jint temp0 = 33;
	sp[5].o = frame[1].o;
	LINE_NUMBER(4036);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, temp0, sp[5].o);
	goto label_101;
	}
label_103:;
	{
	LINE_NUMBER(4039);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strEff_Set_Item;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idEff_Set_Item));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"_0"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fraEff = (jref) sp[1].o;
	}
label_101:;
	{
	LINE_NUMBER(4043);
	M_nro_Char_paintEff_Pet_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4044);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowLife) <= 0) goto label_110;
	}
	{
	LINE_NUMBER(4045);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_112;
	}
	{
	LINE_NUMBER(4046);
	((func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowX), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowY), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir), (25), (jint(1)));
	goto label_110;
	}
label_112:;
	{
	LINE_NUMBER(4047);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowLife) <= (jint(5))) goto label_110;
	}
	{
	LINE_NUMBER(4048);
	((func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowX), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_shadowY), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir), (7), (jint(1)));
	}
label_110:;
	{
	LINE_NUMBER(4052);
	jint temp0 = (jint)((func_nro_Char_isPaint_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isPaint_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_115;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_115;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) < (70)) goto label_116;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) <= (76)) goto label_115;
	}
label_116:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) < (77)) goto label_117;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (((jint)((nro_SkillPaint *) NULL_CHECK(sp[0].o))->F_id) <= (83)) goto label_115;
	}
label_117:;
	{
	LINE_NUMBER(4054);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_118;
	}
	{
	LINE_NUMBER(4055);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_indexSkill = (((jarray) nullCheck(ctx, sp[1].o))->length);
	LINE_NUMBER(4056);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint = (jref) (jobject(nullptr));
	}
label_118:;
	{
	LINE_NUMBER(4059);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints = (jref) (jobject(nullptr));
	LINE_NUMBER(4060);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff = (jref) (jobject(nullptr));
	LINE_NUMBER(4061);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask = (jref) (jobject(nullptr));
	LINE_NUMBER(4062);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEff = (jint(-1));
	LINE_NUMBER(4063);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask = (jint(-1));
	goto label_1;
	}
label_115:;
	{
	LINE_NUMBER(4064);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (15)) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (sp[0].o == nullptr) goto label_125;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_moveFast;
	if (((jint)ARRAY_ACCESS(jshort, sp[0].o, (jint(0)))) > 0) goto label_1;
	}
label_125:;
	{
	LINE_NUMBER(4065);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	jint temp0 = (jint)M_nro_Char_getFHead_int_R_int(ctx, (frame[0].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head));
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(4066);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_CharInfo;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(2)));
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK((frame[8].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	frame[3].i = ((temp1 - ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf))), (jint(0)))), (jint(0))))))))->F_dy)) + (jint(5)));
	LINE_NUMBER(4068);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInvisiblez) == 0) goto label_128;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_129;
	}
label_128:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_130;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (113)) goto label_130;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) >= (360)) goto label_129;
	}
label_130:;
	{
	LINE_NUMBER(4069);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_131;
	}
	{
	LINE_NUMBER(4070);
	INST_IINC(3, 5);
	LINE_NUMBER(4071);
	((func_nro_Char_paintHp_lib_mGraphics_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_paintHp_lib_mGraphics_int_int])(ctx, (frame[0].o), (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (frame[3].i)) + (jint(3))));
	goto label_129;
	}
label_131:;
	{
	LINE_NUMBER(4073);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_clan;
	if (sp[0].o == nullptr) goto label_134;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clanID;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_myChar;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_clan;
	if (temp0 != ((jint)((nro_Clan *) NULL_CHECK(sp[0].o))->F_ID)) goto label_134;
	}
	INST_ICONST(1);
	goto label_135;
label_134:;
	INST_ICONST(0);
label_135:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(4074);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == (jint(3))) goto label_137;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) != (jint(5))) goto label_138;
	}
label_137:;
	INST_ICONST(1);
	goto label_139;
label_138:;
	INST_ICONST(0);
label_139:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(4075);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) != (jint(4))) goto label_141;
	}
	INST_ICONST(1);
	goto label_142;
label_141:;
	INST_ICONST(0);
label_142:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(4076);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"$"_j))));
	if (temp0 == 0) goto label_144;
	}
	{
	LINE_NUMBER(4077);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cName = (jref) sp[1].o;
	LINE_NUMBER(4078);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPet = (jint(1));
	}
label_144:;
	{
	LINE_NUMBER(4081);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"#"_j))));
	if (temp0 == 0) goto label_147;
	}
	{
	LINE_NUMBER(4082);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, (jint(1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cName = (jref) sp[1].o;
	LINE_NUMBER(4083);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMiniPet = (jint(1));
	}
label_147:;
	{
	LINE_NUMBER(4086);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o == nullptr) goto label_150;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_150;
	}
	{
	LINE_NUMBER(4087);
	INST_IINC(3, 5);
	LINE_NUMBER(4088);
	((func_nro_Char_paintHp_lib_mGraphics_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_paintHp_lib_mGraphics_int_int])(ctx, (frame[0].o), (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (frame[3].i)) + (jint(3))));
	}
label_150:;
	{
	LINE_NUMBER(4091);
	jint temp0 = frame[3].i;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp1 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(4092);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_whiteSmall;
	frame[12].o = sp[0].o;
	LINE_NUMBER(4093);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPet) != 0) goto label_155;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMiniPet) != 0) goto label_155;
	}
	{
	LINE_NUMBER(4094);
	if ((frame[9].i) == 0) goto label_157;
	}
	{
	LINE_NUMBER(4095);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_nameFontRed;
	frame[12].o = sp[0].o;
	goto label_159;
	}
label_157:;
	{
	LINE_NUMBER(4096);
	if ((frame[11].i) == 0) goto label_160;
	}
	{
	LINE_NUMBER(4097);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_nameFontYellow;
	frame[12].o = sp[0].o;
	goto label_159;
	}
label_160:;
	{
	LINE_NUMBER(4098);
	if ((frame[10].i) == 0) goto label_159;
	}
	{
	LINE_NUMBER(4099);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_nameFontGreen;
	frame[12].o = sp[0].o;
	goto label_159;
	}
label_155:;
	{
	LINE_NUMBER(4102);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_J;
	frame[12].o = sp[0].o;
	}
label_159:;
	{
	LINE_NUMBER(4105);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (170)) goto label_163;
	}
	{
	LINE_NUMBER(4106);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_flagImage) != (2325)) goto label_165;
	}
	{
	LINE_NUMBER(4107);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_blue;
	frame[12].o = sp[0].o;
	goto label_163;
	}
label_165:;
	{
	LINE_NUMBER(4108);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_flagImage) != (2323)) goto label_163;
	}
	{
	LINE_NUMBER(4109);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7_red;
	frame[12].o = sp[0].o;
	}
label_163:;
	{
	LINE_NUMBER(4113);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_paintName) != 0) goto label_168;
	}
	INST_ILOAD(9);
	if ((--sp)->i != 0) goto label_168;
	INST_ILOAD(11);
	if ((--sp)->i == 0) goto label_169;
label_168:;
	INST_ILOAD(10);
	if ((--sp)->i != 0) goto label_169;
	{
	LINE_NUMBER(4114);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_171;
	}
	{
	LINE_NUMBER(4115);
	sp[0].o = frame[12].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (frame[3].i);
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_greySmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_173;
	}
label_171:;
	{
	LINE_NUMBER(4117);
	sp[0].o = frame[12].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (frame[3].i)), (jint(2)));
	}
label_173:;
	{
	LINE_NUMBER(4120);
	jint temp0 = frame[3].i;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7;
	jint temp1 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	frame[3].i = (temp0 + temp1);
	}
label_169:;
	{
	LINE_NUMBER(4123);
	if ((frame[10].i) == 0) goto label_129;
	}
	{
	LINE_NUMBER(4124);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o == nullptr) goto label_175;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_175;
	}
	{
	LINE_NUMBER(4125);
	sp[0].o = frame[12].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (frame[3].i);
	jint temp2 = jint(2);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_greySmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_129;
	}
label_175:;
	{
	LINE_NUMBER(4127);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[13].i = temp0;
	LINE_NUMBER(4128);
	frame[14].i = ((12) + (frame[13].i));
	LINE_NUMBER(4129);
	frame[15].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((frame[14].i) / (jint(2))));
	LINE_NUMBER(4130);
	frame[16].i = ((frame[15].i) + (jint(4)));
	LINE_NUMBER(4131);
	frame[17].i = ((frame[15].i) + (12));
	LINE_NUMBER(4132);
	frame[18].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (frame[3].i));
	LINE_NUMBER(4135);
	jint temp1 = ((jint(((jlong(((jint(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP))) * (100)))) / ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull)))) / (10)) - (jint(1));
	frame[19].i = temp1;
	if (temp1 >= 0) goto label_184;
	}
	{
	LINE_NUMBER(4136);
	frame[19].i = (jint(0));
	}
label_184:;
	{
	LINE_NUMBER(4138);
	if ((frame[19].i) <= (9)) goto label_186;
	}
	{
	LINE_NUMBER(4139);
	frame[19].i = (9);
	}
label_186:;
	{
	LINE_NUMBER(4141);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	jint temp0 = jint(0);
	jint temp1 = (6) * ((9) - (frame[19].i));
	jint temp2 = 9;
	jint temp3 = 6;
	jint temp4 = jint(0);
	jint temp5 = frame[16].i;
	jint temp6 = frame[18].i;
	clinit_lib_mFont(ctx);
	sp[2].o = (jobject)SF_lib_mFont_tahoma_7;
	LINE_NUMBER(4142);
	jint temp7 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[2].o);
	jint temp8 = temp6 + (temp7 / (jint(2)));
	jint temp9 = jint(3);
	LINE_NUMBER(4141);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5, temp8, temp9);
	LINE_NUMBER(4144);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) != (jint(1))) goto label_191;
	}
	{
	LINE_NUMBER(4145);
	sp[0].o = frame[12].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	jint temp0 = frame[17].i;
	jint temp1 = frame[18].i;
	jint temp2 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_greySmall;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	goto label_129;
	}
label_191:;
	{
	LINE_NUMBER(4147);
	sp[0].o = frame[12].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	jint temp0 = frame[17].i;
	jint temp1 = frame[18].i;
	jint temp2 = jint(0);
	clinit_lib_mFont(ctx);
	sp[3].o = (jobject)SF_lib_mFont_tahoma_7_grey;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, sp[3].o);
	}
label_129:;
	{
	LINE_NUMBER(4154);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_193;
	}
	{
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_193;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill;
	sp[0].o = frame[0].o;
	LINE_NUMBER(4155);
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, sp[0].o);
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_195;
	}
label_193:;
	{
	LINE_NUMBER(4156);
	M_nro_Char_paintCharWithoutSkill_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	}
label_195:;
	{
	LINE_NUMBER(4159);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	if (sp[0].o == nullptr) goto label_196;
	}
	{
	LINE_NUMBER(4160);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arr;
	((func_nro_Arrow_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Arrow_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_196:;
	{
	LINE_NUMBER(4163);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	if (sp[0].o == nullptr) goto label_198;
	}
	{
	LINE_NUMBER(4164);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dart;
	((func_nro_PlayerDart_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_PlayerDart_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_198:;
	{
	LINE_NUMBER(4167);
	M_nro_Char_paintEffect_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4168);
	((func_nro_Char_paintMount2_lib_mGraphics) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_paintMount2_lib_mGraphics])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4169);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idEff_Set_Item) == (jint(-1))) goto label_202;
	}
	{
	LINE_NUMBER(4170);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraEffSub;
	if (sp[0].o == nullptr) goto label_204;
	}
	{
	LINE_NUMBER(4171);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraEffSub;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraEffSub;
	jint temp1 = temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (8);
	LINE_NUMBER(4172);
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_207;
	}
	INST_ICONST(0);
	goto label_208;
label_207:;
	INST_ICONST(2);
label_208:;
	{
	sp -= 5;
	jint temp0 = 33;
	sp[5].o = frame[1].o;
	LINE_NUMBER(4171);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, temp0, sp[5].o);
	goto label_202;
	}
label_204:;
	{
	LINE_NUMBER(4174);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strEff_Set_Item;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idEff_Set_Item));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"_1"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fraEffSub = (jref) sp[1].o;
	}
label_202:;
	{
	LINE_NUMBER(4178);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isPaintAura2) == 0) goto label_210;
	}
	{
	LINE_NUMBER(4179);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_212;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (6)) goto label_212;
	}
	{
	LINE_NUMBER(4180);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_timeBlue = (temp0 + (jlong(1500ll)));
	LINE_NUMBER(4181);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust1 = (jint(1));
	LINE_NUMBER(4182);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust2 = (jint(1));
	goto label_210;
	}
label_212:;
	{
	LINE_NUMBER(4183);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(0)))) <= 0) goto label_210;
	}
	{
	LINE_NUMBER(4184);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCopy) == 0) goto label_217;
	}
	{
	LINE_NUMBER(4185);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_219;
	}
	{
	LINE_NUMBER(4186);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_tBlue = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_tBlue) + (jint(1)));
	}
label_219:;
	{
	LINE_NUMBER(4189);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue) <= (6)) goto label_221;
	}
	{
	LINE_NUMBER(4190);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue = (jint(0));
	}
label_221:;
	{
	LINE_NUMBER(4193);
	sp[0].o = frame[1].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgViolet;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue))), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (9)), (33));
	goto label_210;
	}
label_217:;
	{
	LINE_NUMBER(4195);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (14)) goto label_223;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_223;
	{
	LINE_NUMBER(4196);
	frame[9].i = (jint(0));
	LINE_NUMBER(4197);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(-1000ll)))) <= 0) goto label_226;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust1) == 0) goto label_226;
	}
	{
	LINE_NUMBER(4198);
	frame[9].i = (jint(1));
	LINE_NUMBER(4199);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust1 = (jint(0));
	}
label_226:;
	{
	LINE_NUMBER(4202);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(-500ll)))) <= 0) goto label_229;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust2) == 0) goto label_229;
	}
	{
	LINE_NUMBER(4203);
	frame[9].i = (jint(1));
	LINE_NUMBER(4204);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust2 = (jint(0));
	}
label_229:;
	{
	LINE_NUMBER(4207);
	if ((frame[9].i) == 0) goto label_223;
	}
	{
	LINE_NUMBER(4208);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(4209);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(4210);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(1)));
	}
label_223:;
	{
	LINE_NUMBER(4214);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (14)) goto label_235;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) >= (17)) goto label_235;
	}
	{
	LINE_NUMBER(4215);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) != 0) goto label_237;
	}
	{
	LINE_NUMBER(4216);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_tBlue = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_tBlue) + (jint(1)));
	}
label_237:;
	{
	LINE_NUMBER(4219);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue) <= (6)) goto label_239;
	}
	{
	LINE_NUMBER(4220);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue = (jint(0));
	}
label_239:;
	{
	LINE_NUMBER(4223);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != 0) goto label_241;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_imgBlue;
	if ((--sp)->o == nullptr) goto label_241;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBlue;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue)) goto label_241;
	}
	{
	LINE_NUMBER(4225);
	sp[0].o = frame[1].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBlue;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue))), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (9)), (33));
	goto label_210;
	}
label_241:;
	{
	LINE_NUMBER(4226);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_243;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_imgViolet;
	if ((--sp)->o == nullptr) goto label_243;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgViolet;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue)) goto label_243;
	}
	{
	LINE_NUMBER(4228);
	sp[0].o = frame[1].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgViolet;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue))), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (9)), (33));
	goto label_210;
	}
label_243:;
	{
	LINE_NUMBER(4229);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(2))) goto label_210;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_imgBlack;
	if ((--sp)->o == nullptr) goto label_210;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_imgBlack;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue)) goto label_210;
	}
	{
	LINE_NUMBER(4231);
	sp[0].o = frame[1].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_imgBlack;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_tBlue))), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (9)), (33));
	goto label_210;
	}
label_235:;
	{
	LINE_NUMBER(4233);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (17)) goto label_210;
	}
	{
	LINE_NUMBER(4234);
	frame[6].i = (jint(-1));
	LINE_NUMBER(4235);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) < (17)) goto label_248;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_clevel) >= (22)) goto label_248;
	}
	{
	LINE_NUMBER(4236);
	frame[6].i = (7599);
	}
label_248:;
	{
	LINE_NUMBER(4239);
	if ((frame[6].i) == (jint(-1))) goto label_210;
	}
	{
	LINE_NUMBER(4240);
	clinit_nro_SmallImage(ctx);
	sp[0].o = (jobject)SF_nro_SmallImage_imgNew;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (7599));
	frame[7].o = sp[0].o;
	if (sp[0].o != nullptr) goto label_252;
	}
	{
	LINE_NUMBER(4241);
	SM_nro_SmallImage_createImage_int(ctx, (7599));
	goto label_210;
	}
label_252:;
	{
	LINE_NUMBER(4243);
	((nro_Small *) NULL_CHECK((frame[7].o)))->F_timePaint = ((jint)((nro_Small *) NULL_CHECK((frame[7].o)))->F_timeUpdate);
	LINE_NUMBER(4244);
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4))) % (jint(4));
	sp[0].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp1 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[0].o);
	frame[2].i = (temp0 * (temp1 / (jint(4))));
	LINE_NUMBER(4245);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp2 = jint(0);
	jint temp3 = frame[2].i;
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	jint temp4 = (jint)SM_lib_mGraphics_getImageWidth_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)((nro_Small *) NULL_CHECK((frame[7].o)))->F_img;
	LINE_NUMBER(4246);
	jint temp5 = (jint)SM_lib_mGraphics_getImageHeight_javax_microedition_lcdui_Image_R_int(ctx, sp[2].o);
	jint temp6 = temp5 / (jint(4));
	jint temp7 = jint(0);
	jint temp8 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp9 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(2));
	jint temp10 = 33;
	LINE_NUMBER(4245);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4, temp6, temp7, temp8, temp9, temp10);
	}
label_210:;
	{
	LINE_NUMBER(4254);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_258;
	}
	clinit_nro_Char(ctx);
	(sp++)->i = SF_nro_Char_isPaintAura;
	if ((--sp)->i == 0) goto label_259;
label_258:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff) < 0) goto label_259;
	}
	{
	LINE_NUMBER(4255);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_261;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (6)) goto label_261;
	}
	{
	LINE_NUMBER(4256);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_timeBlue = (temp0 + (jlong(1500ll)));
	LINE_NUMBER(4257);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust1 = (jint(1));
	LINE_NUMBER(4258);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust2 = (jint(1));
	goto label_259;
	}
label_261:;
	{
	LINE_NUMBER(4259);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_259;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_lowGraphic;
	if ((--sp)->i != 0) goto label_259;
	{
	LINE_NUMBER(4260);
	frame[9].i = (jint(0));
	LINE_NUMBER(4261);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(-1000ll)))) <= 0) goto label_267;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust1) == 0) goto label_267;
	}
	{
	LINE_NUMBER(4262);
	frame[9].i = (jint(1));
	LINE_NUMBER(4263);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust1 = (jint(0));
	}
label_267:;
	{
	LINE_NUMBER(4266);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(-500ll)))) <= 0) goto label_270;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust2) == 0) goto label_270;
	}
	{
	LINE_NUMBER(4267);
	frame[9].i = (jint(1));
	LINE_NUMBER(4268);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_IsAddDust2 = (jint(0));
	}
label_270:;
	{
	LINE_NUMBER(4271);
	if ((frame[9].i) == 0) goto label_273;
	}
	{
	LINE_NUMBER(4272);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp0 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(-1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (-8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(4273);
	sp[0].o = (jobject)SM_main_GameCanvas_gI_R_main_GameCanvas(ctx);
	jint temp1 = (jint)((func_main_GameCanvas_startDust_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_startDust_int_int_int_R_boolean])(ctx, sp[0].o, (jint(1)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (8)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(4274);
	M_nro_Char_addDustEff_int(ctx, (frame[0].o), (jint(1)));
	}
label_273:;
	{
	LINE_NUMBER(4278);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	if ((longCompare((temp0 - ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeBlue)), (jlong(0)))) <= 0) goto label_259;
	}
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strEffAura;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idAuraEff));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_1"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	LINE_NUMBER(4279);
	sp[0].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_259;
	}
	{
	LINE_NUMBER(4280);
	sp[0].o = frame[10].o;
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4))) % ((jint)((nro_FrameImage *) NULL_CHECK((frame[10].o)))->F_nFrame);
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(2));
	LINE_NUMBER(4281);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_281;
	}
	INST_ICONST(0);
	goto label_282;
label_281:;
	INST_ICONST(2);
label_282:;
	{
	sp -= 5;
	jint temp0 = 33;
	sp[5].o = frame[1].o;
	LINE_NUMBER(4280);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, temp0, sp[5].o);
	}
label_259:;
	{
	LINE_NUMBER(4286);
	M_nro_Char_paintEffFront_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4287);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPaintNewSkill) != 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_x_hint) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_y_hint) == 0) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_1;
	}
	{
	LINE_NUMBER(4288);
	frame[10].i = (jint(0));
	LINE_NUMBER(4289);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (30));
	LINE_NUMBER(4290);
	frame[4].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (15));
	LINE_NUMBER(4291);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_y_hint)));
	if (temp0 <= (150)) goto label_289;
	}
	{
	LINE_NUMBER(4292);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_y_hint)) goto label_291;
	}
	{
	LINE_NUMBER(4293);
	frame[10].i = (7);
	LINE_NUMBER(4294);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(4295);
	frame[4].i = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (15)) - (60));
	goto label_295;
	}
label_291:;
	{
	LINE_NUMBER(4297);
	frame[10].i = (jint(5));
	LINE_NUMBER(4298);
	frame[3].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(4299);
	frame[4].i = ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (15)) + (60));
	goto label_295;
	}
label_289:;
	{
	LINE_NUMBER(4301);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) <= ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_x_hint)) goto label_298;
	}
	{
	LINE_NUMBER(4302);
	frame[10].i = (jint(2));
	goto label_295;
	}
label_298:;
	{
	LINE_NUMBER(4303);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) > ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_x_hint)) goto label_295;
	}
	{
	LINE_NUMBER(4304);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (30));
	}
label_295:;
	{
	LINE_NUMBER(4307);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) < (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(4308);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_x_hint)));
	if (temp0 <= (100)) goto label_302;
	}
	{
	LINE_NUMBER(4309);
	sp[0].o = frame[1].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_arrow;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (13), (16), (frame[10].i), (frame[3].i), (frame[4].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	LINE_NUMBER(4310);
	popStackFrame(ctx);
	return;
	}
label_302:;
	{
	LINE_NUMBER(4313);
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_x_hint)));
	if (temp0 >= (50)) goto label_1;
	}
	{
	LINE_NUMBER(4314);
	sp[0].o = frame[1].o;
	clinit_nro_Panel(ctx);
	sp[1].o = (jobject)SF_nro_Panel_imgBantay;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_x_hint) + (-30)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_y_hint) - (60)) + (jint(5))), (jint(0)));
	}
label_1:;
	LINE_NUMBER(4324);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintEff_Pet_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintEff_Pet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4327);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(4329);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect, sp[0].o);
	frame[3].o = sp[0].o;
	if (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_effId) < (201)) goto label_5;
	}
	{
	LINE_NUMBER(4330);
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, (frame[3].o), (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(4327);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(4334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintEffect_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintEffect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4337);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4338);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(4339);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(4340);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(4341);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	frame[3].i = ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(4342);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	if ((isInstance(ctx, sp[0].o, &class_nro_BigBoss)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(4343);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	frame[4].o = (checkCast(ctx, &class_nro_BigBoss, sp[0].o));
	LINE_NUMBER(4344);
	if (((jint)((nro_BigBoss *) NULL_CHECK((frame[4].o)))->F_haftBody) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - (20);
	sp[0].i = temp0;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	jint temp0 = ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - (60);
	sp[0].i = temp0;
	sp += 1;
	}
label_14:;
	INST_ISTORE(3);
label_10:;
	{
	LINE_NUMBER(4347);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	if ((isInstance(ctx, sp[0].o, &class_nro_BachTuoc2)) != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	if ((isInstance(ctx, sp[0].o, &class_nro_BigBoss2)) == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(4348);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	frame[3].i = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - (50));
	}
label_16:;
	{
	LINE_NUMBER(4351);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	if ((isInstance(ctx, sp[0].o, &class_nro_BachTuoc)) == 0) goto label_17;
	}
	{
	LINE_NUMBER(4352);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eMob;
	frame[3].i = (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) - (40));
	}
label_17:;
	{
	LINE_NUMBER(4355);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp0 = (jint)((func_nro_EffectPaint_getImgId_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))))->vtable)[VTABLE_nro_EffectPaint_getImgId_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[1].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_eMob;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, ((jint)((nro_Mob *) NULL_CHECK(sp[1].o))->F_x), (frame[3].i), (jint(0)), (33));
	LINE_NUMBER(4357);
	goto label_5;
	}
label_7:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[0].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_eChar;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(4358);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	jint temp0 = (jint)((func_nro_EffectPaint_getImgId_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))))->vtable)[VTABLE_nro_EffectPaint_getImgId_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[1].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_eChar;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effPaints;
	sp[1].o = (jobject)((nro_EffectPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_eChar;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, ((jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cy), (jint(0)), (33));
	}
label_5:;
	{
	LINE_NUMBER(4338);
	INST_IINC(2, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(4365);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask) < 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(4366);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_idImg;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_dy);
	jint temp3 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_effTask;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexEffTask)))))->F_where)), (jint(0)), (jint(3)));
	}
label_21:;
	LINE_NUMBER(4371);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintHp_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintHp", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(4375);
	jint temp0 = ((jint(((jlong(((jint(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP))) * (100)))) / ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull)))) / (10)) - (jint(1));
	frame[4].i = temp0;
	if (temp0 >= 0) goto label_2;
	}
	{
	LINE_NUMBER(4376);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(4379);
	if ((frame[4].i) <= (9)) goto label_4;
	}
	{
	LINE_NUMBER(4380);
	frame[4].i = (9);
	}
label_4:;
	{
	LINE_NUMBER(4384);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) != 0) goto label_6;
	}
	{
	LINE_NUMBER(4385);
	sp[0].o = frame[1].o;
	clinit_nro_Mob(ctx);
	sp[1].o = (jobject)SF_nro_Mob_imgHP;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((6) * ((9) - (frame[4].i))), (9), (6), (jint(0)), (frame[2].i), (frame[3].i), (jint(3)));
	}
label_6:;
	LINE_NUMBER(4414);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintShadow_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintShadow", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4417);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMabuHold) != 0) goto label_1;
	}
	{
	LINE_NUMBER(4418);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (377)) goto label_1;
	}
	{
	LINE_NUMBER(4419);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg) == (471)) goto label_1;
	}
	{
	LINE_NUMBER(4420);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isTeleport) != 0) goto label_1;
	}
	{
	LINE_NUMBER(4421);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFlyUp) != 0) goto label_1;
	}
	{
	LINE_NUMBER(4422);
	frame[2].i = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	LINE_NUMBER(4423);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) < (114)) goto label_8;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) <= (120)) goto label_9;
	}
label_8:;
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (127)) goto label_9;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (128)) goto label_9;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd) + ((frame[2].i) / (jint(2)));
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1));
	jint temp2 = jint(4);
	LINE_NUMBER(4424);
	jint temp3 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 != 0) goto label_9;
	}
	{
	LINE_NUMBER(4425);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd) - ((frame[2].i) / (jint(2)))) / (frame[2].i)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1))) / (frame[2].i)));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(4426);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - (30)) / (frame[2].i)) * (frame[2].i)), (100), (100));
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(4427);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd) + ((frame[2].i) / (jint(2)))) / (frame[2].i)), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1))) / (frame[2].i)));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(4428);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd) / (frame[2].i)) * (frame[2].i)), (((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	goto label_9;
	}
label_14:;
	{
	LINE_NUMBER(4429);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd) - ((frame[2].i) / (jint(2)))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) + (jint(1))), (8));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(4430);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd) / (24)) * (frame[2].i)), (((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - (30)) / (frame[2].i)) * (frame[2].i)), (frame[2].i), (100));
	}
label_9:;
	{
	LINE_NUMBER(4434);
	sp[0].o = frame[1].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_bong;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(3)));
	LINE_NUMBER(4435);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) - (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY)), (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW), ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH) + ((jint(2)) * (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_transY))));
	}
label_1:;
	LINE_NUMBER(4442);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateShadown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateShadown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4445);
	frame[1].i = (jint(0));
	LINE_NUMBER(4446);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(4447);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (jint(2)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(4448);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(4450);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	}
label_6:;
	{
	LINE_NUMBER(4452);
	if ((frame[1].i) >= (30)) goto label_5;
	}
	{
	LINE_NUMBER(4453);
	INST_IINC(1, 1);
	LINE_NUMBER(4454);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ySd) + (24));
	LINE_NUMBER(4455);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd), (jint(2)));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(4456);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) % (24)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(4457);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_ySd = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_ySd) - (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) % (24)));
	LINE_NUMBER(4458);
	popStackFrame(ctx);
	return;
	}
label_5:;
	LINE_NUMBER(4465);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintCharWithoutSkill_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintCharWithoutSkill", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(4469);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMafuba) == 0) goto label_7;
	}
	{
	LINE_NUMBER(4470);
	((func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xMFB), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_yMFB), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf), (jint(0)));
	{ popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_5
	}
label_7:;
	{
	LINE_NUMBER(4472);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInvisiblez) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(4473);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_5
	}
	{
	LINE_NUMBER(4474);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (50)) == (48)) goto label_11;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (50)) == (90)) goto label_11;
	}
	{
	LINE_NUMBER(4475);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[1].o), (1195), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (18)), (jint(0)), (jint(3)));
	goto label_1;
	}
label_11:;
	{
	LINE_NUMBER(4477);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[1].o), (1196), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (18)), (jint(0)), (jint(3)));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(4480);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_5; }
	if (bypasses[1]) { bypasses[1] = false; goto label_5; }
	{
	LINE_NUMBER(4483);
	((func_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fy)), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf), (jint(1)));
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(4488);
	goto label_13;
label_2:;
	LINE_NUMBER(4487);
	INST_ASTORE(2);
label_13:;
	LINE_NUMBER(4489);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintBag", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(4492);
	frame[7].i = (jint(0));
	LINE_NUMBER(4493);
	frame[8].i = (jint(0));
	LINE_NUMBER(4494);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (6)) goto label_3;
	}
	{
	LINE_NUMBER(4495);
	frame[7].i = (8);
	LINE_NUMBER(4496);
	frame[8].i = (17);
	}
label_3:;
	{
	LINE_NUMBER(4499);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(4500);
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1) % (15)) >= (jint(5))) goto label_8;
	}
	{
	LINE_NUMBER(4501);
	frame[7].i = (8);
	LINE_NUMBER(4502);
	frame[8].i = (17);
	goto label_6;
	}
label_8:;
	{
	LINE_NUMBER(4504);
	frame[7].i = (8);
	LINE_NUMBER(4505);
	frame[8].i = (18);
	}
label_6:;
	{
	LINE_NUMBER(4509);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (jint(2))) goto label_12;
	}
	{
	LINE_NUMBER(4510);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) > (jint(3))) goto label_14;
	}
	{
	LINE_NUMBER(4511);
	frame[7].i = (7);
	LINE_NUMBER(4512);
	frame[8].i = (17);
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(4514);
	frame[7].i = (7);
	LINE_NUMBER(4515);
	frame[8].i = (18);
	}
label_12:;
	{
	LINE_NUMBER(4519);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(3))) goto label_18;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (9)) goto label_19;
	}
label_18:;
	{
	LINE_NUMBER(4520);
	frame[7].i = (jint(5));
	LINE_NUMBER(4521);
	frame[8].i = (20);
	}
label_19:;
	{
	LINE_NUMBER(4524);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (jint(4))) goto label_21;
	}
	{
	LINE_NUMBER(4525);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) != (8)) goto label_23;
	}
	{
	LINE_NUMBER(4526);
	frame[7].i = (jint(5));
	LINE_NUMBER(4527);
	frame[8].i = (16);
	goto label_21;
	}
label_23:;
	{
	LINE_NUMBER(4529);
	frame[7].i = (jint(5));
	LINE_NUMBER(4530);
	frame[8].i = (20);
	}
label_21:;
	{
	LINE_NUMBER(4534);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (10)) goto label_27;
	}
	{
	LINE_NUMBER(4535);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf) != (8)) goto label_29;
	}
	{
	LINE_NUMBER(4536);
	frame[7].i = (jint(0));
	LINE_NUMBER(4537);
	frame[8].i = (23);
	goto label_27;
	}
label_29:;
	{
	LINE_NUMBER(4539);
	frame[7].i = (jint(5));
	LINE_NUMBER(4540);
	frame[8].i = (22);
	}
label_27:;
	{
	LINE_NUMBER(4544);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjure) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(4545);
	frame[7].i = (jint(5));
	LINE_NUMBER(4546);
	frame[8].i = (18);
	}
label_33:;
	{
	LINE_NUMBER(4549);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill;
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_36;
	}
	{
	LINE_NUMBER(4550);
	frame[7].i = (jint(-1));
	LINE_NUMBER(4551);
	frame[8].i = (17);
	}
label_36:;
	{
	LINE_NUMBER(4554);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fBag = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_fBag) + (jint(1)));
	LINE_NUMBER(4555);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fBag) <= (10000)) goto label_40;
	}
	{
	LINE_NUMBER(4556);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fBag = (jint(0));
	}
label_40:;
	{
	LINE_NUMBER(4559);
	frame[9].i = (jbyte(((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fBag) / (jint(4))) % (((jarray) nullCheck(ctx, (frame[2].o)))->length))));
	LINE_NUMBER(4560);
	if ((frame[6].i) != 0) goto label_43;
	}
	{
	LINE_NUMBER(4561);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != (jint(2))) goto label_45;
	}
	{
	LINE_NUMBER(4562);
	frame[9].i = (jint(1));
	}
label_45:;
	{
	LINE_NUMBER(4565);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != (jint(3))) goto label_47;
	}
	{
	LINE_NUMBER(4566);
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (jint(2)))) < 0) goto label_49;
	}
	{
	LINE_NUMBER(4567);
	frame[9].i = (jint(2));
	LINE_NUMBER(4568);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(5))) goto label_47;
	}
	{
	LINE_NUMBER(4569);
	frame[9].i = (jint(1));
	goto label_47;
	}
label_49:;
	{
	LINE_NUMBER(4572);
	frame[9].i = (jint(1));
	goto label_47;
	}
label_43:;
	{
	LINE_NUMBER(4575);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) <= (jint(1))) goto label_47;
	}
	INST_ILOAD(9);
	if ((--sp)->i == 0) goto label_53;
	{
	if ((frame[9].i) != (jint(1))) goto label_47;
	}
label_53:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_47;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (6)) goto label_47;
	}
	{
	LINE_NUMBER(4576);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fBag = (jint(0));
	LINE_NUMBER(4577);
	frame[9].i = (jint(0));
	LINE_NUMBER(4578);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(5))) goto label_47;
	}
	{
	LINE_NUMBER(4579);
	frame[9].i = (jint(1));
	}
label_47:;
	{
	LINE_NUMBER(4583);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[9].i));
	jint temp1 = frame[3].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[5].i) != (jint(1))) goto label_58;
	}
	{
	jint temp0 = -(frame[7].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_59;
	}
label_58:;
	INST_ILOAD(7);
label_59:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	jint temp1 = (frame[4].i) - (frame[8].i);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((frame[5].i) != (jint(1))) goto label_60;
	}
	INST_ICONST(0);
	goto label_61;
label_60:;
	INST_ICONST(2);
label_61:;
	{
	sp -= 5;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_VCENTER_HCENTER));
	LINE_NUMBER(4585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_nro_Char_isCharBodyImageID_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isCharBodyImageID", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(4588);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(4589);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg)));
	LINE_NUMBER(4590);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_body)));
	LINE_NUMBER(4592);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[5].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_CharInfo;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(4593);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK((frame[2].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	if (temp0 != ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_id)) goto label_7;
	}
	{
	LINE_NUMBER(4594);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(4597);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK((frame[3].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	if (temp0 != ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(1)))), (jint(0))))))))->F_id)) goto label_9;
	}
	{
	LINE_NUMBER(4598);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(4601);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK((frame[4].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	if (temp0 != ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_id)) goto label_11;
	}
	{
	LINE_NUMBER(4602);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(4592);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(4606);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_nro_Char_paint_lib_mGraphics_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paint", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(4610);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(4611);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_id), (frame[2].i), (frame[3].i), (jint(0)), (10));
	LINE_NUMBER(4612);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintHeadWithXY", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(4615);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(4616);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(0)))), (jint(1))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[5].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, ((temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_dx)) - (jint(3))), ((frame[3].i) + (jint(3))), (frame[4].i), (36));
	LINE_NUMBER(4618);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintCharBody", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(4621);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_parts;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_ph = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head)));
	LINE_NUMBER(4622);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_parts;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_pl = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg)));
	LINE_NUMBER(4623);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_parts;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_pb = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_body)));
	LINE_NUMBER(4624);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag) < 0) goto label_12;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (14)) goto label_12;
	}
	{
	LINE_NUMBER(4625);
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_idImages;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag));
	jint temp0 = (jint)((func_nro_mHashTable_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(4626);
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_idImages;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag));
	clinit_nro_ClanImage(ctx);
	sp[2].o = gcAlloc(ctx, &class_nro_ClanImage);
	init_nro_ClanImage(ctx, sp[2].o);
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(4627);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestBagImage_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestBagImage_int])(ctx, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag));
	goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(4630);
	clinit_nro_ClanImage(ctx);
	sp[0].o = (jobject)SF_nro_ClanImage_idImages;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag));
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_nro_ClanImage, sp[0].o);
	frame[7].o = sp[0].o;
	sp[0].o = (jobject)((nro_ClanImage *) NULL_CHECK(sp[0].o))->F_idImage;
	if (sp[0].o == nullptr) goto label_12;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_12;
	{
	LINE_NUMBER(4631);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((nro_ClanImage *) NULL_CHECK((frame[7].o)))->F_idImage;
	((func_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i), (frame[3].i), (frame[4].i), (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(4636);
	frame[7].i = (jint(2));
	LINE_NUMBER(4637);
	frame[8].i = (24);
	LINE_NUMBER(4638);
	frame[9].i = (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_RIGHT);
	LINE_NUMBER(4639);
	frame[10].i = (jint(-1));
	LINE_NUMBER(4640);
	if ((frame[4].i) != (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(4641);
	frame[7].i = (jint(0));
	LINE_NUMBER(4642);
	frame[8].i = (jint(0));
	LINE_NUMBER(4643);
	frame[9].i = (jint(0));
	LINE_NUMBER(4644);
	frame[10].i = (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(4648);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (14)) goto label_28;
	}
	{
	LINE_NUMBER(4649);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(4650);
	sp[0].o = frame[1].o;
	clinit_nro_ItemMap(ctx);
	sp[1].o = (jobject)SF_nro_ItemMap_imageFlare;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (((frame[3].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (11)), (jint(3)));
	}
label_30:;
	{
	LINE_NUMBER(4653);
	frame[12].i = (jint(0));
	LINE_NUMBER(4654);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (89)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (457)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (460)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (461)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (462)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (463)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (464)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) == (465)) goto label_33;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) != (466)) goto label_34;
	}
label_33:;
	{
	LINE_NUMBER(4656);
	frame[12].i = (15);
	}
label_34:;
	{
	LINE_NUMBER(4659);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) != (1291)) goto label_35;
	}
	{
	LINE_NUMBER(4660);
	frame[12].i = (23);
	}
label_35:;
	{
	LINE_NUMBER(4663);
	sp[0].o = frame[1].o;
	jint temp0 = 834;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp2 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(2)))), (jint(2))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pb;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp1, (((temp3 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_dy)) - (jint(2))) + (frame[12].i)), (frame[7].i), (clinit_nro_StaticObj(ctx), (jint)SF_nro_StaticObj_TOP_CENTER));
	LINE_NUMBER(4666);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, (frame[1].o), (79), (frame[2].i), (((frame[3].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch)) - (8)), (jint(0)), (33));
	LINE_NUMBER(4667);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp4 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp5 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(1)));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp7 = temp5 + ((temp6 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp8 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp9 = temp8 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp4, temp7, (temp9 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	LINE_NUMBER(4670);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp10 = frame[5].i;
	jint temp11 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp12 = temp11 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(2)))), (jint(2))));
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pb;
	sp[2].o = (jobject)((nro_Rms *) NULL_CHECK(sp[2].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[3].o = (jobject)SF_nro_Char_CharInfo;
	M_nro_Char_paintHat_behind_lib_mGraphics_int_int(ctx, sp[0].o, sp[1].o, temp10, (temp12 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_dy)));
	LINE_NUMBER(4671);
	jint temp13 = (jint)SM_nro_Char_isHead_2Fr_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head));
	if (temp13 == 0) goto label_41;
	}
	{
	LINE_NUMBER(4672);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	jint temp0 = (jint)M_nro_Char_getFHead_int_R_int(ctx, (frame[0].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head));
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(4673);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[11].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp1 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp2 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(1)));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[11].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp4 = temp2 + ((temp3 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp5 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = temp5 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[11].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp1, temp4, (temp6 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	goto label_44;
	}
label_41:;
	{
	LINE_NUMBER(4677);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(1)));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp1 + ((temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp4 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, (temp5 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	}
label_44:;
	{
	LINE_NUMBER(4682);
	jint temp0 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_CharInfo;
	jint temp1 = temp0 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i))), (jint(2)))), (jint(2))));
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pb;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	frame[13].i = (temp1 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_dy));
	LINE_NUMBER(4683);
	frame[14].i = (frame[5].i);
	LINE_NUMBER(4684);
	frame[15].o = (frame[1].o);
	LINE_NUMBER(4685);
	frame[16].o = (frame[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(4688);
	if (((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_idHat) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(4689);
	jint temp0 = (jint)SM_nro_Char_i_int_R_boolean(ctx, (frame[14].i));
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(4690);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_fraHat_font_2;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(4691);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_fraHat_font_2;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_fraHat_font_2;
	jint temp1 = temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cx;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_hatInfo;
	jint temp3 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[14].i))), (jint(0)));
	LINE_NUMBER(4692);
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cdir) != (jint(1))) goto label_54;
	}
	INST_ICONST(1);
	goto label_55;
label_54:;
	INST_ICONST(-1);
label_55:;
	{
	sp -= 3;
	jint temp0 = sp[0].i + (sp[1].i * sp[2].i);
	jint temp1 = frame[13].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_hatInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[14].i))), (jint(1))));
	LINE_NUMBER(4693);
	sp[0].i = temp0;
	sp[1].i = temp2;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cdir) != (jint(1))) goto label_57;
	}
	INST_ICONST(0);
	goto label_58;
label_57:;
	INST_ICONST(2);
label_58:;
	{
	sp -= 5;
	jint temp0 = 33;
	sp[5].o = frame[15].o;
	LINE_NUMBER(4691);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, temp0, sp[5].o);
	goto label_1;
	}
label_51:;
	{
	LINE_NUMBER(4695);
	sp[0].o = frame[16].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_strHat_font;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_strNgang;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_idHat));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fraHat_font_2 = (jref) sp[1].o;
	goto label_1;
	}
label_49:;
	{
	LINE_NUMBER(4697);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_fraHat_font;
	if (sp[0].o == nullptr) goto label_60;
	}
	{
	LINE_NUMBER(4698);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_fraHat_font;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_fraHat_font;
	jint temp1 = temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cx;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_hatInfo;
	jint temp3 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[14].i))), (jint(0)));
	LINE_NUMBER(4699);
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cdir) != (jint(1))) goto label_63;
	}
	INST_ICONST(1);
	goto label_64;
label_63:;
	INST_ICONST(-1);
label_64:;
	{
	sp -= 3;
	jint temp0 = sp[0].i + (sp[1].i * sp[2].i);
	jint temp1 = frame[13].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_hatInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[14].i))), (jint(1))));
	LINE_NUMBER(4700);
	sp[0].i = temp0;
	sp[1].i = temp2;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cdir) != (jint(1))) goto label_66;
	}
	INST_ICONST(0);
	goto label_67;
label_66:;
	INST_ICONST(2);
label_67:;
	{
	sp -= 5;
	jint temp0 = 33;
	sp[5].o = frame[15].o;
	LINE_NUMBER(4698);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, temp0, sp[5].o);
	goto label_1;
	}
label_60:;
	{
	LINE_NUMBER(4702);
	sp[0].o = frame[16].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_strHat_font;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_idHat));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fraHat_font = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(4706);
	goto label_69;
label_2:;
	LINE_NUMBER(4705);
	INST_ASTORE(17);
label_69:;
	{
	LINE_NUMBER(4708);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp1 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(1)));
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[2].o = (jobject)((nro_Rms *) NULL_CHECK(sp[2].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[3].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = temp0 + ((temp1 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp3 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp4 = temp3 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(2))));
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[2].o = (jobject)((nro_Rms *) NULL_CHECK(sp[2].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[3].o = (jobject)SF_nro_Char_CharInfo;
	M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int(ctx, sp[0].o, sp[1].o, temp2, (temp4 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	LINE_NUMBER(4710);
	goto label_71;
	}
label_28:;
	{
	LINE_NUMBER(4711);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[5].i;
	jint temp1 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = temp1 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(2)))), (jint(2))));
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pb;
	sp[2].o = (jobject)((nro_Rms *) NULL_CHECK(sp[2].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[3].o = (jobject)SF_nro_Char_CharInfo;
	M_nro_Char_paintHat_behind_lib_mGraphics_int_int(ctx, sp[0].o, sp[1].o, temp0, (temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_dy)));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(4714);
	jint temp0 = (jint)SM_nro_Char_isHead_2Fr_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head));
	if (temp0 == 0) goto label_72;
	}
	{
	LINE_NUMBER(4715);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_parts;
	jint temp0 = (jint)M_nro_Char_getFHead_int_R_int(ctx, (frame[0].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head));
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(4716);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[11].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp1 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp2 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(1)));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[11].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp4 = temp2 + ((temp3 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp5 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = temp5 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK((frame[11].o)))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp1, temp4, (temp6 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	goto label_75;
	}
label_72:;
	{
	LINE_NUMBER(4720);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_id;
	jint temp1 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(1)));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp1 + ((temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp4 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(2))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, (temp5 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	}
label_75:;
	{
	LINE_NUMBER(4725);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pl;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(1)))), (jint(0))))))))->F_id;
	jint temp1 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(1)))), (jint(1)));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pl;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp3 = temp1 + ((temp2 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(1)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp4 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp5 = temp4 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(1)))), (jint(2))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pl;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp3, (temp5 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(1)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	LINE_NUMBER(4728);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pb;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp6 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_id;
	jint temp7 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp8 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(2)))), (jint(1)));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pb;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp9 = temp7 + ((temp8 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp10 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp11 = temp10 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(2)))), (jint(2))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_pb;
	sp[1].o = (jobject)((nro_Rms *) NULL_CHECK(sp[1].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp6, temp9, (temp11 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(2)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	LINE_NUMBER(4731);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp12 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp13 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(1)));
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[2].o = (jobject)((nro_Rms *) NULL_CHECK(sp[2].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[3].o = (jobject)SF_nro_Char_CharInfo;
	jint temp14 = temp12 + ((temp13 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dx)) * (frame[10].i));
	jint temp15 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[2].o = (jobject)SF_nro_Char_CharInfo;
	jint temp16 = temp15 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (jint(0)))), (jint(2))));
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[2].o = (jobject)((nro_Rms *) NULL_CHECK(sp[2].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[3].o = (jobject)SF_nro_Char_CharInfo;
	M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int(ctx, sp[0].o, sp[1].o, temp14, (temp16 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy)), (frame[7].i), (frame[8].i));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(4734);
	goto label_71;
label_6:;
	LINE_NUMBER(4733);
	INST_ASTORE(12);
label_71:;
	{
	LINE_NUMBER(4737);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) == (jint(1))) goto label_78;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFusion) != 0) goto label_78;
	}
	{
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (jint(0)))), (jint(2)));
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp1 = (temp0 + ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(0)))), (jint(0))))))))->F_dy)) + (10);
	sp[0].i = temp1;
	sp += 1;
	goto label_79;
	}
label_78:;
	INST_BIPUSH(60);
label_79:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_ch = sp[1].i;
	LINE_NUMBER(4738);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy));
	if (temp0 < (22)) goto label_81;
	}
	{
	LINE_NUMBER(4739);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	if (((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy) >= 0) goto label_83;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy) + (jint(5));
	sp[0].i = temp0;
	sp += 1;
	goto label_84;
	}
label_83:;
	{
	LINE_NUMBER(4740);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = ((jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy) - (jint(5));
	sp[0].i = temp0;
	sp += 1;
	goto label_84;
	}
label_81:;
	{
	LINE_NUMBER(4741);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ph;
	sp[0].o = (jobject)((nro_Rms *) NULL_CHECK(sp[0].o))->F_pi;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	jint temp0 = (jint)((nro_PartImage *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(0))))))))->F_dy;
	sp[0].i = temp0;
	sp += 1;
	}
label_84:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(4742);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_CharInfo;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cH_new = ((temp0 - ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))), (jint(0)))), (jint(2))))) + (frame[4].i));
	LINE_NUMBER(4743);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (jint(1))) goto label_87;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID) <= 0) goto label_87;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_meLive) != 0) goto label_87;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isUseChargeSkill_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isUseChargeSkill_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_87;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isWaitMonkey) != 0) goto label_87;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_skillPaint;
	if (sp[0].o != nullptr) goto label_87;
	}
	{
	if ((frame[5].i) == (23)) goto label_87;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag) >= 0) goto label_87;
	}
	{
	if ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID)) % (30)) == 0) goto label_88;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFreez) == 0) goto label_87;
	}
label_88:;
	{
	LINE_NUMBER(4746);
	sp[0].o = frame[1].o;
	sp += 1;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_89;
	}
	clinit_nro_Char(ctx);
	(sp++)->o = SF_nro_Char_eyeNamek;
	goto label_90;
label_89:;
	clinit_nro_Char(ctx);
	(sp++)->o = SF_nro_Char_eyeTraiDat;
label_90:;
	{
	jint temp0 = (frame[2].i) + ((frame[10].i) * (-2));
	jint temp1 = (frame[3].i) - (32);
	LINE_NUMBER(4747);
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cgender) != (jint(1))) goto label_92;
	}
	INST_BIPUSH(10);
	goto label_93;
label_92:;
	INST_BIPUSH(11);
label_93:;
	{
	sp -= 5;
	jint temp0 = (sp[3].i + sp[4].i) - (frame[5].i);
	jint temp1 = frame[9].i;
	LINE_NUMBER(4746);
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, temp0, temp1);
	}
label_87:;
	{
	LINE_NUMBER(4750);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect;
	if (sp[0].o == nullptr) goto label_95;
	}
	{
	LINE_NUMBER(4751);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect;
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_95:;
	{
	LINE_NUMBER(4754);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	if (sp[0].o == nullptr) goto label_97;
	}
	{
	LINE_NUMBER(4755);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eDanhHieu;
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_97:;
	{
	LINE_NUMBER(4760);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_99;
	}
	{
	LINE_NUMBER(4761);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cFlag) == 0) goto label_101;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cFlag) == (jint(-1))) goto label_101;
	}
	{
	LINE_NUMBER(4762);
	frame[14].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (10));
	LINE_NUMBER(4763);
	frame[12].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch));
	LINE_NUMBER(4764);
	frame[13].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me);
	LINE_NUMBER(4765);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_flagImage;
	jint temp1 = frame[14].i;
	jint temp2 = (frame[12].i) - (30);
	LINE_NUMBER(4766);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) <= (10)) goto label_107;
	}
	{
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_108;
	}
label_107:;
	INST_ICONST(0);
label_108:;
	{
	sp -= 5;
	jint temp0 = sp[3].i + sp[4].i;
	jint temp1 = jint(2);
	jint temp2 = jint(0);
	LINE_NUMBER(4765);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, temp0, temp1, temp2);
	LINE_NUMBER(4767);
	popStackFrame(ctx);
	return;
	}
label_99:;
	{
	LINE_NUMBER(4769);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cFlag) == 0) goto label_101;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cFlag) == (jint(-1))) goto label_101;
	}
	{
	LINE_NUMBER(4770);
	frame[12].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch));
	LINE_NUMBER(4771);
	frame[13].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me);
	LINE_NUMBER(4772);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_flagImage;
	jint temp1 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	jint temp2 = (frame[12].i) - (30);
	LINE_NUMBER(4773);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp[3].i = temp2;
	sp += 4;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (20)) <= (10)) goto label_115;
	}
	{
	jint temp0 = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(4))) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_116;
	}
label_115:;
	INST_ICONST(0);
label_116:;
	{
	sp -= 5;
	jint temp0 = sp[3].i + sp[4].i;
	jint temp1 = jint(0);
	jint temp2 = jint(0);
	LINE_NUMBER(4772);
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, sp[1].i, sp[2].i, temp0, temp1, temp2);
	}
label_101:;
	LINE_NUMBER(4776);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintCharWithSkill_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintCharWithSkill", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(4779);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_ty = (jint(0));
	LINE_NUMBER(4780);
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(4781);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill) < 0) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill) < (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_4;
	}
label_3:;
	LINE_NUMBER(4782);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(4784);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_status);
	LINE_NUMBER(4785);
	M_nro_Char_paintCharWithoutSkill_lib_mGraphics(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(4786);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(4787);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(4788);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx0) != 0) goto label_11;
	}
	{
	LINE_NUMBER(4789);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx0 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e0dx);
	}
label_11:;
	{
	LINE_NUMBER(4792);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy0) != 0) goto label_13;
	}
	{
	LINE_NUMBER(4793);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy0 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e0dy);
	}
label_13:;
	{
	LINE_NUMBER(4796);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_idImg;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx0);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_dy);
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy0);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_where)), (jint(0)), (jint(3)));
	LINE_NUMBER(4799);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i0 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_i0) + (jint(1)));
	LINE_NUMBER(4800);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp4 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_9;
	}
	{
	LINE_NUMBER(4801);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0 = (jref) (jobject(nullptr));
	LINE_NUMBER(4802);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_dy0 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_dx0 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i0 = temp0;
	}
label_9:;
	{
	LINE_NUMBER(4806);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(4807);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx1) != 0) goto label_21;
	}
	{
	LINE_NUMBER(4808);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx1 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e1dx);
	}
label_21:;
	{
	LINE_NUMBER(4811);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy1) != 0) goto label_23;
	}
	{
	LINE_NUMBER(4812);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy1 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e1dy);
	}
label_23:;
	{
	LINE_NUMBER(4815);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1)))))->F_idImg;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx1);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1)))))->F_dy);
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy1);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1)))))->F_where)), (jint(0)), (jint(3)));
	LINE_NUMBER(4818);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_i1) + (jint(1)));
	LINE_NUMBER(4819);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp4 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(4820);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1 = (jref) (jobject(nullptr));
	LINE_NUMBER(4821);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_dy1 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_dx1 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i1 = temp0;
	}
label_19:;
	{
	LINE_NUMBER(4825);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(4826);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx2) != 0) goto label_31;
	}
	{
	LINE_NUMBER(4827);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx2 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e2dx);
	}
label_31:;
	{
	LINE_NUMBER(4830);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy2) != 0) goto label_33;
	}
	{
	LINE_NUMBER(4831);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy2 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e2dy);
	}
label_33:;
	{
	LINE_NUMBER(4834);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2)))))->F_idImg;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx2);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2)))))->F_dy);
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy2);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2)))))->F_where)), (jint(0)), (jint(3)));
	LINE_NUMBER(4837);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i2 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_i2) + (jint(1)));
	LINE_NUMBER(4838);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp4 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_29;
	}
	{
	LINE_NUMBER(4839);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2 = (jref) (jobject(nullptr));
	LINE_NUMBER(4840);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_dy2 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_dx2 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i2 = temp0;
	goto label_29;
	}
label_7:;
	{
	LINE_NUMBER(4844);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(4845);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx0) != 0) goto label_41;
	}
	{
	LINE_NUMBER(4846);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx0 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e0dx);
	}
label_41:;
	{
	LINE_NUMBER(4849);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy0) != 0) goto label_43;
	}
	{
	LINE_NUMBER(4850);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy0 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e0dy);
	}
label_43:;
	{
	LINE_NUMBER(4853);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_idImg;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx0);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 - ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_dy);
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy0);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_where)), (jint(2)), (jint(3)));
	LINE_NUMBER(4856);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i0 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_i0) + (jint(1)));
	LINE_NUMBER(4857);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp4 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_39;
	}
	{
	LINE_NUMBER(4858);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff0 = (jref) (jobject(nullptr));
	LINE_NUMBER(4859);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_i0 = (jint(0));
	LINE_NUMBER(4860);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx0 = (jint(0));
	LINE_NUMBER(4861);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy0 = (jint(0));
	}
label_39:;
	{
	LINE_NUMBER(4865);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(4866);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx1) != 0) goto label_53;
	}
	{
	LINE_NUMBER(4867);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx1 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e1dx);
	}
label_53:;
	{
	LINE_NUMBER(4870);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy1) != 0) goto label_55;
	}
	{
	LINE_NUMBER(4871);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy1 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e1dy);
	}
label_55:;
	{
	LINE_NUMBER(4874);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1)))))->F_idImg;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx1);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 - ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1)))))->F_dy);
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy1);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1)))))->F_where)), (jint(2)), (jint(3)));
	LINE_NUMBER(4877);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i1 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_i1) + (jint(1)));
	LINE_NUMBER(4878);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp4 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_51;
	}
	{
	LINE_NUMBER(4879);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff1 = (jref) (jobject(nullptr));
	LINE_NUMBER(4880);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_i1 = (jint(0));
	LINE_NUMBER(4881);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx1 = (jint(0));
	LINE_NUMBER(4882);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy1 = (jint(0));
	}
label_51:;
	{
	LINE_NUMBER(4886);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(4887);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx2) != 0) goto label_64;
	}
	{
	LINE_NUMBER(4888);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx2 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e2dx);
	}
label_64:;
	{
	LINE_NUMBER(4891);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy2) != 0) goto label_66;
	}
	{
	LINE_NUMBER(4892);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy2 = ((jint)((nro_SkillInfoPaint *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_indexSkill)))))->F_e2dy);
	}
label_66:;
	{
	LINE_NUMBER(4895);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp0 = (jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2)))))->F_idImg;
	jint temp1 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx2);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	jint temp2 = temp1 - ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2)))))->F_dy);
	jint temp3 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy2);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, temp0, temp2, (temp3 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2)))))->F_where)), (jint(2)), (jint(3)));
	LINE_NUMBER(4898);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_i2 = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_i2) + (jint(1)));
	LINE_NUMBER(4899);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp4 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_29;
	}
	{
	LINE_NUMBER(4900);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eff2 = (jref) (jobject(nullptr));
	LINE_NUMBER(4901);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_i2 = (jint(0));
	LINE_NUMBER(4902);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dx2 = (jint(0));
	LINE_NUMBER(4903);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_dy2 = (jint(0));
	}
label_29:;
	LINE_NUMBER(4907);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_moveTo_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:moveTo", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(4910);
	if ((frame[3].i) == (jint(1))) goto label_1;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[1].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)));
	if (temp0 > (100)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_nro_Res_abs_int_R_int(ctx, ((frame[2].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)));
	if (temp0 > (300)) goto label_1;
	}
	{
	LINE_NUMBER(4911);
	frame[4].i = (jint(0));
	LINE_NUMBER(4912);
	frame[5].i = (jint(0));
	LINE_NUMBER(4913);
	frame[6].i = ((frame[1].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx));
	LINE_NUMBER(4914);
	frame[7].i = ((frame[2].i) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(4915);
	if ((frame[6].i) != 0) goto label_7;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_7;
	{
	LINE_NUMBER(4916);
	frame[5].i = (jint(1));
	LINE_NUMBER(4917);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(4918);
	if ((frame[7].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(4919);
	frame[5].i = (jint(2));
	LINE_NUMBER(4920);
	if ((frame[6].i) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(4921);
	frame[4].i = (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(4924);
	if ((frame[6].i) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(4925);
	frame[4].i = (jint(-1));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(4927);
	if ((frame[7].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(4928);
	if ((frame[7].i) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(4929);
	frame[5].i = (jint(3));
	}
label_18:;
	{
	LINE_NUMBER(4932);
	if ((frame[7].i) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(4933);
	frame[5].i = (jint(4));
	}
label_20:;
	{
	LINE_NUMBER(4936);
	if ((frame[6].i) >= 0) goto label_22;
	}
	{
	LINE_NUMBER(4937);
	frame[4].i = (jint(-1));
	}
label_22:;
	{
	LINE_NUMBER(4940);
	if ((frame[6].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(4941);
	frame[4].i = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(4945);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vMovePoints;
	clinit_nro_MovePoint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MovePoint);
	init_nro_MovePoint_int_int_int_int(ctx, sp[1].o, (frame[1].i), (frame[2].i), (frame[5].i), (frame[4].i));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(4946);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (6)) goto label_26;
	}
	{
	LINE_NUMBER(4947);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusBeforeNothing = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe);
	}
label_26:;
	{
	LINE_NUMBER(4950);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (6);
	LINE_NUMBER(4951);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(4952);
	goto label_30;
	}
label_1:;
	{
	LINE_NUMBER(4953);
	((func_nro_Char_createShadow_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_createShadow_int_int_int])(ctx, (frame[0].o), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy), (10));
	LINE_NUMBER(4954);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx = (frame[1].i);
	LINE_NUMBER(4955);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy = (frame[2].i);
	LINE_NUMBER(4956);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vMovePoints;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(4957);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (6);
	LINE_NUMBER(4958);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (jint(0));
	LINE_NUMBER(4959);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_currentMovePoint = (jref) (jobject(nullptr));
	LINE_NUMBER(4960);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cf = (25);
	}
label_30:;
	LINE_NUMBER(4962);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_searchFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:searchFocus", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(4965);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaint;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arr;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_dart;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(4966);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeFocusToMob) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(4967);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_timeFocusToMob = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_timeFocusToMob) - (jint(1)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(4969);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isManualFocus) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_7;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isInvisiblez) == 0) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(4971);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(4974);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(2))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(4975);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	jint temp0 = (jint)((func_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(4976);
	frame[1].i = (jint(0));
	LINE_NUMBER(4977);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_nClass;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_nClass;
	if (((jint)((nro_NClass *) NULL_CHECK(sp[0].o))->F_classId) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_nClass;
	if (((jint)((nro_NClass *) NULL_CHECK(sp[0].o))->F_classId) == (jint(1))) goto label_12;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_nClass;
	if (((jint)((nro_NClass *) NULL_CHECK(sp[0].o))->F_classId) == (jint(3))) goto label_12;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_nClass;
	if (((jint)((nro_NClass *) NULL_CHECK(sp[0].o))->F_classId) != (jint(5))) goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(4979);
	frame[1].i = (40);
	}
label_11:;
	{
	LINE_NUMBER(4982);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(-1));
	frame[2].o = sp[0].o;
	LINE_NUMBER(4983);
	frame[3].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) - (10));
	LINE_NUMBER(4984);
	frame[4].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) + (10));
	LINE_NUMBER(4985);
	frame[5].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy);
	LINE_NUMBER(4986);
	frame[6].i = ((((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH34)) + (10));
	LINE_NUMBER(4987);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isManualFocus) == 0) goto label_18;
	}
	{
	LINE_NUMBER(4988);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) == (jint(1))) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) == 0) goto label_20;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (temp0 > ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x)) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) > (frame[4].i)) goto label_20;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (temp0 > ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y)) goto label_20;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) <= (frame[6].i)) goto label_21;
	}
label_20:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)) goto label_22;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) > (frame[4].i)) goto label_22;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy)) goto label_22;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) <= (frame[6].i)) goto label_21;
	}
label_22:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)) goto label_23;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) > (frame[4].i)) goto label_23;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy)) goto label_23;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) <= (frame[6].i)) goto label_21;
	}
label_23:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (temp0 > ((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_x)) goto label_24;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_x) > (frame[4].i)) goto label_24;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (temp0 > ((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y)) goto label_24;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y) > (frame[6].i)) goto label_24;
	}
label_21:;
	LINE_NUMBER(4997);
	popStackFrame(ctx);
	INST_RETURN();
label_24:;
	{
	LINE_NUMBER(5000);
	clinit_nro_Char(ctx);
	SF_nro_Char_isManualFocus = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(5003);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (80));
	LINE_NUMBER(5004);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (80));
	LINE_NUMBER(5005);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (30));
	LINE_NUMBER(5006);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (30));
	LINE_NUMBER(5007);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (6)) goto label_29;
	}
	{
	LINE_NUMBER(5008);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (20));
	LINE_NUMBER(5009);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (20));
	LINE_NUMBER(5010);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (10));
	LINE_NUMBER(5011);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (10));
	}
label_29:;
	{
	LINE_NUMBER(5019);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (sp[0].o != nullptr) goto label_34;
	}
	{
	LINE_NUMBER(5020);
	frame[7].i = (jint(0));
	}
label_36:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_37;
	}
	{
	LINE_NUMBER(5021);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = checkCast(ctx, &class_nro_Npc, sp[0].o);
	frame[8].o = sp[0].o;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_40;
	}
	{
	LINE_NUMBER(5022);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx)));
	frame[9].i = temp0;
	LINE_NUMBER(5023);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy)));
	frame[10].i = temp1;
	LINE_NUMBER(5024);
	if ((frame[9].i) <= (frame[10].i)) goto label_44;
	}
	INST_ILOAD(9);
	goto label_45;
label_44:;
	INST_ILOAD(10);
label_45:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5025);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (80));
	LINE_NUMBER(5026);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (80));
	LINE_NUMBER(5027);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (30));
	LINE_NUMBER(5028);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (30));
	LINE_NUMBER(5029);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[8].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (6)) goto label_51;
	}
	{
	LINE_NUMBER(5030);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (20));
	LINE_NUMBER(5031);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (20));
	LINE_NUMBER(5032);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (10));
	LINE_NUMBER(5033);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (10));
	}
label_51:;
	{
	LINE_NUMBER(5036);
	if ((frame[3].i) > ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx)) goto label_40;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx) > (frame[4].i)) goto label_40;
	}
	{
	if ((frame[5].i) > ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy)) goto label_40;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy) > (frame[6].i)) goto label_40;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_56;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(1))))) goto label_40;
	}
label_56:;
	{
	LINE_NUMBER(5038);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus = (jref) (frame[8].o);
	LINE_NUMBER(5039);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(1))) = (frame[11].i);
	}
label_40:;
	{
	LINE_NUMBER(5020);
	INST_IINC(7, 1);
	goto label_36;
	}
label_34:;
	{
	LINE_NUMBER(5044);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)) goto label_58;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) > (frame[4].i)) goto label_58;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy)) goto label_58;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) > (frame[6].i)) goto label_58;
	}
	{
	LINE_NUMBER(5046);
	M_nro_Char_clearFocus_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(5047);
	popStackFrame(ctx);
	return;
	}
label_58:;
	{
	LINE_NUMBER(5050);
	M_nro_Char_deFocusNPC(ctx, (frame[0].o));
	LINE_NUMBER(5052);
	frame[7].i = (jint(0));
	}
label_62:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_37;
	}
	{
	LINE_NUMBER(5053);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = checkCast(ctx, &class_nro_Npc, sp[0].o);
	frame[8].o = sp[0].o;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_65;
	}
	{
	LINE_NUMBER(5054);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx)));
	frame[9].i = temp0;
	LINE_NUMBER(5055);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy)));
	frame[10].i = temp1;
	LINE_NUMBER(5056);
	if ((frame[9].i) <= (frame[10].i)) goto label_69;
	}
	INST_ILOAD(9);
	goto label_70;
label_69:;
	INST_ILOAD(10);
label_70:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5057);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (80));
	LINE_NUMBER(5058);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (80));
	LINE_NUMBER(5059);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (30));
	LINE_NUMBER(5060);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (30));
	LINE_NUMBER(5061);
	sp[0].o = (jobject)((nro_Npc *) NULL_CHECK((frame[8].o)))->F_template;
	if (((jint)((nro_NpcTemplate *) NULL_CHECK(sp[0].o))->F_npcTemplateId) != (6)) goto label_76;
	}
	{
	LINE_NUMBER(5062);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - (20));
	LINE_NUMBER(5063);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[4].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) + (20));
	LINE_NUMBER(5064);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[5].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (10));
	LINE_NUMBER(5065);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (10));
	}
label_76:;
	{
	LINE_NUMBER(5068);
	if ((frame[3].i) > ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx)) goto label_65;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx) > (frame[4].i)) goto label_65;
	}
	{
	if ((frame[5].i) > ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy)) goto label_65;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy) > (frame[6].i)) goto label_65;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_81;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(1))))) goto label_65;
	}
label_81:;
	{
	LINE_NUMBER(5070);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus = (jref) (frame[8].o);
	LINE_NUMBER(5071);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(1))) = (frame[11].i);
	}
label_65:;
	{
	LINE_NUMBER(5052);
	INST_IINC(7, 1);
	goto label_62;
	}
label_37:;
	{
	LINE_NUMBER(5078);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (sp[0].o != nullptr) goto label_83;
	}
	{
	LINE_NUMBER(5079);
	frame[7].i = (jint(0));
	}
label_85:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_86;
	}
	{
	LINE_NUMBER(5080);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[12].o = (checkCast(ctx, &class_nro_ItemMap, sp[0].o));
	LINE_NUMBER(5081);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_x)));
	frame[9].i = temp0;
	LINE_NUMBER(5082);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_y)));
	frame[10].i = temp1;
	LINE_NUMBER(5083);
	if ((frame[9].i) <= (frame[10].i)) goto label_91;
	}
	INST_ILOAD(9);
	goto label_92;
label_91:;
	INST_ILOAD(10);
label_92:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5084);
	if ((frame[9].i) > (48)) goto label_94;
	}
	{
	if ((frame[10].i) > (48)) goto label_94;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (sp[0].o == nullptr) goto label_95;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(3))))) goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(5085);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto) == 0) goto label_96;
	}
	{
	LINE_NUMBER(5086);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	LINE_NUMBER(5087);
	jint temp0 = (jint)SM_nro_GameScr_isBagFull_R_boolean(ctx);
	if (temp0 == 0) goto label_96;
	}
	{
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) == (9)) goto label_96;
	}
	LINE_NUMBER(5088);
	goto label_94;
label_96:;
	{
	LINE_NUMBER(5092);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (frame[12].o);
	LINE_NUMBER(5093);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(3))) = (frame[11].i);
	}
label_94:;
	{
	LINE_NUMBER(5079);
	INST_IINC(7, 1);
	goto label_85;
	}
label_83:;
	{
	LINE_NUMBER(5097);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (temp0 > ((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_x)) goto label_101;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_x) > (frame[4].i)) goto label_101;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (temp0 > ((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y)) goto label_101;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (((jint)((nro_ItemMap *) NULL_CHECK(sp[0].o))->F_y) > (frame[6].i)) goto label_101;
	}
	{
	LINE_NUMBER(5099);
	M_nro_Char_clearFocus_int(ctx, (frame[0].o), (jint(3)));
	LINE_NUMBER(5100);
	popStackFrame(ctx);
	return;
	}
label_101:;
	{
	LINE_NUMBER(5103);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5105);
	frame[7].i = (jint(0));
	}
label_105:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_86;
	}
	{
	LINE_NUMBER(5106);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[12].o = (checkCast(ctx, &class_nro_ItemMap, sp[0].o));
	LINE_NUMBER(5107);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_x)));
	frame[9].i = temp0;
	LINE_NUMBER(5108);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_y)));
	frame[10].i = temp1;
	LINE_NUMBER(5109);
	if ((frame[9].i) <= (frame[10].i)) goto label_110;
	}
	INST_ILOAD(9);
	goto label_111;
label_110:;
	INST_ILOAD(10);
label_111:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5110);
	if ((frame[3].i) > ((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_x)) goto label_113;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_x) > (frame[4].i)) goto label_113;
	}
	{
	if ((frame[5].i) > ((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_y)) goto label_113;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_y) > (frame[6].i)) goto label_113;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (sp[0].o == nullptr) goto label_114;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(3))))) goto label_113;
	}
label_114:;
	{
	LINE_NUMBER(5112);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	if (((jint)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto) == 0) goto label_115;
	}
	{
	LINE_NUMBER(5113);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	LINE_NUMBER(5114);
	jint temp0 = (jint)SM_nro_GameScr_isBagFull_R_boolean(ctx);
	if (temp0 == 0) goto label_115;
	}
	{
	sp[0].o = (jobject)((nro_ItemMap *) NULL_CHECK((frame[12].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) == (9)) goto label_115;
	}
	LINE_NUMBER(5115);
	goto label_113;
label_115:;
	{
	LINE_NUMBER(5119);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (frame[12].o);
	LINE_NUMBER(5120);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(3))) = (frame[11].i);
	}
label_113:;
	{
	LINE_NUMBER(5105);
	INST_IINC(7, 1);
	goto label_105;
	}
label_86:;
	{
	LINE_NUMBER(5125);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)M_nro_Char_getdxSkill_R_int(ctx, sp[0].o);
	frame[3].i = ((temp0 - temp1) - (10));
	LINE_NUMBER(5126);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp3 = (jint)M_nro_Char_getdxSkill_R_int(ctx, sp[0].o);
	frame[4].i = ((temp2 + temp3) + (10));
	LINE_NUMBER(5127);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp4 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp5 = (jint)M_nro_Char_getdySkill_R_int(ctx, sp[0].o);
	frame[5].i = (((temp4 - temp5) - (frame[1].i)) - (20));
	LINE_NUMBER(5128);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp6 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp7 = (jint)M_nro_Char_getdySkill_R_int(ctx, sp[0].o);
	jint temp8 = (temp6 + temp7) + (20);
	frame[6].i = temp8;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp8 <= (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (30))) goto label_123;
	}
	{
	LINE_NUMBER(5129);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[6].i = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) + (30));
	}
label_123:;
	{
	LINE_NUMBER(5133);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_125;
	}
	{
	LINE_NUMBER(5134);
	frame[7].i = (jint(0));
	}
label_127:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_128;
	}
	{
	LINE_NUMBER(5135);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[13].o = (checkCast(ctx, &class_nro_Mob, sp[0].o));
	LINE_NUMBER(5136);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_x)));
	frame[9].i = temp0;
	LINE_NUMBER(5137);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_y)));
	frame[10].i = temp1;
	LINE_NUMBER(5138);
	if ((frame[9].i) <= (frame[10].i)) goto label_133;
	}
	INST_ILOAD(9);
	goto label_134;
label_133:;
	INST_ILOAD(10);
label_134:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5139);
	if ((frame[3].i) > ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_x)) goto label_136;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_x) > (frame[4].i)) goto label_136;
	}
	{
	if ((frame[5].i) > ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_y)) goto label_136;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_y) > (frame[6].i)) goto label_136;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_137;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))))) goto label_136;
	}
label_137:;
	{
	LINE_NUMBER(5141);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (frame[13].o);
	LINE_NUMBER(5142);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (frame[11].i);
	}
label_136:;
	{
	LINE_NUMBER(5134);
	INST_IINC(7, 1);
	goto label_127;
	}
label_125:;
	{
	LINE_NUMBER(5146);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) == (jint(1))) goto label_139;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) == 0) goto label_139;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (temp0 > ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x)) goto label_139;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x) > (frame[4].i)) goto label_139;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (temp0 > ((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y)) goto label_139;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y) > (frame[6].i)) goto label_139;
	}
	{
	LINE_NUMBER(5148);
	M_nro_Char_clearFocus_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(5149);
	popStackFrame(ctx);
	return;
	}
label_139:;
	{
	LINE_NUMBER(5152);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5154);
	frame[7].i = (jint(0));
	}
label_143:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_128;
	}
	{
	LINE_NUMBER(5155);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[13].o = (checkCast(ctx, &class_nro_Mob, sp[0].o));
	LINE_NUMBER(5156);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_x)));
	frame[9].i = temp0;
	LINE_NUMBER(5157);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_y)));
	frame[10].i = temp1;
	LINE_NUMBER(5158);
	if ((frame[9].i) <= (frame[10].i)) goto label_148;
	}
	INST_ILOAD(9);
	goto label_149;
label_148:;
	INST_ILOAD(10);
label_149:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5159);
	if ((frame[3].i) > ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_x)) goto label_151;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_x) > (frame[4].i)) goto label_151;
	}
	{
	if ((frame[5].i) > ((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_y)) goto label_151;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[13].o)))->F_y) > (frame[6].i)) goto label_151;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_152;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))))) goto label_151;
	}
label_152:;
	{
	LINE_NUMBER(5161);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (frame[13].o);
	LINE_NUMBER(5162);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (frame[11].i);
	}
label_151:;
	{
	LINE_NUMBER(5154);
	INST_IINC(7, 1);
	goto label_143;
	}
label_128:;
	{
	LINE_NUMBER(5168);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o != nullptr) goto label_154;
	}
	{
	LINE_NUMBER(5169);
	frame[7].i = (jint(0));
	}
label_156:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_157;
	}
	{
	LINE_NUMBER(5170);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = checkCast(ctx, &class_nro_Char, sp[0].o);
	frame[14].o = sp[0].o;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_160;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_isInvisiblez) != 0) goto label_160;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdx) != 0) goto label_160;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdy) != 0) goto label_160;
	}
	{
	LINE_NUMBER(5172);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cx)));
	frame[9].i = temp0;
	LINE_NUMBER(5173);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cy)));
	frame[10].i = temp1;
	LINE_NUMBER(5174);
	if ((frame[9].i) <= (frame[10].i)) goto label_164;
	}
	INST_ILOAD(9);
	goto label_165;
label_164:;
	INST_ILOAD(10);
label_165:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5175);
	if ((frame[3].i) > ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cx)) goto label_160;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cx) > (frame[4].i)) goto label_160;
	}
	{
	if ((frame[5].i) > ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cy)) goto label_160;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cy) > (frame[6].i)) goto label_160;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_167;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(2))))) goto label_160;
	}
label_167:;
	{
	LINE_NUMBER(5177);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (frame[14].o);
	LINE_NUMBER(5178);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(2))) = (frame[11].i);
	}
label_160:;
	{
	LINE_NUMBER(5169);
	INST_IINC(7, 1);
	goto label_156;
	}
label_154:;
	{
	LINE_NUMBER(5183);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)) goto label_169;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) > (frame[4].i)) goto label_169;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (temp0 > ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy)) goto label_169;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) > (frame[6].i)) goto label_169;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_169;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isInvisiblez) != 0) goto label_169;
	}
	{
	LINE_NUMBER(5186);
	M_nro_Char_clearFocus_int(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(5187);
	popStackFrame(ctx);
	return;
	}
label_169:;
	{
	LINE_NUMBER(5190);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5192);
	frame[7].i = (jint(0));
	}
label_173:;
	{
	jint temp0 = frame[7].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_157;
	}
	{
	LINE_NUMBER(5193);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	sp[0].o = checkCast(ctx, &class_nro_Char, sp[0].o);
	frame[14].o = sp[0].o;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_176;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_isInvisiblez) != 0) goto label_176;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdx) != 0) goto label_176;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdy) != 0) goto label_176;
	}
	{
	LINE_NUMBER(5195);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx) - ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cx)));
	frame[9].i = temp0;
	LINE_NUMBER(5196);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cy)));
	frame[10].i = temp1;
	LINE_NUMBER(5197);
	if ((frame[9].i) <= (frame[10].i)) goto label_180;
	}
	INST_ILOAD(9);
	goto label_181;
label_180:;
	INST_ILOAD(10);
label_181:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(5198);
	if ((frame[3].i) > ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cx)) goto label_176;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cx) > (frame[4].i)) goto label_176;
	}
	{
	if ((frame[5].i) > ((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cy)) goto label_176;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[14].o)))->F_cy) > (frame[6].i)) goto label_176;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_183;
	}
	{
	if ((frame[11].i) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(2))))) goto label_176;
	}
label_183:;
	{
	LINE_NUMBER(5200);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (frame[14].o);
	LINE_NUMBER(5201);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(2))) = (frame[11].i);
	}
label_176:;
	{
	LINE_NUMBER(5192);
	INST_IINC(7, 1);
	goto label_173;
	}
label_157:;
	{
	LINE_NUMBER(5207);
	frame[7].i = (jint(-1));
	LINE_NUMBER(5209);
	frame[15].i = (jint(0));
	}
label_186:;
	{
	if ((frame[15].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_187;
	}
	{
	LINE_NUMBER(5210);
	if ((frame[7].i) != (jint(-1))) goto label_189;
	}
	{
	LINE_NUMBER(5211);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[15].i))) == (jint(-1))) goto label_191;
	}
	{
	LINE_NUMBER(5212);
	frame[7].i = (frame[15].i);
	goto label_191;
	}
label_189:;
	{
	LINE_NUMBER(5214);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[15].i))) >= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[7].i)))) goto label_191;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[15].i))) == (jint(-1))) goto label_191;
	}
	{
	LINE_NUMBER(5215);
	frame[7].i = (frame[15].i);
	}
label_191:;
	{
	LINE_NUMBER(5209);
	INST_IINC(15, 1);
	goto label_186;
	}
label_187:;
	{
	LINE_NUMBER(5219);
	M_nro_Char_clearFocus_int(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(5220);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_195;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isAttacPlayerStatus_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isAttacPlayerStatus_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_195;
	}
	{
	LINE_NUMBER(5221);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_197;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_isMobMe) != 0) goto label_197;
	}
	{
	LINE_NUMBER(5222);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	}
label_197:;
	{
	LINE_NUMBER(5225);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5226);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	}
label_195:;
	LINE_NUMBER(5229);
	goto label_5;
label_1:;
	{
	LINE_NUMBER(5233);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeFocusToMob = (200);
	}
label_5:;
	LINE_NUMBER(5235);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_clearFocus_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:clearFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(5238);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5239);
	M_nro_Char_deFocusNPC(ctx, (frame[0].o));
	LINE_NUMBER(5240);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5241);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(5242);
	if ((frame[1].i) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(5243);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5244);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5245);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(5246);
	if ((frame[1].i) != (jint(2))) goto label_10;
	}
	{
	LINE_NUMBER(5247);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5248);
	M_nro_Char_deFocusNPC(ctx, (frame[0].o));
	LINE_NUMBER(5249);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	goto label_5;
	}
label_10:;
	{
	LINE_NUMBER(5251);
	if ((frame[1].i) != (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(5252);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5253);
	M_nro_Char_deFocusNPC(ctx, (frame[0].o));
	LINE_NUMBER(5254);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	}
label_5:;
	LINE_NUMBER(5258);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_Char_isCharInScreen_nro_Char_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isCharInScreen", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5261);
	frame[1].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	LINE_NUMBER(5262);
	frame[2].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w));
	LINE_NUMBER(5263);
	frame[3].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (10));
	LINE_NUMBER(5264);
	frame[4].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH));
	LINE_NUMBER(5265);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (15)) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInvisiblez) != 0) goto label_5;
	}
	{
	if ((frame[1].i) > ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx)) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) > (frame[2].i)) goto label_5;
	}
	{
	if ((frame[3].i) > ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) > (frame[4].i)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isAttacPlayerStatus_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isAttacPlayerStatus", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5270);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == (jint(4))) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) != (jint(3))) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Char_setHoldChar_nro_Char(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setHoldChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5274);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) >= ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx)) goto label_1;
	}
	{
	LINE_NUMBER(5275);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(5277);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(5280);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold = (jref) (frame[1].o);
	LINE_NUMBER(5281);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder = (jint(1));
	LINE_NUMBER(5282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_setHoldMob_nro_Mob(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setHoldMob", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5285);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) >= ((jint)((nro_Mob *) NULL_CHECK((frame[1].o)))->F_x)) goto label_1;
	}
	{
	LINE_NUMBER(5286);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(1));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(5288);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(5291);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold = (jref) (frame[1].o);
	LINE_NUMBER(5292);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder = (jint(1));
	LINE_NUMBER(5293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_findNextFocusByKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:findNextFocusByKey", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5296);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_skillPaint;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arr;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_dart;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5297);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((func_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_3;
	}
label_1:;
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(5298);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(5299);
	frame[1].i = (jint(0));
	LINE_NUMBER(5300);
	frame[2].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (10));
	LINE_NUMBER(5301);
	frame[3].i = (((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) + (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w)) - (10));
	LINE_NUMBER(5302);
	frame[4].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (10));
	LINE_NUMBER(5303);
	frame[5].i = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gH));
	LINE_NUMBER(5306);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[6].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(5308);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = checkCast(ctx, &class_nro_Char, sp[0].o);
	frame[7].o = sp[0].o;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[7].o)))->F_isInvisiblez) != 0) goto label_15;
	}
	{
	if ((frame[2].i) > ((jint)((nro_Char *) NULL_CHECK((frame[7].o)))->F_cx)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[7].o)))->F_cx) > (frame[3].i)) goto label_15;
	}
	{
	if ((frame[4].i) > ((jint)((nro_Char *) NULL_CHECK((frame[7].o)))->F_cy)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[7].o)))->F_cy) > (frame[5].i)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[7].o)))->F_charID) == (-114)) goto label_15;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (129)) goto label_16;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (129)) goto label_15;
	}
	{
	LINE_NUMBER(5310);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) <= (264)) goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(5311);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(5312);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(5313);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	}
label_15:;
	{
	LINE_NUMBER(5306);
	INST_IINC(6, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(5319);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_20;
	}
	{
	jint temp0 = (jint)((func_nro_Char_isAttacPlayerStatus_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_isAttacPlayerStatus_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(5320);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"co the tan cong nguoi"_j))));
	LINE_NUMBER(5322);
	frame[6].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[6].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_24;
	}
	{
	LINE_NUMBER(5323);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_nro_Mob, sp[0].o));
	LINE_NUMBER(5324);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	LINE_NUMBER(5325);
	jint temp0 = (jint)SM_nro_GameScr_isMeCanAttackMob_nro_Mob_R_boolean(ctx, (frame[7].o));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(5326);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"khong the tan cong quai"_j))));
	LINE_NUMBER(5327);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	goto label_31;
	}
label_28:;
	{
	LINE_NUMBER(5329);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"co the tan ong quai"_j))));
	LINE_NUMBER(5330);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(5331);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(5332);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	}
label_31:;
	{
	LINE_NUMBER(5322);
	INST_IINC(6, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(5337);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5338);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5339);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_37;
	}
	{
	LINE_NUMBER(5340);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_39;
	}
	{
	LINE_NUMBER(5341);
	frame[1].i = (jint(0));
	}
label_39:;
	{
	LINE_NUMBER(5344);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	((func_nro_Char_focusManualTo_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_focusManualTo_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_37:;
	{
	LINE_NUMBER(5346);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5347);
	M_nro_Char_deFocusNPC(ctx, (frame[0].o));
	LINE_NUMBER(5348);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5349);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5350);
	clinit_nro_Char(ctx);
	SF_nro_Char_isManualFocus = (jint(0));
	goto label_4;
	}
label_20:;
	{
	LINE_NUMBER(5353);
	frame[6].i = (jint(0));
	}
label_45:;
	{
	jint temp0 = frame[6].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_46;
	}
	{
	LINE_NUMBER(5354);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vItemMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_nro_ItemMap, sp[0].o));
	LINE_NUMBER(5355);
	if ((frame[2].i) > ((jint)((nro_ItemMap *) NULL_CHECK((frame[8].o)))->F_x)) goto label_49;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[8].o)))->F_x) > (frame[3].i)) goto label_49;
	}
	{
	if ((frame[4].i) > ((jint)((nro_ItemMap *) NULL_CHECK((frame[8].o)))->F_y)) goto label_49;
	}
	{
	if (((jint)((nro_ItemMap *) NULL_CHECK((frame[8].o)))->F_y) > (frame[5].i)) goto label_49;
	}
	{
	LINE_NUMBER(5356);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(5357);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	if (sp[0].o == nullptr) goto label_49;
	}
	{
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(5358);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	}
label_49:;
	{
	LINE_NUMBER(5353);
	INST_IINC(6, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(5363);
	frame[6].i = (jint(0));
	}
label_53:;
	{
	jint temp0 = frame[6].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_54;
	}
	{
	LINE_NUMBER(5364);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vMob;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = checkCast(ctx, &class_nro_Mob, sp[0].o);
	frame[7].o = sp[0].o;
	if (((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_status) == (jint(1))) goto label_57;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[7].o)))->F_status) == 0) goto label_57;
	}
	{
	if ((frame[2].i) > ((jint)((nro_Mob *) NULL_CHECK((frame[7].o)))->F_x)) goto label_57;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[7].o)))->F_x) > (frame[3].i)) goto label_57;
	}
	{
	if ((frame[4].i) > ((jint)((nro_Mob *) NULL_CHECK((frame[7].o)))->F_y)) goto label_57;
	}
	{
	if (((jint)((nro_Mob *) NULL_CHECK((frame[7].o)))->F_y) > (frame[5].i)) goto label_57;
	}
	{
	LINE_NUMBER(5366);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(5367);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_57;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(5368);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	}
label_57:;
	{
	LINE_NUMBER(5363);
	INST_IINC(6, 1);
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(5373);
	frame[6].i = (jint(0));
	}
label_61:;
	{
	jint temp0 = frame[6].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_62;
	}
	{
	LINE_NUMBER(5375);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vNpc;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	sp[0].o = checkCast(ctx, &class_nro_Npc, sp[0].o);
	frame[8].o = sp[0].o;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_statusMe) == (15)) goto label_65;
	}
	{
	if ((frame[2].i) > ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx)) goto label_65;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cx) > (frame[3].i)) goto label_65;
	}
	{
	if ((frame[4].i) > ((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy)) goto label_65;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[8].o)))->F_cy) > (frame[5].i)) goto label_65;
	}
	{
	LINE_NUMBER(5377);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(5378);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_65;
	}
	{
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_65;
	}
	{
	LINE_NUMBER(5379);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	}
label_65:;
	{
	LINE_NUMBER(5373);
	INST_IINC(6, 1);
	goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(5384);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp0 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_69;
	}
	{
	LINE_NUMBER(5385);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_71;
	}
	{
	LINE_NUMBER(5386);
	frame[1].i = (jint(0));
	}
label_71:;
	{
	LINE_NUMBER(5389);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_focus;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	((func_nro_Char_focusManualTo_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_focusManualTo_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_69:;
	{
	LINE_NUMBER(5391);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5392);
	M_nro_Char_deFocusNPC(ctx, (frame[0].o));
	LINE_NUMBER(5393);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5394);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5395);
	clinit_nro_Char(ctx);
	SF_nro_Char_isManualFocus = (jint(0));
	}
label_4:;
	LINE_NUMBER(5399);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_deFocusNPC(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:deFocusNPC", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5402);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5403);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) != 0) goto label_3;
	}
	{
	LINE_NUMBER(5404);
	clinit_nro_Char(ctx);
	SF_nro_Char_chatPopup = (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(5407);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_npcFocus = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(5410);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updateCharInBridge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateCharInBridge", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5413);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5414);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))), (1024));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(5415);
	SM_nro_TileMap__setTileTypeAtPixel_int_int_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))), (512));
	LINE_NUMBER(5416);
	SM_nro_TileMap__setTileTypeAtPixel_int_int_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(2))), (512));
	}
label_3:;
	{
	LINE_NUMBER(5419);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))), (512));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(5420);
	SM_nro_TileMap_setTileTypeAtPixel_int_int_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))), (512));
	LINE_NUMBER(5421);
	SM_nro_TileMap_setTileTypeAtPixel_int_int_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(2))), (512));
	}
label_6:;
	{
	LINE_NUMBER(5424);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))), (512));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(5425);
	SM_nro_TileMap_setTileTypeAtPixel_int_int_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (jint(1))), (512));
	LINE_NUMBER(5426);
	SM_nro_TileMap_setTileTypeAtPixel_int_int_int(ctx, (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) + (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - (jint(2))), (512));
	}
label_1:;
	LINE_NUMBER(5430);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_doInjure_long_long_boolean_boolean(jcontext ctx, jobject self, jlong param0, jlong param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:doInjure", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	frame[5].i = param2;
	frame[6].i = param3;
	{
	LINE_NUMBER(5433);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isCrit = (frame[5].i);
	LINE_NUMBER(5434);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMob = (frame[6].i);
	LINE_NUMBER(5435);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP = (((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cHP) - (frame[1].l));
	LINE_NUMBER(5436);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (((jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP) - (frame[3].l));
	LINE_NUMBER(5437);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isInjureHp = (jint(1));
	LINE_NUMBER(5438);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_twHp = (jlong(0));
	LINE_NUMBER(5439);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isInjureMp = (jint(1));
	LINE_NUMBER(5440);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_twMp = (jlong(0));
	LINE_NUMBER(5441);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP), (jlong(0)))) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(5442);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP = (jlong(0));
	}
label_9:;
	{
	LINE_NUMBER(5445);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP), (jlong(0)))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(5446);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP = (jlong(0));
	}
label_11:;
	{
	LINE_NUMBER(5449);
	if ((frame[6].i) != 0) goto label_13;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_14;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == (jint(4))) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(5456);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_15;
	}
	{
	LINE_NUMBER(5457);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_17;
	}
	{
	LINE_NUMBER(5458);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_miss;
	frame[7].o = sp[0].o;
	LINE_NUMBER(5459);
	frame[8].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(5460);
	frame[9].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch));
	LINE_NUMBER(5461);
	frame[10].i = (jint(0));
	LINE_NUMBER(5462);
	frame[11].i = (-2);
	LINE_NUMBER(5463);
	frame[12].i = (7);
	goto label_25;
	}
label_17:;
	{
	LINE_NUMBER(5465);
	clinit_nro_mResources(ctx);
	sp[0].o = (jobject)SF_nro_mResources_miss;
	frame[7].o = sp[0].o;
	LINE_NUMBER(5466);
	frame[8].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(5467);
	frame[9].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch));
	LINE_NUMBER(5468);
	frame[10].i = (jint(0));
	LINE_NUMBER(5469);
	frame[11].i = (-2);
	LINE_NUMBER(5470);
	frame[12].i = (jint(4));
	goto label_25;
	}
label_15:;
	{
	LINE_NUMBER(5473);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(5474);
	frame[8].i = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(5475);
	frame[9].i = (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ch));
	LINE_NUMBER(5476);
	frame[10].i = (jint(0));
	LINE_NUMBER(5477);
	frame[11].i = (-2);
	LINE_NUMBER(5478);
	if ((frame[5].i) != 0) goto label_37;
	}
	INST_ICONST(0);
	goto label_38;
label_37:;
	INST_ICONST(3);
label_38:;
	INST_ISTORE(12);
label_25:;
	{
	LINE_NUMBER(5481);
	SM_nro_GameScr_startFlyText_java_lang_String_int_int_int_int_int(ctx, (frame[7].o), (frame[8].i), (frame[9].i), (frame[10].i), (frame[11].i), (frame[12].i));
	}
label_14:;
	{
	LINE_NUMBER(5484);
	if ((longCompare((frame[1].l), (jlong(0)))) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(5485);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjure = (6);
	}
label_39:;
	{
	LINE_NUMBER(5488);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (80), (frame[0].o), (jint(1)));
	LINE_NUMBER(5489);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isDie) == 0) goto label_42;
	}
	{
	LINE_NUMBER(5490);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isDie = (jint(0));
	LINE_NUMBER(5491);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(0));
	LINE_NUMBER(5492);
	((func_nro_Char_startDie_short_short) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_startDie_short_short])(ctx, (frame[0].o), (jshort(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_xSd))), (jshort(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd))));
	}
label_42:;
	LINE_NUMBER(5495);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_doInjure(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:doInjure", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5498);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isInjureHp = (jint(1));
	LINE_NUMBER(5499);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_twHp = (jlong(0));
	LINE_NUMBER(5500);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isInjureMp = (jint(1));
	LINE_NUMBER(5501);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_twMp = (jlong(0));
	LINE_NUMBER(5502);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjure = (6);
	LINE_NUMBER(5503);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (8), (frame[0].o), (jint(1)));
	LINE_NUMBER(5504);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isInjureHp = (jint(1));
	LINE_NUMBER(5505);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_twHp = (jint(0));
	LINE_NUMBER(5506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_startDie_short_short(jcontext ctx, jobject self, jshort param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:startDie", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(5509);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey = (jint(0));
	LINE_NUMBER(5510);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isWaitMonkey = (jint(0));
	LINE_NUMBER(5511);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isDie) != 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(5512);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_5;
	}
	{
	LINE_NUMBER(5513);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isLockMove = (jint(1));
	LINE_NUMBER(5515);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[3].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_9;
	}
	{
	LINE_NUMBER(5516);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((nro_Char *) NULL_CHECK((checkCast(ctx, &class_nro_Char, sp[0].o))))->F_killCharId = (-9999);
	LINE_NUMBER(5515);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(5519);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(5520);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp = (jref) (jobject(nullptr));
	}
label_12:;
	{
	LINE_NUMBER(5523);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(5524);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((nro_Panel *) NULL_CHECK(sp[0].o))->F_cp = (jref) (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(5528);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(5));
	LINE_NUMBER(5529);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp2 = (frame[1].i);
	LINE_NUMBER(5530);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp3 = (frame[2].i);
	LINE_NUMBER(5531);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cp1 = (jint(0));
	LINE_NUMBER(5532);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP = (jlong(0));
	LINE_NUMBER(5533);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_testCharId = (-9999);
	LINE_NUMBER(5534);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_killCharId = (-9999);
	LINE_NUMBER(5535);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_id) == (14)) goto label_22;
	}
	{
	LINE_NUMBER(5536);
	((func_nro_Char_stopUseChargeSkill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_stopUseChargeSkill])(ctx, (frame[0].o));
	}
label_22:;
	{
	LINE_NUMBER(5539);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk = (jint(0));
	}
label_4:;
	LINE_NUMBER(5541);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_waitToDie_short_short(jcontext ctx, jobject self, jshort param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:waitToDie", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(5544);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdx = (frame[1].i);
	LINE_NUMBER(5545);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_wdy = (frame[2].i);
	LINE_NUMBER(5546);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_liveFromDead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:liveFromDead", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5549);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP = ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHPFull);
	LINE_NUMBER(5550);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP = ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull);
	LINE_NUMBER(5551);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe = (jint(1));
	LINE_NUMBER(5552);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jint temp0 = jint(0);
	((nro_Char *) NULL_CHECK(sp[2].o))->F_cp3 = temp0;
	((nro_Char *) NULL_CHECK(sp[1].o))->F_cp2 = temp0;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cp1 = temp0;
	LINE_NUMBER(5553);
	SM_nro_ServerEffect_addServerEffect_int_nro_Char_int(ctx, (109), (frame[0].o), (jint(2)));
	LINE_NUMBER(5554);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center = (jref) (jobject(nullptr));
	LINE_NUMBER(5555);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_isHaveSelectSkill = (jint(1));
	LINE_NUMBER(5556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_nro_Char_doUsePotion_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:doUsePotion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5559);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(5560);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(5562);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(5563);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) != (6)) goto label_6;
	}
	{
	LINE_NUMBER(5564);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	jint temp0 = jint(0);
	jint temp1 = jint(1);
	jint temp2 = jint(-1);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBag;
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_template;
	((func_nro_Service_useItem_byte_byte_byte_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_useItem_byte_byte_byte_short])(ctx, sp[0].o, temp0, temp1, temp2, ((jint)((nro_ItemTemplate *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(5565);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(5562);
	INST_IINC(1, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(5569);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_Char_isLang_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isLang", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(5574);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (jint(1))) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (27)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (72)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (10)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (17)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (22)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (32)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (38)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (43)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (48)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isMeCanAttackOtherPlayer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5580);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_myskill;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_type) == (jint(2))) goto label_1;
	}
	{
	LINE_NUMBER(5581);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_type) != (jint(4))) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_statusMe) == (14)) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_statusMe) == (jint(5))) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(5582);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(5584);
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cTypePk) != (jint(3))) goto label_4;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cTypePk) == (jint(3))) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(5585);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cTypePk) == (jint(5))) goto label_5;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cTypePk) == (jint(5))) goto label_5;
	}
	{
	LINE_NUMBER(5587);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cTypePk) != (jint(1))) goto label_7;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cTypePk) == (jint(1))) goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(5588);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cTypePk) != (jint(4))) goto label_8;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cTypePk) == (jint(4))) goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(5589);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_testCharId) < 0) goto label_9;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_testCharId) == ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_charID)) goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(5590);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_killCharId) < 0) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_killCharId) != ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_charID)) goto label_10;
	}
	sp->i = (jint)SM_nro_Char_isLang_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_5;
label_10:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_killCharId) < 0) goto label_11;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_killCharId;
	LINE_NUMBER(5591);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID)) goto label_11;
	}
	sp->i = (jint)SM_nro_Char_isLang_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_5;
label_11:;
	{
	LINE_NUMBER(5592);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cFlag) != (8)) goto label_13;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cFlag) != 0) goto label_5;
	}
label_13:;
	{
	LINE_NUMBER(5593);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cFlag) == 0) goto label_14;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cFlag) == (8)) goto label_5;
	}
label_14:;
	{
	LINE_NUMBER(5594);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cFlag) == ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cFlag)) goto label_15;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cFlag) == 0) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cFlag) == 0) goto label_15;
	}
label_5:;
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_statusMe) == (14)) goto label_15;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_statusMe) == (jint(5))) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	LINE_NUMBER(5584);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_Char_clearTask(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:clearTask", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(5599);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_taskMaint = (jref) (jobject(nullptr));
	LINE_NUMBER(5601);
	frame[0].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[0].i;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(5602);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) != (8)) goto label_5;
	}
	{
	LINE_NUMBER(5603);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBag;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(5601);
	INST_IINC(0, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(5607);
	SM_nro_Npc_clearEffTask(ctx);
	LINE_NUMBER(5608);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_nro_Char_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5611);
	popStackFrame(ctx);
	return ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	}

	popStackFrame(ctx);
}

jint M_nro_Char_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5615);
	popStackFrame(ctx);
	return ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	}

	popStackFrame(ctx);
}

jint M_nro_Char_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getH", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5619);
	popStackFrame(ctx);
	return (32);
	}

	popStackFrame(ctx);
}

jint M_nro_Char_getW_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getW", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5623);
	popStackFrame(ctx);
	return (24);
	}

	popStackFrame(ctx);
}

void M_nro_Char_focusManualTo_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:focusManualTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5627);
	if ((isInstance(ctx, (frame[1].o), &class_nro_Mob)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(5628);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus = (jref) (checkCast(ctx, &class_nro_Mob, (frame[1].o)));
	LINE_NUMBER(5629);
	M_nro_Char_deFocusNPC(ctx, (frame[0].o));
	LINE_NUMBER(5630);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5631);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_itemFocus = (jref) (jobject(nullptr));
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(5632);
	if ((isInstance(ctx, (frame[1].o), &class_nro_Npc)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(5633);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5634);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	M_nro_Char_deFocusNPC(ctx, sp[0].o);
	LINE_NUMBER(5635);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus = (jref) (checkCast(ctx, &class_nro_Npc, (frame[1].o)));
	LINE_NUMBER(5636);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5637);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus = (jref) (jobject(nullptr));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(5638);
	if ((isInstance(ctx, (frame[1].o), &class_nro_Char)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(5639);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5640);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	M_nro_Char_deFocusNPC(ctx, sp[0].o);
	LINE_NUMBER(5641);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus = (jref) (checkCast(ctx, &class_nro_Char, (frame[1].o)));
	LINE_NUMBER(5642);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus = (jref) (jobject(nullptr));
	goto label_6;
	}
label_13:;
	{
	LINE_NUMBER(5643);
	if ((isInstance(ctx, (frame[1].o), &class_nro_ItemMap)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(5644);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5645);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	M_nro_Char_deFocusNPC(ctx, sp[0].o);
	LINE_NUMBER(5646);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(5647);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus = (jref) (checkCast(ctx, &class_nro_ItemMap, (frame[1].o)));
	}
label_6:;
	{
	LINE_NUMBER(5650);
	clinit_nro_Char(ctx);
	SF_nro_Char_isManualFocus = (jint(1));
	LINE_NUMBER(5651);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_stopMoving(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:stopMoving", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(5654);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_nro_Char_isInvisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isInvisible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5657);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_nro_Char_focusToAttack_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:focusToAttack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5661);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	jint temp0 = (jint)((func_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Char_addDustEff_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:addDustEff", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(5665);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5666);
	if ((frame[1].i) != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(5667);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (19), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (jint(5))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (20)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(5668);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(5671);
	if ((frame[1].i) != (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(5672);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_8;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMonkey) != (jint(1))) goto label_8;
	}
	LINE_NUMBER(5673);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(5676);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isNhapThe) == 0) goto label_1;
	}
	{
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(5))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(5677);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (22), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (jint(5))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (35)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(5678);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(5680);
	if ((frame[1].i) != (jint(3))) goto label_1;
	}
	{
	if ((((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) - ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy)) > (jint(5))) goto label_1;
	}
	{
	LINE_NUMBER(5681);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (19), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx) - (jint(5))), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_ySd) + (20)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(5685);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_Char_isGetFlagImage_byte_R_boolean(jcontext ctx, jbyte param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isGetFlagImage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(5688);
	frame[1].i = (jint(1));
	LINE_NUMBER(5690);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vFlag;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(5692);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vFlag;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_PKFlag, sp[0].o);
	frame[3].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(5693);
	if (((jint)((nro_PKFlag *) NULL_CHECK((frame[3].o)))->F_cflag) != (frame[0].i)) goto label_8;
	}
	{
	LINE_NUMBER(5694);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(5697);
	frame[1].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(5690);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(5701);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_nro_Char_removeHoleEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:removeHoleEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5705);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder) == 0) goto label_1;
	}
	{
	LINE_NUMBER(5706);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder = (jint(0));
	LINE_NUMBER(5707);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold = (jref) (jobject(nullptr));
	LINE_NUMBER(5708);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold = (jref) (jobject(nullptr));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(5710);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	LINE_NUMBER(5711);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold = (jref) (jobject(nullptr));
	LINE_NUMBER(5712);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold = (jref) (jobject(nullptr));
	}
label_5:;
	LINE_NUMBER(5714);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_removeProtectEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:removeProtectEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5717);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_protectEff = (jint(0));
	LINE_NUMBER(5718);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect = (jref) (jobject(nullptr));
	LINE_NUMBER(5719);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_removeBlindEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:removeBlindEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5722);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_blindEff = (jint(0));
	LINE_NUMBER(5723);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_removeEffect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:removeEffect", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5726);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holdEffID) == 0) goto label_1;
	}
	{
	LINE_NUMBER(5727);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_holdEffID = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(5730);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder) == 0) goto label_3;
	}
	{
	LINE_NUMBER(5731);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_holder = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(5734);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_protectEff) == 0) goto label_5;
	}
	{
	LINE_NUMBER(5735);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_protectEff = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(5738);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_eProtect = (jref) (jobject(nullptr));
	LINE_NUMBER(5739);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_charHold = (jref) (jobject(nullptr));
	LINE_NUMBER(5740);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobHold = (jref) (jobject(nullptr));
	LINE_NUMBER(5741);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_blindEff = (jint(0));
	LINE_NUMBER(5742);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_sleepEff = (jint(0));
	LINE_NUMBER(5743);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_setPos_short_short_byte(jcontext ctx, jobject self, jshort param0, jshort param1, jbyte param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setPos", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(5746);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isSetPos = (jint(1));
	LINE_NUMBER(5747);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_xPos = (frame[1].i);
	LINE_NUMBER(5748);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_yPos = (frame[2].i);
	LINE_NUMBER(5749);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_typePos = (frame[3].i);
	LINE_NUMBER(5750);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tpos = (jint(0));
	LINE_NUMBER(5751);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_6;
	}
	{
	LINE_NUMBER(5752);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(5753);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_hide])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(5756);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(5757);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	((func_nro_Panel_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_hide])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(5761);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_removeHuytSao(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:removeHuytSao", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5764);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_huytSao = (jint(0));
	LINE_NUMBER(5765);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_fusionComplete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:fusionComplete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5768);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFusion = (jint(0));
	LINE_NUMBER(5769);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(0));
	LINE_NUMBER(5770);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tFusion = (jint(0));
	LINE_NUMBER(5771);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_setFusion_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setFusion", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(5774);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_tFusion = (jint(0));
	LINE_NUMBER(5775);
	if ((frame[1].i) == (jint(4))) goto label_2;
	}
	{
	if ((frame[1].i) != (jint(5))) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(5776);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_4;
	}
	{
	LINE_NUMBER(5777);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_funsion_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_funsion_byte])(ctx, sp[0].o, (frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(5780);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (34), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (12)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(5783);
	if ((frame[1].i) != (6)) goto label_6;
	}
	{
	LINE_NUMBER(5784);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (38), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy) + (12)), (jint(2)), (jint(1)), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(5787);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_8;
	}
	{
	LINE_NUMBER(5788);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_hideNow) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_hideNow])(ctx, sp[0].o);
	LINE_NUMBER(5789);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(5792);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFusion = (jint(1));
	LINE_NUMBER(5793);
	if ((frame[1].i) != (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(5794);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isNhapThe = (jint(0));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(5796);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isNhapThe = (jint(1));
	}
label_14:;
	LINE_NUMBER(5798);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_removeSleepEff(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:removeSleepEff", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5801);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_sleepEff = (jint(0));
	LINE_NUMBER(5802);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_setPartOld(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:setPartOld", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5805);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_headTemp = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head);
	LINE_NUMBER(5806);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bodyTemp = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_body);
	LINE_NUMBER(5807);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_legTemp = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg);
	LINE_NUMBER(5808);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bagTemp = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag);
	LINE_NUMBER(5809);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_addServerEffect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:addServerEffect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(5812);
	if ((frame[1].i) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(5813);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_head = (frame[1].i);
	}
label_1:;
	{
	LINE_NUMBER(5816);
	if ((frame[2].i) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(5817);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_body = (frame[2].i);
	}
label_3:;
	{
	LINE_NUMBER(5820);
	if ((frame[3].i) == (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(5821);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg = (frame[3].i);
	}
label_5:;
	{
	LINE_NUMBER(5824);
	if ((frame[4].i) == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(5825);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag = (frame[4].i);
	}
label_7:;
	LINE_NUMBER(5828);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_resetPartTemp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:resetPartTemp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5831);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_headTemp) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(5832);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_head = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_headTemp);
	LINE_NUMBER(5833);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_headTemp = (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(5836);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bodyTemp) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(5837);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_body = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bodyTemp);
	LINE_NUMBER(5838);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bodyTemp = (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(5841);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_legTemp) == (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(5842);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_leg = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_legTemp);
	LINE_NUMBER(5843);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_legTemp = (jint(-1));
	}
label_7:;
	{
	LINE_NUMBER(5846);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bagTemp) == (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(5847);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bag = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_bagTemp);
	LINE_NUMBER(5848);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_bagTemp = (jint(-1));
	}
label_10:;
	LINE_NUMBER(5851);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_nro_Char_getEffById_int_R_nro_Effect(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getEffById", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(5854);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(5856);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect, sp[0].o);
	frame[3].o = sp[0].o;
	if (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_effId) != (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(5857);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_5:;
	{
	LINE_NUMBER(5854);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(5861);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_nro_Char_addEffChar_nro_Effect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:addEffChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5865);
	((func_nro_Char_removeEffChar_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_removeEffChar_int_int])(ctx, (frame[0].o), (jint(0)), ((jint)((nro_Effect *) NULL_CHECK((frame[1].o)))->F_effId));
	LINE_NUMBER(5866);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(5867);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_removeEffChar_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:removeEffChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(5870);
	if ((frame[1].i) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(5871);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	((func_nro_MyVector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeAllElements])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(5873);
	sp[0].o = (jobject)M_nro_Char_getEffById_int_R_nro_Effect(ctx, (frame[0].o), (frame[2].i));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(5874);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	sp[1].o = (jobject)M_nro_Char_getEffById_int_R_nro_Effect(ctx, (frame[0].o), (frame[2].i));
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(5878);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintEffBehind_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintEffBehind", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5881);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(5883);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect, sp[0].o);
	frame[3].o = sp[0].o;
	if (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_layer) != 0) goto label_5;
	}
	{
	LINE_NUMBER(5884);
	frame[4].i = (jint(1));
	LINE_NUMBER(5885);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[3].o)))->F_isStand) != 0) goto label_8;
	}
	{
	LINE_NUMBER(5886);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_10;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (6)) goto label_10;
	}
	{
	LINE_NUMBER(5887);
	frame[4].i = (jint(0));
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(5889);
	frame[4].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(5893);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(5894);
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, (frame[3].o), (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(5881);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(5899);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_paintEffFront_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintEffFront", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5902);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(5904);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = checkCast(ctx, &class_nro_Effect, sp[0].o);
	frame[3].o = sp[0].o;
	if (((jint)((nro_Effect *) NULL_CHECK(sp[0].o))->F_layer) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(5905);
	frame[4].i = (jint(1));
	LINE_NUMBER(5906);
	if (((jint)((nro_Effect *) NULL_CHECK((frame[3].o)))->F_isStand) != 0) goto label_8;
	}
	{
	LINE_NUMBER(5907);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_10;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (6)) goto label_10;
	}
	{
	LINE_NUMBER(5908);
	frame[4].i = (jint(0));
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(5910);
	frame[4].i = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(5914);
	if ((frame[4].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(5915);
	((func_nro_Effect_paint_lib_mGraphics) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_Effect_paint_lib_mGraphics])(ctx, (frame[3].o), (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(5902);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(5920);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_updEffChar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updEffChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5923);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(5924);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_vEffChar;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_nro_Effect_update) ((void **) nullCheck(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)))->vtable)[VTABLE_nro_Effect_update])(ctx, (checkCast(ctx, &class_nro_Effect, sp[0].o)));
	LINE_NUMBER(5923);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(5927);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_nro_Char_checkLuong_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:checkLuong", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5931);
	popStackFrame(ctx);
	return ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_luong);
	}

	popStackFrame(ctx);
}

void M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintRedEye", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(5935);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head) != (934)) goto label_1;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) == (jint(1))) goto label_2;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_statusMe) != (6)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(5936);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_fraRedEye;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_fraRedEye;
	sp[0].o = (jobject)((nro_FrameImage *) NULL_CHECK(sp[0].o))->F_imgFrame;
	if (sp[0].o != nullptr) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(5937);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/redeye.png"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(5938);
	clinit_nro_FrameImage(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_FrameImage);
	init_nro_FrameImage_javax_microedition_lcdui_Image_int_int(ctx, sp[0].o, (frame[6].o), (14), (10));
	clinit_nro_Char(ctx);
	SF_nro_Char_fraRedEye = sp[0].o;
	LINE_NUMBER(5939);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(5942);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frEye;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fChopmat))) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(5943);
	frame[6].i = (8);
	LINE_NUMBER(5944);
	if ((frame[4].i) != (jint(2))) goto label_9;
	}
	{
	LINE_NUMBER(5945);
	frame[6].i = (-8);
	}
label_9:;
	{
	LINE_NUMBER(5948);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_fraRedEye;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_frEye;
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fChopmat))), ((frame[2].i) + (frame[6].i)), ((frame[3].i) + (15)), (frame[4].i), (frame[5].i), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(5952);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_Char_isHead_2Fr_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:isHead_2Fr", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(5955);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_2Fr;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(5956);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_2Fr;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), (jint(0)))) != (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(5957);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(5955);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(5961);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_nro_Char_updateFHead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:updateFHead", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(5965);
	jint temp0 = (jint)SM_nro_Char_isHead_2Fr_int_R_boolean(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_head));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(5966);
	sp[0].o = frame[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fHead = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_fHead) + (jint(1)));
	LINE_NUMBER(5967);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fHead) > (10000)) goto label_1;
	}
	LINE_NUMBER(5968);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(5972);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_fHead = (jint(0));
	LINE_NUMBER(5973);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_nro_Char_getFHead_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:getFHead", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(5976);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_2Fr;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(5977);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_2Fr;
	if (((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (jint(0)))) != (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(5978);
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_Arr_Head_2Fr;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i));
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fHead) / (jint(4));
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_Arr_Head_2Fr;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (temp0 % (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->length))));
	}
label_4:;
	{
	LINE_NUMBER(5976);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(5982);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_nro_Char_paintHat_behind_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:paintHat_behind", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(5987);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idHat) == (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(5988);
	jint temp0 = (jint)SM_nro_Char_i_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(5989);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraHat_behind_2;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(5990);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraHat_behind_2;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraHat_behind_2;
	jint temp1 = temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_hatInfo;
	jint temp3 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(0)));
	LINE_NUMBER(5991);
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(-1);
label_11:;
	{
	sp -= 3;
	jint temp0 = sp[0].i + (sp[1].i * sp[2].i);
	jint temp1 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_hatInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (jint(1))));
	LINE_NUMBER(5992);
	sp[0].i = temp0;
	sp[1].i = temp2;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_13;
	}
	INST_ICONST(0);
	goto label_14;
label_13:;
	INST_ICONST(2);
label_14:;
	{
	sp -= 5;
	jint temp0 = 33;
	sp[5].o = frame[1].o;
	LINE_NUMBER(5990);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, temp0, sp[5].o);
	goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(5994);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strHat_behind;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strNgang;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idHat));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fraHat_behind_2 = (jref) sp[1].o;
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(5996);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraHat_behind;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(5997);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraHat_behind;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) / (jint(4));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_fraHat_behind;
	jint temp1 = temp0 % ((jint)((nro_FrameImage *) NULL_CHECK(sp[1].o))->F_nFrame);
	jint temp2 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx;
	clinit_nro_Char(ctx);
	sp[1].o = (jobject)SF_nro_Char_hatInfo;
	jint temp3 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))), (jint(0)));
	LINE_NUMBER(5998);
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp[3].i = temp3;
	sp += 4;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(-1);
label_20:;
	{
	sp -= 3;
	jint temp0 = sp[0].i + (sp[1].i * sp[2].i);
	jint temp1 = frame[3].i;
	clinit_nro_Char(ctx);
	sp[0].o = (jobject)SF_nro_Char_hatInfo;
	jint temp2 = temp1 + ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (jint(1))));
	LINE_NUMBER(5999);
	sp[0].i = temp0;
	sp[1].i = temp2;
	sp += 2;
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir) != (jint(1))) goto label_22;
	}
	INST_ICONST(0);
	goto label_23;
label_22:;
	INST_ICONST(2);
label_23:;
	{
	sp -= 5;
	jint temp0 = 33;
	sp[5].o = frame[1].o;
	LINE_NUMBER(5997);
	((func_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_FrameImage_drawFrame_int_int_int_int_int_lib_mGraphics])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, sp[4].i, temp0, sp[5].o);
	goto label_1;
	}
label_16:;
	{
	LINE_NUMBER(6001);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_strHat_behind;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idHat));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_getFraImage_java_lang_String_R_nro_FrameImage(ctx, sp[1].o);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fraHat_behind = (jref) sp[1].o;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(6005);
	goto label_25;
label_2:;
	LINE_NUMBER(6004);
	INST_ASTORE(4);
label_25:;
	LINE_NUMBER(6006);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_Char_i_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:i", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(6009);
	if ((frame[0].i) == (jint(2))) goto label_1;
	}
	{
	if ((frame[0].i) == (jint(3))) goto label_1;
	}
	{
	if ((frame[0].i) == (jint(4))) goto label_1;
	}
	{
	if ((frame[0].i) == (jint(5))) goto label_1;
	}
	{
	if ((frame[0].i) == (6)) goto label_1;
	}
	{
	if ((frame[0].i) == (9)) goto label_1;
	}
	{
	if ((frame[0].i) == (10)) goto label_1;
	}
	{
	if ((frame[0].i) == (13)) goto label_1;
	}
	{
	if ((frame[0].i) == (14)) goto label_1;
	}
	{
	if ((frame[0].i) == (15)) goto label_1;
	}
	{
	if ((frame[0].i) == (16)) goto label_1;
	}
	{
	if ((frame[0].i) == (26)) goto label_1;
	}
	{
	if ((frame[0].i) == (27)) goto label_1;
	}
	{
	if ((frame[0].i) == (28)) goto label_1;
	}
	{
	if ((frame[0].i) != (29)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Char_sendNewAttack_short(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:sendNewAttack", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(6014);
	frame[2].i = (jint(-1));
	LINE_NUMBER(6015);
	frame[3].i = (jint(-1));
	LINE_NUMBER(6016);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(6017);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	frame[2].i = (jshort(((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_x)));
	LINE_NUMBER(6018);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_mobFocus;
	frame[3].i = (jshort(((jint)((nro_Mob *) NULL_CHECK(sp[0].o))->F_y)));
	}
label_3:;
	{
	LINE_NUMBER(6021);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isPet) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_isMiniPet) != 0) goto label_6;
	}
	{
	LINE_NUMBER(6022);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	frame[2].i = (jshort(((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx)));
	LINE_NUMBER(6023);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charFocus;
	frame[3].i = (jshort(((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy)));
	}
label_6:;
	{
	LINE_NUMBER(6026);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_new_skill_not_focus_byte_byte_short_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_new_skill_not_focus_byte_byte_short_short])(ctx, sp[0].o, (jbyte((frame[1].i))), (jbyte(((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir))), (frame[2].i), (frame[3].i));
	LINE_NUMBER(6027);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte(jcontext ctx, jobject self, jshort param0, jbool param1, jbyte param2, jbyte param3, jbyte param4, jshort param5, jbyte param6) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:SetSkillPaint_NEW", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(6031);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPaintNewSkill = (jint(1));
	LINE_NUMBER(6032);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_timeReset_newSkill = ((clinit_main_GameCanvas(ctx), (jlong)SF_main_GameCanvas_timeNow) + (jlong(10000ll)));
	LINE_NUMBER(6033);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idskillPaint = (frame[1].i);
	LINE_NUMBER(6034);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFly = (frame[2].i);
	LINE_NUMBER(6035);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_typeFrame = (frame[3].i);
	LINE_NUMBER(6036);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir = (frame[5].i);
	LINE_NUMBER(6037);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW = (jint(0));
	LINE_NUMBER(6038);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_stt = (jint(0));
	LINE_NUMBER(6039);
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	frame[8].l = temp0;
	LINE_NUMBER(6040);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_me) == 0) goto label_10;
	}
	{
	LINE_NUMBER(6041);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Skill *) NULL_CHECK(sp[0].o))->F_lastTimeUseThisSkill = (frame[8].l);
	LINE_NUMBER(6042);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) != (jint(2))) goto label_13;
	}
	{
	LINE_NUMBER(6043);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP = (jlong(1));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(6044);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	sp[0].o = (jobject)((nro_Skill *) NULL_CHECK(sp[0].o))->F_template;
	if (((jint)((nro_SkillTemplate *) NULL_CHECK(sp[0].o))->F_manaUseType) == (jint(1))) goto label_16;
	}
	{
	LINE_NUMBER(6045);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (temp0 - (jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_manaUse))));
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(6047);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_myskill;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cMP = (temp0 - (((jlong(((jint)((nro_Skill *) NULL_CHECK(sp[1].o))->F_manaUse))) * ((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMPFull)) / (jlong(100ll))));
	}
label_15:;
	{
	LINE_NUMBER(6050);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cStamina = (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cStamina) - (jint(1)));
	LINE_NUMBER(6051);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_isInjureMp = (jint(1));
	LINE_NUMBER(6052);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_twMp = (jlong(0));
	LINE_NUMBER(6053);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP), (jlong(0)))) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(6054);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_cMP = (jlong(0));
	}
label_10:;
	{
	LINE_NUMBER(6058);
	if ((frame[1].i) != (24)) goto label_22;
	}
	{
	LINE_NUMBER(6059);
	jint temp0 = 18;
	jint temp1 = jint(0);
	jint temp2 = frame[4].i;
	sp[0].o = (jobject)((func_nro_Char_clone_R_nro_Char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_clone_R_nro_Char])(ctx, (frame[0].o));
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp0, temp1, temp2, sp[0].o, (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(3)), (frame[6].i), (jint(0)));
	LINE_NUMBER(6060);
	jint temp3 = 21;
	jint temp4 = jint(0);
	jint temp5 = frame[4].i;
	sp[0].o = (jobject)((func_nro_Char_clone_R_nro_Char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_clone_R_nro_Char])(ctx, (frame[0].o));
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp3, temp4, temp5, sp[0].o, (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(1)), (frame[6].i), (jint(0)));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(6061);
	if ((frame[1].i) != (25)) goto label_26;
	}
	{
	LINE_NUMBER(6062);
	jint temp0 = 19;
	jint temp1 = jint(0);
	jint temp2 = frame[4].i;
	sp[0].o = (jobject)((func_nro_Char_clone_R_nro_Char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_clone_R_nro_Char])(ctx, (frame[0].o));
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp0, temp1, temp2, sp[0].o, (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(3)), (frame[6].i), (jint(0)));
	LINE_NUMBER(6063);
	jint temp3 = 22;
	jint temp4 = jint(0);
	jint temp5 = frame[4].i;
	sp[0].o = (jobject)((func_nro_Char_clone_R_nro_Char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_clone_R_nro_Char])(ctx, (frame[0].o));
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp3, temp4, temp5, sp[0].o, (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(1)), (frame[6].i), (jint(0)));
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(6064);
	if ((frame[1].i) != (26)) goto label_25;
	}
	{
	LINE_NUMBER(6065);
	jint temp0 = 20;
	jint temp1 = jint(0);
	jint temp2 = frame[4].i;
	sp[0].o = (jobject)((func_nro_Char_clone_R_nro_Char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_clone_R_nro_Char])(ctx, (frame[0].o));
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp0, temp1, temp2, sp[0].o, (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(3)), (frame[6].i), (jint(0)));
	LINE_NUMBER(6066);
	jint temp3 = 23;
	jint temp4 = jint(0);
	jint temp5 = frame[4].i;
	sp[0].o = (jobject)((func_nro_Char_clone_R_nro_Char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_clone_R_nro_Char])(ctx, (frame[0].o));
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp3, temp4, temp5, sp[0].o, (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(1)), (frame[6].i), (jint(0)));
	}
label_25:;
	{
	LINE_NUMBER(6069);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_typeFrame) != (jint(1))) goto label_31;
	}
	{
	LINE_NUMBER(6070);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFly) != 0) goto label_33;
	}
	{
	LINE_NUMBER(6071);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (7));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (20);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (20);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (20);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (20);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (20);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (20);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (19);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6072);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (20);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6073);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	goto label_31;
	}
label_33:;
	{
	LINE_NUMBER(6075);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (7));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (31);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (31);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (31);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (31);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (31);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (31);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (30);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6076);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (31);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6077);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (12);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	}
label_31:;
	{
	LINE_NUMBER(6081);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_typeFrame) != (jint(2))) goto label_39;
	}
	{
	LINE_NUMBER(6082);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFly) != 0) goto label_41;
	}
	{
	LINE_NUMBER(6083);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (20);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6084);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (6));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (13);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (13);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (13);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (14);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (14);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (14);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6085);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(6087);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (31);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6088);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (6));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (26);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (26);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (26);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (27);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (27);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (27);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6089);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (12);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	}
label_39:;
	{
	LINE_NUMBER(6093);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_typeFrame) != (jint(4))) goto label_47;
	}
	{
	LINE_NUMBER(6094);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFly) != 0) goto label_49;
	}
	{
	LINE_NUMBER(6095);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (6));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (17);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (17);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (17);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (18);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (18);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (18);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6096);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (18);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6097);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	goto label_47;
	}
label_49:;
	{
	LINE_NUMBER(6099);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (7));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (12);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (12);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (12);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (12);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (12);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6101);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (12);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	}
label_47:;
	{
	LINE_NUMBER(6105);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_typeFrame) != (jint(3))) goto label_55;
	}
	{
	LINE_NUMBER(6106);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isFly) != 0) goto label_57;
	}
	{
	LINE_NUMBER(6107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (9));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (24);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (24);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (24);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (17);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (17);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (17);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (18);
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (18);
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (18);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (20);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	LINE_NUMBER(6110);
	popStackFrame(ctx);
	return;
	}
label_57:;
	{
	LINE_NUMBER(6113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (10));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (23);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (23);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (23);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (7);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (12);
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (12);
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (12);
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (12);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_start = (jref) sp[1].o;
	LINE_NUMBER(6114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (31);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_atk = (jref) sp[1].o;
	LINE_NUMBER(6115);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (12);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_fr_end = (jref) sp[1].o;
	}
label_55:;
	LINE_NUMBER(6118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte(jcontext ctx, jobject self, jint param0, jshort param1, jobject param2, jshort param3, jshort param4, jbyte param5, jobject param6, jbyte param7) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:SetSkillPaint_STT", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(6122);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_stt = (frame[1].i);
	LINE_NUMBER(6123);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_idskillPaint = (frame[2].i);
	LINE_NUMBER(6124);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_count_NEW = (jint(0));
	LINE_NUMBER(6125);
	((nro_Char *) NULL_CHECK((frame[0].o)))->F_targetDame = (jref) (frame[3].o);
	LINE_NUMBER(6126);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_lib_mSystem_currentTimeMillis_R_long(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_timeDame = (temp0 + (jlong((frame[4].i))));
	LINE_NUMBER(6127);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_stt) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(6128);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idskillPaint) != (24)) goto label_8;
	}
	{
	LINE_NUMBER(6129);
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, (18), (jint(1)), (frame[6].i), (frame[0].o), (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(3)), (frame[4].i), (jint(0)));
	LINE_NUMBER(6130);
	jint temp0 = 24;
	jint temp1 = jint(0);
	jint temp2 = frame[6].i;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_targetDame;
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp0, temp1, temp2, sp[0].o, sp[1].o, (jint(1)), (frame[4].i), (frame[5].i));
	}
label_8:;
	{
	LINE_NUMBER(6133);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idskillPaint) != (25)) goto label_11;
	}
	{
	LINE_NUMBER(6134);
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, (19), (jint(0)), (frame[6].i), (frame[0].o), (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(3)), (frame[4].i), (jint(0)));
	LINE_NUMBER(6135);
	jint temp0 = 25;
	jint temp1 = jint(0);
	jint temp2 = frame[6].i;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_targetDame;
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, temp0, temp1, temp2, sp[0].o, sp[1].o, (jint(1)), (frame[4].i), (frame[5].i));
	}
label_11:;
	{
	LINE_NUMBER(6138);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_idskillPaint) != (26)) goto label_6;
	}
	{
	LINE_NUMBER(6139);
	SM_nro_GameScr_addEffectEnd_Target_int_int_int_nro_Char_nro_Point_int_short_short(ctx, (20), (jint(0)), (frame[6].i), (frame[0].o), (checkCast(ctx, &class_nro_Point, (jobject(nullptr)))), (jint(3)), (frame[4].i), (jint(0)));
	LINE_NUMBER(6140);
	SM_nro_GameScr_addEffectEnd_int_int_int_int_int_int_int_short_Array1_nro_Point(ctx, (26), (frame[8].i), (frame[6].i), ((jint)((nro_Point *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((nro_Point *) NULL_CHECK((frame[3].o)))->F_y), (jint(1)), (jint(0)), (frame[4].i), (frame[7].o));
	}
label_6:;
	LINE_NUMBER(6144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_nro_Char_clone_R_nro_Char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:clone", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(6148);
	clinit_nro_Char(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Char);
	init_nro_Char(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_charID = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID);
	LINE_NUMBER(6149);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx);
	LINE_NUMBER(6150);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy);
	LINE_NUMBER(6151);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_cdir = ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cdir);
	LINE_NUMBER(6152);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(6153);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	sp[1].o = (jobject)createArray(ctx, &class_nro_Item, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_arrItemBody = (jref) sp[1].o;
	LINE_NUMBER(6155);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(6156);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(6157);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[1].o)))->F_arrItemBody;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (jobject(nullptr));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(6159);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[1].o)))->F_arrItemBody;
	frame[3].o = sp[0].o;
	LINE_NUMBER(6160);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(6162);
	clinit_nro_Item(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Item);
	init_nro_Item(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_template;
	((nro_Item *) NULL_CHECK(sp[0].o))->F_template = (jref) sp[1].o;
	LINE_NUMBER(6163);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_options;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(6164);
	sp[0].o = frame[5].o;
	clinit_nro_MyVector(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"item.options"_j))));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_options = (jref) sp[1].o;
	LINE_NUMBER(6166);
	frame[6].i = (jint(0));
	}
label_21:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_options;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_18;
	}
	{
	LINE_NUMBER(6168);
	clinit_nro_ItemOption(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ItemOption);
	init_nro_ItemOption(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_options;
	jint temp0 = frame[6].i;
	LINE_NUMBER(6169);
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((nro_ItemOption *) NULL_CHECK((checkCast(ctx, &class_nro_ItemOption, sp[1].o))))->F_optionTemplate;
	((nro_ItemOption *) NULL_CHECK(sp[0].o))->F_optionTemplate = (jref) sp[1].o;
	LINE_NUMBER(6170);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((nro_Item *) NULL_CHECK((frame[4].o)))->F_options;
	sp[1].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[1].o, (frame[6].i));
	((nro_ItemOption *) NULL_CHECK(sp[0].o))->F_param = ((jint)((nro_ItemOption *) NULL_CHECK((checkCast(ctx, &class_nro_ItemOption, sp[1].o))))->F_param);
	LINE_NUMBER(6171);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[5].o)))->F_options;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	LINE_NUMBER(6166);
	INST_IINC(6, 1);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(6175);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_itemId = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_itemId);
	LINE_NUMBER(6176);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_playerId = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_playerId);
	LINE_NUMBER(6177);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_indexUI = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_indexUI);
	LINE_NUMBER(6178);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_quantity = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_quantity);
	LINE_NUMBER(6179);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_isLock = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_isLock);
	LINE_NUMBER(6180);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_sys = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_sys);
	LINE_NUMBER(6181);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_upgrade = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_upgrade);
	LINE_NUMBER(6182);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_buyCoin = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_buyCoin);
	LINE_NUMBER(6183);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_buyCoinLock = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_buyCoinLock);
	LINE_NUMBER(6184);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_buyGold = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_buyGold);
	LINE_NUMBER(6185);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_buyGoldLock = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_buyGoldLock);
	LINE_NUMBER(6186);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_saleCoinLock = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_saleCoinLock);
	LINE_NUMBER(6187);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_typeUI = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_typeUI);
	LINE_NUMBER(6188);
	((nro_Item *) NULL_CHECK((frame[5].o)))->F_isExpires = ((jint)((nro_Item *) NULL_CHECK((frame[4].o)))->F_isExpires);
	LINE_NUMBER(6189);
	ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i)) = (frame[5].o);
	}
label_13:;
	{
	LINE_NUMBER(6155);
	INST_IINC(2, 1);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(6194);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_nro_Char_containsCaiTrang_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:containsCaiTrang", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(6198);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(6199);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(6200);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_template;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_arrItemBody;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_id) != (1265)) goto label_5;
	}
	{
	LINE_NUMBER(6202);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(6199);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(6207);
	SM_nro_Res_err_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"tim kiem id cai trang 1265 ko tim thay"_j))));
	LINE_NUMBER(6208);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_nro_Char_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:clone", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)((func_nro_Char_clone_R_nro_Char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Char_clone_R_nro_Char])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_nro_Char(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Char:<clinit>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Char(ctx);
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dat-trai-dat.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_eyeTraiDat = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmat-namek.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_eyeNamek = sp[0].o;
	LINE_NUMBER(134);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_Char(ctx);
	SF_nro_Char_vItemTime = sp[0].o;
	LINE_NUMBER(135);
	clinit_nro_Char(ctx);
	SF_nro_Char_ID_NEW_MOUNT = (30000);
	LINE_NUMBER(143);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi10.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_TD = sp[0].o;
	LINE_NUMBER(144);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi20.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_NM = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi21.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_NM_1 = sp[0].o;
	LINE_NUMBER(146);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi30.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_XD = sp[0].o;
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi11.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_TD_VIP = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi22.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_NM_VIP = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi23.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_NM_1_VIP = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dthucuoi31.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgMount_XD_VIP = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2drong.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgEventMount = sp[0].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dcanhrong.png"_j))));
	clinit_nro_Char(ctx);
	SF_nro_Char_imgEventMountWing = sp[0].o;
	LINE_NUMBER(358);
	sp[0].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/glass0.png"_j))));
	LINE_NUMBER(359);
	sp[0].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/glass1.png"_j))));
	LINE_NUMBER(360);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 2), (33));
	jint temp0 = jint(0);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp1 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (10);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (16);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (45);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp5 = jint(1);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp6 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (35);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (10);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (17);
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (46);
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp10 = jint(2);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp11 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (33);
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (11);
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (16);
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	jint temp14 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (49);
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp15 = jint(3);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp16 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	jint temp17 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (10);
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	jint temp18 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (15);
	ARRAY_ACCESS(jobject, sp[1].o, temp18) = sp[2].o;
	jint temp19 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (47);
	ARRAY_ACCESS(jobject, sp[1].o, temp19) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp20 = jint(4);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp21 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp21) = sp[2].o;
	jint temp22 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (11);
	ARRAY_ACCESS(jobject, sp[1].o, temp22) = sp[2].o;
	jint temp23 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (17);
	ARRAY_ACCESS(jobject, sp[1].o, temp23) = sp[2].o;
	jint temp24 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (47);
	ARRAY_ACCESS(jobject, sp[1].o, temp24) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp25 = jint(5);
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp26 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp26) = sp[2].o;
	jint temp27 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (11);
	ARRAY_ACCESS(jobject, sp[1].o, temp27) = sp[2].o;
	jint temp28 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (17);
	ARRAY_ACCESS(jobject, sp[1].o, temp28) = sp[2].o;
	jint temp29 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (49);
	ARRAY_ACCESS(jobject, sp[1].o, temp29) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp30 = 6;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp31 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (33);
	ARRAY_ACCESS(jobject, sp[1].o, temp31) = sp[2].o;
	jint temp32 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (10);
	ARRAY_ACCESS(jobject, sp[1].o, temp32) = sp[2].o;
	jint temp33 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (16);
	ARRAY_ACCESS(jobject, sp[1].o, temp33) = sp[2].o;
	jint temp34 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (47);
	ARRAY_ACCESS(jobject, sp[1].o, temp34) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp35 = 7;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp36 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (36);
	ARRAY_ACCESS(jobject, sp[1].o, temp36) = sp[2].o;
	jint temp37 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (17);
	ARRAY_ACCESS(jobject, sp[1].o, temp37) = sp[2].o;
	jint temp38 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (25);
	ARRAY_ACCESS(jobject, sp[1].o, temp38) = sp[2].o;
	jint temp39 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (49);
	ARRAY_ACCESS(jobject, sp[1].o, temp39) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp40 = 8;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp41 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (35);
	ARRAY_ACCESS(jobject, sp[1].o, temp41) = sp[2].o;
	jint temp42 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-18);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (22);
	ARRAY_ACCESS(jobject, sp[1].o, temp42) = sp[2].o;
	jint temp43 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (25);
	ARRAY_ACCESS(jobject, sp[1].o, temp43) = sp[2].o;
	jint temp44 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (48);
	ARRAY_ACCESS(jobject, sp[1].o, temp44) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp45 = 9;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp46 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (35);
	ARRAY_ACCESS(jobject, sp[1].o, temp46) = sp[2].o;
	jint temp47 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-3);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (25);
	ARRAY_ACCESS(jobject, sp[1].o, temp47) = sp[2].o;
	jint temp48 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (26);
	ARRAY_ACCESS(jobject, sp[1].o, temp48) = sp[2].o;
	jint temp49 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp49) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp50 = 10;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp51 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (37);
	ARRAY_ACCESS(jobject, sp[1].o, temp51) = sp[2].o;
	jint temp52 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-3);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (25);
	ARRAY_ACCESS(jobject, sp[1].o, temp52) = sp[2].o;
	jint temp53 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (27);
	ARRAY_ACCESS(jobject, sp[1].o, temp53) = sp[2].o;
	jint temp54 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp54) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp55 = 11;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp56 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-14);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp56) = sp[2].o;
	jint temp57 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (21);
	ARRAY_ACCESS(jobject, sp[1].o, temp57) = sp[2].o;
	jint temp58 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (31);
	ARRAY_ACCESS(jobject, sp[1].o, temp58) = sp[2].o;
	jint temp59 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp59) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp60 = 12;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp61 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (35);
	ARRAY_ACCESS(jobject, sp[1].o, temp61) = sp[2].o;
	jint temp62 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (14);
	ARRAY_ACCESS(jobject, sp[1].o, temp62) = sp[2].o;
	jint temp63 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-15);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (29);
	ARRAY_ACCESS(jobject, sp[1].o, temp63) = sp[2].o;
	jint temp64 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (49);
	ARRAY_ACCESS(jobject, sp[1].o, temp64) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp65 = 13;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp66 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp66) = sp[2].o;
	jint temp67 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp67) = sp[2].o;
	jint temp68 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (19);
	ARRAY_ACCESS(jobject, sp[1].o, temp68) = sp[2].o;
	jint temp69 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp69) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp65) = sp[1].o;
	jint temp70 = 14;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp71 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp71) = sp[2].o;
	jint temp72 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp72) = sp[2].o;
	jint temp73 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (19);
	ARRAY_ACCESS(jobject, sp[1].o, temp73) = sp[2].o;
	jint temp74 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp74) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp70) = sp[1].o;
	jint temp75 = 15;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp76 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[1].o, temp76) = sp[2].o;
	jint temp77 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp77) = sp[2].o;
	jint temp78 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (15);
	ARRAY_ACCESS(jobject, sp[1].o, temp78) = sp[2].o;
	jint temp79 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp79) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp75) = sp[1].o;
	jint temp80 = 16;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp81 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[1].o, temp81) = sp[2].o;
	jint temp82 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp82) = sp[2].o;
	jint temp83 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (16);
	ARRAY_ACCESS(jobject, sp[1].o, temp83) = sp[2].o;
	jint temp84 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp84) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp85 = 17;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp86 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (31);
	ARRAY_ACCESS(jobject, sp[1].o, temp86) = sp[2].o;
	jint temp87 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp87) = sp[2].o;
	jint temp88 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (20);
	ARRAY_ACCESS(jobject, sp[1].o, temp88) = sp[2].o;
	jint temp89 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp89) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp85) = sp[1].o;
	jint temp90 = 18;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp91 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[1].o, temp91) = sp[2].o;
	jint temp92 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp92) = sp[2].o;
	jint temp93 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-15);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (26);
	ARRAY_ACCESS(jobject, sp[1].o, temp93) = sp[2].o;
	jint temp94 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp94) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp90) = sp[1].o;
	jint temp95 = 19;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp96 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (33);
	ARRAY_ACCESS(jobject, sp[1].o, temp96) = sp[2].o;
	jint temp97 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp97) = sp[2].o;
	jint temp98 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (14);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (18);
	ARRAY_ACCESS(jobject, sp[1].o, temp98) = sp[2].o;
	jint temp99 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp99) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp95) = sp[1].o;
	jint temp100 = 20;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp101 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (33);
	ARRAY_ACCESS(jobject, sp[1].o, temp101) = sp[2].o;
	jint temp102 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp102) = sp[2].o;
	jint temp103 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (15);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (19);
	ARRAY_ACCESS(jobject, sp[1].o, temp103) = sp[2].o;
	jint temp104 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp104) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp100) = sp[1].o;
	jint temp105 = 21;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp106 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-16);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (31);
	ARRAY_ACCESS(jobject, sp[1].o, temp106) = sp[2].o;
	jint temp107 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp107) = sp[2].o;
	jint temp108 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (28);
	ARRAY_ACCESS(jobject, sp[1].o, temp108) = sp[2].o;
	jint temp109 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp109) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp105) = sp[1].o;
	jint temp110 = 22;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp111 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-14);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp111) = sp[2].o;
	jint temp112 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (10);
	ARRAY_ACCESS(jobject, sp[1].o, temp112) = sp[2].o;
	jint temp113 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-16);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (28);
	ARRAY_ACCESS(jobject, sp[1].o, temp113) = sp[2].o;
	jint temp114 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp114) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp110) = sp[1].o;
	jint temp115 = 23;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp116 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (36);
	ARRAY_ACCESS(jobject, sp[1].o, temp116) = sp[2].o;
	jint temp117 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (17);
	ARRAY_ACCESS(jobject, sp[1].o, temp117) = sp[2].o;
	jint temp118 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (25);
	ARRAY_ACCESS(jobject, sp[1].o, temp118) = sp[2].o;
	jint temp119 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp119) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp115) = sp[1].o;
	jint temp120 = 24;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp121 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (31);
	ARRAY_ACCESS(jobject, sp[1].o, temp121) = sp[2].o;
	jint temp122 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (9);
	ARRAY_ACCESS(jobject, sp[1].o, temp122) = sp[2].o;
	jint temp123 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (20);
	ARRAY_ACCESS(jobject, sp[1].o, temp123) = sp[2].o;
	jint temp124 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp124) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp120) = sp[1].o;
	jint temp125 = 25;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp126 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (36);
	ARRAY_ACCESS(jobject, sp[1].o, temp126) = sp[2].o;
	jint temp127 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (17);
	ARRAY_ACCESS(jobject, sp[1].o, temp127) = sp[2].o;
	jint temp128 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (16);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (25);
	ARRAY_ACCESS(jobject, sp[1].o, temp128) = sp[2].o;
	jint temp129 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp129) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp125) = sp[1].o;
	jint temp130 = 26;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp131 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp131) = sp[2].o;
	jint temp132 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (13);
	ARRAY_ACCESS(jobject, sp[1].o, temp132) = sp[2].o;
	jint temp133 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (19);
	ARRAY_ACCESS(jobject, sp[1].o, temp133) = sp[2].o;
	jint temp134 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp134) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp130) = sp[1].o;
	jint temp135 = 27;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp136 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (34);
	ARRAY_ACCESS(jobject, sp[1].o, temp136) = sp[2].o;
	jint temp137 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (13);
	ARRAY_ACCESS(jobject, sp[1].o, temp137) = sp[2].o;
	jint temp138 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-10);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (19);
	ARRAY_ACCESS(jobject, sp[1].o, temp138) = sp[2].o;
	jint temp139 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp139) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp135) = sp[1].o;
	jint temp140 = 28;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp141 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[1].o, temp141) = sp[2].o;
	jint temp142 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (13);
	ARRAY_ACCESS(jobject, sp[1].o, temp142) = sp[2].o;
	jint temp143 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (15);
	ARRAY_ACCESS(jobject, sp[1].o, temp143) = sp[2].o;
	jint temp144 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp144) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp140) = sp[1].o;
	jint temp145 = 29;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp146 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[1].o, temp146) = sp[2].o;
	jint temp147 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (13);
	ARRAY_ACCESS(jobject, sp[1].o, temp147) = sp[2].o;
	jint temp148 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (13);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-12);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (16);
	ARRAY_ACCESS(jobject, sp[1].o, temp148) = sp[2].o;
	jint temp149 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp149) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp145) = sp[1].o;
	jint temp150 = 30;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp151 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (33);
	ARRAY_ACCESS(jobject, sp[1].o, temp151) = sp[2].o;
	jint temp152 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (13);
	ARRAY_ACCESS(jobject, sp[1].o, temp152) = sp[2].o;
	jint temp153 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (14);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (18);
	ARRAY_ACCESS(jobject, sp[1].o, temp153) = sp[2].o;
	jint temp154 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp154) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp150) = sp[1].o;
	jint temp155 = 31;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp156 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-11);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (33);
	ARRAY_ACCESS(jobject, sp[1].o, temp156) = sp[2].o;
	jint temp157 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (13);
	ARRAY_ACCESS(jobject, sp[1].o, temp157) = sp[2].o;
	jint temp158 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (15);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (19);
	ARRAY_ACCESS(jobject, sp[1].o, temp158) = sp[2].o;
	jint temp159 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp159) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp155) = sp[1].o;
	jint temp160 = 32;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(4)));
	jint temp161 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-16);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (32);
	ARRAY_ACCESS(jobject, sp[1].o, temp161) = sp[2].o;
	jint temp162 = jint(1);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (13);
	ARRAY_ACCESS(jobject, sp[1].o, temp162) = sp[2].o;
	jint temp163 = jint(2);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jint, sp[2].o, (jint(2))) = (29);
	ARRAY_ACCESS(jobject, sp[1].o, temp163) = sp[2].o;
	jint temp164 = jint(3);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, temp164) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp160) = sp[1].o;
	clinit_nro_Char(ctx);
	SF_nro_Char_CharInfo = sp[0].o;
	LINE_NUMBER(393);
	sp[0].o = (jobject) createArray(ctx, &class_int, (11));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (-2);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (22);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (21);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (19);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (22);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (10);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (-2);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (-2);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (19);
	frame[0].o = sp[0].o;
	LINE_NUMBER(394);
	sp[0].o = (jobject) createArray(ctx, &class_int, (11));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (22);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (17);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (26);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (36);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (49);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (50);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (52);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (36);
	frame[0].o = sp[0].o;
	LINE_NUMBER(395);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_java_lang_String, 1), (jint(2)));
	jint temp165 = jint(0);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"1"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"1"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"chi\u00eau 1"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"0"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp165) = sp[1].o;
	jint temp166 = jint(1);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"2"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"2"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"chi\u00eau 2"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"5"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, temp166) = sp[1].o;
	frame[1].o = sp[0].o;
	LINE_NUMBER(396);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (10));
	jint temp167 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (1000);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (20);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp167) = sp[1].o;
	jint temp168 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (1000);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (40);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp168) = sp[1].o;
	jint temp169 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (800);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (45);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp169) = sp[1].o;
	jint temp170 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (12);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (600);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (50);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp170) = sp[1].o;
	jint temp171 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (13);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (500);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (55);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp171) = sp[1].o;
	jint temp172 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (500);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp172) = sp[1].o;
	jint temp173 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (500);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp173) = sp[1].o;
	jint temp174 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (500);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp174) = sp[1].o;
	jint temp175 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (500);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp175) = sp[1].o;
	jint temp176 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_int, (12));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (14);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (500);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (100);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (7)) = (60);
	ARRAY_ACCESS(jint, sp[1].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (10)) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (11)) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp176) = sp[1].o;
	frame[2].o = sp[0].o;
	LINE_NUMBER(402);
	clinit_nro_Char(ctx);
	SF_nro_Char_isManualFocus = (jint(0));
	LINE_NUMBER(403);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(1)));
	jint temp177 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (542);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (543);
	ARRAY_ACCESS(jobject, sp[0].o, temp177) = sp[1].o;
	clinit_nro_Char(ctx);
	SF_nro_Char_Arr_Head_2Fr = sp[0].o;
	LINE_NUMBER(404);
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura = (jint(1));
	LINE_NUMBER(405);
	clinit_nro_Char(ctx);
	SF_nro_Char_isPaintAura2 = (jint(1));
	LINE_NUMBER(406);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (32));
	jint temp178 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jobject, sp[0].o, temp178) = sp[1].o;
	jint temp179 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jobject, sp[0].o, temp179) = sp[1].o;
	jint temp180 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jobject, sp[0].o, temp180) = sp[1].o;
	jint temp181 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jobject, sp[0].o, temp181) = sp[1].o;
	jint temp182 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jobject, sp[0].o, temp182) = sp[1].o;
	jint temp183 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jobject, sp[0].o, temp183) = sp[1].o;
	jint temp184 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jobject, sp[0].o, temp184) = sp[1].o;
	jint temp185 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp185) = sp[1].o;
	jint temp186 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jobject, sp[0].o, temp186) = sp[1].o;
	jint temp187 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp187) = sp[1].o;
	jint temp188 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(-1));
	ARRAY_ACCESS(jobject, sp[0].o, temp188) = sp[1].o;
	jint temp189 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jobject, sp[0].o, temp189) = sp[1].o;
	jint temp190 = 12;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp190) = sp[1].o;
	jint temp191 = 13;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jobject, sp[0].o, temp191) = sp[1].o;
	jint temp192 = 14;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jobject, sp[0].o, temp192) = sp[1].o;
	jint temp193 = 15;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jobject, sp[0].o, temp193) = sp[1].o;
	jint temp194 = 16;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jobject, sp[0].o, temp194) = sp[1].o;
	jint temp195 = 17;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp195) = sp[1].o;
	jint temp196 = 18;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp196) = sp[1].o;
	jint temp197 = 19;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jobject, sp[0].o, temp197) = sp[1].o;
	jint temp198 = 20;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-3);
	ARRAY_ACCESS(jobject, sp[0].o, temp198) = sp[1].o;
	jint temp199 = 21;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jobject, sp[0].o, temp199) = sp[1].o;
	jint temp200 = 22;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp200) = sp[1].o;
	jint temp201 = 23;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jobject, sp[0].o, temp201) = sp[1].o;
	jint temp202 = 24;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jobject, sp[0].o, temp202) = sp[1].o;
	jint temp203 = 25;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jobject, sp[0].o, temp203) = sp[1].o;
	jint temp204 = 26;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jobject, sp[0].o, temp204) = sp[1].o;
	jint temp205 = 27;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-5);
	ARRAY_ACCESS(jobject, sp[0].o, temp205) = sp[1].o;
	jint temp206 = 28;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-8);
	ARRAY_ACCESS(jobject, sp[0].o, temp206) = sp[1].o;
	jint temp207 = 29;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-6);
	ARRAY_ACCESS(jobject, sp[0].o, temp207) = sp[1].o;
	jint temp208 = 30;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-7);
	ARRAY_ACCESS(jobject, sp[0].o, temp208) = sp[1].o;
	jint temp209 = 31;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (-3);
	ARRAY_ACCESS(jobject, sp[0].o, temp209) = sp[1].o;
	clinit_nro_Char(ctx);
	SF_nro_Char_hatInfo = sp[0].o;
	LINE_NUMBER(410);
	sp[0].o = (jobject) createArray(ctx, &class_short, (jint(0)));
	clinit_nro_Char(ctx);
	SF_nro_Char_Arr_Head_FlyMove = sp[0].o;
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Char[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_nro_Char_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_nro_Char_getX_R_int,
	(void *) M_nro_Char_getY_R_int,
	(void *) M_nro_Char_getW_R_int,
	(void *) M_nro_Char_getH_R_int,
	(void *) M_nro_Char_stopMoving,
	(void *) M_nro_Char_isInvisible_R_boolean,
	(void *) M_nro_Char_applyCharLevelPercent,
	(void *) M_nro_Char_getdxSkill_R_int,
	(void *) M_nro_Char_getdySkill_R_int,
	(void *) M_nro_Char_getStrLevel_R_java_lang_String,
	(void *) M_nro_Char_avatarz_R_int,
	(void *) M_nro_Char_setPowerInfo_java_lang_String_short_short_short,
	(void *) M_nro_Char_addInfo_java_lang_String,
	(void *) M_nro_Char_boxSort,
	(void *) M_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill,
	(void *) M_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint,
	(void *) M_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint,
	(void *) M_nro_Char_isInWaypoint_R_boolean,
	(void *) M_nro_Char_soundUpdate,
	(void *) M_nro_Char_update,
	(void *) M_nro_Char_updateEffect,
	(void *) M_nro_Char_checkPerformEndMovePointAction,
	(void *) M_nro_Char_checkHideCharName,
	(void *) M_nro_Char_updateSkillPaint,
	(void *) M_nro_Char_SetNum_int_int,
	(void *) M_nro_Char_updateCharDeadFly,
	(void *) M_nro_Char_updateResetPoint,
	(void *) M_nro_Char_updateSkillStand,
	(void *) M_nro_Char_updateCharAutoJump,
	(void *) M_nro_Char_hide,
	(void *) M_nro_Char_show,
	(void *) M_nro_Char_updateCharStand,
	(void *) M_nro_Char_updateSuperEff,
	(void *) M_nro_Char_getSoundVolumn_R_float,
	(void *) M_nro_Char_updateCharRun,
	(void *) M_nro_Char_stop,
	(void *) M_nro_Char_updateCharJump,
	(void *) M_nro_Char_setCharFallFromJump,
	(void *) M_nro_Char_updateCharFall,
	(void *) M_nro_Char_updateCharFly,
	(void *) M_nro_Char_updateMount,
	(void *) M_nro_Char_checkFrameTick_Array1_int,
	(void *) M_nro_Char_paintMount2_lib_mGraphics,
	(void *) M_nro_Char_setMountIsStart,
	(void *) M_nro_Char_checkDelayFallIfTooHigh,
	(void *) M_nro_Char_setDefaultPart,
	(void *) M_nro_Char_setDefaultWeapon,
	(void *) M_nro_Char_setDefaultBody,
	(void *) M_nro_Char_setDefaultLeg,
	(void *) M_nro_Char_isSelectingSkillUseAlone_R_boolean,
	(void *) M_nro_Char_x_R_boolean,
	(void *) M_nro_Char_isSelectingSkillBuffToPlayer_R_boolean,
	(void *) M_nro_Char_isUseChargeSkill_R_boolean,
	(void *) M_nro_Char_setSkillPaint_nro_SkillPaint_int,
	(void *) M_nro_Char_sendUseChargeSkill,
	(void *) M_nro_Char_stopUseChargeSkill,
	(void *) M_nro_Char_useChargeSkill_boolean,
	(void *) M_nro_Char_setAutoSkillPaint_nro_SkillPaint_int,
	(void *) M_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint,
	(void *) M_nro_Char_setAttack,
	(void *) M_nro_Char_isOutX_R_boolean,
	(void *) M_nro_Char_isPaint_R_boolean,
	(void *) M_nro_Char_createShadow_int_int_int,
	(void *) M_nro_Char_setMabuHold_boolean,
	(void *) M_nro_Char_paint_lib_mGraphics,
	(void *) M_nro_Char_paintEff_Pet_lib_mGraphics,
	(void *) M_nro_Char_paintEffect_lib_mGraphics,
	(void *) M_nro_Char_paintHp_lib_mGraphics_int_int,
	(void *) M_nro_Char_paintShadow_lib_mGraphics,
	(void *) M_nro_Char_updateShadown,
	(void *) M_nro_Char_paintCharWithoutSkill_lib_mGraphics,
	(void *) M_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean,
	(void *) M_nro_Char_isCharBodyImageID_int_R_boolean,
	(void *) M_nro_Char_paint_lib_mGraphics_int_int_int,
	(void *) M_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int,
	(void *) M_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean,
	(void *) M_nro_Char_paintCharWithSkill_lib_mGraphics,
	(void *) M_nro_Char_moveTo_int_int_int,
	(void *) M_nro_Char_searchFocus,
	(void *) M_nro_Char_clearFocus_int,
	(void *) M_nro_Char_isAttacPlayerStatus_R_boolean,
	(void *) M_nro_Char_setHoldChar_nro_Char,
	(void *) M_nro_Char_setHoldMob_nro_Mob,
	(void *) M_nro_Char_findNextFocusByKey,
	(void *) M_nro_Char_deFocusNPC,
	(void *) M_nro_Char_updateCharInBridge,
	(void *) M_nro_Char_doInjure_long_long_boolean_boolean,
	(void *) M_nro_Char_doInjure,
	(void *) M_nro_Char_startDie_short_short,
	(void *) M_nro_Char_waitToDie_short_short,
	(void *) M_nro_Char_liveFromDead,
	(void *) M_nro_Char_doUsePotion_R_boolean,
	(void *) M_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean,
	(void *) M_nro_Char_focusManualTo_java_lang_Object,
	(void *) M_nro_Char_focusToAttack_R_boolean,
	(void *) M_nro_Char_addDustEff_int,
	(void *) M_nro_Char_removeHoleEff,
	(void *) M_nro_Char_removeProtectEff,
	(void *) M_nro_Char_removeBlindEff,
	(void *) M_nro_Char_removeEffect,
	(void *) M_nro_Char_setPos_short_short_byte,
	(void *) M_nro_Char_removeHuytSao,
	(void *) M_nro_Char_fusionComplete,
	(void *) M_nro_Char_setFusion_byte,
	(void *) M_nro_Char_removeSleepEff,
	(void *) M_nro_Char_setPartOld,
	(void *) M_nro_Char_addServerEffect_int_int_int_int,
	(void *) M_nro_Char_resetPartTemp,
	(void *) M_nro_Char_getEffById_int_R_nro_Effect,
	(void *) M_nro_Char_addEffChar_nro_Effect,
	(void *) M_nro_Char_removeEffChar_int_int,
	(void *) M_nro_Char_paintEffBehind_lib_mGraphics,
	(void *) M_nro_Char_paintEffFront_lib_mGraphics,
	(void *) M_nro_Char_updEffChar,
	(void *) M_nro_Char_checkLuong_R_int,
	(void *) M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int,
	(void *) M_nro_Char_updateFHead,
	(void *) M_nro_Char_getFHead_int_R_int,
	(void *) M_nro_Char_paintHat_behind_lib_mGraphics_int_int,
	(void *) M_nro_Char_sendNewAttack_short,
	(void *) M_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte,
	(void *) M_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte,
	(void *) M_nro_Char_clone_R_nro_Char,
	(void *) M_nro_Char_containsCaiTrang_int_R_boolean,
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
	{ "getX", "()I" },
	{ "getY", "()I" },
	{ "getW", "()I" },
	{ "getH", "()I" },
	{ "stopMoving", "()V" },
	{ "isInvisible", "()Z" },
	{ "applyCharLevelPercent", "()V" },
	{ "getdxSkill", "()I" },
	{ "getdySkill", "()I" },
	{ "getStrLevel", "()Ljava/lang/String;" },
	{ "avatarz", "()I" },
	{ "setPowerInfo", "(Ljava/lang/String;SSS)V" },
	{ "addInfo", "(Ljava/lang/String;)V" },
	{ "boxSort", "()V" },
	{ "getSkill", "(Lnro/SkillTemplate;)Lnro/Skill;" },
	{ "isInEnterOfflinePoint", "()Lnro/Waypoint;" },
	{ "isInEnterOnlinePoint", "()Lnro/Waypoint;" },
	{ "isInWaypoint", "()Z" },
	{ "soundUpdate", "()V" },
	{ "update", "()V" },
	{ "updateEffect", "()V" },
	{ "checkPerformEndMovePointAction", "()V" },
	{ "checkHideCharName", "()V" },
	{ "updateSkillPaint", "()V" },
	{ "SetNum", "(II)V" },
	{ "updateCharDeadFly", "()V" },
	{ "updateResetPoint", "()V" },
	{ "updateSkillStand", "()V" },
	{ "updateCharAutoJump", "()V" },
	{ "hide", "()V" },
	{ "show", "()V" },
	{ "updateCharStand", "()V" },
	{ "updateSuperEff", "()V" },
	{ "getSoundVolumn", "()F" },
	{ "updateCharRun", "()V" },
	{ "stop", "()V" },
	{ "updateCharJump", "()V" },
	{ "setCharFallFromJump", "()V" },
	{ "updateCharFall", "()V" },
	{ "updateCharFly", "()V" },
	{ "updateMount", "()V" },
	{ "checkFrameTick", "([I)V" },
	{ "paintMount2", "(Llib/mGraphics;)V" },
	{ "setMountIsStart", "()V" },
	{ "checkDelayFallIfTooHigh", "()V" },
	{ "setDefaultPart", "()V" },
	{ "setDefaultWeapon", "()V" },
	{ "setDefaultBody", "()V" },
	{ "setDefaultLeg", "()V" },
	{ "isSelectingSkillUseAlone", "()Z" },
	{ "x", "()Z" },
	{ "isSelectingSkillBuffToPlayer", "()Z" },
	{ "isUseChargeSkill", "()Z" },
	{ "setSkillPaint", "(Lnro/SkillPaint;I)V" },
	{ "sendUseChargeSkill", "()V" },
	{ "stopUseChargeSkill", "()V" },
	{ "useChargeSkill", "(Z)V" },
	{ "setAutoSkillPaint", "(Lnro/SkillPaint;I)V" },
	{ "skillInfoPaint", "()[Lnro/SkillInfoPaint;" },
	{ "setAttack", "()V" },
	{ "isOutX", "()Z" },
	{ "isPaint", "()Z" },
	{ "createShadow", "(III)V" },
	{ "setMabuHold", "(Z)V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "paintEff_Pet", "(Llib/mGraphics;)V" },
	{ "paintEffect", "(Llib/mGraphics;)V" },
	{ "paintHp", "(Llib/mGraphics;II)V" },
	{ "paintShadow", "(Llib/mGraphics;)V" },
	{ "updateShadown", "()V" },
	{ "paintCharWithoutSkill", "(Llib/mGraphics;)V" },
	{ "paintBag", "(Llib/mGraphics;[SIIIZ)V" },
	{ "isCharBodyImageID", "(I)Z" },
	{ "paint", "(Llib/mGraphics;III)V" },
	{ "paintHeadWithXY", "(Llib/mGraphics;III)V" },
	{ "paintCharBody", "(Llib/mGraphics;IIIIZ)V" },
	{ "paintCharWithSkill", "(Llib/mGraphics;)V" },
	{ "moveTo", "(III)V" },
	{ "searchFocus", "()V" },
	{ "clearFocus", "(I)V" },
	{ "isAttacPlayerStatus", "()Z" },
	{ "setHoldChar", "(Lnro/Char;)V" },
	{ "setHoldMob", "(Lnro/Mob;)V" },
	{ "findNextFocusByKey", "()V" },
	{ "deFocusNPC", "()V" },
	{ "updateCharInBridge", "()V" },
	{ "doInjure", "(JJZZ)V" },
	{ "doInjure", "()V" },
	{ "startDie", "(SS)V" },
	{ "waitToDie", "(SS)V" },
	{ "liveFromDead", "()V" },
	{ "doUsePotion", "()Z" },
	{ "isMeCanAttackOtherPlayer", "(Lnro/Char;)Z" },
	{ "focusManualTo", "(Ljava/lang/Object;)V" },
	{ "focusToAttack", "()Z" },
	{ "addDustEff", "(I)V" },
	{ "removeHoleEff", "()V" },
	{ "removeProtectEff", "()V" },
	{ "removeBlindEff", "()V" },
	{ "removeEffect", "()V" },
	{ "setPos", "(SSB)V" },
	{ "removeHuytSao", "()V" },
	{ "fusionComplete", "()V" },
	{ "setFusion", "(B)V" },
	{ "removeSleepEff", "()V" },
	{ "setPartOld", "()V" },
	{ "addServerEffect", "(IIII)V" },
	{ "resetPartTemp", "()V" },
	{ "getEffById", "(I)Lnro/Effect;" },
	{ "addEffChar", "(Lnro/Effect;)V" },
	{ "removeEffChar", "(II)V" },
	{ "paintEffBehind", "(Llib/mGraphics;)V" },
	{ "paintEffFront", "(Llib/mGraphics;)V" },
	{ "updEffChar", "()V" },
	{ "checkLuong", "()I" },
	{ "paintRedEye", "(Llib/mGraphics;IIII)V" },
	{ "updateFHead", "()V" },
	{ "getFHead", "(I)I" },
	{ "paintHat_behind", "(Llib/mGraphics;II)V" },
	{ "sendNewAttack", "(S)V" },
	{ "SetSkillPaint_NEW", "(SZBBBSB)V" },
	{ "SetSkillPaint_STT", "(ISLnro/Point;SSB[Lnro/Point;B)V" },
	{ "clone", "()Lnro/Char;" },
	{ "containsCaiTrang", "(I)Z" },
};

static jclass interfaces[] { &class_nro_IMapObject, };

static FieldMetadata fields[] {
	{ "xuStr", &class_java_lang_String, offsetof(nro_Char, F_xuStr), "Ljava/lang/String;", 1 },
	{ "luongStr", &class_java_lang_String, offsetof(nro_Char, F_luongStr), "Ljava/lang/String;", 1 },
	{ "luongKhoaStr", &class_java_lang_String, offsetof(nro_Char, F_luongKhoaStr), "Ljava/lang/String;", 1 },
	{ "meLive", &class_boolean, offsetof(nro_Char, F_meLive), "Z", 1 },
	{ "isTeleport", &class_boolean, offsetof(nro_Char, F_isTeleport), "Z", 1 },
	{ "isTeleport1", &class_boolean, offsetof(nro_Char, F_isTeleport1), "Z", 1 },
	{ "shadowX", &class_int, offsetof(nro_Char, F_shadowX), "I", 2 },
	{ "shadowY", &class_int, offsetof(nro_Char, F_shadowY), "I", 2 },
	{ "shadowLife", &class_int, offsetof(nro_Char, F_shadowLife), "I", 2 },
	{ "isNhapThe", &class_boolean, offsetof(nro_Char, F_isNhapThe), "Z", 1 },
	{ "petFollow", &class_nro_PetFollow, offsetof(nro_Char, F_petFollow), "Lnro/PetFollow;", 1 },
	{ "rank", &class_int, offsetof(nro_Char, F_rank), "I", 1 },
	{ "chatPopup", &class_nro_ChatPopup, (intptr_t) &SF_nro_Char_chatPopup, "Lnro/ChatPopup;", 9 },
	{ "cPower", &class_long, offsetof(nro_Char, F_cPower), "J", 1 },
	{ "chatInfo", &class_nro_Info, offsetof(nro_Char, F_chatInfo), "Lnro/Info;", 1 },
	{ "petStatus", &class_byte, offsetof(nro_Char, F_petStatus), "B", 1 },
	{ "cx", &class_int, offsetof(nro_Char, F_cx), "I", 1 },
	{ "cy", &class_int, offsetof(nro_Char, F_cy), "I", 1 },
	{ "cvx", &class_int, offsetof(nro_Char, F_cvx), "I", 1 },
	{ "cvy", &class_int, offsetof(nro_Char, F_cvy), "I", 1 },
	{ "cp1", &class_int, offsetof(nro_Char, F_cp1), "I", 1 },
	{ "cp2", &class_int, offsetof(nro_Char, F_cp2), "I", 2 },
	{ "cp3", &class_int, offsetof(nro_Char, F_cp3), "I", 1 },
	{ "statusMe", &class_int, offsetof(nro_Char, F_statusMe), "I", 1 },
	{ "cdir", &class_int, offsetof(nro_Char, F_cdir), "I", 1 },
	{ "charID", &class_int, offsetof(nro_Char, F_charID), "I", 1 },
	{ "cgender", &class_int, offsetof(nro_Char, F_cgender), "I", 1 },
	{ "ctaskId", &class_int, offsetof(nro_Char, F_ctaskId), "I", 1 },
	{ "menuSelect", &class_int, offsetof(nro_Char, F_menuSelect), "I", 1 },
	{ "cBonusSpeed", &class_int, offsetof(nro_Char, F_cBonusSpeed), "I", 1 },
	{ "cspeed", &class_int, offsetof(nro_Char, F_cspeed), "I", 1 },
	{ "cCriticalFull", &class_int, offsetof(nro_Char, F_cCriticalFull), "I", 1 },
	{ "clevel", &class_int, offsetof(nro_Char, F_clevel), "I", 1 },
	{ "cyStartFall", &class_int, offsetof(nro_Char, F_cyStartFall), "I", 2 },
	{ "eff5BuffHp", &class_int, offsetof(nro_Char, F_eff5BuffHp), "I", 1 },
	{ "eff5BuffMp", &class_int, offsetof(nro_Char, F_eff5BuffMp), "I", 1 },
	{ "cMP", &class_long, offsetof(nro_Char, F_cMP), "J", 1 },
	{ "cHP", &class_long, offsetof(nro_Char, F_cHP), "J", 1 },
	{ "cHPFull", &class_long, offsetof(nro_Char, F_cHPFull), "J", 1 },
	{ "cMPFull", &class_long, offsetof(nro_Char, F_cMPFull), "J", 1 },
	{ "cDamFull", &class_long, offsetof(nro_Char, F_cDamFull), "J", 1 },
	{ "cDefull", &class_long, offsetof(nro_Char, F_cDefull), "J", 1 },
	{ "cLevelPercent", &class_long, offsetof(nro_Char, F_cLevelPercent), "J", 1 },
	{ "cTiemNang", &class_long, offsetof(nro_Char, F_cTiemNang), "J", 1 },
	{ "cNangdong", &class_long, offsetof(nro_Char, F_cNangdong), "J", 1 },
	{ "damHP", &class_long, offsetof(nro_Char, F_damHP), "J", 1 },
	{ "isMob", &class_boolean, offsetof(nro_Char, F_isMob), "Z", 1 },
	{ "isCrit", &class_boolean, offsetof(nro_Char, F_isCrit), "Z", 1 },
	{ "isDie", &class_boolean, offsetof(nro_Char, F_isDie), "Z", 1 },
	{ "cName", &class_java_lang_String, offsetof(nro_Char, F_cName), "Ljava/lang/String;", 1 },
	{ "clanID", &class_int, offsetof(nro_Char, F_clanID), "I", 1 },
	{ "clan", &class_nro_Clan, offsetof(nro_Char, F_clan), "Lnro/Clan;", 1 },
	{ "role", &class_byte, offsetof(nro_Char, F_role), "B", 1 },
	{ "cw", &class_int, offsetof(nro_Char, F_cw), "I", 1 },
	{ "ch", &class_int, offsetof(nro_Char, F_ch), "I", 1 },
	{ "chw", &class_int, offsetof(nro_Char, F_chw), "I", 1 },
	{ "chh", &class_int, offsetof(nro_Char, F_chh), "I", 2 },
	{ "cmdMenu", &class_nro_Command, offsetof(nro_Char, F_cmdMenu), "Lnro/Command;", 1 },
	{ "canFly", &class_boolean, offsetof(nro_Char, F_canFly), "Z", 1 },
	{ "cmtoChar", &class_boolean, offsetof(nro_Char, F_cmtoChar), "Z", 1 },
	{ "me", &class_boolean, offsetof(nro_Char, F_me), "Z", 1 },
	{ "isSoundJump", &class_boolean, offsetof(nro_Char, F_isSoundJump), "Z", 1 },
	{ "isAttack", &class_boolean, offsetof(nro_Char, F_isAttack), "Z", 2 },
	{ "cf", &class_int, offsetof(nro_Char, F_cf), "I", 1 },
	{ "tick", &class_int, offsetof(nro_Char, F_tick), "I", 2 },
	{ "xu", &class_long, offsetof(nro_Char, F_xu), "J", 1 },
	{ "au", &class_int, offsetof(nro_Char, F_au), "I", 1 },
	{ "luong", &class_int, offsetof(nro_Char, F_luong), "I", 1 },
	{ "luongKhoa", &class_int, offsetof(nro_Char, F_luongKhoa), "I", 1 },
	{ "nClass", &class_nro_NClass, offsetof(nro_Char, F_nClass), "Lnro/NClass;", 1 },
	{ "endMovePointCommand", &class_nro_Command, offsetof(nro_Char, F_endMovePointCommand), "Lnro/Command;", 1 },
	{ "vSkill", &class_nro_MyVector, offsetof(nro_Char, F_vSkill), "Lnro/MyVector;", 1 },
	{ "vSkillFight", &class_nro_MyVector, offsetof(nro_Char, F_vSkillFight), "Lnro/MyVector;", 1 },
	{ "vEff", &class_nro_MyVector, offsetof(nro_Char, F_vEff), "Lnro/MyVector;", 1 },
	{ "myskill", &class_nro_Skill, offsetof(nro_Char, F_myskill), "Lnro/Skill;", 1 },
	{ "taskMaint", &class_nro_NinjaUtil, offsetof(nro_Char, F_taskMaint), "Lnro/NinjaUtil;", 1 },
	{ "paintName", &class_boolean, offsetof(nro_Char, F_paintName), "Z", 2 },
	{ "arrArchive", getArrayClass(&class_nro_Archivement, 1), offsetof(nro_Char, F_arrArchive), "[Lnro/Archivement;", 1 },
	{ "arrItemBag", getArrayClass(&class_nro_Item, 1), offsetof(nro_Char, F_arrItemBag), "[Lnro/Item;", 1 },
	{ "arrItemBox", getArrayClass(&class_nro_Item, 1), offsetof(nro_Char, F_arrItemBox), "[Lnro/Item;", 1 },
	{ "arrItemBody", getArrayClass(&class_nro_Item, 1), offsetof(nro_Char, F_arrItemBody), "[Lnro/Item;", 1 },
	{ "arrPetSkill", getArrayClass(&class_nro_Skill, 1), offsetof(nro_Char, F_arrPetSkill), "[Lnro/Skill;", 1 },
	{ "arrItemShop", getArrayClass(&class_nro_Item, 2), offsetof(nro_Char, F_arrItemShop), "[[Lnro/Item;", 1 },
	{ "infoSpeacialSkill", getArrayClass(&class_java_lang_String, 2), offsetof(nro_Char, F_infoSpeacialSkill), "[[Ljava/lang/String;", 1 },
	{ "imgSpeacialSkill", getArrayClass(&class_short, 2), offsetof(nro_Char, F_imgSpeacialSkill), "[[S", 1 },
	{ "cPk", &class_byte, offsetof(nro_Char, F_cPk), "B", 1 },
	{ "cTypePk", &class_byte, offsetof(nro_Char, F_cTypePk), "B", 1 },
	{ "avatar", &class_int, offsetof(nro_Char, F_avatar), "I", 1 },
	{ "skillTemplateId", &class_int, offsetof(nro_Char, F_skillTemplateId), "I", 1 },
	{ "mobFocus", &class_nro_Mob, offsetof(nro_Char, F_mobFocus), "Lnro/Mob;", 1 },
	{ "mobMe", &class_nro_Mob, offsetof(nro_Char, F_mobMe), "Lnro/Mob;", 1 },
	{ "tMobMeBorn", &class_int, offsetof(nro_Char, F_tMobMeBorn), "I", 1 },
	{ "npcFocus", &class_nro_Npc, offsetof(nro_Char, F_npcFocus), "Lnro/Npc;", 1 },
	{ "charFocus", &class_nro_Char, offsetof(nro_Char, F_charFocus), "Lnro/Char;", 1 },
	{ "itemFocus", &class_nro_ItemMap, offsetof(nro_Char, F_itemFocus), "Lnro/ItemMap;", 1 },
	{ "focus", &class_nro_MyVector, offsetof(nro_Char, F_focus), "Lnro/MyVector;", 1 },
	{ "attMobs", getArrayClass(&class_nro_Mob, 1), offsetof(nro_Char, F_attMobs), "[Lnro/Mob;", 1 },
	{ "attChars", getArrayClass(&class_nro_Char, 1), offsetof(nro_Char, F_attChars), "[Lnro/Char;", 1 },
	{ "moveFast", getArrayClass(&class_short, 1), offsetof(nro_Char, F_moveFast), "[S", 1 },
	{ "testCharId", &class_int, offsetof(nro_Char, F_testCharId), "I", 1 },
	{ "killCharId", &class_int, offsetof(nro_Char, F_killCharId), "I", 1 },
	{ "resultTest", &class_byte, offsetof(nro_Char, F_resultTest), "B", 2 },
	{ "isInvisiblez", &class_boolean, offsetof(nro_Char, F_isInvisiblez), "Z", 1 },
	{ "isShadown", &class_boolean, offsetof(nro_Char, F_isShadown), "Z", 1 },
	{ "taskOrders", &class_nro_MyVector, offsetof(nro_Char, F_taskOrders), "Lnro/MyVector;", 1 },
	{ "cStamina", &class_int, offsetof(nro_Char, F_cStamina), "I", 1 },
	{ "idHead", getArrayClass(&class_short, 1), (intptr_t) &SF_nro_Char_idHead, "[S", 9 },
	{ "idAvatar", getArrayClass(&class_short, 1), (intptr_t) &SF_nro_Char_idAvatar, "[S", 9 },
	{ "strLevel", getArrayClass(&class_java_lang_String, 1), offsetof(nro_Char, F_strLevel), "[Ljava/lang/String;", 1 },
	{ "currStrLevel", &class_java_lang_String, offsetof(nro_Char, F_currStrLevel), "Ljava/lang/String;", 1 },
	{ "eyeTraiDat", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_eyeTraiDat, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "eyeNamek", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_eyeNamek, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "isFreez", &class_boolean, offsetof(nro_Char, F_isFreez), "Z", 1 },
	{ "isCharge", &class_boolean, offsetof(nro_Char, F_isCharge), "Z", 1 },
	{ "seconds", &class_int, offsetof(nro_Char, F_seconds), "I", 1 },
	{ "freezSeconds", &class_int, offsetof(nro_Char, F_freezSeconds), "I", 1 },
	{ "last", &class_long, offsetof(nro_Char, F_last), "J", 1 },
	{ "cur", &class_long, offsetof(nro_Char, F_cur), "J", 2 },
	{ "lastFreez", &class_long, offsetof(nro_Char, F_lastFreez), "J", 1 },
	{ "isFlyUp", &class_boolean, offsetof(nro_Char, F_isFlyUp), "Z", 1 },
	{ "vItemTime", &class_java_util_Vector, (intptr_t) &SF_nro_Char_vItemTime, "Ljava/util/Vector;", 9 },
	{ "ID_NEW_MOUNT", &class_short, (intptr_t) &SF_nro_Char_ID_NEW_MOUNT, "S", 9 },
	{ "idMount", &class_short, offsetof(nro_Char, F_idMount), "S", 1 },
	{ "cdirSend", &class_int, offsetof(nro_Char, F_cdirSend), "I", 1 },
	{ "cactFirst", &class_int, offsetof(nro_Char, F_cactFirst), "I", 1 },
	{ "isHaveMount", &class_boolean, offsetof(nro_Char, F_isHaveMount), "Z", 1 },
	{ "isMountVip", &class_boolean, offsetof(nro_Char, F_isMountVip), "Z", 1 },
	{ "isEventMount", &class_boolean, offsetof(nro_Char, F_isEventMount), "Z", 1 },
	{ "isSpeacialMount", &class_boolean, offsetof(nro_Char, F_isSpeacialMount), "Z", 1 },
	{ "imgMount_TD", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_TD, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMount_NM", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_NM, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMount_NM_1", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_NM_1, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMount_XD", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_XD, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMount_TD_VIP", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_TD_VIP, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMount_NM_VIP", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_NM_VIP, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMount_NM_1_VIP", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_NM_1_VIP, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMount_XD_VIP", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgMount_XD_VIP, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgEventMount", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgEventMount, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgEventMountWing", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_Char_imgEventMountWing, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "FrameMount", getArrayClass(&class_byte, 1), offsetof(nro_Char, F_FrameMount), "[B", 2 },
	{ "frameMount", &class_int, offsetof(nro_Char, F_frameMount), "I", 2 },
	{ "frameNewMount", &class_int, offsetof(nro_Char, F_frameNewMount), "I", 2 },
	{ "transMount", &class_int, offsetof(nro_Char, F_transMount), "I", 2 },
	{ "genderMount", &class_int, offsetof(nro_Char, F_genderMount), "I", 2 },
	{ "idcharMount", &class_int, offsetof(nro_Char, F_idcharMount), "I", 2 },
	{ "xChar", &class_int, offsetof(nro_Char, F_xChar), "I", 2 },
	{ "xMount", &class_int, offsetof(nro_Char, F_xMount), "I", 2 },
	{ "yMount", &class_int, offsetof(nro_Char, F_yMount), "I", 2 },
	{ "dxMount", &class_int, offsetof(nro_Char, F_dxMount), "I", 2 },
	{ "dyMount", &class_int, offsetof(nro_Char, F_dyMount), "I", 2 },
	{ "xdis", &class_int, offsetof(nro_Char, F_xdis), "I", 2 },
	{ "isStartMount", &class_boolean, offsetof(nro_Char, F_isStartMount), "Z", 2 },
	{ "isMount", &class_boolean, offsetof(nro_Char, F_isMount), "Z", 2 },
	{ "isEndMount", &class_boolean, offsetof(nro_Char, F_isEndMount), "Z", 2 },
	{ "cFlag", &class_byte, offsetof(nro_Char, F_cFlag), "B", 1 },
	{ "flagImage", &class_int, offsetof(nro_Char, F_flagImage), "I", 1 },
	{ "x_hint", &class_short, offsetof(nro_Char, F_x_hint), "S", 1 },
	{ "y_hint", &class_short, offsetof(nro_Char, F_y_hint), "S", 1 },
	{ "CharInfo", getArrayClass(&class_int, 3), (intptr_t) &SF_nro_Char_CharInfo, "[[[I", 25 },
	{ "myChar", &class_nro_Char, (intptr_t) &SF_nro_Char_myChar, "Lnro/Char;", 10 },
	{ "myPet", &class_nro_Char, (intptr_t) &SF_nro_Char_myPet, "Lnro/Char;", 10 },
	{ "cvyJump", &class_int, offsetof(nro_Char, F_cvyJump), "I", 2 },
	{ "cxSend", &class_int, offsetof(nro_Char, F_cxSend), "I", 1 },
	{ "cySend", &class_int, offsetof(nro_Char, F_cySend), "I", 1 },
	{ "vMovePoints", &class_nro_MyVector, offsetof(nro_Char, F_vMovePoints), "Lnro/MyVector;", 1 },
	{ "ischangingMap", &class_boolean, (intptr_t) &SF_nro_Char_ischangingMap, "Z", 9 },
	{ "isLockKey", &class_boolean, (intptr_t) &SF_nro_Char_isLockKey, "Z", 9 },
	{ "isLoadingMap", &class_boolean, (intptr_t) &SF_nro_Char_isLoadingMap, "Z", 9 },
	{ "isLockMove", &class_boolean, offsetof(nro_Char, F_isLockMove), "Z", 1 },
	{ "strInfo", &class_java_lang_String, offsetof(nro_Char, F_strInfo), "Ljava/lang/String;", 0 },
	{ "powerPoint", &class_short, offsetof(nro_Char, F_powerPoint), "S", 0 },
	{ "maxPowerPoint", &class_short, offsetof(nro_Char, F_maxPowerPoint), "S", 0 },
	{ "secondPower", &class_short, offsetof(nro_Char, F_secondPower), "S", 0 },
	{ "lastS", &class_long, offsetof(nro_Char, F_lastS), "J", 2 },
	{ "currS", &class_long, offsetof(nro_Char, F_currS), "J", 2 },
	{ "havePet", &class_boolean, offsetof(nro_Char, F_havePet), "Z", 1 },
	{ "currentMovePoint", &class_nro_MovePoint, offsetof(nro_Char, F_currentMovePoint), "Lnro/MovePoint;", 1 },
	{ "delayFall", &class_int, offsetof(nro_Char, F_delayFall), "I", 1 },
	{ "eProtect", &class_nro_Effect, offsetof(nro_Char, F_eProtect), "Lnro/Effect;", 2 },
	{ "eDanhHieu", &class_nro_Effect, offsetof(nro_Char, F_eDanhHieu), "Lnro/Effect;", 2 },
	{ "twHp", &class_int, offsetof(nro_Char, F_twHp), "I", 2 },
	{ "isInjureHp", &class_boolean, offsetof(nro_Char, F_isInjureHp), "Z", 2 },
	{ "changePos", &class_boolean, offsetof(nro_Char, F_changePos), "Z", 2 },
	{ "isHide", &class_boolean, offsetof(nro_Char, F_isHide), "Z", 1 },
	{ "wy", &class_boolean, offsetof(nro_Char, F_wy), "Z", 2 },
	{ "wt", &class_int, offsetof(nro_Char, F_wt), "I", 2 },
	{ "fy", &class_int, offsetof(nro_Char, F_fy), "I", 0 },
	{ "ty", &class_int, offsetof(nro_Char, F_ty), "I", 2 },
	{ "t", &class_int, offsetof(nro_Char, F_t), "I", 2 },
	{ "fM", &class_int, offsetof(nro_Char, F_fM), "I", 2 },
	{ "move", getArrayClass(&class_int, 1), offsetof(nro_Char, F_move), "[I", 2 },
	{ "strMount", &class_java_lang_String, offsetof(nro_Char, F_strMount), "Ljava/lang/String;", 2 },
	{ "headICON", &class_int, offsetof(nro_Char, F_headICON), "I", 1 },
	{ "head", &class_int, offsetof(nro_Char, F_head), "I", 1 },
	{ "leg", &class_int, offsetof(nro_Char, F_leg), "I", 1 },
	{ "body", &class_int, offsetof(nro_Char, F_body), "I", 1 },
	{ "bag", &class_int, offsetof(nro_Char, F_bag), "I", 1 },
	{ "wp", &class_int, offsetof(nro_Char, F_wp), "I", 1 },
	{ "indexEff", &class_int, offsetof(nro_Char, F_indexEff), "I", 2 },
	{ "indexEffTask", &class_int, offsetof(nro_Char, F_indexEffTask), "I", 1 },
	{ "eff", &class_nro_EffectCharPaint, offsetof(nro_Char, F_eff), "Lnro/EffectCharPaint;", 2 },
	{ "effTask", &class_nro_EffectCharPaint, offsetof(nro_Char, F_effTask), "Lnro/EffectCharPaint;", 1 },
	{ "indexSkill", &class_int, offsetof(nro_Char, F_indexSkill), "I", 1 },
	{ "i0", &class_int, offsetof(nro_Char, F_i0), "I", 2 },
	{ "i1", &class_int, offsetof(nro_Char, F_i1), "I", 2 },
	{ "i2", &class_int, offsetof(nro_Char, F_i2), "I", 2 },
	{ "dx0", &class_int, offsetof(nro_Char, F_dx0), "I", 2 },
	{ "dx1", &class_int, offsetof(nro_Char, F_dx1), "I", 2 },
	{ "dx2", &class_int, offsetof(nro_Char, F_dx2), "I", 2 },
	{ "dy0", &class_int, offsetof(nro_Char, F_dy0), "I", 2 },
	{ "dy1", &class_int, offsetof(nro_Char, F_dy1), "I", 2 },
	{ "dy2", &class_int, offsetof(nro_Char, F_dy2), "I", 2 },
	{ "eff0", &class_nro_EffectCharPaint, offsetof(nro_Char, F_eff0), "Lnro/EffectCharPaint;", 2 },
	{ "eff1", &class_nro_EffectCharPaint, offsetof(nro_Char, F_eff1), "Lnro/EffectCharPaint;", 2 },
	{ "eff2", &class_nro_EffectCharPaint, offsetof(nro_Char, F_eff2), "Lnro/EffectCharPaint;", 2 },
	{ "arr", &class_nro_Arrow, offsetof(nro_Char, F_arr), "Lnro/Arrow;", 1 },
	{ "dart", &class_nro_PlayerDart, offsetof(nro_Char, F_dart), "Lnro/PlayerDart;", 1 },
	{ "isCreateDark", &class_boolean, offsetof(nro_Char, F_isCreateDark), "Z", 1 },
	{ "skillPaint", &class_nro_SkillPaint, offsetof(nro_Char, F_skillPaint), "Lnro/SkillPaint;", 1 },
	{ "skillPaintRandomPaint", &class_nro_SkillPaint, offsetof(nro_Char, F_skillPaintRandomPaint), "Lnro/SkillPaint;", 1 },
	{ "effPaints", getArrayClass(&class_nro_EffectPaint, 1), offsetof(nro_Char, F_effPaints), "[Lnro/EffectPaint;", 2 },
	{ "sType", &class_int, offsetof(nro_Char, F_sType), "I", 2 },
	{ "isInjure", &class_byte, offsetof(nro_Char, F_isInjure), "B", 2 },
	{ "isUseSkillAfterCharge", &class_boolean, offsetof(nro_Char, F_isUseSkillAfterCharge), "Z", 1 },
	{ "isFlyAndCharge", &class_boolean, offsetof(nro_Char, F_isFlyAndCharge), "Z", 1 },
	{ "isStandAndCharge", &class_boolean, offsetof(nro_Char, F_isStandAndCharge), "Z", 1 },
	{ "posDisY", &class_int, offsetof(nro_Char, F_posDisY), "I", 2 },
	{ "chargeCount", &class_int, offsetof(nro_Char, F_chargeCount), "I", 2 },
	{ "isJump", &class_boolean, offsetof(nro_Char, F_isJump), "Z", 2 },
	{ "isMabuHold", &class_boolean, offsetof(nro_Char, F_isMabuHold), "Z", 0 },
	{ "timeBlue", &class_long, offsetof(nro_Char, F_timeBlue), "J", 2 },
	{ "tBlue", &class_int, offsetof(nro_Char, F_tBlue), "I", 2 },
	{ "IsAddDust1", &class_boolean, offsetof(nro_Char, F_IsAddDust1), "Z", 2 },
	{ "IsAddDust2", &class_boolean, offsetof(nro_Char, F_IsAddDust2), "Z", 2 },
	{ "len", &class_int, offsetof(nro_Char, F_len), "I", 2 },
	{ "w_hp_bar", &class_int, offsetof(nro_Char, F_w_hp_bar), "I", 2 },
	{ "imgHPtem", &class_javax_microedition_lcdui_Image, offsetof(nro_Char, F_imgHPtem), "Ljavax/microedition/lcdui/Image;", 2 },
	{ "isPet", &class_boolean, offsetof(nro_Char, F_isPet), "Z", 1 },
	{ "isMiniPet", &class_boolean, offsetof(nro_Char, F_isMiniPet), "Z", 1 },
	{ "xSd", &class_int, offsetof(nro_Char, F_xSd), "I", 1 },
	{ "ySd", &class_int, offsetof(nro_Char, F_ySd), "I", 1 },
	{ "fBag", &class_int, offsetof(nro_Char, F_fBag), "I", 2 },
	{ "ph", &class_nro_Rms, offsetof(nro_Char, F_ph), "Lnro/Rms;", 2 },
	{ "pl", &class_nro_Rms, offsetof(nro_Char, F_pl), "Lnro/Rms;", 2 },
	{ "pb", &class_nro_Rms, offsetof(nro_Char, F_pb), "Lnro/Rms;", 2 },
	{ "cH_new", &class_int, offsetof(nro_Char, F_cH_new), "I", 2 },
	{ "statusBeforeNothing", &class_int, offsetof(nro_Char, F_statusBeforeNothing), "I", 2 },
	{ "timeFocusToMob", &class_int, offsetof(nro_Char, F_timeFocusToMob), "I", 2 },
	{ "isManualFocus", &class_boolean, (intptr_t) &SF_nro_Char_isManualFocus, "Z", 9 },
	{ "charHold", &class_nro_Char, offsetof(nro_Char, F_charHold), "Lnro/Char;", 2 },
	{ "mobHold", &class_nro_Mob, offsetof(nro_Char, F_mobHold), "Lnro/Mob;", 2 },
	{ "wdx", &class_short, offsetof(nro_Char, F_wdx), "S", 1 },
	{ "wdy", &class_short, offsetof(nro_Char, F_wdy), "S", 1 },
	{ "cDamGoc", &class_int, offsetof(nro_Char, F_cDamGoc), "I", 1 },
	{ "cHPGoc", &class_long, offsetof(nro_Char, F_cHPGoc), "J", 1 },
	{ "cMPGoc", &class_long, offsetof(nro_Char, F_cMPGoc), "J", 1 },
	{ "cDefGoc", &class_int, offsetof(nro_Char, F_cDefGoc), "I", 1 },
	{ "cCriticalGoc", &class_int, offsetof(nro_Char, F_cCriticalGoc), "I", 1 },
	{ "cGiamST", &class_long, offsetof(nro_Char, F_cGiamST), "J", 1 },
	{ "cCritDameFull", &class_int, offsetof(nro_Char, F_cCritDameFull), "I", 1 },
	{ "Rank", &class_byte, offsetof(nro_Char, F_Rank), "B", 1 },
	{ "cHPNew", &class_long, offsetof(nro_Char, F_cHPNew), "J", 1 },
	{ "xuInBox", &class_int, offsetof(nro_Char, F_xuInBox), "I", 1 },
	{ "hpFrom1000TiemNang", &class_byte, offsetof(nro_Char, F_hpFrom1000TiemNang), "B", 1 },
	{ "mpFrom1000TiemNang", &class_byte, offsetof(nro_Char, F_mpFrom1000TiemNang), "B", 1 },
	{ "damFrom1000TiemNang", &class_byte, offsetof(nro_Char, F_damFrom1000TiemNang), "B", 1 },
	{ "defFrom1000TiemNang", &class_byte, offsetof(nro_Char, F_defFrom1000TiemNang), "B", 1 },
	{ "criticalFrom1000Tiemnang", &class_byte, offsetof(nro_Char, F_criticalFrom1000Tiemnang), "B", 1 },
	{ "cMaxStamina", &class_short, offsetof(nro_Char, F_cMaxStamina), "S", 1 },
	{ "expForOneAdd", &class_short, offsetof(nro_Char, F_expForOneAdd), "S", 1 },
	{ "isMonkey", &class_byte, offsetof(nro_Char, F_isMonkey), "B", 1 },
	{ "isCopy", &class_boolean, offsetof(nro_Char, F_isCopy), "Z", 1 },
	{ "isWaitMonkey", &class_boolean, offsetof(nro_Char, F_isWaitMonkey), "Z", 1 },
	{ "meDead", &class_boolean, offsetof(nro_Char, F_meDead), "Z", 1 },
	{ "holdEffID", &class_int, offsetof(nro_Char, F_holdEffID), "I", 1 },
	{ "holder", &class_boolean, offsetof(nro_Char, F_holder), "Z", 1 },
	{ "protectEff", &class_boolean, offsetof(nro_Char, F_protectEff), "Z", 1 },
	{ "danhHieuEff", &class_boolean, offsetof(nro_Char, F_danhHieuEff), "Z", 2 },
	{ "isSetPos", &class_boolean, offsetof(nro_Char, F_isSetPos), "Z", 2 },
	{ "tpos", &class_int, offsetof(nro_Char, F_tpos), "I", 2 },
	{ "xPos", &class_short, offsetof(nro_Char, F_xPos), "S", 2 },
	{ "yPos", &class_short, offsetof(nro_Char, F_yPos), "S", 2 },
	{ "typePos", &class_byte, offsetof(nro_Char, F_typePos), "B", 2 },
	{ "isFusion", &class_boolean, offsetof(nro_Char, F_isFusion), "Z", 0 },
	{ "tFusion", &class_int, offsetof(nro_Char, F_tFusion), "I", 0 },
	{ "huytSao", &class_boolean, offsetof(nro_Char, F_huytSao), "Z", 1 },
	{ "blindEff", &class_boolean, offsetof(nro_Char, F_blindEff), "Z", 1 },
	{ "telePortSkill", &class_boolean, offsetof(nro_Char, F_telePortSkill), "Z", 1 },
	{ "sleepEff", &class_boolean, offsetof(nro_Char, F_sleepEff), "Z", 1 },
	{ "stone", &class_boolean, offsetof(nro_Char, F_stone), "Z", 1 },
	{ "perCentMp", &class_int, offsetof(nro_Char, F_perCentMp), "I", 1 },
	{ "dHP", &class_long, offsetof(nro_Char, F_dHP), "J", 1 },
	{ "headTemp", &class_int, offsetof(nro_Char, F_headTemp), "I", 2 },
	{ "bodyTemp", &class_int, offsetof(nro_Char, F_bodyTemp), "I", 2 },
	{ "legTemp", &class_int, offsetof(nro_Char, F_legTemp), "I", 2 },
	{ "bagTemp", &class_int, offsetof(nro_Char, F_bagTemp), "I", 2 },
	{ "vEffChar", &class_nro_MyVector, offsetof(nro_Char, F_vEffChar), "Lnro/MyVector;", 2 },
	{ "fraRedEye", &class_nro_FrameImage, (intptr_t) &SF_nro_Char_fraRedEye, "Lnro/FrameImage;", 10 },
	{ "fChopmat", &class_int, offsetof(nro_Char, F_fChopmat), "I", 2 },
	{ "timeAddChopmat", &class_long, offsetof(nro_Char, F_timeAddChopmat), "J", 2 },
	{ "frChopNhanh", getArrayClass(&class_int, 1), offsetof(nro_Char, F_frChopNhanh), "[I", 2 },
	{ "frChopCham", getArrayClass(&class_int, 1), offsetof(nro_Char, F_frChopCham), "[I", 2 },
	{ "frEye", getArrayClass(&class_int, 1), offsetof(nro_Char, F_frEye), "[I", 2 },
	{ "Arr_Head_2Fr", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_Char_Arr_Head_2Fr, "[[I", 9 },
	{ "fHead", &class_int, offsetof(nro_Char, F_fHead), "I", 2 },
	{ "strEffAura", &class_java_lang_String, offsetof(nro_Char, F_strEffAura), "Ljava/lang/String;", 2 },
	{ "idAuraEff", &class_short, offsetof(nro_Char, F_idAuraEff), "S", 1 },
	{ "isPaintAura", &class_boolean, (intptr_t) &SF_nro_Char_isPaintAura, "Z", 9 },
	{ "isPaintAura2", &class_boolean, (intptr_t) &SF_nro_Char_isPaintAura2, "Z", 9 },
	{ "fraEff", &class_nro_FrameImage, offsetof(nro_Char, F_fraEff), "Lnro/FrameImage;", 2 },
	{ "fraEffSub", &class_nro_FrameImage, offsetof(nro_Char, F_fraEffSub), "Lnro/FrameImage;", 2 },
	{ "strEff_Set_Item", &class_java_lang_String, offsetof(nro_Char, F_strEff_Set_Item), "Ljava/lang/String;", 2 },
	{ "idEff_Set_Item", &class_short, offsetof(nro_Char, F_idEff_Set_Item), "S", 1 },
	{ "fraHat_behind", &class_nro_FrameImage, offsetof(nro_Char, F_fraHat_behind), "Lnro/FrameImage;", 2 },
	{ "fraHat_font", &class_nro_FrameImage, offsetof(nro_Char, F_fraHat_font), "Lnro/FrameImage;", 2 },
	{ "fraHat_behind_2", &class_nro_FrameImage, offsetof(nro_Char, F_fraHat_behind_2), "Lnro/FrameImage;", 2 },
	{ "fraHat_font_2", &class_nro_FrameImage, offsetof(nro_Char, F_fraHat_font_2), "Lnro/FrameImage;", 2 },
	{ "strHat_behind", &class_java_lang_String, offsetof(nro_Char, F_strHat_behind), "Ljava/lang/String;", 2 },
	{ "strHat_font", &class_java_lang_String, offsetof(nro_Char, F_strHat_font), "Ljava/lang/String;", 2 },
	{ "strNgang", &class_java_lang_String, offsetof(nro_Char, F_strNgang), "Ljava/lang/String;", 2 },
	{ "idHat", &class_short, offsetof(nro_Char, F_idHat), "S", 1 },
	{ "hatInfo", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_Char_hatInfo, "[[I", 10 },
	{ "Arr_Head_FlyMove", getArrayClass(&class_short, 1), (intptr_t) &SF_nro_Char_Arr_Head_FlyMove, "[S", 9 },
	{ "isPaintNewSkill", &class_boolean, offsetof(nro_Char, F_isPaintNewSkill), "Z", 1 },
	{ "isFly", &class_boolean, offsetof(nro_Char, F_isFly), "Z", 2 },
	{ "timeReset_newSkill", &class_long, offsetof(nro_Char, F_timeReset_newSkill), "J", 2 },
	{ "typeFrame", &class_byte, offsetof(nro_Char, F_typeFrame), "B", 2 },
	{ "idskillPaint", &class_short, offsetof(nro_Char, F_idskillPaint), "S", 2 },
	{ "fr_start", getArrayClass(&class_byte, 1), offsetof(nro_Char, F_fr_start), "[B", 2 },
	{ "fr_atk", getArrayClass(&class_byte, 1), offsetof(nro_Char, F_fr_atk), "[B", 2 },
	{ "fr_end", getArrayClass(&class_byte, 1), offsetof(nro_Char, F_fr_end), "[B", 2 },
	{ "count_NEW", &class_int, offsetof(nro_Char, F_count_NEW), "I", 2 },
	{ "stt", &class_int, offsetof(nro_Char, F_stt), "I", 2 },
	{ "targetDame", &class_nro_Point, offsetof(nro_Char, F_targetDame), "Lnro/Point;", 2 },
	{ "timeDame", &class_long, offsetof(nro_Char, F_timeDame), "J", 2 },
	{ "isMafuba", &class_boolean, offsetof(nro_Char, F_isMafuba), "Z", 1 },
	{ "countMafuba", &class_short, offsetof(nro_Char, F_countMafuba), "S", 2 },
	{ "xMFB", &class_int, offsetof(nro_Char, F_xMFB), "I", 1 },
	{ "yMFB", &class_int, offsetof(nro_Char, F_yMFB), "I", 1 },
	{ "fraDanhHieu", &class_nro_FrameImage, offsetof(nro_Char, F_fraDanhHieu), "Lnro/FrameImage;", 2 },
};

static MethodMetadata methods[] {
	{ "applyCharLevelPercent", (intptr_t) M_nro_Char_applyCharLevelPercent, VTABLE_nro_Char_applyCharLevelPercent, "()V", 17 },
	{ "getdxSkill", (intptr_t) M_nro_Char_getdxSkill_R_int, VTABLE_nro_Char_getdxSkill_R_int, "()I", 2 },
	{ "getdySkill", (intptr_t) M_nro_Char_getdySkill_R_int, VTABLE_nro_Char_getdySkill_R_int, "()I", 2 },
	{ "taskAction", (intptr_t) SM_nro_Char_taskAction_boolean, 0, "(Z)V", 9 },
	{ "getStrLevel", (intptr_t) M_nro_Char_getStrLevel_R_java_lang_String, VTABLE_nro_Char_getStrLevel_R_java_lang_String, "()Ljava/lang/String;", 17 },
	{ "avatarz", (intptr_t) M_nro_Char_avatarz_R_int, VTABLE_nro_Char_avatarz_R_int, "()I", 17 },
	{ "setPowerInfo", (intptr_t) M_nro_Char_setPowerInfo_java_lang_String_short_short_short, VTABLE_nro_Char_setPowerInfo_java_lang_String_short_short_short, "(Ljava/lang/String;SSS)V", 17 },
	{ "addInfo", (intptr_t) M_nro_Char_addInfo_java_lang_String, VTABLE_nro_Char_addInfo_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "<init>", (intptr_t) init_nro_Char, 0, "()V", 1 },
	{ "myCharz", (intptr_t) SM_nro_Char_myCharz_R_nro_Char, 0, "()Lnro/Char;", 9 },
	{ "myPetz", (intptr_t) SM_nro_Char_myPetz_R_nro_Char, 0, "()Lnro/Char;", 9 },
	{ "clearMyChar", (intptr_t) SM_nro_Char_clearMyChar, 0, "()V", 9 },
	{ "boxSort", (intptr_t) M_nro_Char_boxSort, VTABLE_nro_Char_boxSort, "()V", 17 },
	{ "getSkill", (intptr_t) M_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill, VTABLE_nro_Char_getSkill_nro_SkillTemplate_R_nro_Skill, "(Lnro/SkillTemplate;)Lnro/Skill;", 17 },
	{ "isInEnterOfflinePoint", (intptr_t) M_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint, VTABLE_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint, "()Lnro/Waypoint;", 17 },
	{ "isInEnterOnlinePoint", (intptr_t) M_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint, VTABLE_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint, "()Lnro/Waypoint;", 17 },
	{ "isInWaypoint", (intptr_t) M_nro_Char_isInWaypoint_R_boolean, VTABLE_nro_Char_isInWaypoint_R_boolean, "()Z", 2 },
	{ "soundUpdate", (intptr_t) M_nro_Char_soundUpdate, VTABLE_nro_Char_soundUpdate, "()V", 2 },
	{ "update", (intptr_t) M_nro_Char_update, VTABLE_nro_Char_update, "()V", 1 },
	{ "updateEffect", (intptr_t) M_nro_Char_updateEffect, VTABLE_nro_Char_updateEffect, "()V", 2 },
	{ "checkPerformEndMovePointAction", (intptr_t) M_nro_Char_checkPerformEndMovePointAction, VTABLE_nro_Char_checkPerformEndMovePointAction, "()V", 2 },
	{ "checkHideCharName", (intptr_t) M_nro_Char_checkHideCharName, VTABLE_nro_Char_checkHideCharName, "()V", 2 },
	{ "updateSkillPaint", (intptr_t) M_nro_Char_updateSkillPaint, VTABLE_nro_Char_updateSkillPaint, "()V", 2 },
	{ "SetNum", (intptr_t) M_nro_Char_SetNum_int_int, VTABLE_nro_Char_SetNum_int_int, "(II)V", 17 },
	{ "updateCharDeadFly", (intptr_t) M_nro_Char_updateCharDeadFly, VTABLE_nro_Char_updateCharDeadFly, "()V", 2 },
	{ "updateResetPoint", (intptr_t) M_nro_Char_updateResetPoint, VTABLE_nro_Char_updateResetPoint, "()V", 2 },
	{ "updateSkillStand", (intptr_t) M_nro_Char_updateSkillStand, VTABLE_nro_Char_updateSkillStand, "()V", 2 },
	{ "updateCharAutoJump", (intptr_t) M_nro_Char_updateCharAutoJump, VTABLE_nro_Char_updateCharAutoJump, "()V", 2 },
	{ "hide", (intptr_t) M_nro_Char_hide, VTABLE_nro_Char_hide, "()V", 1 },
	{ "show", (intptr_t) M_nro_Char_show, VTABLE_nro_Char_show, "()V", 17 },
	{ "updateCharStand", (intptr_t) M_nro_Char_updateCharStand, VTABLE_nro_Char_updateCharStand, "()V", 2 },
	{ "updateSuperEff", (intptr_t) M_nro_Char_updateSuperEff, VTABLE_nro_Char_updateSuperEff, "()V", 2 },
	{ "getSoundVolumn", (intptr_t) M_nro_Char_getSoundVolumn_R_float, VTABLE_nro_Char_getSoundVolumn_R_float, "()F", 1 },
	{ "updateCharRun", (intptr_t) M_nro_Char_updateCharRun, VTABLE_nro_Char_updateCharRun, "()V", 2 },
	{ "stop", (intptr_t) M_nro_Char_stop, VTABLE_nro_Char_stop, "()V", 2 },
	{ "abs", (intptr_t) SM_nro_Char_abs_int_R_int, 0, "(I)I", 10 },
	{ "updateCharJump", (intptr_t) M_nro_Char_updateCharJump, VTABLE_nro_Char_updateCharJump, "()V", 2 },
	{ "setCharFallFromJump", (intptr_t) M_nro_Char_setCharFallFromJump, VTABLE_nro_Char_setCharFallFromJump, "()V", 2 },
	{ "updateCharFall", (intptr_t) M_nro_Char_updateCharFall, VTABLE_nro_Char_updateCharFall, "()V", 2 },
	{ "updateCharFly", (intptr_t) M_nro_Char_updateCharFly, VTABLE_nro_Char_updateCharFly, "()V", 2 },
	{ "updateMount", (intptr_t) M_nro_Char_updateMount, VTABLE_nro_Char_updateMount, "()V", 2 },
	{ "getMountData", (intptr_t) SM_nro_Char_getMountData, 0, "()V", 10 },
	{ "checkFrameTick", (intptr_t) M_nro_Char_checkFrameTick_Array1_int, VTABLE_nro_Char_checkFrameTick_Array1_int, "([I)V", 1 },
	{ "paintMount2", (intptr_t) M_nro_Char_paintMount2_lib_mGraphics, VTABLE_nro_Char_paintMount2_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "setMountIsStart", (intptr_t) M_nro_Char_setMountIsStart, VTABLE_nro_Char_setMountIsStart, "()V", 2 },
	{ "checkDelayFallIfTooHigh", (intptr_t) M_nro_Char_checkDelayFallIfTooHigh, VTABLE_nro_Char_checkDelayFallIfTooHigh, "()V", 2 },
	{ "setDefaultPart", (intptr_t) M_nro_Char_setDefaultPart, VTABLE_nro_Char_setDefaultPart, "()V", 17 },
	{ "setDefaultWeapon", (intptr_t) M_nro_Char_setDefaultWeapon, VTABLE_nro_Char_setDefaultWeapon, "()V", 17 },
	{ "setDefaultBody", (intptr_t) M_nro_Char_setDefaultBody, VTABLE_nro_Char_setDefaultBody, "()V", 17 },
	{ "setDefaultLeg", (intptr_t) M_nro_Char_setDefaultLeg, VTABLE_nro_Char_setDefaultLeg, "()V", 17 },
	{ "isSelectingSkillUseAlone", (intptr_t) M_nro_Char_isSelectingSkillUseAlone_R_boolean, VTABLE_nro_Char_isSelectingSkillUseAlone_R_boolean, "()Z", 17 },
	{ "x", (intptr_t) M_nro_Char_x_R_boolean, VTABLE_nro_Char_x_R_boolean, "()Z", 17 },
	{ "isSelectingSkillBuffToPlayer", (intptr_t) M_nro_Char_isSelectingSkillBuffToPlayer_R_boolean, VTABLE_nro_Char_isSelectingSkillBuffToPlayer_R_boolean, "()Z", 17 },
	{ "isUseChargeSkill", (intptr_t) M_nro_Char_isUseChargeSkill_R_boolean, VTABLE_nro_Char_isUseChargeSkill_R_boolean, "()Z", 17 },
	{ "setSkillPaint", (intptr_t) M_nro_Char_setSkillPaint_nro_SkillPaint_int, VTABLE_nro_Char_setSkillPaint_nro_SkillPaint_int, "(Lnro/SkillPaint;I)V", 17 },
	{ "useSkillNotFocus", (intptr_t) SM_nro_Char_useSkillNotFocus, 0, "()V", 9 },
	{ "sendUseChargeSkill", (intptr_t) M_nro_Char_sendUseChargeSkill, VTABLE_nro_Char_sendUseChargeSkill, "()V", 17 },
	{ "stopUseChargeSkill", (intptr_t) M_nro_Char_stopUseChargeSkill, VTABLE_nro_Char_stopUseChargeSkill, "()V", 17 },
	{ "useChargeSkill", (intptr_t) M_nro_Char_useChargeSkill_boolean, VTABLE_nro_Char_useChargeSkill_boolean, "(Z)V", 17 },
	{ "setAutoSkillPaint", (intptr_t) M_nro_Char_setAutoSkillPaint_nro_SkillPaint_int, VTABLE_nro_Char_setAutoSkillPaint_nro_SkillPaint_int, "(Lnro/SkillPaint;I)V", 17 },
	{ "skillInfoPaint", (intptr_t) M_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint, VTABLE_nro_Char_skillInfoPaint_R_Array1_nro_SkillInfoPaint, "()[Lnro/SkillInfoPaint;", 17 },
	{ "setAttack", (intptr_t) M_nro_Char_setAttack, VTABLE_nro_Char_setAttack, "()V", 17 },
	{ "isOutX", (intptr_t) M_nro_Char_isOutX_R_boolean, VTABLE_nro_Char_isOutX_R_boolean, "()Z", 17 },
	{ "isPaint", (intptr_t) M_nro_Char_isPaint_R_boolean, VTABLE_nro_Char_isPaint_R_boolean, "()Z", 17 },
	{ "createShadow", (intptr_t) M_nro_Char_createShadow_int_int_int, VTABLE_nro_Char_createShadow_int_int_int, "(III)V", 17 },
	{ "setMabuHold", (intptr_t) M_nro_Char_setMabuHold_boolean, VTABLE_nro_Char_setMabuHold_boolean, "(Z)V", 17 },
	{ "paint", (intptr_t) M_nro_Char_paint_lib_mGraphics, VTABLE_nro_Char_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "paintEff_Pet", (intptr_t) M_nro_Char_paintEff_Pet_lib_mGraphics, VTABLE_nro_Char_paintEff_Pet_lib_mGraphics, "(Llib/mGraphics;)V", 2 },
	{ "paintEffect", (intptr_t) M_nro_Char_paintEffect_lib_mGraphics, VTABLE_nro_Char_paintEffect_lib_mGraphics, "(Llib/mGraphics;)V", 2 },
	{ "paintHp", (intptr_t) M_nro_Char_paintHp_lib_mGraphics_int_int, VTABLE_nro_Char_paintHp_lib_mGraphics_int_int, "(Llib/mGraphics;II)V", 17 },
	{ "paintShadow", (intptr_t) M_nro_Char_paintShadow_lib_mGraphics, VTABLE_nro_Char_paintShadow_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "updateShadown", (intptr_t) M_nro_Char_updateShadown, VTABLE_nro_Char_updateShadown, "()V", 17 },
	{ "paintCharWithoutSkill", (intptr_t) M_nro_Char_paintCharWithoutSkill_lib_mGraphics, VTABLE_nro_Char_paintCharWithoutSkill_lib_mGraphics, "(Llib/mGraphics;)V", 2 },
	{ "paintBag", (intptr_t) M_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean, VTABLE_nro_Char_paintBag_lib_mGraphics_Array1_short_int_int_int_boolean, "(Llib/mGraphics;[SIIIZ)V", 17 },
	{ "isCharBodyImageID", (intptr_t) M_nro_Char_isCharBodyImageID_int_R_boolean, VTABLE_nro_Char_isCharBodyImageID_int_R_boolean, "(I)Z", 17 },
	{ "paint", (intptr_t) M_nro_Char_paint_lib_mGraphics_int_int_int, VTABLE_nro_Char_paint_lib_mGraphics_int_int_int, "(Llib/mGraphics;III)V", 17 },
	{ "paintHeadWithXY", (intptr_t) M_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int, VTABLE_nro_Char_paintHeadWithXY_lib_mGraphics_int_int_int, "(Llib/mGraphics;III)V", 17 },
	{ "paintCharBody", (intptr_t) M_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean, VTABLE_nro_Char_paintCharBody_lib_mGraphics_int_int_int_int_boolean, "(Llib/mGraphics;IIIIZ)V", 17 },
	{ "paintCharWithSkill", (intptr_t) M_nro_Char_paintCharWithSkill_lib_mGraphics, VTABLE_nro_Char_paintCharWithSkill_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "moveTo", (intptr_t) M_nro_Char_moveTo_int_int_int, VTABLE_nro_Char_moveTo_int_int_int, "(III)V", 17 },
	{ "searchFocus", (intptr_t) M_nro_Char_searchFocus, VTABLE_nro_Char_searchFocus, "()V", 2 },
	{ "clearFocus", (intptr_t) M_nro_Char_clearFocus_int, VTABLE_nro_Char_clearFocus_int, "(I)V", 2 },
	{ "isCharInScreen", (intptr_t) SM_nro_Char_isCharInScreen_nro_Char_R_boolean, 0, "(Lnro/Char;)Z", 9 },
	{ "isAttacPlayerStatus", (intptr_t) M_nro_Char_isAttacPlayerStatus_R_boolean, VTABLE_nro_Char_isAttacPlayerStatus_R_boolean, "()Z", 17 },
	{ "setHoldChar", (intptr_t) M_nro_Char_setHoldChar_nro_Char, VTABLE_nro_Char_setHoldChar_nro_Char, "(Lnro/Char;)V", 17 },
	{ "setHoldMob", (intptr_t) M_nro_Char_setHoldMob_nro_Mob, VTABLE_nro_Char_setHoldMob_nro_Mob, "(Lnro/Mob;)V", 17 },
	{ "findNextFocusByKey", (intptr_t) M_nro_Char_findNextFocusByKey, VTABLE_nro_Char_findNextFocusByKey, "()V", 17 },
	{ "deFocusNPC", (intptr_t) M_nro_Char_deFocusNPC, VTABLE_nro_Char_deFocusNPC, "()V", 2 },
	{ "updateCharInBridge", (intptr_t) M_nro_Char_updateCharInBridge, VTABLE_nro_Char_updateCharInBridge, "()V", 2 },
	{ "doInjure", (intptr_t) M_nro_Char_doInjure_long_long_boolean_boolean, VTABLE_nro_Char_doInjure_long_long_boolean_boolean, "(JJZZ)V", 17 },
	{ "doInjure", (intptr_t) M_nro_Char_doInjure, VTABLE_nro_Char_doInjure, "()V", 17 },
	{ "startDie", (intptr_t) M_nro_Char_startDie_short_short, VTABLE_nro_Char_startDie_short_short, "(SS)V", 17 },
	{ "waitToDie", (intptr_t) M_nro_Char_waitToDie_short_short, VTABLE_nro_Char_waitToDie_short_short, "(SS)V", 17 },
	{ "liveFromDead", (intptr_t) M_nro_Char_liveFromDead, VTABLE_nro_Char_liveFromDead, "()V", 17 },
	{ "doUsePotion", (intptr_t) M_nro_Char_doUsePotion_R_boolean, VTABLE_nro_Char_doUsePotion_R_boolean, "()Z", 17 },
	{ "isLang", (intptr_t) SM_nro_Char_isLang_R_boolean, 0, "()Z", 10 },
	{ "isMeCanAttackOtherPlayer", (intptr_t) M_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean, VTABLE_nro_Char_isMeCanAttackOtherPlayer_nro_Char_R_boolean, "(Lnro/Char;)Z", 17 },
	{ "clearTask", (intptr_t) SM_nro_Char_clearTask, 0, "()V", 9 },
	{ "getX", (intptr_t) M_nro_Char_getX_R_int, VTABLE_nro_Char_getX_R_int, "()I", 17 },
	{ "getY", (intptr_t) M_nro_Char_getY_R_int, VTABLE_nro_Char_getY_R_int, "()I", 17 },
	{ "getH", (intptr_t) M_nro_Char_getH_R_int, VTABLE_nro_Char_getH_R_int, "()I", 17 },
	{ "getW", (intptr_t) M_nro_Char_getW_R_int, VTABLE_nro_Char_getW_R_int, "()I", 17 },
	{ "focusManualTo", (intptr_t) M_nro_Char_focusManualTo_java_lang_Object, VTABLE_nro_Char_focusManualTo_java_lang_Object, "(Ljava/lang/Object;)V", 17 },
	{ "stopMoving", (intptr_t) M_nro_Char_stopMoving, VTABLE_nro_Char_stopMoving, "()V", 17 },
	{ "isInvisible", (intptr_t) M_nro_Char_isInvisible_R_boolean, VTABLE_nro_Char_isInvisible_R_boolean, "()Z", 17 },
	{ "focusToAttack", (intptr_t) M_nro_Char_focusToAttack_R_boolean, VTABLE_nro_Char_focusToAttack_R_boolean, "()Z", 17 },
	{ "addDustEff", (intptr_t) M_nro_Char_addDustEff_int, VTABLE_nro_Char_addDustEff_int, "(I)V", 2 },
	{ "isGetFlagImage", (intptr_t) SM_nro_Char_isGetFlagImage_byte_R_boolean, 0, "(B)Z", 9 },
	{ "removeHoleEff", (intptr_t) M_nro_Char_removeHoleEff, VTABLE_nro_Char_removeHoleEff, "()V", 17 },
	{ "removeProtectEff", (intptr_t) M_nro_Char_removeProtectEff, VTABLE_nro_Char_removeProtectEff, "()V", 17 },
	{ "removeBlindEff", (intptr_t) M_nro_Char_removeBlindEff, VTABLE_nro_Char_removeBlindEff, "()V", 17 },
	{ "removeEffect", (intptr_t) M_nro_Char_removeEffect, VTABLE_nro_Char_removeEffect, "()V", 17 },
	{ "setPos", (intptr_t) M_nro_Char_setPos_short_short_byte, VTABLE_nro_Char_setPos_short_short_byte, "(SSB)V", 17 },
	{ "removeHuytSao", (intptr_t) M_nro_Char_removeHuytSao, VTABLE_nro_Char_removeHuytSao, "()V", 17 },
	{ "fusionComplete", (intptr_t) M_nro_Char_fusionComplete, VTABLE_nro_Char_fusionComplete, "()V", 17 },
	{ "setFusion", (intptr_t) M_nro_Char_setFusion_byte, VTABLE_nro_Char_setFusion_byte, "(B)V", 17 },
	{ "removeSleepEff", (intptr_t) M_nro_Char_removeSleepEff, VTABLE_nro_Char_removeSleepEff, "()V", 17 },
	{ "setPartOld", (intptr_t) M_nro_Char_setPartOld, VTABLE_nro_Char_setPartOld, "()V", 17 },
	{ "addServerEffect", (intptr_t) M_nro_Char_addServerEffect_int_int_int_int, VTABLE_nro_Char_addServerEffect_int_int_int_int, "(IIII)V", 17 },
	{ "resetPartTemp", (intptr_t) M_nro_Char_resetPartTemp, VTABLE_nro_Char_resetPartTemp, "()V", 17 },
	{ "getEffById", (intptr_t) M_nro_Char_getEffById_int_R_nro_Effect, VTABLE_nro_Char_getEffById_int_R_nro_Effect, "(I)Lnro/Effect;", 2 },
	{ "addEffChar", (intptr_t) M_nro_Char_addEffChar_nro_Effect, VTABLE_nro_Char_addEffChar_nro_Effect, "(Lnro/Effect;)V", 17 },
	{ "removeEffChar", (intptr_t) M_nro_Char_removeEffChar_int_int, VTABLE_nro_Char_removeEffChar_int_int, "(II)V", 17 },
	{ "paintEffBehind", (intptr_t) M_nro_Char_paintEffBehind_lib_mGraphics, VTABLE_nro_Char_paintEffBehind_lib_mGraphics, "(Llib/mGraphics;)V", 2 },
	{ "paintEffFront", (intptr_t) M_nro_Char_paintEffFront_lib_mGraphics, VTABLE_nro_Char_paintEffFront_lib_mGraphics, "(Llib/mGraphics;)V", 2 },
	{ "updEffChar", (intptr_t) M_nro_Char_updEffChar, VTABLE_nro_Char_updEffChar, "()V", 2 },
	{ "checkLuong", (intptr_t) M_nro_Char_checkLuong_R_int, VTABLE_nro_Char_checkLuong_R_int, "()I", 17 },
	{ "paintRedEye", (intptr_t) M_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int, VTABLE_nro_Char_paintRedEye_lib_mGraphics_int_int_int_int, "(Llib/mGraphics;IIII)V", 2 },
	{ "isHead_2Fr", (intptr_t) SM_nro_Char_isHead_2Fr_int_R_boolean, 0, "(I)Z", 10 },
	{ "updateFHead", (intptr_t) M_nro_Char_updateFHead, VTABLE_nro_Char_updateFHead, "()V", 2 },
	{ "getFHead", (intptr_t) M_nro_Char_getFHead_int_R_int, VTABLE_nro_Char_getFHead_int_R_int, "(I)I", 2 },
	{ "paintHat_behind", (intptr_t) M_nro_Char_paintHat_behind_lib_mGraphics_int_int, VTABLE_nro_Char_paintHat_behind_lib_mGraphics_int_int, "(Llib/mGraphics;II)V", 2 },
	{ "i", (intptr_t) SM_nro_Char_i_int_R_boolean, 0, "(I)Z", 10 },
	{ "sendNewAttack", (intptr_t) M_nro_Char_sendNewAttack_short, VTABLE_nro_Char_sendNewAttack_short, "(S)V", 17 },
	{ "SetSkillPaint_NEW", (intptr_t) M_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte, VTABLE_nro_Char_SetSkillPaint_NEW_short_boolean_byte_byte_byte_short_byte, "(SZBBBSB)V", 17 },
	{ "SetSkillPaint_STT", (intptr_t) M_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte, VTABLE_nro_Char_SetSkillPaint_STT_int_short_nro_Point_short_short_byte_Array1_nro_Point_byte, "(ISLnro/Point;SSB[Lnro/Point;B)V", 17 },
	{ "clone", (intptr_t) M_nro_Char_clone_R_nro_Char, VTABLE_nro_Char_clone_R_nro_Char, "()Lnro/Char;", 17 },
	{ "containsCaiTrang", (intptr_t) M_nro_Char_containsCaiTrang_int_R_boolean, VTABLE_nro_Char_containsCaiTrang_int_R_boolean, "(I)Z", 17 },
	{ "clone", (intptr_t) M_nro_Char_clone_R_java_lang_Object, VTABLE_nro_Char_clone_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "<clinit>", (intptr_t) clinit_nro_Char, 0, "()V", 8 },
};

Class class_nro_Char{
		.nativeName = (intptr_t) "nro/Char",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Char),
		.classVtable = (intptr_t) vtable_nro_Char,
		.staticInitializer = (intptr_t) clinit_nro_Char,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Char,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 340,
		.nativeFields = (intptr_t) fields,
		.methodCount = 140,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 135,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Char = registerClass(&class_nro_Char);

}

