#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Input_InputStringValidator.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldFilter.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_OnscreenKeyboard.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration_NativeInputCloseCallback_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration_NativeInputCloseCallback_0.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration_NativeInputCloseCallback.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_invoke_com_badlogic_gdx_Input_InputStringValidator_0.h"
#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"
#include "com/badlogic/gdx/input/TextInputWrapper.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(936);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(939);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_closeTextInputField_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_closeTextInputField_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(940);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard:show", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(943);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(944);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_0(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(948);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(951);
	M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_openNativeInputField_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(952);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_openNativeInputField_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard:openNativeInputField", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(955);
	clinit_com_badlogic_gdx_input_NativeInputConfiguration(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_input_NativeInputConfiguration);
	init_com_badlogic_gdx_input_NativeInputConfiguration(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(957);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[1].o)))->F_passwordMode) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$000_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx, (frame[1].o));
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(958);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password;
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(959);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$000_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx, (frame[1].o));
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(961);
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setType_com_badlogic_gdx_Input$OnscreenKeyboardType_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setType_com_badlogic_gdx_Input$OnscreenKeyboardType_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, (frame[2].o), (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setMaskInput_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setMaskInput_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[1].o)))->F_passwordMode));
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setShowUnmaskButton_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setShowUnmaskButton_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[1].o)))->F_passwordMode));
	LINE_NUMBER(962);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$400_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_int(ctx, (frame[1].o));
	sp += 1;
	if (temp0 > 0) goto label_7;
	}
	INST_ICONST(-1);
	goto label_8;
label_7:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$400_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_int(ctx, sp[0].o);
	sp++;
label_8:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setMaxLength_int_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setMaxLength_int_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setMultiLine_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setMultiLine_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[1].o)))->F_writeEnters));
	sp[1].o = frame[1].o;
	LINE_NUMBER(963);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$300_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_boolean(ctx, sp[1].o);
	sp += 1;
	if (temp0 != 0) goto label_10;
	}
	{
	sp[0].o = frame[3].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password;
	if (sp[0].o != sp[1].o) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setPreventCorrection_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setPreventCorrection_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(964);
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$200_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_java_lang_String(ctx, (frame[1].o));
	sp += 1;
	if (sp[0].o != nullptr) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_15;
label_14:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$200_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_15:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setPlaceholder_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setPlaceholder_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[1].o;
	LINE_NUMBER(965);
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$100_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_Array1_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setAutoComplete_Array1_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setAutoComplete_Array1_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(967);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[1].o)))->F_filter;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(968);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_Input$InputStringValidator_0(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_Input$InputStringValidator_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_Input$InputStringValidator_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setValidator_com_badlogic_gdx_Input$InputStringValidator_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setValidator_com_badlogic_gdx_Input$InputStringValidator_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	{
	LINE_NUMBER(976);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1(ctx);
		auto proxy = (com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setCloseCallback_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setCloseCallback_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(989);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_input_NativeInputConfiguration_setTextInputWrapper_com_badlogic_gdx_input_TextInputWrapper_R_com_badlogic_gdx_input_NativeInputConfiguration) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setTextInputWrapper_com_badlogic_gdx_input_TextInputWrapper_R_com_badlogic_gdx_input_NativeInputConfiguration])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1021);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1022);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$openNativeInputField$2_com_badlogic_gdx_scenes_scene2d_ui_TextField_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard:lambda$openNativeInputField$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(977);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(979);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_next_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_TextField])(ctx, (frame[0].o), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(980);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(981);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getOnscreenKeyboard_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getOnscreenKeyboard_R_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(982);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(986);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$openNativeInputField$1_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard:lambda$openNativeInputField$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(969);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK((frame[0].o)))->F_filter;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, INDEX_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(969);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(972);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$show$0_com_badlogic_gdx_scenes_scene2d_ui_TextField_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard:lambda$show$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(945);
	M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_openNativeInputField_com_badlogic_gdx_scenes_scene2d_ui_TextField(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(946);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_close,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_openNativeInputField_com_badlogic_gdx_scenes_scene2d_ui_TextField,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$show$0_com_badlogic_gdx_scenes_scene2d_ui_TextField_boolean_R_boolean,
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
	{ "show", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V" },
	{ "close", "()V" },
	{ "openNativeInputField", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V" },
	{ "lambda$show$0", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;Z)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard, 0, "()V", 1 },
	{ "close", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_close, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_close, "()V", 1 },
	{ "show", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V", 1 },
	{ "openNativeInputField", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_openNativeInputField_com_badlogic_gdx_scenes_scene2d_ui_TextField, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_openNativeInputField_com_badlogic_gdx_scenes_scene2d_ui_TextField, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V", 2 },
	{ "lambda$openNativeInputField$2", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$openNativeInputField$2_com_badlogic_gdx_scenes_scene2d_ui_TextField_boolean_R_boolean, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;Z)Z", 4106 },
	{ "lambda$openNativeInputField$1", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$openNativeInputField$1_com_badlogic_gdx_scenes_scene2d_ui_TextField_java_lang_String_R_boolean, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;Ljava/lang/String;)Z", 4106 },
	{ "lambda$show$0", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$show$0_com_badlogic_gdx_scenes_scene2d_ui_TextField_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$show$0_com_badlogic_gdx_scenes_scene2d_ui_TextField_boolean_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;Z)Z", 4098 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard);

}

