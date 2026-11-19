#include "com/badlogic/gdx/input/NativeInputConfiguration.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration_invoke_com_badlogic_gdx_input_NativeInputConfiguration_NativeInputCloseCallback_0.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration_NativeInputCloseCallback.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"
#include "com/badlogic/gdx/Input_InputStringValidator.h"
#include "com/badlogic/gdx/input/TextInputWrapper.h"

extern "C" {


void mark_com_badlogic_gdx_input_NativeInputConfiguration(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_input_NativeInputConfiguration *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_textInputWrapper)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textInputWrapper)->clazz)->markFunction)((jobject) self->F_textInputWrapper, mark, depth + 1);
	if (self->F_validator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_validator)->clazz)->markFunction)((jobject) self->F_validator, mark, depth + 1);
	if (self->F_placeholder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_placeholder)->clazz)->markFunction)((jobject) self->F_placeholder, mark, depth + 1);
	if (self->F_autoComplete)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_autoComplete)->clazz)->markFunction)((jobject) self->F_autoComplete, mark, depth + 1);
	if (self->F_closeCallback)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_closeCallback)->clazz)->markFunction)((jobject) self->F_closeCallback, mark, depth + 1);
}

void clinit_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_input_NativeInputConfiguration(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default;
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(9);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_preventCorrection = (jint(0));
	LINE_NUMBER(12);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_isMultiLine = (jint(0));
	LINE_NUMBER(13);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_maxLength = (jint(-1));
	LINE_NUMBER(15);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_placeholder = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(16);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_maskInput = (jint(0));
	LINE_NUMBER(17);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_showUnmaskButton = (jint(0));
	LINE_NUMBER(18);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_autoComplete = (jref) (jobject(nullptr));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_input_NativeInputConfiguration_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_0(ctx);
		auto proxy = (com_badlogic_gdx_input_NativeInputConfiguration_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_input_NativeInputConfiguration_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_0);
		sp[1].o = (jobject) proxy;
	}
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK(sp[0].o))->F_closeCallback = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_getType_R_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setType_com_badlogic_gdx_Input$OnscreenKeyboardType_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_NativeInputConfiguration_isPreventCorrection_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:isPreventCorrection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_preventCorrection);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setPreventCorrection_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setPreventCorrection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(38);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_preventCorrection = (frame[1].i);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_getTextInputWrapper_R_com_badlogic_gdx_input_TextInputWrapper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:getTextInputWrapper", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_textInputWrapper;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setTextInputWrapper_com_badlogic_gdx_input_TextInputWrapper_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setTextInputWrapper", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_textInputWrapper = (jref) (frame[1].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_NativeInputConfiguration_isMultiLine_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:isMultiLine", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_isMultiLine);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setMultiLine_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setMultiLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(58);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_isMultiLine = (frame[1].i);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_input_NativeInputConfiguration_getMaxLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:getMaxLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_maxLength);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setMaxLength_int_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setMaxLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(68);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_maxLength = (frame[1].i);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_getValidator_R_com_badlogic_gdx_Input$InputStringValidator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:getValidator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_validator;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setValidator_com_badlogic_gdx_Input$InputStringValidator_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setValidator", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_validator = (jref) (frame[1].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_getPlaceholder_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:getPlaceholder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_placeholder;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setPlaceholder_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setPlaceholder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_placeholder = (jref) (frame[1].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setMaskInput_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setMaskInput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(94);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_maskInput = (frame[1].i);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_NativeInputConfiguration_isMaskInput_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:isMaskInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_maskInput);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_input_NativeInputConfiguration_isShowUnmaskButton_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:isShowUnmaskButton", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_showUnmaskButton);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setShowUnmaskButton_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setShowUnmaskButton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(108);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_showUnmaskButton = (frame[1].i);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_getAutoComplete_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:getAutoComplete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_autoComplete;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setAutoComplete_Array1_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setAutoComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(118);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_autoComplete = (jref) (frame[1].o);
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_getCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:getCloseCallback", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_closeCallback;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_input_NativeInputConfiguration_setCloseCallback_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:setCloseCallback", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_closeCallback = (jref) (frame[1].o);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_input_NativeInputConfiguration_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:validate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	frame[1].o = (jobject(nullptr));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o != nullptr) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"OnscreenKeyboardType needs to be non null"_j));
	INST_ASTORE(1);
label_2:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_textInputWrapper;
	if (sp[0].o != nullptr) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"TextInputWrapper needs to be non null"_j));
	INST_ASTORE(1);
label_3:;
	{
	LINE_NUMBER(136);
	if (((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_showUnmaskButton) == 0) goto label_4;
	}
	{
	if (((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_maskInput) != 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"ShowUnmaskButton only works with MaskInput"_j));
	INST_ASTORE(1);
label_4:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_placeholder;
	if (sp[0].o != nullptr) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Placeholder needs to be non null"_j));
	INST_ASTORE(1);
label_5:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_autoComplete;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(139);
	frame[1].o = (((jobject) createStringLiteral(ctx, u8"AutoComplete should only be used with OnscreenKeyboardType.Default"_j)));
	}
label_6:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_autoComplete;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	if (((jint)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_isMultiLine) == 0) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"AutoComplete shouldn't be used with multiline"_j));
	INST_ASTORE(1);
label_8:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_input_NativeInputConfiguration *) NULL_CHECK((frame[0].o)))->F_closeCallback;
	if (sp[0].o != nullptr) goto label_9;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"CloseCallback needs to be non null"_j));
	INST_ASTORE(1);
label_9:;
	{
	LINE_NUMBER(143);
	if ((frame[1].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(144);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"NativeInputConfiguration validation failed: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_input_NativeInputConfiguration_lambda$new$0_boolean_R_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/input/NativeInputConfiguration:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_input_NativeInputConfiguration(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_input_NativeInputConfiguration[] {
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
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_getType_R_com_badlogic_gdx_Input$OnscreenKeyboardType,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setType_com_badlogic_gdx_Input$OnscreenKeyboardType_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_isPreventCorrection_R_boolean,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setPreventCorrection_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_getTextInputWrapper_R_com_badlogic_gdx_input_TextInputWrapper,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setTextInputWrapper_com_badlogic_gdx_input_TextInputWrapper_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_isMultiLine_R_boolean,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setMultiLine_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_getMaxLength_R_int,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setMaxLength_int_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_getValidator_R_com_badlogic_gdx_Input$InputStringValidator,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setValidator_com_badlogic_gdx_Input$InputStringValidator_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_getPlaceholder_R_java_lang_String,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setPlaceholder_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setMaskInput_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_isMaskInput_R_boolean,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_isShowUnmaskButton_R_boolean,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setShowUnmaskButton_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_getAutoComplete_R_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setAutoComplete_Array1_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_getCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_setCloseCallback_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_badlogic_gdx_input_NativeInputConfiguration_validate,
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
	{ "getType", "()Lcom/badlogic/gdx/Input$OnscreenKeyboardType;" },
	{ "setType", "(Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "isPreventCorrection", "()Z" },
	{ "setPreventCorrection", "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "getTextInputWrapper", "()Lcom/badlogic/gdx/input/TextInputWrapper;" },
	{ "setTextInputWrapper", "(Lcom/badlogic/gdx/input/TextInputWrapper;)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "isMultiLine", "()Z" },
	{ "setMultiLine", "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "getMaxLength", "()I" },
	{ "setMaxLength", "(I)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "getValidator", "()Lcom/badlogic/gdx/Input$InputStringValidator;" },
	{ "setValidator", "(Lcom/badlogic/gdx/Input$InputStringValidator;)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "getPlaceholder", "()Ljava/lang/String;" },
	{ "setPlaceholder", "(Ljava/lang/String;)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "setMaskInput", "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "isMaskInput", "()Z" },
	{ "isShowUnmaskButton", "()Z" },
	{ "setShowUnmaskButton", "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "getAutoComplete", "()[Ljava/lang/String;" },
	{ "setAutoComplete", "([Ljava/lang/String;)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "getCloseCallback", "()Lcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;" },
	{ "setCloseCallback", "(Lcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;)Lcom/badlogic/gdx/input/NativeInputConfiguration;" },
	{ "validate", "()V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback,
};

static FieldMetadata fields[] {
	{ "type", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_type), "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 2 },
	{ "preventCorrection", &class_boolean, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_preventCorrection), "Z", 2 },
	{ "textInputWrapper", &class_com_badlogic_gdx_input_TextInputWrapper, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_textInputWrapper), "Lcom/badlogic/gdx/input/TextInputWrapper;", 2 },
	{ "isMultiLine", &class_boolean, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_isMultiLine), "Z", 2 },
	{ "maxLength", &class_int, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_maxLength), "I", 2 },
	{ "validator", &class_com_badlogic_gdx_Input$InputStringValidator, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_validator), "Lcom/badlogic/gdx/Input$InputStringValidator;", 2 },
	{ "placeholder", &class_java_lang_String, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_placeholder), "Ljava/lang/String;", 2 },
	{ "maskInput", &class_boolean, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_maskInput), "Z", 2 },
	{ "showUnmaskButton", &class_boolean, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_showUnmaskButton), "Z", 2 },
	{ "autoComplete", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_autoComplete), "[Ljava/lang/String;", 2 },
	{ "closeCallback", &class_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, offsetof(com_badlogic_gdx_input_NativeInputConfiguration, F_closeCallback), "Lcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_input_NativeInputConfiguration, 0, "()V", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_getType_R_com_badlogic_gdx_Input$OnscreenKeyboardType, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_getType_R_com_badlogic_gdx_Input$OnscreenKeyboardType, "()Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 1 },
	{ "setType", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setType_com_badlogic_gdx_Input$OnscreenKeyboardType_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setType_com_badlogic_gdx_Input$OnscreenKeyboardType_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "isPreventCorrection", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_isPreventCorrection_R_boolean, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_isPreventCorrection_R_boolean, "()Z", 1 },
	{ "setPreventCorrection", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setPreventCorrection_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setPreventCorrection_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "getTextInputWrapper", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_getTextInputWrapper_R_com_badlogic_gdx_input_TextInputWrapper, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_getTextInputWrapper_R_com_badlogic_gdx_input_TextInputWrapper, "()Lcom/badlogic/gdx/input/TextInputWrapper;", 1 },
	{ "setTextInputWrapper", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setTextInputWrapper_com_badlogic_gdx_input_TextInputWrapper_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setTextInputWrapper_com_badlogic_gdx_input_TextInputWrapper_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Lcom/badlogic/gdx/input/TextInputWrapper;)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "isMultiLine", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_isMultiLine_R_boolean, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_isMultiLine_R_boolean, "()Z", 1 },
	{ "setMultiLine", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setMultiLine_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setMultiLine_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "getMaxLength", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_getMaxLength_R_int, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_getMaxLength_R_int, "()I", 1 },
	{ "setMaxLength", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setMaxLength_int_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setMaxLength_int_R_com_badlogic_gdx_input_NativeInputConfiguration, "(I)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "getValidator", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_getValidator_R_com_badlogic_gdx_Input$InputStringValidator, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_getValidator_R_com_badlogic_gdx_Input$InputStringValidator, "()Lcom/badlogic/gdx/Input$InputStringValidator;", 1 },
	{ "setValidator", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setValidator_com_badlogic_gdx_Input$InputStringValidator_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setValidator_com_badlogic_gdx_Input$InputStringValidator_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Lcom/badlogic/gdx/Input$InputStringValidator;)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "getPlaceholder", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_getPlaceholder_R_java_lang_String, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_getPlaceholder_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setPlaceholder", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setPlaceholder_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setPlaceholder_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Ljava/lang/String;)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "setMaskInput", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setMaskInput_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setMaskInput_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "isMaskInput", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_isMaskInput_R_boolean, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_isMaskInput_R_boolean, "()Z", 1 },
	{ "isShowUnmaskButton", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_isShowUnmaskButton_R_boolean, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_isShowUnmaskButton_R_boolean, "()Z", 1 },
	{ "setShowUnmaskButton", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setShowUnmaskButton_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setShowUnmaskButton_boolean_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Z)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "getAutoComplete", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_getAutoComplete_R_Array1_java_lang_String, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_getAutoComplete_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "setAutoComplete", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setAutoComplete_Array1_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setAutoComplete_Array1_java_lang_String_R_com_badlogic_gdx_input_NativeInputConfiguration, "([Ljava/lang/String;)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "getCloseCallback", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_getCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_getCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, "()Lcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;", 1 },
	{ "setCloseCallback", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_setCloseCallback_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_setCloseCallback_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_R_com_badlogic_gdx_input_NativeInputConfiguration, "(Lcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;)Lcom/badlogic/gdx/input/NativeInputConfiguration;", 1 },
	{ "validate", (intptr_t) M_com_badlogic_gdx_input_NativeInputConfiguration_validate, VTABLE_com_badlogic_gdx_input_NativeInputConfiguration_validate, "()V", 1 },
	{ "lambda$new$0", (intptr_t) SM_com_badlogic_gdx_input_NativeInputConfiguration_lambda$new$0_boolean_R_boolean, 0, "(Z)Z", 4106 },
};

Class class_com_badlogic_gdx_input_NativeInputConfiguration{
		.nativeName = (intptr_t) "com/badlogic/gdx/input/NativeInputConfiguration",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_input_NativeInputConfiguration),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_input_NativeInputConfiguration,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_input_NativeInputConfiguration,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_input_NativeInputConfiguration,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_input_NativeInputConfiguration = registerClass(&class_com_badlogic_gdx_input_NativeInputConfiguration);

}

