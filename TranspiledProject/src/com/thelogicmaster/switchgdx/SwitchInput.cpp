#include "com/thelogicmaster/switchgdx/SwitchInput.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/thelogicmaster/switchgdx/SwitchInput_invoke_java_lang_Runnable_0.h"
#include "com/badlogic/gdx/Input_VibrationType.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/Input_Orientation.h"
#include "com/thelogicmaster/switchgdx/SwitchInput.h"
#include "java/lang/Runnable.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Input_Peripheral.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/InputProcessor.h"
#include "com/thelogicmaster/switchgdx/SwitchInput_1.h"
#include "com/badlogic/gdx/Input_KeyboardHeightObserver.h"
#include "com/badlogic/gdx/AbstractInput.h"
#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"
#include "java/lang/System.h"

extern "C" {

jint SF_com_thelogicmaster_switchgdx_SwitchInput_MAX_TOUCHES;
jint SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_DOWN;
jint SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_DRAGGED;
jint SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_UP;
jint SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_CANCELLED;
jint SF_com_thelogicmaster_switchgdx_SwitchInput_KEY_TYPED;
jint SF_com_thelogicmaster_switchgdx_SwitchInput_TEXT_ACCEPTED;
jint SF_com_thelogicmaster_switchgdx_SwitchInput_TEXT_CANCELLED;

void mark_com_thelogicmaster_switchgdx_SwitchInput(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_AbstractInput(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_thelogicmaster_switchgdx_SwitchInput *) object;
	if (self->F_inputProcessor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputProcessor)->clazz)->markFunction)((jobject) self->F_inputProcessor, mark, depth + 1);
	if (self->F_pendingText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pendingText)->clazz)->markFunction)((jobject) self->F_pendingText, mark, depth + 1);
	if (self->F_event)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_event)->clazz)->markFunction)((jobject) self->F_event, mark, depth + 1);
	if (self->F_touchX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchX)->clazz)->markFunction)((jobject) self->F_touchX, mark, depth + 1);
	if (self->F_touchY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchY)->clazz)->markFunction)((jobject) self->F_touchY, mark, depth + 1);
	if (self->F_deltaX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deltaX)->clazz)->markFunction)((jobject) self->F_deltaX, mark, depth + 1);
	if (self->F_deltaY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deltaY)->clazz)->markFunction)((jobject) self->F_deltaY, mark, depth + 1);
	if (self->F_touched)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touched)->clazz)->markFunction)((jobject) self->F_touched, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchInput(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_AbstractInput(ctx);
	SF_com_thelogicmaster_switchgdx_SwitchInput_MAX_TOUCHES = jint(16);
	SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_DOWN = jint(1);
	SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_DRAGGED = jint(2);
	SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_UP = jint(3);
	SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_CANCELLED = jint(4);
	SF_com_thelogicmaster_switchgdx_SwitchInput_KEY_TYPED = jint(5);
	SF_com_thelogicmaster_switchgdx_SwitchInput_TEXT_ACCEPTED = jint(6);
	SF_com_thelogicmaster_switchgdx_SwitchInput_TEXT_CANCELLED = jint(7);
}

void init_com_thelogicmaster_switchgdx_SwitchInput(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchInput(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_com_badlogic_gdx_AbstractInput(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK(sp[0].o))->F_event = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK(sp[0].o))->F_touchX = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK(sp[0].o))->F_touchY = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK(sp[0].o))->F_deltaX = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (16));
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK(sp[0].o))->F_deltaY = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (16));
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK(sp[0].o))->F_touched = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_wasJustTouched = (jint(0));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaX;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaY;
	SM_java_util_Arrays_fill_Array1_int_int(ctx, sp[0].o, (jint(0)));
	}
label_3:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_event;
	jint temp0 = (jint)SM_com_thelogicmaster_switchgdx_SwitchInput_pollInput_Array1_int_R_int(ctx, sp[0].o);
	frame[1].i = temp0;
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK(sp[0].o))->F_currentEventTimeStamp = temp0;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_inputProcessor;
	frame[2].o = sp[0].o;
	LINE_NUMBER(40);
	if ((frame[1].i) != (jint(5))) goto label_9;
	}
	{
	LINE_NUMBER(41);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_event;
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_keyTyped_char_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_keyTyped_char_R_boolean, sp[0].o))(ctx, sp[0].o, (jchar(((jint)ARRAY_ACCESS(jint, sp[1].o, (jint(0)))))));
	goto label_3;
	}
label_9:;
	{
	LINE_NUMBER(44);
	if ((frame[1].i) == (6)) goto label_11;
	}
	{
	if ((frame[1].i) != (7)) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_pendingText;
	frame[3].o = sp[0].o;
	LINE_NUMBER(46);
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_pendingText = (jref) (jobject(nullptr));
	LINE_NUMBER(47);
	if ((frame[1].i) != (6)) goto label_15;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_com_thelogicmaster_switchgdx_SwitchInput_takeText_R_java_lang_String(ctx);
	frame[4].o = sp[0].o;
	LINE_NUMBER(49);
	if ((frame[3].o) == nullptr) goto label_18;
	}
	{
	((func_com_badlogic_gdx_Input$TextInputListener_input_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input$TextInputListener, INDEX_com_badlogic_gdx_Input$TextInputListener_input_java_lang_String, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	}
label_18:;
	LINE_NUMBER(50);
	goto label_3;
label_15:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(51);
	((func_com_badlogic_gdx_Input$TextInputListener_canceled) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input$TextInputListener, INDEX_com_badlogic_gdx_Input$TextInputListener_canceled, (frame[3].o)))(ctx, (frame[3].o));
	goto label_3;
	}
label_12:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_event;
	frame[3].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	LINE_NUMBER(56);
	if ((frame[3].i) < 0) goto label_3;
	}
	{
	if ((frame[3].i) < (16)) goto label_21;
	}
	goto label_3;
label_21:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_event;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(1))));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_event;
	frame[5].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(2))));
	LINE_NUMBER(59);
	if ((frame[1].i) != (jint(2))) goto label_24;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaX;
	jint temp0 = frame[3].i;
	jint temp3 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp0);
	jint temp4 = frame[4].i;
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchX;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp3 + (temp4 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i)))));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaY;
	jint temp5 = frame[3].i;
	jint temp8 = (jint)ARRAY_ACCESS(jint, sp[0].o, temp5);
	jint temp9 = frame[5].i;
	sp[1].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchY;
	ARRAY_ACCESS(jint, sp[0].o, temp5) = (temp8 + (temp9 - ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[3].i)))));
	}
label_24:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchX;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[4].i);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchY;
	ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)) = (frame[5].i);
	LINE_NUMBER(65);
	switch((frame[1].i)) {
		case 1: goto label_29;
		case 2: goto label_30;
		case 3: goto label_31;
		case 4: goto label_32;
		default: goto label_33;
	}
	}
label_29:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touched;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(1));
	LINE_NUMBER(68);
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_wasJustTouched = (jint(1));
	LINE_NUMBER(69);
	if ((frame[2].o) == nullptr) goto label_33;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchDown_int_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchDown_int_int_int_int_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].i), (frame[5].i), (frame[3].i), (jint(0)));
	goto label_33;
	}
label_30:;
	{
	LINE_NUMBER(72);
	if ((frame[2].o) == nullptr) goto label_33;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchDragged_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchDragged_int_int_int_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].i), (frame[5].i), (frame[3].i));
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touched;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(76);
	if ((frame[2].o) == nullptr) goto label_33;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchUp_int_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchUp_int_int_int_int_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].i), (frame[5].i), (frame[3].i), (jint(0)));
	goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touched;
	ARRAY_ACCESS(jbyte, sp[0].o, (frame[3].i)) = (jint(0));
	LINE_NUMBER(80);
	if ((frame[2].o) == nullptr) goto label_33;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_InputProcessor_touchCancelled_int_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_InputProcessor, INDEX_com_badlogic_gdx_InputProcessor_touchCancelled_int_int_int_int_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].i), (frame[5].i), (frame[3].i), (jint(0)));
	}
label_33:;
	LINE_NUMBER(83);
	goto label_3;
label_5:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getAccelerometerX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getAccelerometerY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerZ_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getAccelerometerZ", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getGyroscopeX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getGyroscopeY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeZ_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getGyroscopeZ", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getMaxPointers_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getMaxPointers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (16);
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchX;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getX_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchX;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getDeltaX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaX;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getDeltaX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaX;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchY;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getY_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touchY;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getDeltaY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaY;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getDeltaY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_deltaY;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchInput_isTouched_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:isTouched", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touched;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))));
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchInput_justTouched_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:justTouched", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_wasJustTouched);
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchInput_isTouched_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:isTouched", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_touched;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getPressure_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getPressure", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	jfloat temp0 = (jfloat)((func_com_thelogicmaster_switchgdx_SwitchInput_getPressure_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getPressure_int_R_float])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getPressure_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getPressure", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchInput_isTouched_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isTouched_int_R_boolean])(ctx, (frame[0].o), (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchInput_isButtonPressed_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:isButtonPressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(188);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchInput_isTouched_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isTouched_R_boolean])(ctx, (frame[0].o));
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

jbool M_com_thelogicmaster_switchgdx_SwitchInput_isButtonJustPressed_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:isButtonJustPressed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(193);
	if ((frame[1].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_thelogicmaster_switchgdx_SwitchInput_justTouched_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_justTouched_R_boolean])(ctx, (frame[0].o));
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

void M_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getTextInput", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = frame[4].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[5].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default;
	((func_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getTextInput", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(203);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	{ /* InvokeDynamic */
		clinit_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0);
		proxy->F_field5 = (jref) (frame[1].o);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:setOnscreenKeyboardVisible", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(217);
	((func_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:openTextInputField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(223);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_closeTextInputField_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:closeTextInputField", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:setKeyboardHeightObserver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:vibrate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:vibrate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:vibrate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	LINE_NUMBER(248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_com_badlogic_gdx_Input$VibrationType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:vibrate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getAzimuth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getAzimuth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getPitch_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getPitch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_thelogicmaster_switchgdx_SwitchInput_getRoll_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getRoll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_getRotationMatrix_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getRotationMatrix", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_com_thelogicmaster_switchgdx_SwitchInput_getCurrentEventTime_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getCurrentEventTime", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return ((jlong)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_currentEventTimeStamp);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_setInputProcessor_com_badlogic_gdx_InputProcessor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:setInputProcessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_inputProcessor = (jref) (frame[1].o);
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchInput_getInputProcessor_R_com_badlogic_gdx_InputProcessor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getInputProcessor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_inputProcessor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchInput_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:isPeripheralAvailable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(292);
	clinit_com_thelogicmaster_switchgdx_SwitchInput$1(ctx);
	sp[0].o = (jobject)SF_com_thelogicmaster_switchgdx_SwitchInput$1_$SwitchMap$com$badlogic$gdx$Input$Peripheral;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input$Peripheral_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_Input$Peripheral_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchInput_getRotation_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchInput_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:getNativeOrientation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	clinit_com_badlogic_gdx_Input$Orientation(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Input$Orientation_Landscape;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_setCursorCatched_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:setCursorCatched", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(313);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchInput_isCursorCatched_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:isCursorCatched", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_setCursorPosition_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:setCursorPosition", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(323);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchInput_lambda$getTextInput$0_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType_com_badlogic_gdx_Input$TextInputListener(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput:lambda$getTextInput$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_pendingText;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((func_com_badlogic_gdx_Input$OnscreenKeyboardType_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_Input$OnscreenKeyboardType_name_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)SM_com_thelogicmaster_switchgdx_SwitchInput_beginTextInput_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(205);
	((func_com_badlogic_gdx_Input$TextInputListener_canceled) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input$TextInputListener, INDEX_com_badlogic_gdx_Input$TextInputListener_canceled, (frame[5].o)))(ctx, (frame[5].o));
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(207);
	((com_thelogicmaster_switchgdx_SwitchInput *) NULL_CHECK((frame[0].o)))->F_pendingText = (jref) (frame[5].o);
	}
label_3:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchInput[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerX_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerY_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerZ_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeX_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeY_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeZ_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getMaxPointers_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getX_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getX_int_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_int_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getY_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getY_int_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_int_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_isTouched_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_justTouched_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_isTouched_int_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getPressure_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getPressure_int_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_isButtonPressed_int_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_isButtonJustPressed_int_R_boolean,
	(void *) M_com_badlogic_gdx_AbstractInput_isKeyPressed_int_R_boolean,
	(void *) M_com_badlogic_gdx_AbstractInput_isKeyJustPressed_int_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_closeTextInputField_boolean,
	(void *) M_com_badlogic_gdx_Input_closeTextInputField_boolean_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback,
	(void *) M_com_badlogic_gdx_Input_isTextInputFieldOpened_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_int_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_com_badlogic_gdx_Input$VibrationType,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getAzimuth_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getPitch_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getRoll_R_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getRotationMatrix_Array1_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getCurrentEventTime_R_long,
	(void *) M_com_badlogic_gdx_AbstractInput_setCatchKey_int_boolean,
	(void *) M_com_badlogic_gdx_AbstractInput_isCatchKey_int_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_setInputProcessor_com_badlogic_gdx_InputProcessor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getInputProcessor_R_com_badlogic_gdx_InputProcessor,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getRotation_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_setCursorCatched_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_isCursorCatched_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_setCursorPosition_int_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_update,
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_lambda$getTextInput$0_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType_com_badlogic_gdx_Input$TextInputListener,
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
	{ "getAccelerometerX", "()F" },
	{ "getAccelerometerY", "()F" },
	{ "getAccelerometerZ", "()F" },
	{ "getGyroscopeX", "()F" },
	{ "getGyroscopeY", "()F" },
	{ "getGyroscopeZ", "()F" },
	{ "getMaxPointers", "()I" },
	{ "getX", "()I" },
	{ "getX", "(I)I" },
	{ "getDeltaX", "()I" },
	{ "getDeltaX", "(I)I" },
	{ "getY", "()I" },
	{ "getY", "(I)I" },
	{ "getDeltaY", "()I" },
	{ "getDeltaY", "(I)I" },
	{ "isTouched", "()Z" },
	{ "justTouched", "()Z" },
	{ "isTouched", "(I)Z" },
	{ "getPressure", "()F" },
	{ "getPressure", "(I)F" },
	{ "isButtonPressed", "(I)Z" },
	{ "isButtonJustPressed", "(I)Z" },
	{ "isKeyPressed", "(I)Z" },
	{ "isKeyJustPressed", "(I)Z" },
	{ "getTextInput", "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "getTextInput", "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)V" },
	{ "setOnscreenKeyboardVisible", "(Z)V" },
	{ "setOnscreenKeyboardVisible", "(ZLcom/badlogic/gdx/Input$OnscreenKeyboardType;)V" },
	{ "openTextInputField", "(Lcom/badlogic/gdx/input/NativeInputConfiguration;)V" },
	{ "closeTextInputField", "(Z)V" },
	{ "closeTextInputField", "(ZLcom/badlogic/gdx/input/NativeInputConfiguration$NativeInputCloseCallback;)V" },
	{ "isTextInputFieldOpened", "()Z" },
	{ "setKeyboardHeightObserver", "(Lcom/badlogic/gdx/Input$KeyboardHeightObserver;)V" },
	{ "vibrate", "(I)V" },
	{ "vibrate", "(IZ)V" },
	{ "vibrate", "(IIZ)V" },
	{ "vibrate", "(Lcom/badlogic/gdx/Input$VibrationType;)V" },
	{ "getAzimuth", "()F" },
	{ "getPitch", "()F" },
	{ "getRoll", "()F" },
	{ "getRotationMatrix", "([F)V" },
	{ "getCurrentEventTime", "()J" },
	{ "setCatchKey", "(IZ)V" },
	{ "isCatchKey", "(I)Z" },
	{ "setInputProcessor", "(Lcom/badlogic/gdx/InputProcessor;)V" },
	{ "getInputProcessor", "()Lcom/badlogic/gdx/InputProcessor;" },
	{ "isPeripheralAvailable", "(Lcom/badlogic/gdx/Input$Peripheral;)Z" },
	{ "getRotation", "()I" },
	{ "getNativeOrientation", "()Lcom/badlogic/gdx/Input$Orientation;" },
	{ "setCursorCatched", "(Z)V" },
	{ "isCursorCatched", "()Z" },
	{ "setCursorPosition", "(II)V" },
	{ "update", "()V" },
	{ "lambda$getTextInput$0", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/Input$OnscreenKeyboardType;Lcom/badlogic/gdx/Input$TextInputListener;)V" },
};

static FieldMetadata fields[] {
	{ "MAX_TOUCHES", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_MAX_TOUCHES, "I", 26 },
	{ "TOUCH_DOWN", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_DOWN, "I", 26 },
	{ "TOUCH_DRAGGED", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_DRAGGED, "I", 26 },
	{ "TOUCH_UP", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_UP, "I", 26 },
	{ "TOUCH_CANCELLED", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_TOUCH_CANCELLED, "I", 26 },
	{ "KEY_TYPED", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_KEY_TYPED, "I", 26 },
	{ "TEXT_ACCEPTED", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_TEXT_ACCEPTED, "I", 26 },
	{ "TEXT_CANCELLED", &class_int, (intptr_t) &SF_com_thelogicmaster_switchgdx_SwitchInput_TEXT_CANCELLED, "I", 26 },
	{ "inputProcessor", &class_com_badlogic_gdx_InputProcessor, offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_inputProcessor), "Lcom/badlogic/gdx/InputProcessor;", 2 },
	{ "pendingText", &class_com_badlogic_gdx_Input$TextInputListener, offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_pendingText), "Lcom/badlogic/gdx/Input$TextInputListener;", 2 },
	{ "currentEventTimeStamp", &class_long, offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_currentEventTimeStamp), "J", 2 },
	{ "event", getArrayClass(&class_int, 1), offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_event), "[I", 18 },
	{ "touchX", getArrayClass(&class_int, 1), offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_touchX), "[I", 18 },
	{ "touchY", getArrayClass(&class_int, 1), offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_touchY), "[I", 18 },
	{ "deltaX", getArrayClass(&class_int, 1), offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_deltaX), "[I", 18 },
	{ "deltaY", getArrayClass(&class_int, 1), offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_deltaY), "[I", 18 },
	{ "touched", getArrayClass(&class_boolean, 1), offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_touched), "[Z", 18 },
	{ "wasJustTouched", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchInput, F_wasJustTouched), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchInput, 0, "()V", 1 },
	{ "update", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_update, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_update, "()V", 0 },
	{ "getAccelerometerX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerX_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerX_R_float, "()F", 1 },
	{ "getAccelerometerY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerY_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerY_R_float, "()F", 1 },
	{ "getAccelerometerZ", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerZ_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getAccelerometerZ_R_float, "()F", 1 },
	{ "getGyroscopeX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeX_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeX_R_float, "()F", 1 },
	{ "getGyroscopeY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeY_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeY_R_float, "()F", 1 },
	{ "getGyroscopeZ", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeZ_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getGyroscopeZ_R_float, "()F", 1 },
	{ "getMaxPointers", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getMaxPointers_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getMaxPointers_R_int, "()I", 1 },
	{ "getX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getX_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getX_R_int, "()I", 1 },
	{ "getX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getX_int_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getX_int_R_int, "(I)I", 1 },
	{ "getDeltaX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_R_int, "()I", 1 },
	{ "getDeltaX", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_int_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getDeltaX_int_R_int, "(I)I", 1 },
	{ "getY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getY_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getY_R_int, "()I", 1 },
	{ "getY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getY_int_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getY_int_R_int, "(I)I", 1 },
	{ "getDeltaY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_R_int, "()I", 1 },
	{ "getDeltaY", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_int_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getDeltaY_int_R_int, "(I)I", 1 },
	{ "isTouched", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_isTouched_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isTouched_R_boolean, "()Z", 1 },
	{ "justTouched", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_justTouched_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_justTouched_R_boolean, "()Z", 1 },
	{ "isTouched", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_isTouched_int_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isTouched_int_R_boolean, "(I)Z", 1 },
	{ "getPressure", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getPressure_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getPressure_R_float, "()F", 1 },
	{ "getPressure", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getPressure_int_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getPressure_int_R_float, "(I)F", 1 },
	{ "isButtonPressed", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_isButtonPressed_int_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isButtonPressed_int_R_boolean, "(I)Z", 1 },
	{ "isButtonJustPressed", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_isButtonJustPressed_int_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isButtonJustPressed_int_R_boolean, "(I)Z", 1 },
	{ "getTextInput", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String, "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "getTextInput", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getTextInput_com_badlogic_gdx_Input$TextInputListener_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType, "(Lcom/badlogic/gdx/Input$TextInputListener;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/Input$OnscreenKeyboardType;)V", 1 },
	{ "setOnscreenKeyboardVisible", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean, "(Z)V", 257 },
	{ "setOnscreenKeyboardVisible", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_setOnscreenKeyboardVisible_boolean_com_badlogic_gdx_Input$OnscreenKeyboardType, "(ZLcom/badlogic/gdx/Input$OnscreenKeyboardType;)V", 1 },
	{ "openTextInputField", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_openTextInputField_com_badlogic_gdx_input_NativeInputConfiguration, "(Lcom/badlogic/gdx/input/NativeInputConfiguration;)V", 1 },
	{ "closeTextInputField", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_closeTextInputField_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_closeTextInputField_boolean, "(Z)V", 1 },
	{ "setKeyboardHeightObserver", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_setKeyboardHeightObserver_com_badlogic_gdx_Input$KeyboardHeightObserver, "(Lcom/badlogic/gdx/Input$KeyboardHeightObserver;)V", 1 },
	{ "vibrate", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int, "(I)V", 1 },
	{ "vibrate", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_boolean, "(IZ)V", 1 },
	{ "vibrate", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_int_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_vibrate_int_int_boolean, "(IIZ)V", 1 },
	{ "vibrate", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_vibrate_com_badlogic_gdx_Input$VibrationType, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_vibrate_com_badlogic_gdx_Input$VibrationType, "(Lcom/badlogic/gdx/Input$VibrationType;)V", 1 },
	{ "getAzimuth", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getAzimuth_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getAzimuth_R_float, "()F", 1 },
	{ "getPitch", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getPitch_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getPitch_R_float, "()F", 1 },
	{ "getRoll", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getRoll_R_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getRoll_R_float, "()F", 1 },
	{ "getRotationMatrix", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getRotationMatrix_Array1_float, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getRotationMatrix_Array1_float, "([F)V", 1 },
	{ "getCurrentEventTime", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getCurrentEventTime_R_long, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getCurrentEventTime_R_long, "()J", 1 },
	{ "setInputProcessor", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_setInputProcessor_com_badlogic_gdx_InputProcessor, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_setInputProcessor_com_badlogic_gdx_InputProcessor, "(Lcom/badlogic/gdx/InputProcessor;)V", 1 },
	{ "getInputProcessor", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getInputProcessor_R_com_badlogic_gdx_InputProcessor, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getInputProcessor_R_com_badlogic_gdx_InputProcessor, "()Lcom/badlogic/gdx/InputProcessor;", 1 },
	{ "isPeripheralAvailable", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isPeripheralAvailable_com_badlogic_gdx_Input$Peripheral_R_boolean, "(Lcom/badlogic/gdx/Input$Peripheral;)Z", 1 },
	{ "getRotation", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getRotation_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getRotation_R_int, "()I", 1 },
	{ "getNativeOrientation", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_getNativeOrientation_R_com_badlogic_gdx_Input$Orientation, "()Lcom/badlogic/gdx/Input$Orientation;", 1 },
	{ "setCursorCatched", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_setCursorCatched_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_setCursorCatched_boolean, "(Z)V", 1 },
	{ "isCursorCatched", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_isCursorCatched_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_isCursorCatched_R_boolean, "()Z", 1 },
	{ "setCursorPosition", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_setCursorPosition_int_int, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_setCursorPosition_int_int, "(II)V", 1 },
	{ "pollInput", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchInput_pollInput_Array1_int_R_int, 0, "([I)I", 266 },
	{ "beginTextInput", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchInput_beginTextInput_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z", 266 },
	{ "takeText", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchInput_takeText_R_java_lang_String, 0, "()Ljava/lang/String;", 266 },
	{ "lambda$getTextInput$0", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_lambda$getTextInput$0_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType_com_badlogic_gdx_Input$TextInputListener, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_lambda$getTextInput$0_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType_com_badlogic_gdx_Input$TextInputListener, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/badlogic/gdx/Input$OnscreenKeyboardType;Lcom/badlogic/gdx/Input$TextInputListener;)V", 4098 },
};

Class class_com_thelogicmaster_switchgdx_SwitchInput{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchInput",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_AbstractInput,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchInput),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchInput,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchInput,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchInput,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 52,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 65,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchInput = registerClass(&class_com_thelogicmaster_switchgdx_SwitchInput);

}

