#include "nro/mScreen.h"
#include "nro/Paint.h"
#include "java/lang/Object.h"
#include "nro/Dialog.h"
#include "lib/input/ChatTextField.h"
#include "lib/mGraphics.h"
#include "main/GameCanvas.h"
#include "nro/mScreen.h"
#include "nro/ChatPopup.h"
#include "nro/Command.h"
#include "nro/Menu.h"

extern "C" {

jint SF_nro_mScreen_ITEM_HEIGHT;
jint SF_nro_mScreen_yOpenKeyBoard;
jint SF_nro_mScreen_cmdH;
jint SF_nro_mScreen_keyTouch;

void mark_nro_mScreen(jobject object, jint mark, jint depth) {
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
	auto self = (nro_mScreen *) object;
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_center)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_center)->clazz)->markFunction)((jobject) self->F_center, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
}

void init_nro_mScreen(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_mScreen(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_mScreen_switchToMe(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:switchToMe", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(18);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(19);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentScreen = (frame[0].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_mScreen_keyPress_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:keyPress", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_mScreen_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:update", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_mScreen_updateKey(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:updateKey", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(5)))) != 0) goto label_1;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[0].o))->F_center;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(31);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(0));
	LINE_NUMBER(32);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(33);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_6;
	}
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_center;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_center;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(43);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (12))) != 0) goto label_10;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[0].o))->F_left;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(44);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	LINE_NUMBER(45);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(46);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_15;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(56);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, (13))) != 0) goto label_19;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[0].o))->F_right;
	jint temp0 = (jint)SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(57);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_keyPressed;
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(0));
	LINE_NUMBER(58);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	LINE_NUMBER(59);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_24;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_right;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_right;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}
label_24:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_right;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_20:;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:getCmdPointerLast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_mScreen(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(73);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(75);
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_x) < 0) goto label_3;
	}
	{
	if (((jint)((nro_Command *) NULL_CHECK((frame[0].o)))->F_y) == 0) goto label_3;
	}
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_nro_Command_isPointerPressInside_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_Command_isPointerPressInside_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(78);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(79);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[0].o))->F_center;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)) >> (jint(1))), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(5))), (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard), ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH) + (10)));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(80);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(1));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[1].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[1].o))->F_center;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerClick;
	if ((--sp)->i == 0) goto label_7;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_7;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(86);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (jint(0)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(5))), (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard), ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH) + (10)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(87);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(0));
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[1].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[1].o))->F_left;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerClick;
	if ((--sp)->i == 0) goto label_11;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_11;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(93);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[0].o))->F_right;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(5))), (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard), ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH) + (10)));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(94);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(2));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[1].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[1].o))->F_right;
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[1].o))->F_right;
	if (sp[0].o != sp[1].o) goto label_15;
	}
label_18:;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerClick;
	if ((--sp)->i == 0) goto label_15;
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_15;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[1].o))->F_left;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (jint(0)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(5))), (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard), ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH) + (10)));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(101);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(0));
	LINE_NUMBER(102);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_20;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_20;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jint(1));
	}
label_20:;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[1].o))->F_right;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(5))), (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard), ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH) + (10)));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(108);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(2));
	LINE_NUMBER(109);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_24;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_24;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_currentScreen;
	sp[1].o = (jobject)((nro_mScreen *) NULL_CHECK(sp[1].o))->F_center;
	if (sp[0].o == sp[1].o) goto label_28;
	}
	clinit_nro_ChatPopup(ctx);
	(sp++)->o = SF_nro_ChatPopup_currChatPopup;
	if ((--sp)->o == nullptr) goto label_15;
label_28:;
	{
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard)) >> (jint(1))), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) - (jint(5))), (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_yOpenKeyBoard), ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH) + (10)));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(115);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(1));
	LINE_NUMBER(116);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerClick) == 0) goto label_15;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->i = SF_main_GameCanvas_isPointerJustRelease;
	if ((--sp)->i == 0) goto label_15;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_nro_mScreen_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:paint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_lib_mGraphics_getTranslateX_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateX_R_int])(ctx, (frame[1].o));
	jint temp1 = -temp0;
	jint temp2 = (jint)((func_lib_mGraphics_getTranslateY_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_getTranslateY_R_int])(ctx, (frame[1].o));
	((func_lib_mGraphics_translate_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_translate_int_int])(ctx, sp[0].o, temp1, (-temp2));
	LINE_NUMBER(128);
	((func_lib_mGraphics_setClip_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setClip_int_int_int_int])(ctx, (frame[1].o), (jint(0)), (jint(0)), (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) + (jint(1))));
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_3;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_currentDialog;
	if ((--sp)->o != nullptr) goto label_3;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_menu;
	if (((jint)((nro_Menu *) NULL_CHECK(sp[0].o))->F_showMenu) != 0) goto label_3;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_left;
	sp[2].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_center;
	sp[3].o = (jobject)((nro_mScreen *) NULL_CHECK((frame[0].o)))->F_right;
	SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_3:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_mScreen(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/mScreen:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_mScreen(ctx);
	{
	LINE_NUMBER(12);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_yOpenKeyBoard = (68);
	LINE_NUMBER(13);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_cmdH = (26);
	LINE_NUMBER(14);
	clinit_nro_mScreen(ctx);
	SF_nro_mScreen_keyTouch = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_mScreen[] {
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
	(void *) M_nro_mScreen_switchToMe,
	(void *) M_nro_mScreen_keyPress_int,
	(void *) M_nro_mScreen_update,
	(void *) M_nro_mScreen_updateKey,
	(void *) M_nro_mScreen_paint_lib_mGraphics,
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
	{ "switchToMe", "()V" },
	{ "keyPress", "(I)V" },
	{ "update", "()V" },
	{ "updateKey", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "left", &class_nro_Command, offsetof(nro_mScreen, F_left), "Lnro/Command;", 1 },
	{ "center", &class_nro_Command, offsetof(nro_mScreen, F_center), "Lnro/Command;", 1 },
	{ "right", &class_nro_Command, offsetof(nro_mScreen, F_right), "Lnro/Command;", 1 },
	{ "ITEM_HEIGHT", &class_int, (intptr_t) &SF_nro_mScreen_ITEM_HEIGHT, "I", 9 },
	{ "yOpenKeyBoard", &class_int, (intptr_t) &SF_nro_mScreen_yOpenKeyBoard, "I", 9 },
	{ "cmdH", &class_int, (intptr_t) &SF_nro_mScreen_cmdH, "I", 9 },
	{ "keyTouch", &class_int, (intptr_t) &SF_nro_mScreen_keyTouch, "I", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_mScreen, 0, "()V", 1 },
	{ "switchToMe", (intptr_t) M_nro_mScreen_switchToMe, VTABLE_nro_mScreen_switchToMe, "()V", 1 },
	{ "keyPress", (intptr_t) M_nro_mScreen_keyPress_int, VTABLE_nro_mScreen_keyPress_int, "(I)V", 1 },
	{ "update", (intptr_t) M_nro_mScreen_update, VTABLE_nro_mScreen_update, "()V", 1 },
	{ "updateKey", (intptr_t) M_nro_mScreen_updateKey, VTABLE_nro_mScreen_updateKey, "()V", 1 },
	{ "getCmdPointerLast", (intptr_t) SM_nro_mScreen_getCmdPointerLast_nro_Command_R_boolean, 0, "(Lnro/Command;)Z", 9 },
	{ "paint", (intptr_t) M_nro_mScreen_paint_lib_mGraphics, VTABLE_nro_mScreen_paint_lib_mGraphics, "(Llib/mGraphics;)V", 1 },
	{ "<clinit>", (intptr_t) clinit_nro_mScreen, 0, "()V", 8 },
};

Class class_nro_mScreen{
		.nativeName = (intptr_t) "nro/mScreen",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_mScreen),
		.classVtable = (intptr_t) vtable_nro_mScreen,
		.staticInitializer = (intptr_t) clinit_nro_mScreen,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_mScreen,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_mScreen = registerClass(&class_nro_mScreen);

}

