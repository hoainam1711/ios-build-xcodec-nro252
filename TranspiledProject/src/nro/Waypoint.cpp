#include "nro/Waypoint.h"
#include "nro/GameScr.h"
#include "nro/MovePoint.h"
#include "nro/IActionListener.h"
#include "nro/InfoDlg.h"
#include "nro/AutoTrainMenu.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Waypoint.h"
#include "nro/PopUp.h"
#include "nro/Command.h"
#include "nro/Char.h"
#include "nro/TileMap.h"

extern "C" {


void mark_nro_Waypoint(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (nro_Waypoint *) object;
	if (self->F_popup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_popup)->clazz)->markFunction)((jobject) self->F_popup, mark, depth + 1);
}

void clinit_nro_Waypoint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Waypoint_short_short_short_short_boolean_boolean_java_lang_String(jcontext ctx, jobject self, jshort param0, jshort param1, jshort param2, jshort param3, jbool param4, jbool param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Waypoint:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Waypoint(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minX = (frame[1].i);
	LINE_NUMBER(16);
	((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minY = (frame[2].i);
	LINE_NUMBER(17);
	((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxX = (frame[3].i);
	LINE_NUMBER(18);
	((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxY = (frame[4].i);
	LINE_NUMBER(19);
	sp[0].o = (jobject)SM_nro_Res_changeString_java_lang_String_R_java_lang_String(ctx, (frame[7].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(20);
	((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_isEnter = (frame[5].i);
	LINE_NUMBER(21);
	((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_isOffline = (frame[6].i);
	LINE_NUMBER(22);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (21)) goto label_9;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (22)) goto label_9;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (23)) goto label_10;
	}
label_9:;
	{
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minX) < 0) goto label_10;
	}
	{
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minX) <= (24)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(23);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cgender) != 0) goto label_13;
	}
label_12:;
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (7)) goto label_14;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cgender) != (jint(1))) goto label_13;
	}
label_14:;
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (14)) goto label_15;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cgender) == (jint(2))) goto label_15;
	}
label_13:;
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_11;
label_15:;
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)SM_nro_TileMap_isInAirMap_R_boolean(ctx);
	if (temp0 != 0) goto label_16;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (47)) goto label_16;
	}
	{
	LINE_NUMBER(25);
	if ((frame[5].i) != 0) goto label_18;
	}
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_18;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PopUp);
	init_nro_PopUp_java_lang_String_int_int(ctx, sp[1].o, (frame[7].o), (frame[1].i), ((frame[2].i) - (24)));
	((nro_Waypoint *) NULL_CHECK(sp[0].o))->F_popup = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (frame[0].o), (jint(1)), (frame[0].o));
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isWayPoint = (jint(1));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isPaint = (jint(0));
	LINE_NUMBER(30);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	SM_nro_PopUp_addPopUp_nro_PopUp(ctx, sp[0].o);
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)SM_nro_TileMap_isTrainingMap_R_boolean(ctx);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PopUp);
	init_nro_PopUp_java_lang_String_int_int(ctx, sp[1].o, (frame[7].o), (frame[1].i), ((frame[2].i) - (16)));
	((nro_Waypoint *) NULL_CHECK(sp[0].o))->F_popup = (jref) sp[1].o;
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(35);
	frame[1].i = (jshort(((frame[1].i) + (((frame[3].i) - (frame[1].i)) / (jint(2))))));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PopUp);
	sp[2].o = frame[7].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jobject temp2 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp2;
	sp[4].i = temp0;
	sp[5].i = temp1;
	sp += 6;
	if ((frame[2].i) == 0) goto label_30;
	}
	INST_BIPUSH(16);
	goto label_31;
label_30:;
	INST_BIPUSH(-32);
label_31:;
	{
	sp -= 7;
	init_nro_PopUp_java_lang_String_int_int(ctx, sp[1].o, sp[3].o, sp[4].i, (sp[5].i - sp[6].i));
	((nro_Waypoint *) NULL_CHECK(sp[0].o))->F_popup = (jref) sp[1].o;
	}
label_27:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (frame[0].o), (jint(2)), (frame[0].o));
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isWayPoint = (jint(1));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isPaint = (jint(0));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	SM_nro_PopUp_addPopUp_nro_PopUp(ctx, sp[0].o);
	}
label_24:;
	{
	LINE_NUMBER(45);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(46);
	if ((frame[2].i) <= (150)) goto label_35;
	}
	sp->i = (jint)SM_nro_TileMap_isInAirMap_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_11;
label_35:;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_nro_PopUp(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_PopUp);
	sp[2].o = frame[7].o;
	jint temp0 = (frame[1].i) + (((frame[3].i) - (frame[1].i)) / (jint(2)));
	jint temp1 = frame[4].i;
	jobject temp2 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp2;
	sp[4].i = temp0;
	sp[5].i = temp1;
	sp += 6;
	if ((frame[1].i) <= (100)) goto label_37;
	}
	INST_BIPUSH(24);
	goto label_38;
label_37:;
	INST_BIPUSH(48);
label_38:;
	{
	sp -= 7;
	init_nro_PopUp_java_lang_String_int_int(ctx, sp[1].o, sp[3].o, sp[4].i, (sp[5].i - sp[6].i));
	((nro_Waypoint *) NULL_CHECK(sp[0].o))->F_popup = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (frame[0].o), (jint(1)), (frame[0].o));
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isWayPoint = (jint(1));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	((nro_PopUp *) NULL_CHECK(sp[0].o))->F_isPaint = (jint(0));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_popup;
	SM_nro_PopUp_addPopUp_nro_PopUp(ctx, sp[0].o);
	LINE_NUMBER(52);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vGo;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_Waypoint_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Waypoint:perform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(60);
	switch((frame[1].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(62);
	frame[1].i = ((((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minX) + ((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxX)) / (jint(2)));
	LINE_NUMBER(63);
	frame[3].i = ((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxY);
	LINE_NUMBER(64);
	if (((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxY) <= (((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minY) + (24))) goto label_6;
	}
	{
	LINE_NUMBER(65);
	frame[3].i = ((((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minY) + ((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxY)) / (jint(2)));
	}
label_6:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(69);
	SM_nro_AutoTrainMenu_stopAutoAttack(ctx);
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_MovePoint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MovePoint);
	init_nro_MovePoint_int_int(ctx, sp[1].o, (frame[1].i), (frame[3].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_currentMovePoint;
	sp += 1;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) <= 0) goto label_11;
	}
	INST_ICONST(-1);
	goto label_12;
label_11:;
	INST_ICONST(1);
label_12:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(72);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_auto = (jint(0));
	LINE_NUMBER(76);
	SM_nro_AutoTrainMenu_stopAutoAttack(ctx);
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((func_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isInEnterOfflinePoint_R_nro_Waypoint])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(79);
	SM_nro_InfoDlg_showWait(ctx);
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_getMapOffline) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_getMapOffline])(ctx, sp[0].o);
	LINE_NUMBER(81);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(1));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}
label_17:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((func_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Char_isInEnterOnlinePoint_R_nro_Waypoint])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_requestChangeMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_requestChangeMap])(ctx, sp[0].o);
	LINE_NUMBER(86);
	clinit_nro_Char(ctx);
	SF_nro_Char_isLockKey = (jint(1));
	LINE_NUMBER(87);
	clinit_nro_Char(ctx);
	SF_nro_Char_ischangingMap = (jint(1));
	LINE_NUMBER(88);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(89);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(90);
	SM_nro_InfoDlg_showWait(ctx);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}
label_23:;
	{
	LINE_NUMBER(93);
	frame[1].i = ((((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_minX) + ((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxX)) / (jint(2)));
	LINE_NUMBER(94);
	frame[3].i = ((jint)((nro_Waypoint *) NULL_CHECK((frame[0].o)))->F_maxY);
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_MovePoint(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_MovePoint);
	init_nro_MovePoint_int_int(ctx, sp[1].o, (frame[1].i), (frame[3].i));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_currentMovePoint = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[1].o))->F_cx;
	sp[1].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK(sp[1].o))->F_currentMovePoint;
	sp += 1;
	if ((temp0 - ((jint)((nro_MovePoint *) NULL_CHECK(sp[0].o))->F_xEnd)) <= 0) goto label_35;
	}
	INST_ICONST(-1);
	goto label_36;
label_35:;
	INST_ICONST(1);
label_36:;
	{
	sp -= 2;
	((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir = sp[1].i;
	LINE_NUMBER(97);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))), (frame[0].o), (jint(2)), (jobject(nullptr)));
	((nro_Char *) NULL_CHECK(sp[0].o))->F_endMovePointCommand = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(101);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_Waypoint[] {
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
	(void *) M_nro_Waypoint_perform_int_java_lang_Object,
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
	{ "perform", "(ILjava/lang/Object;)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "minX", &class_short, offsetof(nro_Waypoint, F_minX), "S", 1 },
	{ "minY", &class_short, offsetof(nro_Waypoint, F_minY), "S", 1 },
	{ "maxX", &class_short, offsetof(nro_Waypoint, F_maxX), "S", 1 },
	{ "maxY", &class_short, offsetof(nro_Waypoint, F_maxY), "S", 1 },
	{ "isEnter", &class_boolean, offsetof(nro_Waypoint, F_isEnter), "Z", 1 },
	{ "isOffline", &class_boolean, offsetof(nro_Waypoint, F_isOffline), "Z", 1 },
	{ "popup", &class_nro_PopUp, offsetof(nro_Waypoint, F_popup), "Lnro/PopUp;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Waypoint_short_short_short_short_boolean_boolean_java_lang_String, 0, "(SSSSZZLjava/lang/String;)V", 1 },
	{ "perform", (intptr_t) M_nro_Waypoint_perform_int_java_lang_Object, VTABLE_nro_Waypoint_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_nro_Waypoint{
		.nativeName = (intptr_t) "nro/Waypoint",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Waypoint),
		.classVtable = (intptr_t) vtable_nro_Waypoint,
		.staticInitializer = (intptr_t) clinit_nro_Waypoint,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Waypoint,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Waypoint = registerClass(&class_nro_Waypoint);

}

