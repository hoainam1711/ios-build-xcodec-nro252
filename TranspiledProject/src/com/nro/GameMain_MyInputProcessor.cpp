#include "com/nro/GameMain_MyInputProcessor.h"
#include "nro/GameScr.h"
#include "lib/input/TField.h"
#include "lib/input/VietnameseTextUtils.h"
#include "nro/InputDlg.h"
#include "nro/AutoTrainMenu.h"
#include "main/GameCanvas.h"
#include "nro/Panel.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/mScreen.h"
#include "com/nro/GameMain.h"
#include "nro/Command.h"
#include "nro/Dialog.h"
#include "lib/mGraphics.h"
#include "com/nro/GameMain_MyInputProcessor.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "lib/input/ChatTextField.h"
#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "com/badlogic/gdx/InputProcessor.h"
#include "lib/MapKey.h"
#include "main/GameMidlet.h"
#include "com/badlogic/gdx/math/Vector3.h"

extern "C" {


void mark_com_nro_GameMain$MyInputProcessor(jobject object, jint mark, jint depth) {
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
	auto self = (com_nro_GameMain$MyInputProcessor *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_nro_GameMain$MyInputProcessor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_nro_GameMain$MyInputProcessor_com_nro_GameMain(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_GameMain$MyInputProcessor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(275);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_lastPhysicalKeyDown = (jint(0));
	LINE_NUMBER(276);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedBackspace = (jint(0));
	LINE_NUMBER(277);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedForwardDel = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:isAnyPressed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(280);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].i));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[2].i));
	if (temp0 == 0) goto label_1;
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

jbool M_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:isCtrlOrCmd", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (129));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = 130;
	LINE_NUMBER(285);
	jint temp1 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = 63;
	LINE_NUMBER(286);
	jint temp1 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_scrolled_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:scrolled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(290);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(291);
	if ((frame[1].i) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ILOAD(1);
	if ((--sp)->i >= 0) goto label_5;
	INST_ICONST(-1);
	goto label_4;
label_5:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(292);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(293);
	SM_nro_AutoTrainMenu_onScrolled_int(ctx, (frame[2].i));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_keyDown_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:keyDown", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(301);
	jint temp0 = (jint)M_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(302);
	jint temp1 = (jint)M_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean(ctx, (frame[0].o), (59), (60));
	frame[3].i = temp1;
	LINE_NUMBER(303);
	jint temp2 = (jint)M_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean(ctx, (frame[0].o), (57), (58));
	frame[4].i = temp2;
	LINE_NUMBER(304);
	if ((frame[2].i) == 0) goto label_4;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_4;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(306);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isInputFocused_R_boolean(ctx);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(307);
	if ((frame[5].i) == 0) goto label_9;
	}
	{
	if ((frame[1].i) == (50)) goto label_10;
	}
label_9:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_11;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_11;
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_11;
	{
	if ((frame[1].i) != (124)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)SM_com_nro_GameMain_readClipboardText_R_java_lang_String(ctx);
	SM_nro_AutoTrainMenu_pasteText_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(311);
	if ((frame[1].i) == (66)) goto label_13;
	}
	{
	if ((frame[1].i) == (160)) goto label_13;
	}
	{
	if ((frame[1].i) != (111)) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(312);
	SM_nro_AutoTrainMenu_finishFocusedInput(ctx);
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jint(1));
	}
label_14:;
	{
	LINE_NUMBER(315);
	if ((frame[1].i) == (67)) goto label_16;
	}
	{
	if ((frame[1].i) != (112)) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_main_GameCanvas_getActiveTextField_R_lib_input_TField(ctx);
	frame[6].o = sp[0].o;
	LINE_NUMBER(322);
	if ((frame[6].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(323);
	if ((frame[5].i) == 0) goto label_21;
	}
	{
	if ((frame[1].i) == (50)) goto label_22;
	}
label_21:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_23;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_23;
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_23;
	{
	if ((frame[1].i) != (124)) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)SM_com_nro_GameMain_readClipboardText_R_java_lang_String(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(325);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(326);
	((func_lib_input_TField_insertText_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_insertText_java_lang_String])(ctx, (frame[6].o), (frame[7].o));
	LINE_NUMBER(327);
	SM_lib_input_ChatTextField_syncActiveCaptions(ctx);
	}
label_25:;
	{
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(331);
	if ((frame[5].i) == 0) goto label_28;
	}
	{
	if ((frame[1].i) == (31)) goto label_29;
	}
label_28:;
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_30;
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_30;
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_30;
	{
	if ((frame[1].i) != (124)) goto label_30;
	}
label_29:;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_lib_input_TField_getSelectedOrAllText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_getSelectedOrAllText_R_java_lang_String])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(333);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_32;
	}
	{
	LINE_NUMBER(334);
	SM_com_nro_GameMain_writeClipboardText_java_lang_String(ctx, (frame[7].o));
	}
label_32:;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return (jint(1));
	}
label_30:;
	{
	LINE_NUMBER(338);
	if ((frame[5].i) == 0) goto label_34;
	}
	{
	if ((frame[1].i) == (52)) goto label_35;
	}
label_34:;
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_36;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_36;
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_36;
	{
	if ((frame[1].i) != (112)) goto label_36;
	}
label_35:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((func_lib_input_TField_getSelectedOrAllText_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_getSelectedOrAllText_R_java_lang_String])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(340);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(341);
	SM_com_nro_GameMain_writeClipboardText_java_lang_String(ctx, (frame[7].o));
	LINE_NUMBER(342);
	jint temp0 = (jint)((func_lib_input_TField_deleteSelection_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_deleteSelection_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_41;
	}
	{
	LINE_NUMBER(343);
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	}
label_41:;
	LINE_NUMBER(345);
	SM_lib_input_ChatTextField_syncActiveCaptions(ctx);
label_38:;
	{
	LINE_NUMBER(347);
	if ((frame[1].i) != (112)) goto label_43;
	}
	{
	LINE_NUMBER(348);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedForwardDel = (jint(1));
	}
label_43:;
	{
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return (jint(1));
	}
label_36:;
	{
	LINE_NUMBER(352);
	if ((frame[5].i) == 0) goto label_45;
	}
	{
	if ((frame[1].i) != (29)) goto label_45;
	}
	{
	LINE_NUMBER(353);
	((func_lib_input_TField_selectAll) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_selectAll])(ctx, (frame[6].o));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (jint(1));
	}
label_45:;
	{
	LINE_NUMBER(356);
	if ((frame[5].i) == 0) goto label_48;
	}
	{
	if ((frame[1].i) != (67)) goto label_48;
	}
	{
	LINE_NUMBER(357);
	((func_lib_input_TField_deletePrevWord) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_deletePrevWord])(ctx, (frame[6].o));
	LINE_NUMBER(358);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedBackspace = (jint(1));
	LINE_NUMBER(359);
	SM_lib_input_ChatTextField_syncActiveCaptions(ctx);
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (jint(1));
	}
label_48:;
	{
	LINE_NUMBER(362);
	if ((frame[5].i) == 0) goto label_53;
	}
	{
	if ((frame[1].i) != (112)) goto label_53;
	}
	{
	LINE_NUMBER(363);
	((func_lib_input_TField_deleteNextWord) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_deleteNextWord])(ctx, (frame[6].o));
	LINE_NUMBER(364);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedForwardDel = (jint(1));
	LINE_NUMBER(365);
	SM_lib_input_ChatTextField_syncActiveCaptions(ctx);
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jint(1));
	}
label_53:;
	{
	LINE_NUMBER(369);
	if ((frame[1].i) == (66)) goto label_58;
	}
	{
	if ((frame[1].i) != (160)) goto label_59;
	}
label_58:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_60;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o == nullptr) goto label_62;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_62:;
	{
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (jint(1));
	}
label_60:;
	{
	LINE_NUMBER(376);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_64;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_64;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_64;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_64;
	}
	{
	LINE_NUMBER(378);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o == nullptr) goto label_66;
	}
	{
	LINE_NUMBER(379);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_66:;
	{
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return (jint(1));
	}
label_64:;
	{
	LINE_NUMBER(383);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_68;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_68;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_68;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_68;
	}
	{
	LINE_NUMBER(385);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o == nullptr) goto label_70;
	}
	{
	LINE_NUMBER(386);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_70:;
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (jint(1));
	}
label_68:;
	{
	LINE_NUMBER(390);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if ((isInstance(ctx, sp[0].o, &class_nro_InputDlg)) == 0) goto label_72;
	}
	{
	LINE_NUMBER(391);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[0].o))->F_center;
	if (sp[0].o == nullptr) goto label_74;
	}
	{
	LINE_NUMBER(392);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[0].o))->F_center;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	}
label_74:;
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (jint(1));
	}
label_72:;
	{
	LINE_NUMBER(396);
	SM_main_GameCanvas_handleKeyPressed_int(ctx, (-5));
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (jint(1));
	}
label_59:;
	{
	LINE_NUMBER(400);
	if ((frame[1].i) != (111)) goto label_77;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_79;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, sp[0].o);
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (jint(1));
	}
label_79:;
	{
	LINE_NUMBER(405);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_82;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_82;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_82;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_82;
	}
	{
	LINE_NUMBER(407);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, sp[0].o);
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (jint(1));
	}
label_82:;
	{
	LINE_NUMBER(410);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_85;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_85;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_85;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_85;
	}
	{
	LINE_NUMBER(412);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, sp[0].o);
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return (jint(1));
	}
label_85:;
	{
	LINE_NUMBER(415);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if ((isInstance(ctx, sp[0].o, &class_nro_InputDlg)) == 0) goto label_88;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[0].o))->F_left;
	if (sp[0].o == nullptr) goto label_88;
	}
	{
	LINE_NUMBER(416);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	sp[0].o = (jobject)((nro_Dialog *) NULL_CHECK(sp[0].o))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return (jint(1));
	}
label_88:;
	{
	LINE_NUMBER(419);
	popStackFrame(ctx);
	return (jint(1));
	}
label_77:;
	{
	LINE_NUMBER(422);
	if ((frame[1].i) != (61)) goto label_91;
	}
	{
	LINE_NUMBER(423);
	jint temp0 = (jint)SM_main_GameCanvas_cycleFocusedTextField_boolean_R_boolean(ctx, (frame[3].i));
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (jint(1));
	}
label_91:;
	{
	LINE_NUMBER(426);
	if ((frame[1].i) != (21)) goto label_94;
	}
	{
	LINE_NUMBER(427);
	((func_lib_input_TField_moveCaretLeft_boolean_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_moveCaretLeft_boolean_boolean])(ctx, (frame[6].o), (frame[3].i), (frame[5].i));
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (jint(1));
	}
label_94:;
	{
	LINE_NUMBER(430);
	if ((frame[1].i) != (22)) goto label_97;
	}
	{
	LINE_NUMBER(431);
	((func_lib_input_TField_moveCaretRight_boolean_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_moveCaretRight_boolean_boolean])(ctx, (frame[6].o), (frame[3].i), (frame[5].i));
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return (jint(1));
	}
label_97:;
	{
	LINE_NUMBER(434);
	if ((frame[1].i) != (jint(3))) goto label_100;
	}
	{
	LINE_NUMBER(435);
	((func_lib_input_TField_moveCaretHome_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_moveCaretHome_boolean])(ctx, (frame[6].o), (frame[3].i));
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (jint(1));
	}
label_100:;
	{
	LINE_NUMBER(438);
	if ((frame[1].i) != (123)) goto label_103;
	}
	{
	LINE_NUMBER(439);
	((func_lib_input_TField_moveCaretEnd_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_lib_input_TField_moveCaretEnd_boolean])(ctx, (frame[6].o), (frame[3].i));
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return (jint(1));
	}
label_103:;
	{
	LINE_NUMBER(442);
	if ((frame[1].i) == (19)) goto label_106;
	}
	{
	if ((frame[1].i) != (20)) goto label_107;
	}
label_106:;
	{
	LINE_NUMBER(443);
	if ((frame[1].i) != (19)) goto label_108;
	}
	INST_ICONST(1);
	goto label_109;
label_108:;
	INST_ICONST(0);
label_109:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(444);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_111;
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(ctx);
	sp += 1;
	if ((frame[7].i) == 0) goto label_113;
	}
	INST_ICONST(-1);
	goto label_114;
label_113:;
	INST_ICONST(1);
label_114:;
	{
	sp -= 2;
	((func_lib_input_ChatTextField_navigateHistory_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_navigateHistory_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(446);
	popStackFrame(ctx);
	return (jint(1));
	}
label_111:;
	{
	LINE_NUMBER(448);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_116;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_116;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_116;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_117;
	}
label_116:;
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_panel2;
	if ((--sp)->o == nullptr) goto label_118;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_118;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_118;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) != 0) goto label_117;
	}
label_118:;
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if ((isInstance(ctx, sp[0].o, &class_nro_InputDlg)) == 0) goto label_119;
	}
label_117:;
	{
	LINE_NUMBER(453);
	popStackFrame(ctx);
	return (jint(1));
	}
label_119:;
	{
	LINE_NUMBER(455);
	jint temp0 = (jint)SM_main_GameCanvas_cycleFocusedTextField_boolean_R_boolean(ctx, (frame[7].i));
	if (temp0 == 0) goto label_120;
	}
	{
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return (jint(1));
	}
label_120:;
	{
	LINE_NUMBER(458);
	if ((frame[7].i) == 0) goto label_122;
	}
	INST_ICONST(-1);
	goto label_123;
label_122:;
	INST_BIPUSH(-2);
label_123:;
	{
	sp -= 1;
	SM_main_GameCanvas_handleKeyPressed_int(ctx, sp[0].i);
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (jint(1));
	}
label_107:;
	{
	LINE_NUMBER(462);
	if ((frame[1].i) == (67)) goto label_125;
	}
	{
	if ((frame[1].i) != (112)) goto label_126;
	}
label_125:;
	{
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return (jint(1));
	}
label_126:;
	{
	LINE_NUMBER(465);
	if ((frame[1].i) == (131)) goto label_127;
	}
	{
	if ((frame[1].i) != (132)) goto label_128;
	}
label_127:;
	{
	LINE_NUMBER(466);
	if ((frame[1].i) != (131)) goto label_129;
	}
	INST_BIPUSH(-21);
	goto label_130;
label_129:;
	INST_BIPUSH(-22);
label_130:;
	{
	sp -= 1;
	SM_main_GameCanvas_handleKeyPressed_int(ctx, sp[0].i);
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return (jint(1));
	}
label_128:;
	{
	LINE_NUMBER(469);
	if ((frame[5].i) == 0) goto label_132;
	}
	{
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return (jint(1));
	}
label_132:;
	{
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(475);
	if ((frame[1].i) == (67)) goto label_134;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_134;
	{
	if ((frame[1].i) == (59)) goto label_134;
	}
	{
	if ((frame[1].i) == (60)) goto label_134;
	}
	{
	if ((frame[1].i) == (129)) goto label_134;
	}
	{
	if ((frame[1].i) == (130)) goto label_134;
	}
	{
	if ((frame[1].i) == (57)) goto label_134;
	}
	{
	if ((frame[1].i) == (58)) goto label_134;
	}
	{
	if ((frame[1].i) == (115)) goto label_134;
	}
	{
	LINE_NUMBER(480);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_lastPhysicalKeyDown = (frame[1].i);
	}
label_134:;
	{
	LINE_NUMBER(483);
	jint temp0 = (jint)SM_lib_MapKey_mapShifted_int_boolean_R_int(ctx, (frame[1].i), (frame[3].i));
	frame[7].i = temp0;
	LINE_NUMBER(484);
	if ((frame[7].i) == 0) goto label_137;
	}
	{
	LINE_NUMBER(485);
	SM_main_GameCanvas_handleKeyPressed_int(ctx, (frame[7].i));
	}
label_137:;
	{
	LINE_NUMBER(487);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_keyUp_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:keyUp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(491);
	if ((frame[1].i) != ((jint)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_lastPhysicalKeyDown)) goto label_1;
	}
	{
	LINE_NUMBER(492);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_lastPhysicalKeyDown = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(494);
	jint temp0 = (jint)SM_lib_MapKey_map_int_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(495);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(496);
	SM_main_GameCanvas_handleKeyReleased_int(ctx, (frame[2].i));
	}
label_4:;
	{
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:keyTyped", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(502);
	if ((frame[1].i) == (8)) goto label_1;
	}
	{
	if ((frame[1].i) != (8)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(503);
	if (((jint)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedBackspace) == 0) goto label_3;
	}
	{
	LINE_NUMBER(504);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedBackspace = (jint(0));
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(507);
	if ((frame[1].i) != (127)) goto label_3;
	}
	{
	LINE_NUMBER(508);
	if (((jint)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedForwardDel) == 0) goto label_3;
	}
	{
	LINE_NUMBER(509);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_suppressNextTypedForwardDel = (jint(0));
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(514);
	jint temp0 = (jint)SM_nro_AutoTrainMenu_isInputFocused_R_boolean(ctx);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(515);
	SM_nro_AutoTrainMenu_handleTypedChar_char(ctx, (frame[1].i));
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)SM_main_GameCanvas_getActiveTextField_R_lib_input_TField(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(520);
	if ((frame[2].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(521);
	if ((frame[1].i) == (8)) goto label_15;
	}
	{
	if ((frame[1].i) != (8)) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(522);
	((func_lib_input_TField_backspace) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_input_TField_backspace])(ctx, (frame[2].o));
	LINE_NUMBER(523);
	SM_lib_input_ChatTextField_syncActiveCaptions(ctx);
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return (jint(1));
	}
label_16:;
	{
	LINE_NUMBER(526);
	if ((frame[1].i) != (127)) goto label_19;
	}
	{
	LINE_NUMBER(527);
	((func_lib_input_TField_forwardDelete) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_lib_input_TField_forwardDelete])(ctx, (frame[2].o));
	LINE_NUMBER(528);
	SM_lib_input_ChatTextField_syncActiveCaptions(ctx);
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (jint(1));
	}
label_19:;
	{
	LINE_NUMBER(531);
	if ((frame[1].i) < (32)) goto label_23;
	}
	{
	LINE_NUMBER(532);
	jint temp0 = (jint)M_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(533);
	jint temp1 = (jint)M_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean(ctx, (frame[0].o), (57), (58));
	frame[4].i = temp1;
	LINE_NUMBER(534);
	if ((frame[3].i) == 0) goto label_27;
	}
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_27;
	{
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(537);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_char_R_java_lang_String(ctx, (frame[1].i));
	((func_lib_input_TField_insertText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_insertText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(538);
	SM_lib_input_ChatTextField_syncActiveCaptions(ctx);
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (jint(1));
	}
label_23:;
	{
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(544);
	frame[3].i = ((jint)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_lastPhysicalKeyDown);
	LINE_NUMBER(545);
	((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_lastPhysicalKeyDown = (jint(0));
	LINE_NUMBER(547);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	clinit_nro_GameScr(ctx);
	(sp++)->o = SF_nro_GameScr_instance;
	if ((--sp)->o == nullptr) goto label_33;
	{
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_instance;
	sp[0].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mobCapcha;
	if (sp[0].o == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(549);
	if ((frame[1].i) < (32)) goto label_35;
	}
	{
	if ((frame[1].i) >= (127)) goto label_35;
	}
	{
	LINE_NUMBER(550);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (frame[1].i);
	}
label_35:;
	{
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return (jint(1));
	}
label_33:;
	{
	LINE_NUMBER(555);
	if ((frame[3].i) != 0) goto label_37;
	}
	{
	if ((frame[1].i) < (128)) goto label_37;
	}
	{
	LINE_NUMBER(556);
	jint temp0 = (jint)SM_lib_input_VietnameseTextUtils_mapGameplayKeyFromImeChar_char_R_int(ctx, (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(557);
	if ((frame[4].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(558);
	SM_main_GameCanvas_handleKeyPressed_int(ctx, (frame[4].i));
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (jint(1));
	}
label_37:;
	{
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_touchDown_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:touchDown", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(566);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(567);
	sp[0].o = (jobject)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_camera;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_OrthographicCamera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(569);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isIOS) == 0) goto label_3;
	}
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_com_nro_GameMain_access$000_com_nro_GameMain_com_badlogic_gdx_math_Vector3(ctx, sp[0].o, (frame[5].o));
	}
label_3:;
	{
	LINE_NUMBER(572);
	frame[6].i = ((jint(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[5].o)))->F_x))) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(573);
	frame[7].i = ((jint(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[5].o)))->F_y))) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(574);
	if ((frame[3].i) >= (jint(2))) goto label_7;
	}
	{
	LINE_NUMBER(575);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(576);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_onPointerPressed_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_onPointerPressed_int_int])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	}
label_7:;
	{
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_touchUp_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:touchUp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(583);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat(0)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(584);
	sp[0].o = (jobject)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_camera;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_OrthographicCamera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(585);
	frame[6].i = ((jint(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[5].o)))->F_x))) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(586);
	frame[7].i = ((jint(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[5].o)))->F_y))) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(587);
	if ((frame[3].i) >= (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(588);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(589);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_onPointerReleased_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_onPointerReleased_int_int])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	}
label_5:;
	{
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_touchCancelled_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:touchCancelled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:touchDragged", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(601);
	clinit_com_badlogic_gdx_math_Vector3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector3);
	init_com_badlogic_gdx_math_Vector3_float_float_float(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat(0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(602);
	sp[0].o = (jobject)((com_nro_GameMain$MyInputProcessor *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_nro_GameMain *) NULL_CHECK(sp[0].o))->F_camera;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_OrthographicCamera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_OrthographicCamera_unproject_com_badlogic_gdx_math_Vector3_R_com_badlogic_gdx_math_Vector3])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(603);
	frame[5].i = ((jint(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_x))) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(604);
	frame[6].i = ((jint(((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK((frame[4].o)))->F_y))) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(605);
	if ((frame[3].i) >= (jint(2))) goto label_5;
	}
	{
	LINE_NUMBER(606);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(607);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_gameCanvas;
	((func_main_GameCanvas_onPointerDragged_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameCanvas_onPointerDragged_int_int])(ctx, sp[0].o, (frame[5].i), (frame[6].i));
	}
label_5:;
	{
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:mouseMoved", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_nro_GameMain$MyInputProcessor_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/GameMain$MyInputProcessor:scrolled", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(619);
	if ((clinit_nro_AutoTrainMenu(ctx), (jint)SF_nro_AutoTrainMenu_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(620);
	frame[3].i = (jint(0));
	LINE_NUMBER(621);
	if ((floatCompare((frame[2].f), (jfloat(1.000000e-02f)), -1)) <= 0) goto label_4;
	}
	{
	frame[3].i = (jint(1));
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(622);
	if ((floatCompare((frame[2].f), (jfloat(-1.000000e-02f)), 1)) >= 0) goto label_5;
	}
	INST_ICONST(-1);
	INST_ISTORE(3);
label_5:;
	{
	LINE_NUMBER(623);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(624);
	SM_nro_AutoTrainMenu_onScrolled_int(ctx, (frame[3].i));
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(628);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_nro_GameMain$MyInputProcessor[] {
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
	(void *) M_com_nro_GameMain$MyInputProcessor_keyDown_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_keyUp_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_keyTyped_char_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_touchDown_int_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_touchUp_int_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_touchCancelled_int_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_touchDragged_int_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_mouseMoved_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_scrolled_float_float_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean,
	(void *) M_com_nro_GameMain$MyInputProcessor_scrolled_int_R_boolean,
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
	{ "keyDown", "(I)Z" },
	{ "keyUp", "(I)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIII)Z" },
	{ "touchUp", "(IIII)Z" },
	{ "touchCancelled", "(IIII)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "isAnyPressed", "(II)Z" },
	{ "isCtrlOrCmd", "()Z" },
	{ "scrolled", "(I)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_InputProcessor, };

static FieldMetadata fields[] {
	{ "lastPhysicalKeyDown", &class_int, offsetof(com_nro_GameMain$MyInputProcessor, F_lastPhysicalKeyDown), "I", 2 },
	{ "suppressNextTypedBackspace", &class_boolean, offsetof(com_nro_GameMain$MyInputProcessor, F_suppressNextTypedBackspace), "Z", 2 },
	{ "suppressNextTypedForwardDel", &class_boolean, offsetof(com_nro_GameMain$MyInputProcessor, F_suppressNextTypedForwardDel), "Z", 2 },
	{ "this$0", &class_com_nro_GameMain, offsetof(com_nro_GameMain$MyInputProcessor, F_this$0), "Lcom/nro/GameMain;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_nro_GameMain$MyInputProcessor_com_nro_GameMain, 0, "(Lcom/nro/GameMain;)V", 0 },
	{ "isAnyPressed", (intptr_t) M_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_isAnyPressed_int_int_R_boolean, "(II)Z", 2 },
	{ "isCtrlOrCmd", (intptr_t) M_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_isCtrlOrCmd_R_boolean, "()Z", 2 },
	{ "scrolled", (intptr_t) M_com_nro_GameMain$MyInputProcessor_scrolled_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_scrolled_int_R_boolean, "(I)Z", 1 },
	{ "keyDown", (intptr_t) M_com_nro_GameMain$MyInputProcessor_keyDown_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_keyDown_int_R_boolean, "(I)Z", 1 },
	{ "keyUp", (intptr_t) M_com_nro_GameMain$MyInputProcessor_keyUp_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_keyUp_int_R_boolean, "(I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_nro_GameMain$MyInputProcessor_keyTyped_char_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_keyTyped_char_R_boolean, "(C)Z", 1 },
	{ "touchDown", (intptr_t) M_com_nro_GameMain$MyInputProcessor_touchDown_int_int_int_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_touchDown_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_nro_GameMain$MyInputProcessor_touchUp_int_int_int_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_touchUp_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchCancelled", (intptr_t) M_com_nro_GameMain$MyInputProcessor_touchCancelled_int_int_int_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_touchCancelled_int_int_int_int_R_boolean, "(IIII)Z", 1 },
	{ "touchDragged", (intptr_t) M_com_nro_GameMain$MyInputProcessor_touchDragged_int_int_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_touchDragged_int_int_int_R_boolean, "(III)Z", 1 },
	{ "mouseMoved", (intptr_t) M_com_nro_GameMain$MyInputProcessor_mouseMoved_int_int_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_mouseMoved_int_int_R_boolean, "(II)Z", 1 },
	{ "scrolled", (intptr_t) M_com_nro_GameMain$MyInputProcessor_scrolled_float_float_R_boolean, VTABLE_com_nro_GameMain$MyInputProcessor_scrolled_float_float_R_boolean, "(FF)Z", 1 },
};

Class class_com_nro_GameMain$MyInputProcessor{
		.nativeName = (intptr_t) "com/nro/GameMain$MyInputProcessor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_GameMain$MyInputProcessor),
		.classVtable = (intptr_t) vtable_com_nro_GameMain$MyInputProcessor,
		.staticInitializer = (intptr_t) clinit_com_nro_GameMain$MyInputProcessor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_GameMain$MyInputProcessor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_nro_GameMain,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_nro_GameMain$MyInputProcessor = registerClass(&class_com_nro_GameMain$MyInputProcessor);

}

