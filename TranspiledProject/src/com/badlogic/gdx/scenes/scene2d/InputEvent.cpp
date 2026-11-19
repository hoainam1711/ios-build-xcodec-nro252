#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent_Type.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_InputEvent(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_Event(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_InputEvent *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_relatedActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_relatedActor)->clazz)->markFunction)((jobject) self->F_relatedActor, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_InputEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Event(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_InputEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_InputEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_com_badlogic_gdx_scenes_scene2d_Event(ctx, (frame[0].o));
	LINE_NUMBER(31);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_touchFocus = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	M_com_badlogic_gdx_scenes_scene2d_Event_reset(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor = (jref) (jobject(nullptr));
	LINE_NUMBER(36);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_button = (jint(-1));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getStageX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setStageX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageX = (frame[1].f);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getStageY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setStageY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(56);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageY = (frame[1].f);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getPointer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_pointer);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setPointer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(75);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_pointer = (frame[1].i);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getButton", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_button);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setButton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_button = (frame[1].i);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getKeyCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_keyCode);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setKeyCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(94);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_keyCode = (frame[1].i);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jchar M_com_badlogic_gdx_scenes_scene2d_InputEvent_getCharacter_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getCharacter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_character);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setCharacter_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setCharacter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_character = (frame[1].i);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getScrollAmountX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_scrollAmountX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getScrollAmountY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_scrollAmountY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setScrollAmountX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(117);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_scrollAmountX = (frame[1].f);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setScrollAmountY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(121);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_scrollAmountY = (frame[1].f);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getRelatedActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setRelatedActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor = (jref) (frame[1].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_InputEvent_toCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:toCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[2].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageY));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:isTouchFocusCancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageX), (jfloat(-2.147484e+09f)), -1)) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageY), (jfloat(-2.147484e+09f)), -1)) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:getTouchFocus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_touchFocus);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_InputEvent_setTouchFocus_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:setTouchFocus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(155);
	((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_touchFocus = (frame[1].i);
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_InputEvent_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/InputEvent:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_InputEvent *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent$Type_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_InputEvent[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_handle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_stop,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setBubbles_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isHandled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isCapture_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getCharacter_R_char,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setCharacter_char,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_toCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setTouchFocus_boolean,
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
	{ "reset", "()V" },
	{ "handle", "()V" },
	{ "cancel", "()V" },
	{ "stop", "()V" },
	{ "getTarget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setTarget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getListenerActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setListenerActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getBubbles", "()Z" },
	{ "setBubbles", "(Z)V" },
	{ "isHandled", "()Z" },
	{ "isStopped", "()Z" },
	{ "isCancelled", "()Z" },
	{ "setCapture", "(Z)V" },
	{ "isCapture", "()Z" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
	{ "getStageX", "()F" },
	{ "setStageX", "(F)V" },
	{ "getStageY", "()F" },
	{ "setStageY", "(F)V" },
	{ "getType", "()Lcom/badlogic/gdx/scenes/scene2d/InputEvent$Type;" },
	{ "setType", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent$Type;)V" },
	{ "getPointer", "()I" },
	{ "setPointer", "(I)V" },
	{ "getButton", "()I" },
	{ "setButton", "(I)V" },
	{ "getKeyCode", "()I" },
	{ "setKeyCode", "(I)V" },
	{ "getCharacter", "()C" },
	{ "setCharacter", "(C)V" },
	{ "getScrollAmountX", "()F" },
	{ "getScrollAmountY", "()F" },
	{ "setScrollAmountX", "(F)V" },
	{ "setScrollAmountY", "(F)V" },
	{ "getRelatedActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setRelatedActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "toCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "isTouchFocusCancel", "()Z" },
	{ "getTouchFocus", "()Z" },
	{ "setTouchFocus", "(Z)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_InputEvent$Type,
};

static FieldMetadata fields[] {
	{ "type", &class_com_badlogic_gdx_scenes_scene2d_InputEvent$Type, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_type), "Lcom/badlogic/gdx/scenes/scene2d/InputEvent$Type;", 2 },
	{ "stageX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_stageX), "F", 2 },
	{ "stageY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_stageY), "F", 2 },
	{ "scrollAmountX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_scrollAmountX), "F", 2 },
	{ "scrollAmountY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_scrollAmountY), "F", 2 },
	{ "pointer", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_pointer), "I", 2 },
	{ "button", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_button), "I", 2 },
	{ "keyCode", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_keyCode), "I", 2 },
	{ "character", &class_char, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_character), "C", 2 },
	{ "relatedActor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_relatedActor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "touchFocus", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_InputEvent, F_touchFocus), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_InputEvent, 0, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_reset, "()V", 1 },
	{ "getStageX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float, "()F", 1 },
	{ "setStageX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageX_float, "(F)V", 1 },
	{ "getStageY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float, "()F", 1 },
	{ "setStageY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setStageY_float, "(F)V", 1 },
	{ "getType", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getType_R_com_badlogic_gdx_scenes_scene2d_InputEvent$Type, "()Lcom/badlogic/gdx/scenes/scene2d/InputEvent$Type;", 1 },
	{ "setType", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setType_com_badlogic_gdx_scenes_scene2d_InputEvent$Type, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent$Type;)V", 1 },
	{ "getPointer", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int, "()I", 1 },
	{ "setPointer", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setPointer_int, "(I)V", 1 },
	{ "getButton", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int, "()I", 1 },
	{ "setButton", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setButton_int, "(I)V", 1 },
	{ "getKeyCode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getKeyCode_R_int, "()I", 1 },
	{ "setKeyCode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setKeyCode_int, "(I)V", 1 },
	{ "getCharacter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getCharacter_R_char, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getCharacter_R_char, "()C", 1 },
	{ "setCharacter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setCharacter_char, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setCharacter_char, "(C)V", 1 },
	{ "getScrollAmountX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountX_R_float, "()F", 1 },
	{ "getScrollAmountY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getScrollAmountY_R_float, "()F", 1 },
	{ "setScrollAmountX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountX_float, "(F)V", 1 },
	{ "setScrollAmountY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setScrollAmountY_float, "(F)V", 1 },
	{ "getRelatedActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getRelatedActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setRelatedActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setRelatedActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "toCoordinates", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_toCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_toCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;", 1 },
	{ "isTouchFocusCancel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean, "()Z", 1 },
	{ "getTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean, "()Z", 1 },
	{ "setTouchFocus", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_setTouchFocus_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_setTouchFocus_boolean, "(Z)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_InputEvent_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_InputEvent{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/InputEvent",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Event,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_InputEvent),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_InputEvent,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_InputEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_InputEvent,
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
		.methodCount = 27,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_InputEvent = registerClass(&class_com_badlogic_gdx_scenes_scene2d_InputEvent);

}

