#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent_Type.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener_1.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;

void mark_com_badlogic_gdx_scenes_scene2d_InputListener(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_InputListener *) object;
}

void init_com_badlogic_gdx_scenes_scene2d_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:handle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_InputEvent)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(49);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, (frame[1].o)));
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener$1_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		default: goto label_6;
	}
	}
label_3:;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_4:;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_5:;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getCharacter_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getCharacter_R_char])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_6:;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_toCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_toCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(62);
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener$1_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 4: goto label_8;
		case 5: goto label_9;
		case 6: goto label_10;
		case 7: goto label_11;
		case 8: goto label_12;
		case 9: goto label_13;
		case 10: goto label_14;
		default: goto label_15;
	}
	}
label_8:;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, (frame[2].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	frame[3].i = temp4;
	LINE_NUMBER(65);
	if ((frame[3].i) == 0) goto label_17;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[2].o));
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	sp[4].o = frame[2].o;
	LINE_NUMBER(67);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, sp[4].o);
	LINE_NUMBER(66);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, temp1);
	}
label_17:;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_9:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}
label_12:;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountX_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountX_R_float])(ctx, (frame[2].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountY_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountY_R_float])(ctx, (frame[2].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}
label_13:;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:touchDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:touchUp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:touchDragged", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:mouseMoved", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:enter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:exit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:scrolled", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:keyDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:keyUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:keyTyped", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_InputListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputListener:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	{
	LINE_NUMBER(39);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_InputListener[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
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
	{ "handle", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "touchDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z" },
	{ "touchUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "touchDragged", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V" },
	{ "mouseMoved", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z" },
	{ "enter", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "exit", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "scrolled", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)Z" },
	{ "keyDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z" },
	{ "keyUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z" },
	{ "keyTyped", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;C)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_EventListener, };

static FieldMetadata fields[] {
	{ "tmpCoords", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_InputListener_tmpCoords, "Lcom/badlogic/gdx/math/Vector2;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_InputListener, 0, "()V", 1 },
	{ "handle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "touchDragged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z", 1 },
	{ "enter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "exit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "scrolled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)Z", 1 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
	{ "keyUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;C)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_InputListener, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_InputListener{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/InputListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_InputListener),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_InputListener,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_InputListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_InputListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_InputListener = registerClass(&class_com_badlogic_gdx_scenes_scene2d_InputListener);

}

