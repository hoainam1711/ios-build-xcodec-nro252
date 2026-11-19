#include "nro/ShowBoss.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "nro/IActionListener.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "nro/Service.h"
#include "nro/Panel.h"
#include "nro/Menu.h"
#include "nro/ItemMap.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/InfoMe.h"
#include "nro/ShowBoss_KilledBossBanner.h"
#include "nro/ItemTime.h"
#include "nro/Command.h"
#include "nro/ShowBoss_BossNotice.h"
#include "nro/TileMap.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "lib/mGraphics.h"
#include "com/badlogic/gdx/Gdx.h"
#include "nro/ShowBoss_ClickRect.h"
#include "com/badlogic/gdx/Files.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/Res.h"
#include "nro/Npc.h"
#include "nro/NinjaUtil.h"
#include "nro/ShowBoss.h"
#include "nro/Rms.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_nro_ShowBoss_instance;
jbool SF_nro_ShowBoss_isShowBoss;
jbool SF_nro_ShowBoss_isNotifKillBoss;
jbool SF_nro_ShowBoss_isShowBossInMap;
jbool SF_nro_ShowBoss_isLineToBoss;
jbool SF_nro_ShowBoss_isAutoFocusBoss;
jbool SF_nro_ShowBoss_isRMSLoaded;
jobject SF_nro_ShowBoss_activeBossNotif;
jobject SF_nro_ShowBoss_killedBossNotif;
jobject SF_nro_ShowBoss_bossesInZone;
jobject SF_nro_ShowBoss_bossRects;
jobject SF_nro_ShowBoss_notifRects;

void mark_nro_ShowBoss(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ShowBoss_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ShowBoss_instance)->clazz)->markFunction)((jobject) SF_nro_ShowBoss_instance, mark, depth + 1);
		if (SF_nro_ShowBoss_activeBossNotif)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ShowBoss_activeBossNotif)->clazz)->markFunction)((jobject) SF_nro_ShowBoss_activeBossNotif, mark, depth + 1);
		if (SF_nro_ShowBoss_killedBossNotif)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ShowBoss_killedBossNotif)->clazz)->markFunction)((jobject) SF_nro_ShowBoss_killedBossNotif, mark, depth + 1);
		if (SF_nro_ShowBoss_bossesInZone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ShowBoss_bossesInZone)->clazz)->markFunction)((jobject) SF_nro_ShowBoss_bossesInZone, mark, depth + 1);
		if (SF_nro_ShowBoss_bossRects)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ShowBoss_bossRects)->clazz)->markFunction)((jobject) SF_nro_ShowBoss_bossRects, mark, depth + 1);
		if (SF_nro_ShowBoss_notifRects)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ShowBoss_notifRects)->clazz)->markFunction)((jobject) SF_nro_ShowBoss_notifRects, mark, depth + 1);
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
	auto self = (nro_ShowBoss *) object;
}

void init_nro_ShowBoss(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ShowBoss_gI_R_nro_ShowBoss(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	{
	LINE_NUMBER(13);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(14);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ShowBoss);
	init_nro_ShowBoss(ctx, sp[0].o);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(16);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_loadRMS(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:loadRMS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	{
	LINE_NUMBER(125);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isRMSLoaded) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(126);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isRMSLoaded = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_show_boss"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(129);
	if ((frame[0].i) == (jint(-1))) goto label_7;
	}
	{
	if ((frame[0].i) != (jint(1))) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBoss = (--sp)->i;
label_7:;
	{
	LINE_NUMBER(130);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_notif_kill_boss"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(131);
	if ((frame[0].i) == (jint(-1))) goto label_11;
	}
	{
	if ((frame[0].i) != (jint(1))) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isNotifKillBoss = (--sp)->i;
label_11:;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_show_boss_map"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(133);
	if ((frame[0].i) == (jint(-1))) goto label_15;
	}
	{
	if ((frame[0].i) != (jint(1))) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBossInMap = (--sp)->i;
label_15:;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_line_to_boss"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(135);
	if ((frame[0].i) == (jint(-1))) goto label_19;
	}
	{
	if ((frame[0].i) != (jint(1))) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isLineToBoss = (--sp)->i;
label_19:;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"nro_auto_focus_boss"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(137);
	if ((frame[0].i) == (jint(-1))) goto label_1;
	}
	{
	if ((frame[0].i) != (jint(1))) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isAutoFocusBoss = (--sp)->i;
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(138);
	goto label_25;
label_2:;
	INST_ASTORE(0);
label_25:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_saveRMS(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:saveRMS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	{
	LINE_NUMBER(142);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	if (sp[0].o != nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(144);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_show_boss"_j));
	sp += 1;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(145);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_notif_kill_boss"_j));
	sp += 1;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isNotifKillBoss) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(146);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_show_boss_map"_j));
	sp += 1;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) == 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(147);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_line_to_boss"_j));
	sp += 1;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isLineToBoss) == 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 2;
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(148);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"nro_auto_focus_boss"_j));
	sp += 1;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isAutoFocusBoss) == 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	POP_N(2); // Pop method args
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, sp[0].o, sp[1].i);
	popExceptionFrame(frameRef);
	LINE_NUMBER(149);
	goto label_19;
label_2:;
	INST_ASTORE(0);
label_19:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_showSBMenu(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:showSBMenu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	{
	LINE_NUMBER(153);
	SM_nro_ShowBoss_loadRMS(ctx);
	LINE_NUMBER(154);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Menu Boss"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o BOSS: "_j))));
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) == 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[B\u1eacT]"_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[T\u1eaeT]"_j));
label_5:;
	{
	sp -= 5;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)SM_nro_ShowBoss_gI_R_nro_ShowBoss(ctx);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(1)), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o ti\u00eau di\u1ec7t: "_j))));
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isNotifKillBoss) == 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[B\u1eacT]"_j));
	goto label_9;
label_8:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[T\u1eaeT]"_j));
label_9:;
	{
	sp -= 5;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)SM_nro_ShowBoss_gI_R_nro_ShowBoss(ctx);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(2)), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Hi\u1ec7n Boss trong khu: "_j))));
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) == 0) goto label_12;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[B\u1eacT]"_j));
	goto label_13;
label_12:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[T\u1eaeT]"_j));
label_13:;
	{
	sp -= 5;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)SM_nro_ShowBoss_gI_R_nro_ShowBoss(ctx);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(3)), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Tia ch\u1ec9 BOSS: "_j))));
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isLineToBoss) == 0) goto label_16;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[B\u1eacT]"_j));
	goto label_17;
label_16:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[T\u1eaeT]"_j));
label_17:;
	{
	sp -= 5;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)SM_nro_ShowBoss_gI_R_nro_ShowBoss(ctx);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(4)), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 Focus BOSS: "_j))));
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isAutoFocusBoss) == 0) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[B\u1eacT]"_j));
	goto label_21;
label_20:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[T\u1eaeT]"_j));
label_21:;
	{
	sp -= 5;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)SM_nro_ShowBoss_gI_R_nro_ShowBoss(ctx);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(5)), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Xem t\u00ecnh tr\u1ea1ng BOSS"_j));
	sp[3].o = (jobject)SM_nro_ShowBoss_gI_R_nro_ShowBoss(ctx);
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (6), (jobject(nullptr)));
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	((func_nro_Menu_startAt_nro_MyVector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Menu_startAt_nro_MyVector])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ShowBoss_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:perform", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(166);
	SM_nro_ShowBoss_loadRMS(ctx);
	LINE_NUMBER(167);
	switch((frame[1].i)) {
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		default: goto label_8;
	}
	}
label_2:;
	{
	LINE_NUMBER(169);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) != 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBoss = sp[0].i;
	LINE_NUMBER(170);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(171);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(172);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) == 0) goto label_15;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_16;
label_15:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_16:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_13:;
	{
	LINE_NUMBER(174);
	SM_nro_ShowBoss_showSBMenu(ctx);
	LINE_NUMBER(175);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(177);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isNotifKillBoss) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isNotifKillBoss = sp[0].i;
	LINE_NUMBER(178);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(179);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(180);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o ti\u00eau di\u1ec7t BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isNotifKillBoss) == 0) goto label_24;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_25;
label_24:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_25:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_22:;
	{
	LINE_NUMBER(182);
	SM_nro_ShowBoss_showSBMenu(ctx);
	LINE_NUMBER(183);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(185);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) != 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBossInMap = sp[0].i;
	LINE_NUMBER(186);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(187);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(188);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Hi\u1ec7n Boss trong khu: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) == 0) goto label_33;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_34;
label_33:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_34:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_31:;
	{
	LINE_NUMBER(190);
	SM_nro_ShowBoss_showSBMenu(ctx);
	LINE_NUMBER(191);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(193);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isLineToBoss) != 0) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isLineToBoss = sp[0].i;
	LINE_NUMBER(194);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(195);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(196);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Tia ch\u1ec9 BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isLineToBoss) == 0) goto label_42;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_43;
label_42:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_43:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_40:;
	{
	LINE_NUMBER(198);
	SM_nro_ShowBoss_showSBMenu(ctx);
	LINE_NUMBER(199);
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(201);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isAutoFocusBoss) != 0) goto label_45;
	}
	INST_ICONST(1);
	goto label_46;
label_45:;
	INST_ICONST(0);
label_46:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isAutoFocusBoss = sp[0].i;
	LINE_NUMBER(202);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(203);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_49;
	}
	{
	LINE_NUMBER(204);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 Focus BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isAutoFocusBoss) == 0) goto label_51;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_52;
label_51:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_52:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_49:;
	{
	LINE_NUMBER(206);
	SM_nro_ShowBoss_showSBMenu(ctx);
	LINE_NUMBER(207);
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(209);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(210);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTypeInfoBoss) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTypeInfoBoss])(ctx, sp[0].o);
	LINE_NUMBER(211);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_show])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_ShowBoss_handleChatCommand_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:handleChatCommand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(218);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(220);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"sb"_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"menu boss"_j))));
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(221);
	SM_nro_ShowBoss_showSBMenu(ctx);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"dsboss"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"tbboss"_j))));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"boss"_j))));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(225);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(226);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_setTypeInfoBoss) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_setTypeInfoBoss])(ctx, sp[0].o);
	LINE_NUMBER(227);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	((func_nro_Panel_show) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Panel_show])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"tbb"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(232);
	SM_nro_ShowBoss_loadRMS(ctx);
	LINE_NUMBER(233);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) != 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBoss = sp[0].i;
	LINE_NUMBER(234);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(235);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(236);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) == 0) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_21;
label_20:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_21:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_18:;
	{
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"tbk"_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(241);
	SM_nro_ShowBoss_loadRMS(ctx);
	LINE_NUMBER(242);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isNotifKillBoss) != 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isNotifKillBoss = sp[0].i;
	LINE_NUMBER(243);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(244);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(245);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Th\u00f4ng b\u00e1o ti\u00eau di\u1ec7t BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isNotifKillBoss) == 0) goto label_31;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_32;
label_31:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_32:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_29:;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"sbm"_j))));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(250);
	SM_nro_ShowBoss_loadRMS(ctx);
	LINE_NUMBER(251);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) != 0) goto label_36;
	}
	INST_ICONST(1);
	goto label_37;
label_36:;
	INST_ICONST(0);
label_37:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBossInMap = sp[0].i;
	LINE_NUMBER(252);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(253);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(254);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Hi\u1ec7n Boss trong khu: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) == 0) goto label_42;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_43;
label_42:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_43:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_40:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jint(1));
	}
label_33:;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"tia"_j))));
	if (temp0 == 0) goto label_44;
	}
	{
	LINE_NUMBER(259);
	SM_nro_ShowBoss_loadRMS(ctx);
	LINE_NUMBER(260);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isLineToBoss) != 0) goto label_47;
	}
	INST_ICONST(1);
	goto label_48;
label_47:;
	INST_ICONST(0);
label_48:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isLineToBoss = sp[0].i;
	LINE_NUMBER(261);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(262);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(263);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Tia ch\u1ec9 BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isLineToBoss) == 0) goto label_53;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_54;
label_53:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_54:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_51:;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (jint(1));
	}
label_44:;
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"fcb"_j))));
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(268);
	SM_nro_ShowBoss_loadRMS(ctx);
	LINE_NUMBER(269);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isAutoFocusBoss) != 0) goto label_58;
	}
	INST_ICONST(1);
	goto label_59;
label_58:;
	INST_ICONST(0);
label_59:;
	{
	sp -= 1;
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isAutoFocusBoss = sp[0].i;
	LINE_NUMBER(270);
	SM_nro_ShowBoss_saveRMS(ctx);
	LINE_NUMBER(271);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_62;
	}
	{
	LINE_NUMBER(272);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"T\u1ef1 Focus BOSS: "_j))));
	sp += 2;
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isAutoFocusBoss) == 0) goto label_64;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"B\u1eacT"_j));
	goto label_65;
label_64:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"T\u1eaeT"_j));
label_65:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_62:;
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (jint(1));
	}
label_55:;
	{
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:isBossFighting", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(280);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(281);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == (jint(5))) goto label_2;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == 0) goto label_3;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) == (jint(4))) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_nro_ShowBoss_isBossChar_nro_Char_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:isBossChar", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(285);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(287);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(288);
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cHP), (jlong(0)))) > 0) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(289);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isPet) != 0) goto label_6;
	}
	{
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_isMiniPet) == 0) goto label_7;
	}
label_6:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(290);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID) == (-114)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Tr\u1ecdng t\u00e0i"_j))));
	if (temp0 != 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Trong tai"_j))));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_9:;
	{
	LINE_NUMBER(291);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\u0110\u1ec7"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\u0111\u1ec7"_j))));
	if (temp0 == 0) goto label_11;
	}
label_10:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"$"_j))));
	if (temp0 != 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	if (temp0 == 0) goto label_13;
	}
label_12:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	jint temp0 = (jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (temp0 != (-((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_charID))) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(296);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_charID) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(301);
	if (((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cTypePk) != (jint(5))) goto label_17;
	}
	{
	LINE_NUMBER(302);
	frame[2].i = (jint(0));
	}
label_19:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_17;
	}
	{
	LINE_NUMBER(303);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_ShowBoss$BossNotice, sp[0].o));
	LINE_NUMBER(304);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[3].o)))->F_nameBoss;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[3].o)))->F_nameBoss;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (frame[4].o));
	if (temp0 != 0) goto label_26;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (frame[5].o));
	if (temp0 == 0) goto label_22;
	}
label_26:;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return (jint(1));
	}
label_22:;
	{
	LINE_NUMBER(302);
	INST_IINC(2, 1);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_moveTo_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:moveTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(318);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(319);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx = (frame[0].i);
	LINE_NUMBER(320);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy = (frame[1].i);
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(322);
	jint temp0 = (jint)SM_nro_ItemTime_isExistItem_int_R_boolean(ctx, (4387));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(323);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx = (frame[0].i);
	LINE_NUMBER(324);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy = ((frame[1].i) + (jint(1)));
	LINE_NUMBER(325);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	LINE_NUMBER(326);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cx = (frame[0].i);
	LINE_NUMBER(327);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_cy = (frame[1].i);
	LINE_NUMBER(328);
	sp[0].o = (jobject)SM_nro_Service_gI_R_nro_Service(ctx);
	((func_nro_Service_charMove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Service_charMove])(ctx, sp[0].o);
	}
label_6:;
	LINE_NUMBER(330);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_teleportToBoss_nro_Char(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:teleportToBoss", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(333);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(335);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(337);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(338);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(339);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_npcFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(340);
	((nro_Char *) NULL_CHECK((frame[1].o)))->F_charFocus = (jref) (frame[0].o);
	LINE_NUMBER(342);
	SM_nro_ShowBoss_moveTo_int_int(ctx, ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cy));
	LINE_NUMBER(344);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(345);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"D\u1ecbch chuy\u1ec3n t\u1edbi "_j))));
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[0].o)))->F_cName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_9:;
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_onClickActiveBossNotif_nro_ShowBoss$BossNotice(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:onClickActiveBossNotif", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(350);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(351);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapName;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[0].o)))->F_mapName;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapName;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[0].o)))->F_mapName;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(352);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(353);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(354);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(355);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cName;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[0].o)))->F_nameBoss;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(357);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(358);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[5].o), (frame[4].o));
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
label_13:;
	{
	LINE_NUMBER(359);
	frame[1].o = (frame[3].o);
	LINE_NUMBER(360);
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(353);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(364);
	if ((frame[1].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(365);
	jint temp0 = (jint)SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(366);
	SM_nro_ShowBoss_teleportToBoss_nro_Char(ctx, (frame[1].o));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(369);
	if ((frame[2].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(370);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(371);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(372);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_npcFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(373);
	((nro_Char *) NULL_CHECK((frame[2].o)))->F_charFocus = (jref) (frame[1].o);
	}
label_21:;
	{
	LINE_NUMBER(375);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(376);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" \u0111ang \u0111\u1ee9ng ch\u1edd, ch\u01b0a th\u1ec3 t\u1ea5n c\u00f4ng!"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_26:;
	LINE_NUMBER(378);
	goto label_19;
label_15:;
	{
	LINE_NUMBER(380);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(381);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[0].o)))->F_nameBoss;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" c\u00f9ng map nh\u01b0ng kh\u00e1c khu!"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_19:;
	LINE_NUMBER(384);
	goto label_29;
label_2:;
	{
	LINE_NUMBER(385);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(386);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[0].o)))->F_nameBoss;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" \u0111ang \u1edf: "_j))));
	sp[2].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[0].o)))->F_mapName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_29:;
	LINE_NUMBER(389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_ShowBoss_updateKey_R_boolean(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:updateKey", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	{
	LINE_NUMBER(392);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isRMSLoaded) != 0) goto label_1;
	}
	SM_nro_ShowBoss_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(393);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isLoading) == 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(396);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) == 0) goto label_3;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(397);
	frame[0].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossRects;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(398);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossRects;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = (checkCast(ctx, &class_nro_ShowBoss$ClickRect, sp[0].o));
	LINE_NUMBER(399);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_w), ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_h));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(400);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_8;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_8;
	{
	LINE_NUMBER(401);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(402);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(403);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(404);
	jint temp0 = frame[0].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_14;
	}
	{
	LINE_NUMBER(405);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[2].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(406);
	jint temp0 = (jint)SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(407);
	SM_nro_ShowBoss_teleportToBoss_nro_Char(ctx, (frame[2].o));
	goto label_14;
	}
label_17:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[3].o = sp[0].o;
	LINE_NUMBER(410);
	if ((frame[3].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(411);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(412);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(413);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_npcFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(414);
	((nro_Char *) NULL_CHECK((frame[3].o)))->F_charFocus = (jref) (frame[2].o);
	}
label_20:;
	{
	LINE_NUMBER(416);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(417);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" \u0111ang \u0111\u1ee9ng ch\u1edd, ch\u01b0a th\u1ec3 t\u1ea5n c\u00f4ng!"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_14:;
	{
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(397);
	INST_IINC(0, 1);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(428);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) == 0) goto label_26;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(429);
	frame[0].i = (jint(0));
	}
label_28:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_notifRects;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(430);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_notifRects;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[1].o = (checkCast(ctx, &class_nro_ShowBoss$ClickRect, sp[0].o));
	LINE_NUMBER(431);
	if ((frame[1].o) == nullptr) goto label_31;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_w), ((jint)((nro_ShowBoss$ClickRect *) NULL_CHECK((frame[1].o)))->F_h));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(432);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_31;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_31;
	{
	LINE_NUMBER(433);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerClick = (jint(0));
	LINE_NUMBER(434);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(435);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(436);
	jint temp0 = frame[0].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_37;
	}
	{
	LINE_NUMBER(437);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[0].i));
	frame[2].o = (checkCast(ctx, &class_nro_ShowBoss$BossNotice, sp[0].o));
	LINE_NUMBER(438);
	SM_nro_ShowBoss_onClickActiveBossNotif_nro_ShowBoss$BossNotice(ctx, (frame[2].o));
	}
label_37:;
	{
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return (jint(1));
	}
label_31:;
	{
	LINE_NUMBER(429);
	INST_IINC(0, 1);
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_addActiveBoss_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:addActiveBoss", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(450);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(453);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(455);
	frame[2].i = (jint(0));
	}
label_7:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_8;
	}
	{
	LINE_NUMBER(456);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_ShowBoss$BossNotice, sp[0].o));
	LINE_NUMBER(457);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[3].o)))->F_nameBoss;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(458);
	((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[3].o)))->F_mapName = (jref) (frame[1].o);
	LINE_NUMBER(459);
	sp[0].o = frame[3].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ShowBoss$BossNotice *) NULL_CHECK(sp[0].o))->F_appearTime = temp0;
	LINE_NUMBER(460);
	if ((frame[2].i) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(461);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(462);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	((func_java_util_Vector_insertElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_insertElementAt_java_lang_Object_int])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	}
label_15:;
	LINE_NUMBER(464);
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(455);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(468);
	clinit_nro_ShowBoss$BossNotice(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ShowBoss$BossNotice);
	init_nro_ShowBoss$BossNotice(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(469);
	((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[2].o)))->F_nameBoss = (jref) (frame[0].o);
	LINE_NUMBER(470);
	((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[2].o)))->F_mapName = (jref) (frame[1].o);
	LINE_NUMBER(471);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ShowBoss$BossNotice *) NULL_CHECK(sp[0].o))->F_appearTime = temp0;
	LINE_NUMBER(472);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	((func_java_util_Vector_insertElementAt_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_insertElementAt_java_lang_Object_int])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_22:;
	{
	LINE_NUMBER(474);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (jint(5))) goto label_23;
	}
	{
	LINE_NUMBER(475);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	clinit_nro_ShowBoss(ctx);
	sp[1].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[1].o);
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	goto label_22;
	}
label_23:;
	LINE_NUMBER(477);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_removeActiveBoss_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:removeActiveBoss", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(480);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(482);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 - (jint(1)));
	}
label_4:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(483);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_ShowBoss$BossNotice, sp[0].o));
	LINE_NUMBER(484);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[3].o)))->F_nameBoss;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[3].o)))->F_nameBoss;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(486);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(487);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (frame[2].i));
	}
label_8:;
	{
	LINE_NUMBER(482);
	INST_IINC(2, -1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(491);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_addKilledBossBanner_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:addKilledBossBanner", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(494);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[0].o = sp[0].o;
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(497);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(499);
	SM_nro_ShowBoss_removeActiveBoss_java_lang_String(ctx, (frame[0].o));
	LINE_NUMBER(501);
	clinit_nro_ShowBoss$KilledBossBanner(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ShowBoss$KilledBossBanner);
	init_nro_ShowBoss$KilledBossBanner(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(502);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[2].o)))->F_nameBoss = (jref) (frame[0].o);
	LINE_NUMBER(503);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[2].o)))->F_playerKill = (jref) (frame[1].o);
	LINE_NUMBER(504);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK(sp[0].o))->F_startShowTime = temp0;
	LINE_NUMBER(505);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[2].o)))->F_currentX = (-350);
	LINE_NUMBER(506);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[2].o)))->F_targetX = (8);
	LINE_NUMBER(507);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[2].o)))->F_isShowing = (jint(1));
	LINE_NUMBER(508);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[2].o)))->F_isDone = (jint(0));
	LINE_NUMBER(510);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	}
label_16:;
	{
	LINE_NUMBER(511);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 <= (jint(4))) goto label_17;
	}
	{
	LINE_NUMBER(512);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (jint(0)));
	goto label_16;
	}
label_17:;
	LINE_NUMBER(514);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_handleChatVip_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:handleChatVip", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(517);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(519);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(523);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ti\u00eau di\u1ec7t"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"h\u1ea1 g\u1ee5c"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"tieu diet"_j))));
	if (temp0 != 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ha guc"_j))));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(524);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(525);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(527);
	frame[5].i = (jint(-1));
	LINE_NUMBER(528);
	frame[6].i = (jint(0));
	LINE_NUMBER(529);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"v\u1eeba ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(530);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"v\u1eeba ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(531);
	frame[6].i = (18);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(532);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\u0111\u00e3 ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c"_j))));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(533);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\u0111\u00e3 ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(534);
	frame[6].i = (17);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(535);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c"_j))));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(536);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ti\u00eau di\u1ec7t \u0111\u01b0\u1ee3c"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(537);
	frame[6].i = (14);
	goto label_14;
	}
label_18:;
	{
	LINE_NUMBER(538);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\u0111\u00e3 ti\u00eau di\u1ec7t"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(539);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"\u0111\u00e3 ti\u00eau di\u1ec7t"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(540);
	frame[6].i = (12);
	goto label_14;
	}
label_21:;
	{
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ti\u00eau di\u1ec7t"_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(542);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ti\u00eau di\u1ec7t"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(543);
	frame[6].i = (9);
	goto label_14;
	}
label_24:;
	{
	LINE_NUMBER(544);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"h\u1ea1 g\u1ee5c"_j))));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(545);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"h\u1ea1 g\u1ee5c"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(546);
	frame[6].i = (6);
	}
label_14:;
	{
	LINE_NUMBER(549);
	if ((frame[5].i) == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(551);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[5].i) + (frame[6].i)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(553);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = frame[3].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"m\u1ecdi ng\u01b0\u1eddi"_j))));
	frame[9].i = temp0;
	LINE_NUMBER(559);
	if ((frame[9].i) != (jint(-1))) goto label_36;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"moi nguoi"_j))));
	frame[9].i = temp0;
	}
label_36:;
	{
	LINE_NUMBER(560);
	if ((frame[9].i) == (jint(-1))) goto label_37;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[7].o), (jint(0)), (frame[9].i));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_37:;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boss "_j))));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[7].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_39:;
	{
	LINE_NUMBER(566);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != 0) goto label_41;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"!"_j))));
	if (temp0 == 0) goto label_42;
	}
label_41:;
	{
	LINE_NUMBER(567);
	sp[0].o = frame[7].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_42:;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[7].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(571);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(572);
	SM_nro_ShowBoss_addKilledBossBanner_java_lang_String_java_lang_String(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(579);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"xu\u1ea5t hi\u1ec7n"_j))));
	if (temp0 != 0) goto label_46;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"appear"_j))));
	if (temp0 == 0) goto label_47;
	}
label_46:;
	{
	LINE_NUMBER(580);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(581);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(583);
	frame[5].i = (jint(-1));
	LINE_NUMBER(584);
	frame[6].i = (jint(0));
	LINE_NUMBER(585);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"v\u1eeba xu\u1ea5t hi\u1ec7n t\u1ea1i"_j))));
	if (temp0 == 0) goto label_52;
	}
	{
	LINE_NUMBER(586);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"v\u1eeba xu\u1ea5t hi\u1ec7n t\u1ea1i"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(587);
	frame[6].i = (17);
	goto label_55;
	}
label_52:;
	{
	LINE_NUMBER(588);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"xu\u1ea5t hi\u1ec7n t\u1ea1i"_j))));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(589);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"xu\u1ea5t hi\u1ec7n t\u1ea1i"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(590);
	frame[6].i = (13);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(591);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"appear at"_j))));
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(592);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"appear at"_j))));
	frame[5].i = temp0;
	LINE_NUMBER(593);
	frame[6].i = (9);
	}
label_55:;
	{
	LINE_NUMBER(596);
	if ((frame[5].i) == (jint(-1))) goto label_47;
	}
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[5].i));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[5].i) + (frame[6].i)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boss "_j))));
	if (temp0 == 0) goto label_64;
	}
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[3].o), (jint(5)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	goto label_66;
	}
label_64:;
	{
	LINE_NUMBER(602);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boss: "_j))));
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[3].o), (6));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_66:;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(607);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"khu v\u1ef1c"_j))));
	frame[9].i = temp0;
	LINE_NUMBER(608);
	if ((frame[9].i) != (jint(-1))) goto label_70;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"khu vuc"_j))));
	frame[9].i = temp0;
	}
label_70:;
	{
	LINE_NUMBER(609);
	if ((frame[9].i) != (jint(-1))) goto label_71;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"kv "_j))));
	frame[9].i = temp0;
	}
label_71:;
	{
	LINE_NUMBER(610);
	if ((frame[9].i) != (jint(-1))) goto label_72;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8"(khu"_j))));
	frame[9].i = temp0;
	}
label_72:;
	{
	LINE_NUMBER(612);
	if ((frame[9].i) == (jint(-1))) goto label_73;
	}
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[7].o), (jint(0)), (frame[9].i));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	goto label_75;
	}
label_73:;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[7].o));
	frame[4].o = sp[0].o;
	}
label_75:;
	{
	LINE_NUMBER(618);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"."_j))));
	if (temp0 != 0) goto label_76;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	if (temp0 == 0) goto label_77;
	}
label_76:;
	{
	LINE_NUMBER(619);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_77:;
	{
	LINE_NUMBER(622);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_47;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_47;
	}
	{
	LINE_NUMBER(623);
	SM_nro_ShowBoss_addActiveBoss_java_lang_String_java_lang_String(ctx, (frame[3].o), (frame[4].o));
	}
label_47:;
	LINE_NUMBER(627);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_update(jcontext ctx) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	{
	LINE_NUMBER(630);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isRMSLoaded) != 0) goto label_1;
	}
	SM_nro_ShowBoss_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(631);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[0].l = temp0;
	LINE_NUMBER(634);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	frame[2].i = (temp1 - (jint(1)));
	}
label_3:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(635);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_ShowBoss$KilledBossBanner, sp[0].o));
	LINE_NUMBER(636);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	if (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[3].o)))->F_isDone) == 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(637);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	((func_java_util_Vector_removeElementAt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeElementAt_int])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(638);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(640);
	((func_nro_ShowBoss$KilledBossBanner_update_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_nro_ShowBoss$KilledBossBanner_update_long])(ctx, (frame[3].o), (frame[0].l));
	}
label_10:;
	{
	LINE_NUMBER(634);
	INST_IINC(2, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(644);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(645);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(647);
	frame[2].i = (jint(0));
	}
label_14:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_15;
	}
	{
	LINE_NUMBER(648);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(649);
	if ((frame[3].o) == nullptr) goto label_18;
	}
	{
	jint temp0 = (jint)SM_nro_ShowBoss_isBossChar_nro_Char_R_boolean(ctx, (frame[3].o));
	if (temp0 == 0) goto label_18;
	}
	{
	jint temp0 = (jint)SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(ctx, (frame[3].o));
	if (temp0 == 0) goto label_18;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp0 = (jint)((func_java_util_Vector_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(650);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_18:;
	{
	LINE_NUMBER(647);
	INST_IINC(2, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(654);
	frame[2].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_12;
	}
	{
	LINE_NUMBER(655);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(656);
	if ((frame[3].o) == nullptr) goto label_23;
	}
	{
	jint temp0 = (jint)SM_nro_ShowBoss_isBossChar_nro_Char_R_boolean(ctx, (frame[3].o));
	if (temp0 == 0) goto label_23;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp0 = (jint)((func_java_util_Vector_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(657);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_23:;
	{
	LINE_NUMBER(654);
	INST_IINC(2, 1);
	goto label_20;
	}
label_12:;
	{
	LINE_NUMBER(663);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isAutoFocusBoss) == 0) goto label_25;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	frame[2].o = sp[0].o;
	LINE_NUMBER(665);
	if ((frame[2].o) == nullptr) goto label_28;
	}
	{
	jint temp0 = (jint)SM_nro_ShowBoss_isBossChar_nro_Char_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_28;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[2].o)))->F_cHP), (jlong(0)))) <= 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(666);
	if ((frame[3].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(667);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(668);
	frame[5].i = (jint(0));
	}
label_33:;
	{
	jint temp0 = frame[5].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_34;
	}
	{
	LINE_NUMBER(669);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(670);
	if ((frame[6].o) == nullptr) goto label_37;
	}
	{
	jint temp0 = (jint)SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(ctx, (frame[6].o));
	if (temp0 == 0) goto label_37;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[6].o)))->F_cHP), (jlong(0)))) <= 0) goto label_37;
	}
	{
	LINE_NUMBER(671);
	frame[4].o = (frame[6].o);
	LINE_NUMBER(672);
	goto label_34;
	}
label_37:;
	{
	LINE_NUMBER(668);
	INST_IINC(5, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(675);
	if ((frame[4].o) != nullptr) goto label_40;
	}
	{
	LINE_NUMBER(676);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	sp[0].o = (jobject)((func_java_util_Vector_firstElement_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_firstElement_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	}
label_40:;
	{
	LINE_NUMBER(678);
	if ((frame[4].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_mobFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(680);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_itemFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(681);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_npcFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(682);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus = (jref) (frame[4].o);
	}
label_25:;
	LINE_NUMBER(686);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_paintLineToBoss_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:paintLineToBoss", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(689);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isLineToBoss) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(691);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(693);
	if (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_ch) <= 0) goto label_5;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_ch) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_BIPUSH(18);
label_6:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(694);
	frame[3].i = (((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(695);
	frame[4].i = ((((jint)((nro_Char *) NULL_CHECK((frame[1].o)))->F_cy) - (frame[2].i)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	LINE_NUMBER(697);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[5].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_11;
	}
	{
	LINE_NUMBER(698);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(699);
	if ((frame[6].o) == nullptr) goto label_14;
	}
	{
	if ((longCompare(((jlong)((nro_Char *) NULL_CHECK((frame[6].o)))->F_cHP), (jlong(0)))) > 0) goto label_15;
	}
	goto label_14;
label_15:;
	{
	LINE_NUMBER(701);
	if (((jint)((nro_Char *) NULL_CHECK((frame[6].o)))->F_ch) <= 0) goto label_16;
	}
	{
	jint temp0 = ((jint)((nro_Char *) NULL_CHECK((frame[6].o)))->F_ch) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_BIPUSH(18);
label_17:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(702);
	frame[8].i = (((jint)((nro_Char *) NULL_CHECK((frame[6].o)))->F_cx) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(703);
	frame[9].i = ((((jint)((nro_Char *) NULL_CHECK((frame[6].o)))->F_cy) - (frame[7].i)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	LINE_NUMBER(705);
	jint temp0 = (jint)SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(ctx, (frame[6].o));
	frame[10].i = temp0;
	LINE_NUMBER(706);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[1].o)))->F_charFocus;
	if (sp[0].o != (frame[6].o)) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(709);
	if ((frame[10].i) == 0) goto label_25;
	}
	{
	LINE_NUMBER(710);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(13840175)));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(712);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16771899)));
	}
label_27:;
	{
	LINE_NUMBER(714);
	((func_lib_mGraphics_drawLine_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawLine_int_int_int_int])(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[8].i), (frame[9].i));
	LINE_NUMBER(717);
	if ((frame[11].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(718);
	((func_lib_mGraphics_drawLine_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawLine_int_int_int_int])(ctx, (frame[0].o), ((frame[3].i) + (jint(1))), (frame[4].i), ((frame[8].i) + (jint(1))), (frame[9].i));
	}
label_14:;
	{
	LINE_NUMBER(697);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_ShowBoss_paint_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[31];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:paint", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(724);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isRMSLoaded) != 0) goto label_1;
	}
	SM_nro_ShowBoss_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(725);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isLoading) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(727);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[0].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[0].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(728);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(731);
	SM_nro_ShowBoss_paintLineToBoss_lib_mGraphics(ctx, (frame[0].o));
	LINE_NUMBER(733);
	frame[1].i = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (7));
	LINE_NUMBER(734);
	frame[2].i = (40);
	LINE_NUMBER(735);
	frame[3].i = (11);
	LINE_NUMBER(736);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(738);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellowSmall;
	if (sp[0].o == nullptr) goto label_10;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_yellowSmall;
	goto label_11;
label_10:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7_yellow;
label_11:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(739);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_redSmall;
	if (sp[0].o == nullptr) goto label_13;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_redSmall;
	goto label_14;
label_13:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7_red;
label_14:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(740);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	if (sp[0].o == nullptr) goto label_16;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_darkSmall;
	goto label_17;
label_16:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7_grey;
label_17:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(743);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_notifRects;
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(744);
	frame[8].i = (8);
	LINE_NUMBER(745);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBoss) == 0) goto label_21;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(746);
	frame[9].i = (jint(0));
	LINE_NUMBER(747);
	frame[10].i = (jint(0));
	}
label_24:;
	{
	jint temp0 = frame[10].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_25;
	}
	{
	LINE_NUMBER(748);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[10].i));
	frame[11].o = (checkCast(ctx, &class_nro_ShowBoss$BossNotice, sp[0].o));
	LINE_NUMBER(749);
	if ((frame[11].o) == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(750);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_nro_ShowBoss$BossNotice_getDisplayText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_nro_ShowBoss$BossNotice_getDisplayText_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	frame[12].i = temp0;
	LINE_NUMBER(751);
	if ((frame[12].i) <= (frame[9].i)) goto label_28;
	}
	INST_ILOAD(12);
	INST_ISTORE(9);
label_28:;
	{
	LINE_NUMBER(747);
	INST_IINC(10, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(755);
	frame[10].i = ((frame[9].i) + (12));
	LINE_NUMBER(756);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp0 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	frame[11].i = ((temp0 * (frame[3].i)) + (jint(5)));
	LINE_NUMBER(757);
	frame[12].i = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (frame[8].i)) - (frame[10].i));
	LINE_NUMBER(758);
	frame[13].i = ((frame[2].i) - (jint(2)));
	LINE_NUMBER(760);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (jint(1393979)), (jfloat(0.55f)));
	LINE_NUMBER(761);
	((func_lib_mGraphics_fillRoundRect_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRoundRect_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[12].i), (frame[13].i), (frame[10].i), (frame[11].i), (jint(3)), (jint(3)));
	LINE_NUMBER(763);
	frame[14].i = (jint(0));
	}
label_37:;
	{
	jint temp0 = frame[14].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_38;
	}
	{
	LINE_NUMBER(764);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_activeBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[14].i));
	frame[15].o = (checkCast(ctx, &class_nro_ShowBoss$BossNotice, sp[0].o));
	LINE_NUMBER(765);
	if ((frame[15].o) != nullptr) goto label_41;
	}
	goto label_42;
label_41:;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((func_nro_ShowBoss$BossNotice_getDisplayText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_nro_ShowBoss$BossNotice_getDisplayText_R_java_lang_String])(ctx, (frame[15].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(768);
	frame[17].i = ((frame[2].i) + ((frame[14].i) * (frame[3].i)));
	LINE_NUMBER(770);
	frame[18].o = (frame[5].o);
	LINE_NUMBER(771);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapName;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	sp[0].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[15].o)))->F_mapName;
	if (sp[0].o == nullptr) goto label_46;
	}
	{
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_mapName;
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((nro_ShowBoss$BossNotice *) NULL_CHECK((frame[15].o)))->F_mapName;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(772);
	frame[18].o = (frame[6].o);
	}
label_46:;
	{
	LINE_NUMBER(774);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, (frame[18].o), (frame[0].o), (frame[16].o), (((frame[12].i) + (frame[10].i)) - (jint(5))), (frame[17].i), (jint(1)), (frame[7].o));
	LINE_NUMBER(776);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_notifRects;
	clinit_nro_ShowBoss$ClickRect(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ShowBoss$ClickRect);
	init_nro_ShowBoss$ClickRect_int_int_int_int(ctx, sp[1].o, (frame[12].i), ((frame[17].i) - (jint(1))), (frame[10].i), (frame[3].i));
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_42:;
	{
	LINE_NUMBER(763);
	INST_IINC(14, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(779);
	frame[4].i = (((frame[13].i) + (frame[11].i)) + (6));
	}
label_21:;
	{
	LINE_NUMBER(783);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossRects;
	((func_java_util_Vector_removeAllElements) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_removeAllElements])(ctx, sp[0].o);
	LINE_NUMBER(784);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isShowBossInMap) == 0) goto label_50;
	}
	{
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp0 = (jint)((func_java_util_Vector_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_50;
	}
	{
	LINE_NUMBER(785);
	frame[9].i = (13);
	LINE_NUMBER(786);
	frame[10].i = (jint(2));
	LINE_NUMBER(788);
	frame[11].i = (jint(0));
	LINE_NUMBER(789);
	frame[12].i = (jint(0));
	}
label_55:;
	{
	jint temp0 = frame[12].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_56;
	}
	{
	LINE_NUMBER(790);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[12].i));
	frame[13].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(791);
	if ((frame[13].o) == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_61;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_Res_distance_int_int_int_int_R_int(ctx, temp0, ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy), ((jint)((nro_Char *) NULL_CHECK((frame[13].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[13].o)))->F_cy));
	jint temp2 = temp1 / (10);
	sp[0].i = temp2;
	sp += 1;
	goto label_62;
	}
label_61:;
	INST_ICONST(0);
label_62:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(793);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_64;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o != (frame[13].o)) goto label_64;
	}
	INST_ICONST(1);
	goto label_65;
label_64:;
	INST_ICONST(0);
label_65:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(794);
	if ((frame[15].i) == 0) goto label_67;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"> "_j));
	goto label_68;
label_67:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_68:;
	{
	sp -= 1;
	frame[16].o = sp[0].o;
	LINE_NUMBER(795);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[16].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((frame[12].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8". "_j))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[13].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ["_j))));
	sp[1].o = (jobject)SM_nro_NinjaUtil_getMoneys_long_R_java_lang_String(ctx, ((jlong)((nro_Char *) NULL_CHECK((frame[13].o)))->F_cHP));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"] ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[14].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"m)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[17].o = sp[0].o;
	LINE_NUMBER(796);
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[5].o), (frame[17].o));
	frame[18].i = temp0;
	LINE_NUMBER(797);
	if ((frame[18].i) <= (frame[11].i)) goto label_59;
	}
	INST_ILOAD(18);
	INST_ISTORE(11);
label_59:;
	{
	LINE_NUMBER(789);
	INST_IINC(12, 1);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(801);
	frame[12].i = ((frame[11].i) + (12));
	LINE_NUMBER(802);
	frame[13].i = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (frame[8].i)) - (frame[12].i));
	LINE_NUMBER(803);
	frame[14].i = (((frame[13].i) + (frame[12].i)) - (jint(5)));
	LINE_NUMBER(805);
	frame[15].i = (jint(0));
	}
label_75:;
	{
	jint temp0 = frame[15].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_50;
	}
	{
	LINE_NUMBER(806);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossesInZone;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[15].i));
	frame[16].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(807);
	if ((frame[16].o) != nullptr) goto label_78;
	}
	goto label_79;
label_78:;
	{
	LINE_NUMBER(809);
	frame[17].i = ((frame[4].i) + ((frame[15].i) * ((frame[9].i) + (frame[10].i))));
	LINE_NUMBER(811);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_81;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK(sp[0].o))->F_charFocus;
	if (sp[0].o != (frame[16].o)) goto label_81;
	}
	INST_ICONST(1);
	goto label_82;
label_81:;
	INST_ICONST(0);
label_82:;
	{
	sp -= 1;
	frame[18].i = sp[0].i;
	LINE_NUMBER(812);
	jint temp0 = (jint)SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean(ctx, (frame[16].o));
	frame[19].i = temp0;
	LINE_NUMBER(815);
	if ((frame[18].i) == 0) goto label_85;
	}
	{
	LINE_NUMBER(816);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (jint(2259032)), (jfloat(0.7f)));
	LINE_NUMBER(817);
	((func_lib_mGraphics_fillRoundRect_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRoundRect_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[13].i), (frame[17].i), (frame[12].i), (frame[9].i), (jint(3)), (jint(3)));
	LINE_NUMBER(818);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (jint(5628064)), (jfloat(0.85f)));
	LINE_NUMBER(819);
	((func_lib_mGraphics_drawRoundRect_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRoundRect_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[13].i), (frame[17].i), (frame[12].i), (frame[9].i), (jint(3)), (jint(3)));
	goto label_90;
	}
label_85:;
	{
	LINE_NUMBER(821);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (jint(1731405)), (jfloat(0.55f)));
	LINE_NUMBER(822);
	((func_lib_mGraphics_fillRoundRect_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRoundRect_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[13].i), (frame[17].i), (frame[12].i), (frame[9].i), (jint(3)), (jint(3)));
	}
label_90:;
	{
	LINE_NUMBER(825);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (sp[0].o == nullptr) goto label_92;
	}
	{
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp0 = (jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cx;
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	jint temp1 = (jint)SM_nro_Res_distance_int_int_int_int_R_int(ctx, temp0, ((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy), ((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cx), ((jint)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cy));
	jint temp2 = temp1 / (10);
	sp[0].i = temp2;
	sp += 1;
	goto label_93;
	}
label_92:;
	INST_ICONST(0);
label_93:;
	{
	sp -= 1;
	frame[20].i = sp[0].i;
	LINE_NUMBER(826);
	if ((frame[18].i) == 0) goto label_95;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"> "_j));
	goto label_96;
label_95:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_96:;
	{
	sp -= 1;
	frame[21].o = sp[0].o;
	LINE_NUMBER(827);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[21].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((frame[15].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8". "_j))));
	sp[1].o = (jobject)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" ["_j))));
	sp[1].o = (jobject)SM_nro_NinjaUtil_getMoneys_long_R_java_lang_String(ctx, ((jlong)((nro_Char *) NULL_CHECK((frame[16].o)))->F_cHP));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"] ("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[20].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"m)"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[22].o = sp[0].o;
	LINE_NUMBER(830);
	if ((frame[19].i) == 0) goto label_99;
	}
	INST_ALOAD(6);
	goto label_100;
label_99:;
	INST_ALOAD(5);
label_100:;
	{
	sp -= 1;
	frame[23].o = sp[0].o;
	LINE_NUMBER(831);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, (frame[23].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, (frame[23].o), (frame[0].o), (frame[22].o), (frame[14].i), ((frame[17].i) + (jint(2))), (jint(1)), (frame[7].o));
	LINE_NUMBER(833);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_bossRects;
	clinit_nro_ShowBoss$ClickRect(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_ShowBoss$ClickRect);
	init_nro_ShowBoss$ClickRect_int_int_int_int(ctx, sp[1].o, (frame[13].i), (frame[17].i), (frame[12].i), (frame[9].i));
	((func_java_util_Vector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_addElement_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_79:;
	{
	LINE_NUMBER(805);
	INST_IINC(15, 1);
	goto label_75;
	}
label_50:;
	{
	LINE_NUMBER(838);
	if ((clinit_nro_ShowBoss(ctx), (jint)SF_nro_ShowBoss_isNotifKillBoss) == 0) goto label_103;
	}
	{
	LINE_NUMBER(839);
	frame[9].i = (65);
	LINE_NUMBER(840);
	frame[10].i = (16);
	LINE_NUMBER(841);
	frame[11].i = (jint(0));
	}
label_107:;
	{
	jint temp0 = frame[11].i;
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	jint temp1 = (jint)((func_java_util_Vector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_103;
	}
	{
	LINE_NUMBER(842);
	clinit_nro_ShowBoss(ctx);
	sp[0].o = (jobject)SF_nro_ShowBoss_killedBossNotif;
	sp[0].o = (jobject)((func_java_util_Vector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Vector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[11].i));
	frame[12].o = (checkCast(ctx, &class_nro_ShowBoss$KilledBossBanner, sp[0].o));
	LINE_NUMBER(843);
	if ((frame[12].o) == nullptr) goto label_110;
	}
	{
	if (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[12].o)))->F_isShowing) != 0) goto label_111;
	}
	goto label_110;
label_111:;
	{
	LINE_NUMBER(844);
	frame[13].i = ((frame[9].i) + ((frame[11].i) * (frame[10].i)));
	LINE_NUMBER(845);
	((func_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int])(ctx, (frame[12].o), (frame[0].o), (frame[13].i));
	}
label_110:;
	{
	LINE_NUMBER(841);
	INST_IINC(11, 1);
	goto label_107;
	}
label_103:;
	LINE_NUMBER(848);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_ShowBoss_isBossInMap_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:isBossInMap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(851);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_vCharInMap;
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(852);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(853);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(854);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_vCharInMap;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_nro_Char, sp[0].o));
	LINE_NUMBER(855);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cName;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((nro_Char *) NULL_CHECK((frame[3].o)))->F_cName;
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(857);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[4].o), (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(858);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(853);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(862);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_nro_ShowBoss(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss(ctx);
	{
	LINE_NUMBER(20);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBoss = (jint(1));
	LINE_NUMBER(21);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isNotifKillBoss = (jint(1));
	LINE_NUMBER(22);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isShowBossInMap = (jint(1));
	LINE_NUMBER(23);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isLineToBoss = (jint(1));
	LINE_NUMBER(24);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isAutoFocusBoss = (jint(0));
	LINE_NUMBER(25);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_isRMSLoaded = (jint(0));
	LINE_NUMBER(28);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_activeBossNotif = sp[0].o;
	LINE_NUMBER(29);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_killedBossNotif = sp[0].o;
	LINE_NUMBER(30);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_bossesInZone = sp[0].o;
	LINE_NUMBER(33);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_bossRects = sp[0].o;
	LINE_NUMBER(34);
	clinit_java_util_Vector(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Vector);
	init_java_util_Vector(ctx, sp[0].o);
	clinit_nro_ShowBoss(ctx);
	SF_nro_ShowBoss_notifRects = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ShowBoss[] {
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
	(void *) M_nro_ShowBoss_perform_int_java_lang_Object,
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

static jclass innerClasses[] {
	&class_nro_ShowBoss$BossNotice,
	&class_nro_ShowBoss$ClickRect,
	&class_nro_ShowBoss$KilledBossBanner,
};

static FieldMetadata fields[] {
	{ "instance", &class_nro_ShowBoss, (intptr_t) &SF_nro_ShowBoss_instance, "Lnro/ShowBoss;", 10 },
	{ "isShowBoss", &class_boolean, (intptr_t) &SF_nro_ShowBoss_isShowBoss, "Z", 9 },
	{ "isNotifKillBoss", &class_boolean, (intptr_t) &SF_nro_ShowBoss_isNotifKillBoss, "Z", 9 },
	{ "isShowBossInMap", &class_boolean, (intptr_t) &SF_nro_ShowBoss_isShowBossInMap, "Z", 9 },
	{ "isLineToBoss", &class_boolean, (intptr_t) &SF_nro_ShowBoss_isLineToBoss, "Z", 9 },
	{ "isAutoFocusBoss", &class_boolean, (intptr_t) &SF_nro_ShowBoss_isAutoFocusBoss, "Z", 9 },
	{ "isRMSLoaded", &class_boolean, (intptr_t) &SF_nro_ShowBoss_isRMSLoaded, "Z", 10 },
	{ "activeBossNotif", &class_java_util_Vector, (intptr_t) &SF_nro_ShowBoss_activeBossNotif, "Ljava/util/Vector;", 25 },
	{ "killedBossNotif", &class_java_util_Vector, (intptr_t) &SF_nro_ShowBoss_killedBossNotif, "Ljava/util/Vector;", 25 },
	{ "bossesInZone", &class_java_util_Vector, (intptr_t) &SF_nro_ShowBoss_bossesInZone, "Ljava/util/Vector;", 25 },
	{ "bossRects", &class_java_util_Vector, (intptr_t) &SF_nro_ShowBoss_bossRects, "Ljava/util/Vector;", 25 },
	{ "notifRects", &class_java_util_Vector, (intptr_t) &SF_nro_ShowBoss_notifRects, "Ljava/util/Vector;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ShowBoss, 0, "()V", 1 },
	{ "gI", (intptr_t) SM_nro_ShowBoss_gI_R_nro_ShowBoss, 0, "()Lnro/ShowBoss;", 9 },
	{ "loadRMS", (intptr_t) SM_nro_ShowBoss_loadRMS, 0, "()V", 9 },
	{ "saveRMS", (intptr_t) SM_nro_ShowBoss_saveRMS, 0, "()V", 9 },
	{ "showSBMenu", (intptr_t) SM_nro_ShowBoss_showSBMenu, 0, "()V", 9 },
	{ "perform", (intptr_t) M_nro_ShowBoss_perform_int_java_lang_Object, VTABLE_nro_ShowBoss_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
	{ "handleChatCommand", (intptr_t) SM_nro_ShowBoss_handleChatCommand_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "isBossFighting", (intptr_t) SM_nro_ShowBoss_isBossFighting_nro_Char_R_boolean, 0, "(Lnro/Char;)Z", 9 },
	{ "isBossChar", (intptr_t) SM_nro_ShowBoss_isBossChar_nro_Char_R_boolean, 0, "(Lnro/Char;)Z", 9 },
	{ "moveTo", (intptr_t) SM_nro_ShowBoss_moveTo_int_int, 0, "(II)V", 9 },
	{ "teleportToBoss", (intptr_t) SM_nro_ShowBoss_teleportToBoss_nro_Char, 0, "(Lnro/Char;)V", 9 },
	{ "onClickActiveBossNotif", (intptr_t) SM_nro_ShowBoss_onClickActiveBossNotif_nro_ShowBoss$BossNotice, 0, "(Lnro/ShowBoss$BossNotice;)V", 9 },
	{ "updateKey", (intptr_t) SM_nro_ShowBoss_updateKey_R_boolean, 0, "()Z", 9 },
	{ "addActiveBoss", (intptr_t) SM_nro_ShowBoss_addActiveBoss_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "removeActiveBoss", (intptr_t) SM_nro_ShowBoss_removeActiveBoss_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "addKilledBossBanner", (intptr_t) SM_nro_ShowBoss_addKilledBossBanner_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "handleChatVip", (intptr_t) SM_nro_ShowBoss_handleChatVip_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "update", (intptr_t) SM_nro_ShowBoss_update, 0, "()V", 9 },
	{ "paintLineToBoss", (intptr_t) SM_nro_ShowBoss_paintLineToBoss_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "paint", (intptr_t) SM_nro_ShowBoss_paint_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "isBossInMap", (intptr_t) SM_nro_ShowBoss_isBossInMap_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_ShowBoss, 0, "()V", 8 },
};

Class class_nro_ShowBoss{
		.nativeName = (intptr_t) "nro/ShowBoss",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ShowBoss),
		.classVtable = (intptr_t) vtable_nro_ShowBoss,
		.staticInitializer = (intptr_t) clinit_nro_ShowBoss,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ShowBoss,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ShowBoss = registerClass(&class_nro_ShowBoss);

}

