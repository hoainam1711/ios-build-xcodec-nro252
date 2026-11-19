#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener_1.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureAdapter.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_input_GestureDetector$GestureAdapter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) object;
	if (self->F_initialPointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer1)->clazz)->markFunction)((jobject) self->F_initialPointer1, mark, depth + 1);
	if (self->F_initialPointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialPointer2)->clazz)->markFunction)((jobject) self->F_initialPointer2, mark, depth + 1);
	if (self->F_pointer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer1)->clazz)->markFunction)((jobject) self->F_pointer1, mark, depth + 1);
	if (self->F_pointer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pointer2)->clazz)->markFunction)((jobject) self->F_pointer2, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_input_GestureDetector$GestureAdapter(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_input_GestureDetector$GestureAdapter(ctx, (frame[0].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK(sp[0].o))->F_initialPointer1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK(sp[0].o))->F_initialPointer2 = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK(sp[0].o))->F_pointer1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK(sp[0].o))->F_pointer2 = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_tap_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:tap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tap_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tap_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y), (frame[3].i), (frame[4].i));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:longPress", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_longPress_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_longPress_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_fling_float_float_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:fling", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_stageToLocalAmount_com_badlogic_gdx_math_Vector2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y), (frame[3].i));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:pan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[3].f), (frame[4].f));
	M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_stageToLocalAmount_com_badlogic_gdx_math_Vector2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	frame[3].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(70);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y), (frame[3].f), (frame[4].f));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_panStop_float_float_int_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:panStop", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_panStop_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_panStop_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y), (frame[3].i), (frame[4].i));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:zoom", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_zoom_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_zoom_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:pinch", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer2;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_event;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer1;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_initialPointer2;
	sp[4].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer1;
	sp[5].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_pointer2;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pinch_com_badlogic_gdx_scenes_scene2d_InputEvent_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pinch_com_badlogic_gdx_scenes_scene2d_InputEvent_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_stageToLocalAmount_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1:stageToLocalAmount", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(99);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[1].o))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords2;
	sp[2].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[2].o, (jfloat(0)), (jfloat(0)));
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1[] {
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
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_touchDown_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_tap_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_longPress_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_fling_float_float_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pan_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_panStop_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_zoom_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean,
	(void *) M_com_badlogic_gdx_input_GestureDetector$GestureAdapter_pinchStop,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_stageToLocalAmount_com_badlogic_gdx_math_Vector2,
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
	{ "touchDown", "(FFII)Z" },
	{ "tap", "(FFII)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFI)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFII)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z" },
	{ "pinchStop", "()V" },
	{ "stageToLocalAmount", "(Lcom/badlogic/gdx/math/Vector2;)V" },
};

static FieldMetadata fields[] {
	{ "initialPointer1", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1, F_initialPointer1), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "initialPointer2", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1, F_initialPointer2), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "pointer1", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1, F_pointer1), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "pointer2", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1, F_pointer2), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener;)V", 0 },
	{ "tap", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_tap_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_tap_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "longPress", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_longPress_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_longPress_float_float_R_boolean, "(FF)Z", 1 },
	{ "fling", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_fling_float_float_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_fling_float_float_int_R_boolean, "(FFI)Z", 1 },
	{ "pan", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pan_float_float_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pan_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "panStop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_panStop_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_panStop_float_float_int_int_R_boolean, "(FFII)Z", 1 },
	{ "zoom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_zoom_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_zoom_float_float_R_boolean, "(FF)Z", 1 },
	{ "pinch", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_pinch_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_R_boolean, "(Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)Z", 1 },
	{ "stageToLocalAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_stageToLocalAmount_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_stageToLocalAmount_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/math/Vector2;)V", 2 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_input_GestureDetector$GestureAdapter,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1);

}

