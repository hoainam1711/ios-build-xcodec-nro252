#include "nro/FPSSettings.h"
#include "java/lang/Math.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuilder.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/FPSSettings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/InfoMe.h"
#include "nro/FPSSettings_Option.h"
#include "nro/Rms.h"
#include "com/nro/GameMain.h"
#include "java/lang/Throwable.h"

extern "C" {

jbool SF_nro_FPSSettings_isShow;
jbool SF_nro_FPSSettings_isShowCase;
jbool SF_nro_FPSSettings_isRMSLoaded;
jobject SF_nro_FPSSettings_OPTIONS;
jint SF_nro_FPSSettings_selectedIndex;
jobject SF_nro_FPSSettings_CORNER_CLIP_6;
jobject SF_nro_FPSSettings_R_L;
jobject SF_nro_FPSSettings_R_R;
jobject SF_nro_FPSSettings_BTN_CLIP_5;

void mark_nro_FPSSettings(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_FPSSettings_OPTIONS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_FPSSettings_OPTIONS)->clazz)->markFunction)((jobject) SF_nro_FPSSettings_OPTIONS, mark, depth + 1);
		if (SF_nro_FPSSettings_CORNER_CLIP_6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_FPSSettings_CORNER_CLIP_6)->clazz)->markFunction)((jobject) SF_nro_FPSSettings_CORNER_CLIP_6, mark, depth + 1);
		if (SF_nro_FPSSettings_R_L)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_FPSSettings_R_L)->clazz)->markFunction)((jobject) SF_nro_FPSSettings_R_L, mark, depth + 1);
		if (SF_nro_FPSSettings_R_R)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_FPSSettings_R_R)->clazz)->markFunction)((jobject) SF_nro_FPSSettings_R_R, mark, depth + 1);
		if (SF_nro_FPSSettings_BTN_CLIP_5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_FPSSettings_BTN_CLIP_5)->clazz)->markFunction)((jobject) SF_nro_FPSSettings_BTN_CLIP_5, mark, depth + 1);
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
	auto self = (nro_FPSSettings *) object;
}

void init_nro_FPSSettings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_loadRMS(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:loadRMS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(48);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isRMSLoaded) == 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(49);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isRMSLoaded = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(51);
	jint temp0 = (jint)SM_nro_Rms_loadRMSInt_java_lang_String_R_int(ctx, (((jobject) createStringLiteral(ctx, u8"fps_opt_idx"_j))));
	frame[0].i = temp0;
	LINE_NUMBER(52);
	if ((frame[0].i) < 0) goto label_7;
	}
	{
	jint temp0 = frame[0].i;
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(53);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_selectedIndex = (frame[0].i);
	goto label_1;
	}
label_7:;
	{
	LINE_NUMBER(55);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_selectedIndex = (9);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(59);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(57);
	frame[0].o = sp[0].o;
	LINE_NUMBER(58);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_selectedIndex = (9);
	}
label_9:;
	{
	LINE_NUMBER(60);
	SM_nro_FPSSettings_applyFPS(ctx);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_saveRMS(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:saveRMS", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(65);
	SM_nro_Rms_saveRMSInt_java_lang_String_int(ctx, (((jobject) createStringLiteral(ctx, u8"fps_opt_idx"_j))), (clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_selectedIndex));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(68);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(66);
	frame[0].o = sp[0].o;
	LINE_NUMBER(67);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_applyFPS(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:applyFPS", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(72);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_selectedIndex) < 0) goto label_1;
	}
	{
	clinit_nro_FPSSettings(ctx);
	jint temp0 = (jint)SF_nro_FPSSettings_selectedIndex;
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(73);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_selectedIndex = (9);
	}
label_2:;
	{
	LINE_NUMBER(75);
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	frame[0].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_selectedIndex)));
	LINE_NUMBER(76);
	if (((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[0].o)))->F_fpsValue) != 0) goto label_4;
	}
	{
	LINE_NUMBER(77);
	SM_com_nro_GameMain_setFpsConfig_int_boolean_boolean(ctx, (jint(0)), (jint(1)), (jint(0)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(78);
	if (((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[0].o)))->F_fpsValue) != (jint(-1))) goto label_7;
	}
	{
	LINE_NUMBER(79);
	SM_com_nro_GameMain_setFpsConfig_int_boolean_boolean(ctx, (jint(-1)), (jint(0)), (jint(1)));
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(81);
	SM_com_nro_GameMain_setFpsConfig_int_boolean_boolean(ctx, ((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[0].o)))->F_fpsValue), (jint(0)), (jint(0)));
	}
label_6:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getDialogW_R_int(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getDialogW", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (242), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (20)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getDialogH_R_int(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getDialogH", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (236), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (20)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getDialogX_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getDialogX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(94);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_w;
	jint temp1 = (jint)SM_nro_FPSSettings_getDialogW_R_int(ctx);
	popStackFrame(ctx);
	return ((temp0 - temp1) / (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getDialogY_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getDialogY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(98);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_h;
	jint temp1 = (jint)SM_nro_FPSSettings_getDialogH_R_int(ctx);
	popStackFrame(ctx);
	return ((temp0 - temp1) / (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getCaseW_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getCaseW", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (96);
	}

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getCaseH_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getCaseH", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (42);
	}

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getCaseX_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getCaseX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(111);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_w;
	jint temp1 = (jint)SM_nro_FPSSettings_getCaseW_R_int(ctx);
	popStackFrame(ctx);
	return ((temp0 - temp1) / (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getCaseY_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getCaseY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(115);
	clinit_main_GameCanvas(ctx);
	jint temp0 = (jint)SF_main_GameCanvas_h;
	jint temp1 = (jint)SM_nro_FPSSettings_getCaseH_R_int(ctx);
	popStackFrame(ctx);
	return ((temp0 - temp1) - (jint(2)));
	}

	popStackFrame(ctx);
}

jbool SM_nro_FPSSettings_updateKey_R_boolean(jcontext ctx) {
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:updateKey", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(119);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isRMSLoaded) != 0) goto label_1;
	}
	SM_nro_FPSSettings_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(122);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isShow) == 0) goto label_2;
	}
	{
	LINE_NUMBER(123);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_4;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_4;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)SM_nro_FPSSettings_getDialogW_R_int(ctx);
	frame[0].i = temp0;
	LINE_NUMBER(125);
	jint temp1 = (jint)SM_nro_FPSSettings_getDialogH_R_int(ctx);
	frame[1].i = temp1;
	LINE_NUMBER(126);
	jint temp2 = (jint)SM_nro_FPSSettings_getDialogX_R_int(ctx);
	frame[2].i = temp2;
	LINE_NUMBER(127);
	jint temp3 = (jint)SM_nro_FPSSettings_getDialogY_R_int(ctx);
	frame[3].i = temp3;
	LINE_NUMBER(130);
	jint temp4 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[2].i), (frame[3].i), (frame[0].i), (frame[1].i));
	if (temp4 != 0) goto label_10;
	}
	{
	LINE_NUMBER(131);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShow = (jint(0));
	LINE_NUMBER(132);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(137);
	frame[4].i = ((frame[0].i) - (28));
	LINE_NUMBER(138);
	frame[5].i = (26);
	LINE_NUMBER(139);
	frame[6].i = ((frame[2].i) + (14));
	LINE_NUMBER(140);
	frame[7].i = (((frame[3].i) + (frame[1].i)) - (33));
	LINE_NUMBER(141);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[7].i), (frame[4].i), (frame[5].i));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(142);
	SM_nro_FPSSettings_applyFPS(ctx);
	LINE_NUMBER(143);
	SM_nro_FPSSettings_saveRMS(ctx);
	LINE_NUMBER(144);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(145);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_info1;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u00e3 l\u01b0u: "_j))));
	clinit_nro_FPSSettings(ctx);
	sp[2].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	sp[2].o = (jobject)((nro_FPSSettings$Option *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_selectedIndex)))))->F_label;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_nro_InfoMe_addInfo_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_InfoMe_addInfo_java_lang_String_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
label_22:;
	{
	LINE_NUMBER(147);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShow = (jint(0));
	LINE_NUMBER(148);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShowCase = (jint(0));
	LINE_NUMBER(149);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(1));
	}
label_18:;
	{
	LINE_NUMBER(154);
	frame[8].i = ((frame[2].i) + (16));
	LINE_NUMBER(155);
	frame[9].i = (((frame[2].i) + ((frame[0].i) / (jint(2)))) + (8));
	LINE_NUMBER(156);
	frame[10].i = ((frame[3].i) + (36));
	LINE_NUMBER(157);
	frame[11].i = (22);
	LINE_NUMBER(159);
	frame[12].i = (jint(0));
	}
label_31:;
	{
	jint temp0 = frame[12].i;
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_32;
	}
	{
	LINE_NUMBER(160);
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)));
	LINE_NUMBER(161);
	if (((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[13].o)))->F_col) != 0) goto label_35;
	}
	INST_ILOAD(8);
	goto label_36;
label_35:;
	INST_ILOAD(9);
label_36:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(162);
	frame[15].i = ((frame[10].i) + (((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[13].o)))->F_row) * (frame[11].i)));
	LINE_NUMBER(163);
	if (((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[13].o)))->F_row) != 0) goto label_39;
	}
	{
	jint temp0 = (frame[0].i) - (32);
	sp[0].i = temp0;
	sp += 1;
	goto label_40;
	}
label_39:;
	{
	jint temp0 = ((frame[0].i) / (jint(2))) - (16);
	sp[0].i = temp0;
	sp += 1;
	}
label_40:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(165);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((frame[14].i) - (jint(2))), (frame[15].i), (frame[16].i), (frame[11].i));
	if (temp0 == 0) goto label_42;
	}
	{
	LINE_NUMBER(166);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_selectedIndex = (frame[12].i);
	LINE_NUMBER(167);
	SM_nro_FPSSettings_applyFPS(ctx);
	LINE_NUMBER(168);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (jint(1));
	}
label_42:;
	{
	LINE_NUMBER(159);
	INST_IINC(12, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(174);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(181);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isShowCase) == 0) goto label_48;
	}
	{
	LINE_NUMBER(182);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_48;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_48;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)SM_nro_FPSSettings_getCaseX_R_int(ctx);
	frame[0].i = temp0;
	LINE_NUMBER(184);
	jint temp1 = (jint)SM_nro_FPSSettings_getCaseY_R_int(ctx);
	frame[1].i = temp1;
	LINE_NUMBER(185);
	jint temp2 = (jint)SM_nro_FPSSettings_getCaseW_R_int(ctx);
	frame[2].i = temp2;
	LINE_NUMBER(186);
	jint temp3 = (jint)SM_nro_FPSSettings_getCaseH_R_int(ctx);
	frame[3].i = temp3;
	LINE_NUMBER(187);
	jint temp4 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	if (temp4 == 0) goto label_55;
	}
	{
	LINE_NUMBER(188);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShow = (jint(1));
	LINE_NUMBER(189);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (jint(1));
	}
label_55:;
	{
	LINE_NUMBER(194);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (jint(0)), (jint(0)), (160), (45));
	if (temp0 != 0) goto label_48;
	}
	{
	LINE_NUMBER(195);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShowCase = (jint(0));
	LINE_NUMBER(196);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (jint(1));
	}
label_48:;
	{
	LINE_NUMBER(204);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_62;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_62;
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (jint(0)), (jint(0)), (160), (45));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(206);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isShowCase) != 0) goto label_65;
	}
	INST_ICONST(1);
	goto label_66;
label_65:;
	INST_ICONST(0);
label_66:;
	{
	sp -= 1;
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShowCase = sp[0].i;
	LINE_NUMBER(207);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShow = (jint(0));
	LINE_NUMBER(208);
	SM_main_GameCanvas_clearAllPointerEvent(ctx);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jint(1));
	}
label_62:;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_paint_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:paint", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(217);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isRMSLoaded) != 0) goto label_1;
	}
	SM_nro_FPSSettings_loadRMS(ctx);
label_1:;
	{
	LINE_NUMBER(220);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isShowCase) == 0) goto label_2;
	}
	{
	LINE_NUMBER(221);
	SM_nro_FPSSettings_paintBottomCase_lib_mGraphics(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(225);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_isShow) == 0) goto label_4;
	}
	{
	LINE_NUMBER(226);
	SM_nro_FPSSettings_paintDialog_lib_mGraphics(ctx, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getCornerClip6_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getCornerClip6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(234);
	if ((frame[0].i) >= (6)) goto label_1;
	}
	{
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_CORNER_CLIP_6;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)));
	}
label_1:;
	{
	LINE_NUMBER(235);
	if ((frame[0].i) < ((frame[1].i) - (6))) goto label_2;
	}
	{
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_CORNER_CLIP_6;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[1].i) - (jint(1))) - (frame[0].i))));
	}
label_2:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_drawPixelDialog_lib_mGraphics_int_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:drawPixelDialog", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(241);
	frame[6].i = (jint(803715));
	LINE_NUMBER(242);
	frame[7].i = (jint(669805));
	LINE_NUMBER(243);
	frame[8].i = (jint(15722456));
	LINE_NUMBER(245);
	frame[9].i = (jint(0));
	}
label_4:;
	{
	if ((frame[9].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)SM_nro_FPSSettings_getCornerClip6_int_int_R_int(ctx, (frame[9].i), (frame[4].i));
	frame[10].i = temp0;
	LINE_NUMBER(247);
	frame[11].i = ((frame[1].i) + (frame[10].i));
	LINE_NUMBER(248);
	frame[12].i = ((frame[3].i) - ((frame[10].i) * (jint(2))));
	LINE_NUMBER(250);
	if ((frame[9].i) == 0) goto label_10;
	}
	{
	if ((frame[9].i) == (jint(1))) goto label_10;
	}
	{
	if ((frame[9].i) == ((frame[4].i) - (jint(2)))) goto label_10;
	}
	{
	if ((frame[9].i) != ((frame[4].i) - (jint(1)))) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(251);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(252);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[11].i), ((frame[2].i) + (frame[9].i)), (frame[12].i), (jint(1)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(254);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(255);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[11].i), ((frame[2].i) + (frame[9].i)), (jint(2)), (jint(1)));
	LINE_NUMBER(256);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (((frame[11].i) + (frame[12].i)) - (jint(2))), ((frame[2].i) + (frame[9].i)), (jint(2)), (jint(1)));
	LINE_NUMBER(258);
	frame[13].i = ((frame[11].i) + (jint(2)));
	LINE_NUMBER(259);
	frame[14].i = ((frame[12].i) - (jint(4)));
	LINE_NUMBER(260);
	if ((frame[14].i) > 0) goto label_19;
	}
	goto label_13;
label_19:;
	{
	LINE_NUMBER(262);
	if ((frame[9].i) >= ((frame[5].i) - (jint(1)))) goto label_20;
	}
	{
	LINE_NUMBER(263);
	if ((frame[9].i) == (jint(2))) goto label_22;
	}
	{
	if ((frame[9].i) != (jint(3))) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(264);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(4367861)));
	goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(265);
	if ((frame[9].i) < (jint(4))) goto label_25;
	}
	{
	if ((frame[9].i) > ((frame[5].i) - (jint(4)))) goto label_25;
	}
	{
	LINE_NUMBER(266);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(2001125)));
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(268);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(1402304)));
	}
label_24:;
	{
	LINE_NUMBER(270);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[13].i), ((frame[2].i) + (frame[9].i)), (frame[14].i), (jint(1)));
	goto label_13;
	}
label_20:;
	{
	LINE_NUMBER(271);
	if ((frame[9].i) != ((frame[5].i) - (jint(1)))) goto label_27;
	}
	{
	LINE_NUMBER(272);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(273);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[13].i), ((frame[2].i) + (frame[9].i)), (frame[14].i), (jint(1)));
	goto label_13;
	}
label_27:;
	{
	LINE_NUMBER(274);
	if ((frame[9].i) != (frame[5].i)) goto label_30;
	}
	{
	LINE_NUMBER(275);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16512750)));
	LINE_NUMBER(276);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[13].i), ((frame[2].i) + (frame[9].i)), (frame[14].i), (jint(1)));
	goto label_13;
	}
label_30:;
	{
	LINE_NUMBER(278);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(279);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[13].i), ((frame[2].i) + (frame[9].i)), (frame[14].i), (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(245);
	INST_IINC(9, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(283);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_drawPixelRadio_lib_mGraphics_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:drawPixelRadio", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(290);
	if ((frame[3].i) == 0) goto label_1;
	}
	(sp++)->i = jint(669805);
	goto label_2;
label_1:;
	(sp++)->i = jint(2829099);
label_2:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(292);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (14)) goto label_5;
	}
	{
	LINE_NUMBER(293);
	jint temp0 = frame[1].i;
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_R_L;
	frame[6].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))));
	LINE_NUMBER(294);
	jint temp1 = frame[1].i;
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_R_R;
	frame[7].i = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i))));
	LINE_NUMBER(295);
	frame[8].i = (((frame[7].i) - (frame[6].i)) + (jint(1)));
	LINE_NUMBER(297);
	if ((frame[5].i) == 0) goto label_10;
	}
	{
	if ((frame[5].i) != (13)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(298);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(299);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[6].i), ((frame[2].i) + (frame[5].i)), (frame[8].i), (jint(1)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(300);
	if ((frame[5].i) == (jint(1))) goto label_14;
	}
	{
	if ((frame[5].i) != (12)) goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(301);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(302);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[6].i), ((frame[2].i) + (frame[5].i)), (jint(2)), (jint(1)));
	LINE_NUMBER(303);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[7].i) - (jint(1))), ((frame[2].i) + (frame[5].i)), (jint(2)), (jint(1)));
	LINE_NUMBER(304);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16777215)));
	LINE_NUMBER(305);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (jint(2))), ((frame[2].i) + (frame[5].i)), ((frame[8].i) - (jint(4))), (jint(1)));
	goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(307);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(308);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[6].i), ((frame[2].i) + (frame[5].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(309);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[7].i), ((frame[2].i) + (frame[5].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(310);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(16777215)));
	LINE_NUMBER(311);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[6].i) + (jint(1))), ((frame[2].i) + (frame[5].i)), ((frame[8].i) - (jint(2))), (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(292);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(316);
	if ((frame[3].i) == 0) goto label_24;
	}
	{
	LINE_NUMBER(317);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(870305)));
	LINE_NUMBER(318);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(5))), ((frame[2].i) + (jint(4))), (jint(4)), (jint(1)));
	LINE_NUMBER(319);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(4))), ((frame[2].i) + (jint(5))), (6), (jint(4)));
	LINE_NUMBER(320);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(5))), ((frame[2].i) + (9)), (jint(4)), (jint(1)));
	LINE_NUMBER(323);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(6600182)));
	LINE_NUMBER(324);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), ((frame[1].i) + (jint(5))), ((frame[2].i) + (jint(5))), (jint(2)), (jint(1)));
	}
label_24:;
	LINE_NUMBER(326);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_nro_FPSSettings_getBtnClip_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:getBtnClip", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(332);
	if ((frame[0].i) >= (jint(5))) goto label_1;
	}
	{
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_BTN_CLIP_5;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)));
	}
label_1:;
	{
	LINE_NUMBER(333);
	if ((frame[0].i) < ((frame[1].i) - (jint(5)))) goto label_2;
	}
	{
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_BTN_CLIP_5;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[1].i) - (jint(1))) - (frame[0].i))));
	}
label_2:;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_drawPixelButton_lib_mGraphics_int_int_int_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:drawPixelButton", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(338);
	frame[6].i = (jint(87963));
	LINE_NUMBER(340);
	frame[7].i = (jint(0));
	}
label_2:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(341);
	jint temp0 = (jint)SM_nro_FPSSettings_getBtnClip_int_int_R_int(ctx, (frame[7].i), (frame[4].i));
	frame[8].i = temp0;
	LINE_NUMBER(342);
	frame[9].i = ((frame[1].i) + (frame[8].i));
	LINE_NUMBER(343);
	frame[10].i = ((frame[3].i) - ((frame[8].i) * (jint(2))));
	LINE_NUMBER(345);
	if ((frame[7].i) == 0) goto label_8;
	}
	{
	if ((frame[7].i) != ((frame[4].i) - (jint(1)))) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(346);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(347);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[9].i), ((frame[2].i) + (frame[7].i)), (frame[10].i), (jint(1)));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(349);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(350);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[9].i), ((frame[2].i) + (frame[7].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(351);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (((frame[9].i) + (frame[10].i)) - (jint(1))), ((frame[2].i) + (frame[7].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(353);
	frame[11].i = ((frame[9].i) + (jint(1)));
	LINE_NUMBER(354);
	frame[12].i = ((frame[10].i) - (jint(2)));
	LINE_NUMBER(355);
	if ((frame[12].i) > 0) goto label_17;
	}
	goto label_11;
label_17:;
	{
	LINE_NUMBER(357);
	if ((frame[7].i) != (jint(1))) goto label_18;
	}
	{
	LINE_NUMBER(358);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(8508666)));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(359);
	if ((frame[7].i) < (jint(2))) goto label_21;
	}
	{
	if ((frame[7].i) > (10)) goto label_21;
	}
	{
	LINE_NUMBER(360);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(2733814)));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(361);
	if ((frame[7].i) != (11)) goto label_23;
	}
	{
	LINE_NUMBER(362);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(240116)));
	goto label_20;
	}
label_23:;
	{
	LINE_NUMBER(363);
	if ((frame[7].i) < (12)) goto label_25;
	}
	{
	if ((frame[7].i) > ((frame[4].i) - (jint(3)))) goto label_25;
	}
	{
	LINE_NUMBER(364);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(166097)));
	goto label_20;
	}
label_25:;
	{
	LINE_NUMBER(366);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(161725)));
	}
label_20:;
	{
	LINE_NUMBER(368);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[11].i), ((frame[2].i) + (frame[7].i)), (frame[12].i), (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(340);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(373);
	frame[7].i = ((frame[1].i) + ((frame[3].i) / (jint(2))));
	LINE_NUMBER(374);
	jint temp0 = frame[2].i;
	jint temp1 = frame[4].i;
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	jint temp2 = (jint)((func_lib_mFont_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_getHeight_R_int])(ctx, sp[0].o);
	frame[8].i = ((temp0 + ((temp1 - temp2) / (jint(2)))) + (jint(1)));
	LINE_NUMBER(375);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[5].o), ((frame[7].i) + (jint(1))), ((frame[8].i) + (jint(1))), (jint(2)));
	LINE_NUMBER(376);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (frame[5].o), (frame[7].i), (frame[8].i), (jint(2)));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_paintBottomCase_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:paintBottomCase", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(380);
	jint temp0 = (jint)SM_nro_FPSSettings_getCaseX_R_int(ctx);
	frame[1].i = temp0;
	LINE_NUMBER(381);
	jint temp1 = (jint)SM_nro_FPSSettings_getCaseY_R_int(ctx);
	frame[2].i = temp1;
	LINE_NUMBER(382);
	jint temp2 = (jint)SM_nro_FPSSettings_getCaseW_R_int(ctx);
	frame[3].i = temp2;
	LINE_NUMBER(383);
	jint temp3 = (jint)SM_nro_FPSSettings_getCaseH_R_int(ctx);
	frame[4].i = temp3;
	LINE_NUMBER(384);
	frame[5].i = (jint(87963));
	LINE_NUMBER(386);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(387);
	jint temp0 = (jint)SM_nro_FPSSettings_getCornerClip6_int_int_R_int(ctx, (frame[6].i), (frame[4].i));
	frame[7].i = temp0;
	LINE_NUMBER(388);
	frame[8].i = ((frame[1].i) + (frame[7].i));
	LINE_NUMBER(389);
	frame[9].i = ((frame[3].i) - ((frame[7].i) * (jint(2))));
	LINE_NUMBER(391);
	if ((frame[6].i) == 0) goto label_12;
	}
	{
	if ((frame[6].i) != ((frame[4].i) - (jint(1)))) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(392);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(393);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[8].i), ((frame[2].i) + (frame[6].i)), (frame[9].i), (jint(1)));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(395);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(396);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[8].i), ((frame[2].i) + (frame[6].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(397);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (((frame[8].i) + (frame[9].i)) - (jint(1))), ((frame[2].i) + (frame[6].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(399);
	frame[10].i = ((frame[8].i) + (jint(1)));
	LINE_NUMBER(400);
	frame[11].i = ((frame[9].i) - (jint(2)));
	LINE_NUMBER(401);
	if ((frame[11].i) > 0) goto label_21;
	}
	goto label_15;
label_21:;
	{
	LINE_NUMBER(403);
	if ((frame[6].i) != (jint(1))) goto label_22;
	}
	{
	LINE_NUMBER(404);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(8508666)));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(405);
	if ((frame[6].i) < (jint(2))) goto label_25;
	}
	{
	if ((frame[6].i) > (16)) goto label_25;
	}
	{
	LINE_NUMBER(406);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(2733814)));
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(407);
	if ((frame[6].i) != (17)) goto label_27;
	}
	{
	LINE_NUMBER(408);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(240116)));
	goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(409);
	if ((frame[6].i) < (18)) goto label_29;
	}
	{
	if ((frame[6].i) > ((frame[4].i) - (jint(3)))) goto label_29;
	}
	{
	LINE_NUMBER(410);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(166097)));
	goto label_24;
	}
label_29:;
	{
	LINE_NUMBER(412);
	((func_lib_mGraphics_setColor_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int])(ctx, (frame[0].o), (jint(161725)));
	}
label_24:;
	{
	LINE_NUMBER(414);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (frame[10].i), ((frame[2].i) + (frame[6].i)), (frame[11].i), (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(386);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(418);
	frame[6].i = ((frame[1].i) + ((frame[3].i) / (jint(2))));
	LINE_NUMBER(419);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\u0110i\u1ec1u Ch\u1ec9nh"_j))), ((frame[6].i) + (jint(1))), ((frame[2].i) + (8)), (jint(2)));
	LINE_NUMBER(420);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\u0110i\u1ec1u Ch\u1ec9nh"_j))), (frame[6].i), ((frame[2].i) + (7)), (jint(2)));
	LINE_NUMBER(422);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"FPS"_j))), ((frame[6].i) + (jint(1))), ((frame[2].i) + (23)), (jint(2)));
	LINE_NUMBER(423);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"FPS"_j))), (frame[6].i), ((frame[2].i) + (22)), (jint(2)));
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_FPSSettings_paintDialog_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[26];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:paintDialog", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(427);
	jint temp0 = (jint)SM_nro_FPSSettings_getDialogW_R_int(ctx);
	frame[1].i = temp0;
	LINE_NUMBER(428);
	jint temp1 = (jint)SM_nro_FPSSettings_getDialogH_R_int(ctx);
	frame[2].i = temp1;
	LINE_NUMBER(429);
	jint temp2 = (jint)SM_nro_FPSSettings_getDialogX_R_int(ctx);
	frame[3].i = temp2;
	LINE_NUMBER(430);
	jint temp3 = (jint)SM_nro_FPSSettings_getDialogY_R_int(ctx);
	frame[4].i = temp3;
	LINE_NUMBER(431);
	frame[5].i = (28);
	LINE_NUMBER(434);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[0].o), (jint(0)), (jfloat(0.45f)));
	LINE_NUMBER(435);
	((func_lib_mGraphics_fillRect_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_fillRect_int_int_int_int])(ctx, (frame[0].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h));
	LINE_NUMBER(438);
	SM_nro_FPSSettings_drawPixelDialog_lib_mGraphics_int_int_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[4].i), (frame[1].i), (frame[2].i), (frame[5].i));
	LINE_NUMBER(441);
	frame[6].i = ((frame[3].i) + ((frame[1].i) / (jint(2))));
	LINE_NUMBER(442);
	frame[7].i = ((frame[4].i) + (7));
	LINE_NUMBER(443);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"C\u00e0i \u0110\u1eb7t FPS"_j))), ((frame[6].i) + (jint(1))), ((frame[7].i) + (jint(1))), (jint(2)));
	LINE_NUMBER(444);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_white;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"C\u00e0i \u0110\u1eb7t FPS"_j))), (frame[6].i), (frame[7].i), (jint(2)));
	LINE_NUMBER(447);
	frame[8].i = ((frame[3].i) + (16));
	LINE_NUMBER(448);
	frame[9].i = (((frame[3].i) + ((frame[1].i) / (jint(2)))) + (8));
	LINE_NUMBER(449);
	frame[10].i = ((frame[4].i) + (36));
	LINE_NUMBER(450);
	frame[11].i = (22);
	LINE_NUMBER(452);
	frame[12].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[12].i;
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_18;
	}
	{
	LINE_NUMBER(453);
	clinit_nro_FPSSettings(ctx);
	sp[0].o = (jobject)SF_nro_FPSSettings_OPTIONS;
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)));
	LINE_NUMBER(454);
	if (((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[13].o)))->F_col) != 0) goto label_21;
	}
	INST_ILOAD(8);
	goto label_22;
label_21:;
	INST_ILOAD(9);
label_22:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(455);
	frame[15].i = ((frame[10].i) + (((jint)((nro_FPSSettings$Option *) NULL_CHECK((frame[13].o)))->F_row) * (frame[11].i)));
	LINE_NUMBER(456);
	if ((clinit_nro_FPSSettings(ctx), (jint)SF_nro_FPSSettings_selectedIndex) != (frame[12].i)) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(459);
	frame[17].i = ((frame[15].i) + (jint(3)));
	LINE_NUMBER(460);
	SM_nro_FPSSettings_drawPixelRadio_lib_mGraphics_int_int_boolean(ctx, (frame[0].o), (frame[14].i), (frame[17].i), (frame[16].i));
	LINE_NUMBER(463);
	frame[18].i = ((frame[14].i) + (18));
	LINE_NUMBER(464);
	frame[19].i = ((frame[17].i) + (jint(1)));
	LINE_NUMBER(465);
	if ((frame[16].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(466);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_blue;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((nro_FPSSettings$Option *) NULL_CHECK((frame[13].o)))->F_label;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[18].i), (frame[19].i), (jint(0)));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(468);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((nro_FPSSettings$Option *) NULL_CHECK((frame[13].o)))->F_label;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[18].i), (frame[19].i), (jint(0)));
	}
label_34:;
	{
	LINE_NUMBER(452);
	INST_IINC(12, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(473);
	frame[12].i = ((frame[1].i) - (28));
	LINE_NUMBER(474);
	frame[13].i = (26);
	LINE_NUMBER(475);
	frame[14].i = ((frame[3].i) + (14));
	LINE_NUMBER(476);
	frame[15].i = (((frame[4].i) + (frame[2].i)) - (33));
	LINE_NUMBER(477);
	SM_nro_FPSSettings_drawPixelButton_lib_mGraphics_int_int_int_int_java_lang_String(ctx, (frame[0].o), (frame[14].i), (frame[15].i), (frame[12].i), (frame[13].i), (((jobject) createStringLiteral(ctx, u8"L\u01b0u C\u00e0i \u0110\u1eb7t"_j))));
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_FPSSettings(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[9];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings:<clinit>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings(ctx);
	{
	LINE_NUMBER(10);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShow = (jint(0));
	LINE_NUMBER(11);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isShowCase = (jint(0));
	LINE_NUMBER(12);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_isRMSLoaded = (jint(0));
	LINE_NUMBER(28);
	sp[0].o = (jobject)createArray(ctx, &class_nro_FPSSettings$Option, (13));
	jint temp0 = jint(0);
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\u0110\u1ed3ng B\u1ed9 Theo M\u00e0n H\u00ecnh"_j))), (jint(0)), (jint(0)), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"5 FPS"_j))), (jint(5)), (jint(0)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"20 FPS"_j))), (20), (jint(0)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"35 FPS"_j))), (35), (jint(0)), (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"75 FPS"_j))), (75), (jint(0)), (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"120 FPS"_j))), (120), (jint(0)), (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"175 FPS"_j))), (175), (jint(0)), (6));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"10 FPS"_j))), (10), (jint(1)), (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"30 FPS"_j))), (30), (jint(1)), (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"60 FPS"_j))), (60), (jint(1)), (jint(3)));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"100 FPS"_j))), (100), (jint(1)), (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"144 FPS"_j))), (144), (jint(1)), (jint(5)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_nro_FPSSettings$Option(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_FPSSettings$Option);
	init_nro_FPSSettings$Option_java_lang_String_int_int_int(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Kh\u00f4ng Gi\u1edbi H\u1ea1n"_j))), (jint(-1)), (jint(1)), (6));
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_OPTIONS = sp[0].o;
	LINE_NUMBER(45);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_selectedIndex = (9);
	LINE_NUMBER(231);
	sp[0].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(0));
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_CORNER_CLIP_6 = sp[0].o;
	LINE_NUMBER(286);
	sp[0].o = (jobject) createArray(ctx, &class_int, (14));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(4));
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_R_L = sp[0].o;
	LINE_NUMBER(287);
	sp[0].o = (jobject) createArray(ctx, &class_int, (14));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (13);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (12);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (11);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (9);
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_R_R = sp[0].o;
	LINE_NUMBER(329);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	clinit_nro_FPSSettings(ctx);
	SF_nro_FPSSettings_BTN_CLIP_5 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_FPSSettings[] {
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

static jclass innerClasses[] {
	&class_nro_FPSSettings$Option,
};

static FieldMetadata fields[] {
	{ "isShow", &class_boolean, (intptr_t) &SF_nro_FPSSettings_isShow, "Z", 9 },
	{ "isShowCase", &class_boolean, (intptr_t) &SF_nro_FPSSettings_isShowCase, "Z", 9 },
	{ "isRMSLoaded", &class_boolean, (intptr_t) &SF_nro_FPSSettings_isRMSLoaded, "Z", 10 },
	{ "OPTIONS", getArrayClass(&class_nro_FPSSettings$Option, 1), (intptr_t) &SF_nro_FPSSettings_OPTIONS, "[Lnro/FPSSettings$Option;", 25 },
	{ "selectedIndex", &class_int, (intptr_t) &SF_nro_FPSSettings_selectedIndex, "I", 9 },
	{ "CORNER_CLIP_6", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_FPSSettings_CORNER_CLIP_6, "[I", 26 },
	{ "R_L", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_FPSSettings_R_L, "[I", 26 },
	{ "R_R", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_FPSSettings_R_R, "[I", 26 },
	{ "BTN_CLIP_5", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_FPSSettings_BTN_CLIP_5, "[I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_FPSSettings, 0, "()V", 1 },
	{ "loadRMS", (intptr_t) SM_nro_FPSSettings_loadRMS, 0, "()V", 9 },
	{ "saveRMS", (intptr_t) SM_nro_FPSSettings_saveRMS, 0, "()V", 9 },
	{ "applyFPS", (intptr_t) SM_nro_FPSSettings_applyFPS, 0, "()V", 9 },
	{ "getDialogW", (intptr_t) SM_nro_FPSSettings_getDialogW_R_int, 0, "()I", 9 },
	{ "getDialogH", (intptr_t) SM_nro_FPSSettings_getDialogH_R_int, 0, "()I", 9 },
	{ "getDialogX", (intptr_t) SM_nro_FPSSettings_getDialogX_R_int, 0, "()I", 9 },
	{ "getDialogY", (intptr_t) SM_nro_FPSSettings_getDialogY_R_int, 0, "()I", 9 },
	{ "getCaseW", (intptr_t) SM_nro_FPSSettings_getCaseW_R_int, 0, "()I", 9 },
	{ "getCaseH", (intptr_t) SM_nro_FPSSettings_getCaseH_R_int, 0, "()I", 9 },
	{ "getCaseX", (intptr_t) SM_nro_FPSSettings_getCaseX_R_int, 0, "()I", 9 },
	{ "getCaseY", (intptr_t) SM_nro_FPSSettings_getCaseY_R_int, 0, "()I", 9 },
	{ "updateKey", (intptr_t) SM_nro_FPSSettings_updateKey_R_boolean, 0, "()Z", 9 },
	{ "paint", (intptr_t) SM_nro_FPSSettings_paint_lib_mGraphics, 0, "(Llib/mGraphics;)V", 9 },
	{ "getCornerClip6", (intptr_t) SM_nro_FPSSettings_getCornerClip6_int_int_R_int, 0, "(II)I", 10 },
	{ "drawPixelDialog", (intptr_t) SM_nro_FPSSettings_drawPixelDialog_lib_mGraphics_int_int_int_int_int, 0, "(Llib/mGraphics;IIIII)V", 10 },
	{ "drawPixelRadio", (intptr_t) SM_nro_FPSSettings_drawPixelRadio_lib_mGraphics_int_int_boolean, 0, "(Llib/mGraphics;IIZ)V", 10 },
	{ "getBtnClip", (intptr_t) SM_nro_FPSSettings_getBtnClip_int_int_R_int, 0, "(II)I", 10 },
	{ "drawPixelButton", (intptr_t) SM_nro_FPSSettings_drawPixelButton_lib_mGraphics_int_int_int_int_java_lang_String, 0, "(Llib/mGraphics;IIIILjava/lang/String;)V", 10 },
	{ "paintBottomCase", (intptr_t) SM_nro_FPSSettings_paintBottomCase_lib_mGraphics, 0, "(Llib/mGraphics;)V", 10 },
	{ "paintDialog", (intptr_t) SM_nro_FPSSettings_paintDialog_lib_mGraphics, 0, "(Llib/mGraphics;)V", 10 },
	{ "<clinit>", (intptr_t) clinit_nro_FPSSettings, 0, "()V", 8 },
};

Class class_nro_FPSSettings{
		.nativeName = (intptr_t) "nro/FPSSettings",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_FPSSettings),
		.classVtable = (intptr_t) vtable_nro_FPSSettings,
		.staticInitializer = (intptr_t) clinit_nro_FPSSettings,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_FPSSettings,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_FPSSettings = registerClass(&class_nro_FPSSettings);

}

