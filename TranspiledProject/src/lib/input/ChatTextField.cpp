#include "lib/input/ChatTextField.h"
#include "nro/GameScr.h"
#include "lib/input/TField.h"
#include "java/lang/StringBuilder.h"
#include "lib/input/ChatTextField_6.h"
#include "nro/IActionListener.h"
#include "main/GameCanvas.h"
#include "lib/input/ChatTextField_1.h"
#include "nro/Panel.h"
#include "java/util/ArrayList.h"
#include "lib/input/ChatTextField_4.h"
#include "lib/input/ChatTextField_5.h"
#include "lib/input/ChatTextField_2.h"
#include "lib/input/ChatTextField_3.h"
#include "nro/Paint.h"
#include "java/lang/String.h"
#include "nro/PopUp.h"
#include "nro/mScreen.h"
#include "nro/Command.h"
#include "com/nro/GameMain.h"
#include "lib/mSystem.h"
#include "lib/mFont.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"
#include "nro/Dialog.h"
#include "lib/mGraphics.h"
#include "com/badlogic/gdx/Gdx.h"
#include "nro/IChatable.h"
#include "com/nro/GameMain_IWebInputBridge.h"
#include "nro/mResources.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "lib/input/ChatTextField.h"
#include "nro/Res.h"
#include "com/nro/GameMain_IWebPlatformInfo.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_lib_input_ChatTextField_i;
jint SF_lib_input_ChatTextField_MAX_HISTORY;

void mark_lib_input_ChatTextField(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_lib_input_ChatTextField_i)
			((gc_mark_ptr) ((jclass) ((jobject) SF_lib_input_ChatTextField_i)->clazz)->markFunction)((jobject) SF_lib_input_ChatTextField_i, mark, depth + 1);
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
	auto self = (lib_input_ChatTextField *) object;
	if (self->F_tfChat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tfChat)->clazz)->markFunction)((jobject) self->F_tfChat, mark, depth + 1);
	if (self->F_parentScreen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parentScreen)->clazz)->markFunction)((jobject) self->F_parentScreen, mark, depth + 1);
	if (self->F_left)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_left)->clazz)->markFunction)((jobject) self->F_left, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
	if (self->F_center)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_center)->clazz)->markFunction)((jobject) self->F_center, mark, depth + 1);
	if (self->F_to)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_to)->clazz)->markFunction)((jobject) self->F_to, mark, depth + 1);
	if (self->F_strChat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_strChat)->clazz)->markFunction)((jobject) self->F_strChat, mark, depth + 1);
	if (self->F_history)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_history)->clazz)->markFunction)((jobject) self->F_history, mark, depth + 1);
	if (self->F_draftBeforeHistory)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_draftBeforeHistory)->clazz)->markFunction)((jobject) self->F_draftBeforeHistory, mark, depth + 1);
}

void clinit_lib_input_ChatTextField(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_lib_input_ChatTextField_MAX_HISTORY = jint(20);
}

void M_lib_input_ChatTextField_syncRightCaption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:syncRightCaption", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_3;
	}
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_CLOSE;
	goto label_4;
label_3:;
	clinit_nro_mResources(ctx);
	(sp++)->o = SF_nro_mResources_DELETE;
label_4:;
	sp -= 2;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
label_1:;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_lib_input_ChatTextField_syncActiveCaptions(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:syncActiveCaptions", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_ChatTextField(ctx);
	{
	LINE_NUMBER(47);
	clinit_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)SF_lib_input_ChatTextField_i;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)SF_lib_input_ChatTextField_i;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(48);
	clinit_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)SF_lib_input_ChatTextField_i;
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(50);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_3;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_3;
	}
	{
	LINE_NUMBER(52);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(54);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	if (((jint)((nro_Panel *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_5;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_isShow) == 0) goto label_5;
	}
	{
	LINE_NUMBER(56);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_panel2;
	sp[0].o = (jobject)((nro_Panel *) NULL_CHECK(sp[0].o))->F_chatTField;
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, sp[0].o);
	}
label_5:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_navigateHistory_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:navigateHistory", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = (jint)((func_java_util_ArrayList_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(64);
	if ((frame[1].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(65);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex) != (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_draftBeforeHistory = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, sp[1].o);
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_historyIndex = (temp0 - (jint(1)));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(68);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_historyIndex = (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_historyIndex) - (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	sp[1].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex));
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(72);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	goto label_11;
	}
label_3:;
	{
	LINE_NUMBER(73);
	if ((frame[1].i) <= 0) goto label_11;
	}
	{
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex) == (jint(-1))) goto label_11;
	}
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex;
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp1 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 - (jint(1)))) goto label_13;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_historyIndex = (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_historyIndex) + (jint(1)));
	LINE_NUMBER(76);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	sp[1].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex));
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(78);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex = (jint(-1));
	LINE_NUMBER(79);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_draftBeforeHistory;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(81);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	}
label_11:;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_recordHistory_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:recordHistory", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = (jint)((func_java_util_ArrayList_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_util_ArrayList_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_get_int_R_java_lang_Object])(ctx, sp[0].o, (temp0 - (jint(1))));
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)), (frame[1].o));
	if (temp1 == 0) goto label_3;
	}
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = (jint)((func_java_util_ArrayList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_size_R_int])(ctx, sp[0].o);
	if (temp0 < (20)) goto label_5;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	sp[0].o = (jobject)((func_java_util_ArrayList_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_remove_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	}
label_5:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_history;
	jint temp0 = (jint)((func_java_util_ArrayList_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_ArrayList_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_initChatTextField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:initChatTextField", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (32));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width) <= (250)) goto label_2;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (250);
	}
label_2:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (temp0 - (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_width) / (jint(2))));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	jint temp1 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (35);
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (temp1 - ((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_height));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_OK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object_int_int(ctx, sp[1].o, sp[2].o, (frame[0].o), (8000), (jobject(nullptr)), (jint(1)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) + (jint(1))));
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_DELETE;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object_int_int(ctx, sp[1].o, sp[2].o, (frame[0].o), (8001), (jobject(nullptr)), ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (70)), (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_cmdH)) + (jint(1))));
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdDoneAction = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	clinit_lib_input_ChatTextField$1(ctx);
	sp[3].o = gcAlloc(ctx, &class_lib_input_ChatTextField$1);
	init_lib_input_ChatTextField$1_lib_input_ChatTextField(ctx, sp[3].o, (frame[0].o));
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(0)), (jobject(nullptr)));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdCancelAction = (jref) sp[1].o;
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_w = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_width) + (28));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_h = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_height) + (26));
	LINE_NUMBER(120);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_w) / (jint(2))));
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_y) - (18));
	LINE_NUMBER(122);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_w) <= (320)) goto label_16;
	}
	{
	LINE_NUMBER(123);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_w = (320);
	}
label_16:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_w)) - (68));
	LINE_NUMBER(128);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_20;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_y) - (jint(5)));
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_y = (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_y) - (20));
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_h = (((jint)((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_h) + (30));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) - (68)) - (jint(5)));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_x = (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2))) + (jint(5)));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (30));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_y = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_h) - (30));
	}
label_20:;
	{
	LINE_NUMBER(137);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_keyPressed_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:keyPressed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(141);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(142);
	if ((frame[1].i) == (-5)) goto label_3;
	}
	{
	if ((frame[1].i) == (10)) goto label_3;
	}
	{
	if ((frame[1].i) != (13)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((func_nro_Command_performAction) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_Command_performAction])(ctx, sp[0].o);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(148);
	if ((frame[1].i) != (-27)) goto label_7;
	}
	{
	LINE_NUMBER(149);
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, (frame[0].o));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	}
label_1:;
	{
	LINE_NUMBER(154);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:gI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_ChatTextField(ctx);
	{
	LINE_NUMBER(158);
	clinit_lib_input_ChatTextField(ctx);
	sp[0].o = (jobject)SF_lib_input_ChatTextField_i;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_lib_input_ChatTextField(ctx);
	sp[0].o = gcAlloc(ctx, &class_lib_input_ChatTextField);
	init_lib_input_ChatTextField(ctx, sp[0].o);
	clinit_lib_input_ChatTextField(ctx);
	SF_lib_input_ChatTextField_i = sp[0].o;
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_lib_input_ChatTextField(ctx);
	(sp++)->o = SF_lib_input_ChatTextField_i;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void init_lib_input_ChatTextField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_ChatTextField(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(161);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow = (jint(0));
	LINE_NUMBER(26);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_lastChatTime = (jlong(0));
	LINE_NUMBER(29);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_center = (jref) (jobject(nullptr));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_history = (jref) sp[1].o;
	LINE_NUMBER(37);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex = (jint(-1));
	LINE_NUMBER(38);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_draftBeforeHistory = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CHAT;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_strChat = (jref) sp[1].o;
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	clinit_lib_input_TField(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_TField);
	init_lib_input_TField(ctx, sp[1].o);
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_tfChat = (jref) sp[1].o;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_CHAT;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(165);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) - (32));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width) <= (250)) goto label_12;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_width = (250);
	}
label_12:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_height = ((clinit_nro_mScreen(ctx), (jint)SF_nro_mScreen_ITEM_HEIGHT) + (jint(2)));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	jint temp0 = (clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_w) / (jint(2));
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_x = (temp0 - (((jint)((lib_input_TField *) NULL_CHECK(sp[1].o))->F_width) / (jint(2))));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(173);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_setMaxTextLenght_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setMaxTextLenght_int])(ctx, sp[0].o, (80));
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_OK;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (8000), (jobject(nullptr)));
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_left = (jref) sp[1].o;
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_DELETE;
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[0].o), (8001), (jobject(nullptr)));
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_center = (jref) sp[1].o;
	LINE_NUMBER(177);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdDoneAction = (jref) sp[1].o;
	LINE_NUMBER(178);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	clinit_lib_input_ChatTextField$2(ctx);
	sp[3].o = gcAlloc(ctx, &class_lib_input_ChatTextField$2);
	init_lib_input_ChatTextField$2_lib_input_ChatTextField(ctx, sp[3].o, (frame[0].o));
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(0)), (jobject(nullptr)));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdCancelAction = (jref) sp[1].o;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_startChat_int_nro_IChatable_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:startChat", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_CLOSE;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(188);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_to = (jref) (frame[3].o);
	LINE_NUMBER(189);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen = (jref) (frame[2].o);
	LINE_NUMBER(190);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex = (jint(-1));
	LINE_NUMBER(191);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_draftBeforeHistory = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(193);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(194);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(195);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(196);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) != 0) goto label_10;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isIOS;
	if ((--sp)->i == 0) goto label_11;
label_10:;
	{
	LINE_NUMBER(197);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	clinit_lib_input_ChatTextField$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_ChatTextField$3);
	init_lib_input_ChatTextField$3_lib_input_ChatTextField_nro_IChatable(ctx, sp[1].o, (frame[0].o), (frame[2].o));
	LINE_NUMBER(216);
	sp += 2;
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isIOS) == 0) goto label_13;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Enter chat"_j));
	goto label_14;
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp chat"_j));
label_14:;
	{
	sp -= 3;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8""_j));
	LINE_NUMBER(197);
	((func_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return;
	}
label_11:;
	{
	LINE_NUMBER(219);
	((func_lib_input_ChatTextField_initChatTextField) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_initChatTextField])(ctx, (frame[0].o));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp chat"_j)));
	LINE_NUMBER(221);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdDoneAction = (jref) sp[1].o;
	LINE_NUMBER(222);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	clinit_lib_input_ChatTextField$4(ctx);
	sp[3].o = gcAlloc(ctx, &class_lib_input_ChatTextField$4);
	init_lib_input_ChatTextField$4_lib_input_ChatTextField(ctx, sp[3].o, (frame[0].o));
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(0)), (jobject(nullptr)));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdCancelAction = (jref) sp[1].o;
	LINE_NUMBER(228);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	jint temp0 = (jint)((func_lib_input_TField_keyPressed_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_keyPressed_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(229);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp1 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp1 != 0) goto label_22;
	}
	clinit_main_GameCanvas(ctx);
	(sp++)->o = SF_main_GameCanvas_currentDialog;
	if ((--sp)->o != nullptr) goto label_22;
	{
	LINE_NUMBER(230);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow = (jint(1));
	LINE_NUMBER(231);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(233);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	LINE_NUMBER(234);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_22;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->o = SF_com_nro_GameMain_webPlatformInfo;
	if ((--sp)->o == nullptr) goto label_22;
	{
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	jint temp0 = (jint)((func_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebPlatformInfo, INDEX_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_doChangeToTextBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_doChangeToTextBox])(ctx, sp[0].o);
	}
label_22:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_startChat_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:startChat", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_CLOSE;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(242);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_to = (jref) (frame[1].o);
	LINE_NUMBER(243);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_instance;
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_parentScreen = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(246);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex = (jint(-1));
	LINE_NUMBER(247);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_draftBeforeHistory = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(249);
	SM_main_GameCanvas_clearKeyHold(ctx);
	LINE_NUMBER(250);
	SM_main_GameCanvas_clearKeyPressed(ctx);
	LINE_NUMBER(251);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_keyAsciiPress = (jint(0));
	LINE_NUMBER(252);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) != 0) goto label_11;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isIOS;
	if ((--sp)->i == 0) goto label_12;
label_11:;
	{
	LINE_NUMBER(253);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	clinit_lib_input_ChatTextField$5(ctx);
	sp[1].o = gcAlloc(ctx, &class_lib_input_ChatTextField$5);
	init_lib_input_ChatTextField$5_lib_input_ChatTextField(ctx, sp[1].o, (frame[0].o));
	LINE_NUMBER(271);
	sp += 2;
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isIOS) == 0) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Enter chat"_j));
	goto label_15;
label_14:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Nh\u1eadp chat"_j));
label_15:;
	{
	sp -= 3;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8""_j));
	LINE_NUMBER(253);
	((func_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}
label_12:;
	{
	LINE_NUMBER(274);
	((func_lib_input_ChatTextField_initChatTextField) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_initChatTextField])(ctx, (frame[0].o));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"Nh\u1eadp chat"_j)));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdDoneAction = (jref) sp[1].o;
	LINE_NUMBER(277);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	clinit_nro_Command(ctx);
	sp[1].o = gcAlloc(ctx, &class_nro_Command);
	clinit_nro_mResources(ctx);
	sp[2].o = (jobject)SF_nro_mResources_CLOSE;
	clinit_lib_input_ChatTextField$6(ctx);
	sp[3].o = gcAlloc(ctx, &class_lib_input_ChatTextField$6);
	init_lib_input_ChatTextField$6_lib_input_ChatTextField(ctx, sp[3].o, (frame[0].o));
	init_nro_Command_java_lang_String_nro_IActionListener_int_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(0)), (jobject(nullptr)));
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_cmdCancelAction = (jref) sp[1].o;
	LINE_NUMBER(283);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentDialog;
	if (sp[0].o != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(284);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow = (jint(1));
	LINE_NUMBER(285);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(1));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = sp[0].o;
	LINE_NUMBER(287);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	LINE_NUMBER(288);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_22;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->o = SF_com_nro_GameMain_webPlatformInfo;
	if ((--sp)->o == nullptr) goto label_22;
	{
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	jint temp0 = (jint)((func_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebPlatformInfo, INDEX_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_doChangeToTextBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_doChangeToTextBox])(ctx, sp[0].o);
	}
label_22:;
	LINE_NUMBER(292);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:update", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(296);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	LINE_NUMBER(297);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isPointerJustRelease) == 0) goto label_4;
	}
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_h));
	frame[1].i = temp0;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp0 = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_x) - (10);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp1 = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) - (10);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp2 = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_w) + (20);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_h) + (20)));
	if (temp3 == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(300);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp0 = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_x) - (10);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp1 = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_y) - (10);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp2 = ((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_w) + (20);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	jint temp3 = (jint)SM_main_GameCanvas_isPointerHoldIn_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, (((jint)((nro_Command *) NULL_CHECK(sp[0].o))->F_h) + (20)));
	if (temp3 == 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(301);
	if ((frame[1].i) != 0) goto label_4;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_4;
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_4;
	{
	LINE_NUMBER(302);
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, (frame[0].o));
	LINE_NUMBER(303);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_isPointerJustRelease = (jint(0));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(308);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(5))) goto label_16;
	}
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(3))) goto label_16;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_update) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_update])(ctx, sp[0].o);
	}
label_16:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (((jint)((lib_input_TField *) NULL_CHECK(sp[0].o))->F_h) == 0) goto label_1;
	}
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_h = (jint(0));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_to;
	frame[2].o = sp[0].o;
	LINE_NUMBER(316);
	M_lib_input_ChatTextField_recordHistory_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(317);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex = (jint(-1));
	LINE_NUMBER(318);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_draftBeforeHistory = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_CLOSE;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(321);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow = (jint(0));
	LINE_NUMBER(322);
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_focusedTField;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (sp[0].o != sp[1].o) goto label_28;
	}
	{
	LINE_NUMBER(323);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = (jobject(nullptr));
	}
label_28:;
	{
	LINE_NUMBER(325);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(326);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	((func_com_nro_GameMain$IWebInputBridge_closePrompt) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_closePrompt, sp[0].o))(ctx, sp[0].o);
	}
label_30:;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen;
	((func_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_nro_IChatable, INDEX_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(333);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:paint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(336);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow) == 0) goto label_1;
	}
	{
	LINE_NUMBER(337);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_3;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->o = SF_com_nro_GameMain_webInputBridge;
	if ((--sp)->o == nullptr) goto label_3;
	clinit_com_nro_GameMain(ctx);
	(sp++)->o = SF_com_nro_GameMain_webPlatformInfo;
	if ((--sp)->o == nullptr) goto label_3;
	{
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webPlatformInfo;
	jint temp0 = (jint)((func_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebPlatformInfo, INDEX_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	LINE_NUMBER(338);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(340);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) != 0) goto label_5;
	}
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(5))) goto label_1;
	}
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(3))) goto label_1;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isAndroid;
	if ((--sp)->i != 0) goto label_1;
label_5:;
	{
	LINE_NUMBER(341);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[1].o), ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_w), ((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_h), (jint(-1)), (jint(1)));
	LINE_NUMBER(342);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_green2;
	sp[1].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_strChat;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_to;
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	jint temp0 = (jint)((lib_input_TField *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	jint temp1 = (jint)((lib_input_TField *) NULL_CHECK(sp[3].o))->F_y;
	sp[3].i = temp0;
	sp[4].i = temp1;
	sp += 5;
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_isTouch) == 0) goto label_7;
	}
	INST_BIPUSH(17);
	goto label_8;
label_7:;
	INST_BIPUSH(12);
label_8:;
	{
	sp -= 6;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, (sp[4].i - sp[5].i), (jint(0)));
	LINE_NUMBER(343);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_left;
	sp[2].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_center;
	sp[3].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	SM_nro_Paint_paintCmdBar_lib_mGraphics_nro_Command_nro_Command_nro_Command(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(344);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_paint_lib_mGraphics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_paint_lib_mGraphics])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_resetCooldown(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:resetCooldown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_lastChatTime = (jlong(0));
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow = (jint(0));
	LINE_NUMBER(355);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex = (jint(-1));
	LINE_NUMBER(356);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_draftBeforeHistory = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(357);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(358);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(359);
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_focusedTField;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(360);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_CLOSE;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(363);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen;
	((func_nro_IChatable_onCancelChat) resolveInterfaceMethod(ctx, &class_nro_IChatable, INDEX_nro_IChatable_onCancelChat, sp[0].o))(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(366);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(367);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	((func_com_nro_GameMain$IWebInputBridge_closePrompt) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_closePrompt, sp[0].o))(ctx, sp[0].o);
	}
label_11:;
	{
	LINE_NUMBER(369);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) != 0) goto label_13;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isIOS;
	if ((--sp)->i == 0) goto label_14;
label_13:;
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_input;
	if ((--sp)->o == nullptr) goto label_14;
	{
	LINE_NUMBER(370);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	}
label_14:;
	LINE_NUMBER(372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField:perform", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(375);
	switch((frame[1].i)) {
		case 8000: goto label_1;
		case 8001: goto label_2;
		case 8002: goto label_3;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(377);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"perform chat 1"_j))));
	LINE_NUMBER(378);
	if (((jint)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow) != 0) goto label_5;
	}
	LINE_NUMBER(379);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(382);
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(383);
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, (frame[0].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}
label_9:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	((lib_input_ChatTextField *) NULL_CHECK(sp[0].o))->F_lastChatTime = temp0;
	LINE_NUMBER(388);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_to;
	frame[4].o = sp[0].o;
	LINE_NUMBER(389);
	M_lib_input_ChatTextField_recordHistory_java_lang_String(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(390);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_historyIndex = (jint(-1));
	LINE_NUMBER(391);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_draftBeforeHistory = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(392);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_setText_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((lib_input_TField *) NULL_CHECK(sp[0].o))->F_isFocus = (jint(0));
	LINE_NUMBER(394);
	clinit_lib_input_TField(ctx);
	sp[0].o = (jobject)SF_lib_input_TField_focusedTField;
	sp[1].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	LINE_NUMBER(395);
	clinit_lib_input_TField(ctx);
	SF_lib_input_TField_focusedTField = (jobject(nullptr));
	}
label_19:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_right;
	clinit_nro_mResources(ctx);
	sp[1].o = (jobject)SF_nro_mResources_CLOSE;
	((nro_Command *) NULL_CHECK(sp[0].o))->F_caption = (jref) sp[1].o;
	LINE_NUMBER(398);
	((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_isShow = (jint(0));
	LINE_NUMBER(400);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(401);
	clinit_com_nro_GameMain(ctx);
	sp[0].o = (jobject)SF_com_nro_GameMain_webInputBridge;
	((func_com_nro_GameMain$IWebInputBridge_closePrompt) resolveInterfaceMethod(ctx, &class_com_nro_GameMain$IWebInputBridge, INDEX_com_nro_GameMain$IWebInputBridge_closePrompt, sp[0].o))(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_parentScreen;
	((func_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_nro_IChatable, INDEX_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	LINE_NUMBER(406);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isAndroid) != 0) goto label_26;
	}
	clinit_com_nro_GameMain(ctx);
	(sp++)->i = SF_com_nro_GameMain_isIOS;
	if ((--sp)->i == 0) goto label_27;
label_26:;
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_input;
	if ((--sp)->o == nullptr) goto label_27;
	{
	LINE_NUMBER(407);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	}
label_27:;
	LINE_NUMBER(409);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(413);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"perform chat 2"_j))));
	LINE_NUMBER(414);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	sp[0].o = (jobject)((func_lib_input_TField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_getText_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(415);
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, (frame[0].o));
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}
label_30:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((lib_input_ChatTextField *) NULL_CHECK((frame[0].o)))->F_tfChat;
	((func_lib_input_TField_backspace) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_TField_backspace])(ctx, sp[0].o);
	LINE_NUMBER(419);
	((func_lib_input_ChatTextField_syncRightCaption) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_input_ChatTextField_syncRightCaption])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(422);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_lib_input_ChatTextField[] {
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
	(void *) M_lib_input_ChatTextField_perform_int_java_lang_Object,
	(void *) M_lib_input_ChatTextField_syncRightCaption,
	(void *) M_lib_input_ChatTextField_navigateHistory_int,
	(void *) M_lib_input_ChatTextField_recordHistory_java_lang_String,
	(void *) M_lib_input_ChatTextField_initChatTextField,
	(void *) M_lib_input_ChatTextField_keyPressed_int,
	(void *) M_lib_input_ChatTextField_startChat_int_nro_IChatable_java_lang_String,
	(void *) M_lib_input_ChatTextField_startChat_java_lang_String,
	(void *) M_lib_input_ChatTextField_update,
	(void *) M_lib_input_ChatTextField_paint_lib_mGraphics,
	(void *) M_lib_input_ChatTextField_resetCooldown,
	(void *) M_lib_input_ChatTextField_close,
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
	{ "syncRightCaption", "()V" },
	{ "navigateHistory", "(I)V" },
	{ "recordHistory", "(Ljava/lang/String;)V" },
	{ "initChatTextField", "()V" },
	{ "keyPressed", "(I)V" },
	{ "startChat", "(ILnro/IChatable;Ljava/lang/String;)V" },
	{ "startChat", "(Ljava/lang/String;)V" },
	{ "update", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
	{ "resetCooldown", "()V" },
	{ "close", "()V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "i", &class_lib_input_ChatTextField, (intptr_t) &SF_lib_input_ChatTextField_i, "Llib/input/ChatTextField;", 10 },
	{ "MAX_HISTORY", &class_int, (intptr_t) &SF_lib_input_ChatTextField_MAX_HISTORY, "I", 26 },
	{ "tfChat", &class_lib_input_TField, offsetof(lib_input_ChatTextField, F_tfChat), "Llib/input/TField;", 1 },
	{ "isShow", &class_boolean, offsetof(lib_input_ChatTextField, F_isShow), "Z", 1 },
	{ "parentScreen", &class_nro_IChatable, offsetof(lib_input_ChatTextField, F_parentScreen), "Lnro/IChatable;", 1 },
	{ "lastChatTime", &class_long, offsetof(lib_input_ChatTextField, F_lastChatTime), "J", 2 },
	{ "left", &class_nro_Command, offsetof(lib_input_ChatTextField, F_left), "Lnro/Command;", 1 },
	{ "right", &class_nro_Command, offsetof(lib_input_ChatTextField, F_right), "Lnro/Command;", 1 },
	{ "center", &class_nro_Command, offsetof(lib_input_ChatTextField, F_center), "Lnro/Command;", 1 },
	{ "x", &class_int, offsetof(lib_input_ChatTextField, F_x), "I", 2 },
	{ "y", &class_int, offsetof(lib_input_ChatTextField, F_y), "I", 2 },
	{ "w", &class_int, offsetof(lib_input_ChatTextField, F_w), "I", 2 },
	{ "h", &class_int, offsetof(lib_input_ChatTextField, F_h), "I", 2 },
	{ "to", &class_java_lang_String, offsetof(lib_input_ChatTextField, F_to), "Ljava/lang/String;", 1 },
	{ "strChat", &class_java_lang_String, offsetof(lib_input_ChatTextField, F_strChat), "Ljava/lang/String;", 1 },
	{ "history", &class_java_util_ArrayList, offsetof(lib_input_ChatTextField, F_history), "Ljava/util/ArrayList;", 18 },
	{ "historyIndex", &class_int, offsetof(lib_input_ChatTextField, F_historyIndex), "I", 2 },
	{ "draftBeforeHistory", &class_java_lang_String, offsetof(lib_input_ChatTextField, F_draftBeforeHistory), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "syncRightCaption", (intptr_t) M_lib_input_ChatTextField_syncRightCaption, VTABLE_lib_input_ChatTextField_syncRightCaption, "()V", 17 },
	{ "syncActiveCaptions", (intptr_t) SM_lib_input_ChatTextField_syncActiveCaptions, 0, "()V", 9 },
	{ "navigateHistory", (intptr_t) M_lib_input_ChatTextField_navigateHistory_int, VTABLE_lib_input_ChatTextField_navigateHistory_int, "(I)V", 17 },
	{ "recordHistory", (intptr_t) M_lib_input_ChatTextField_recordHistory_java_lang_String, VTABLE_lib_input_ChatTextField_recordHistory_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "initChatTextField", (intptr_t) M_lib_input_ChatTextField_initChatTextField, VTABLE_lib_input_ChatTextField_initChatTextField, "()V", 17 },
	{ "keyPressed", (intptr_t) M_lib_input_ChatTextField_keyPressed_int, VTABLE_lib_input_ChatTextField_keyPressed_int, "(I)V", 17 },
	{ "gI", (intptr_t) SM_lib_input_ChatTextField_gI_R_lib_input_ChatTextField, 0, "()Llib/input/ChatTextField;", 9 },
	{ "<init>", (intptr_t) init_lib_input_ChatTextField, 0, "()V", 1 },
	{ "startChat", (intptr_t) M_lib_input_ChatTextField_startChat_int_nro_IChatable_java_lang_String, VTABLE_lib_input_ChatTextField_startChat_int_nro_IChatable_java_lang_String, "(ILnro/IChatable;Ljava/lang/String;)V", 17 },
	{ "startChat", (intptr_t) M_lib_input_ChatTextField_startChat_java_lang_String, VTABLE_lib_input_ChatTextField_startChat_java_lang_String, "(Ljava/lang/String;)V", 17 },
	{ "update", (intptr_t) M_lib_input_ChatTextField_update, VTABLE_lib_input_ChatTextField_update, "()V", 17 },
	{ "paint", (intptr_t) M_lib_input_ChatTextField_paint_lib_mGraphics, VTABLE_lib_input_ChatTextField_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "resetCooldown", (intptr_t) M_lib_input_ChatTextField_resetCooldown, VTABLE_lib_input_ChatTextField_resetCooldown, "()V", 17 },
	{ "close", (intptr_t) M_lib_input_ChatTextField_close, VTABLE_lib_input_ChatTextField_close, "()V", 17 },
	{ "perform", (intptr_t) M_lib_input_ChatTextField_perform_int_java_lang_Object, VTABLE_lib_input_ChatTextField_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 17 },
};

Class class_lib_input_ChatTextField{
		.nativeName = (intptr_t) "lib/input/ChatTextField",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_input_ChatTextField),
		.classVtable = (intptr_t) vtable_lib_input_ChatTextField,
		.staticInitializer = (intptr_t) clinit_lib_input_ChatTextField,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_input_ChatTextField,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_lib_input_ChatTextField = registerClass(&class_lib_input_ChatTextField);

}

