#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener.h"
#include "com/badlogic/gdx/input/GestureDetector_GestureListener.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent_Type.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener_2.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/input/GestureDetector.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
jobject SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords2;

void mark_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords2)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords2, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) object;
	if (self->F_detector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_detector)->clazz)->markFunction)((jobject) self->F_detector, mark, depth + 1);
	if (self->F_event)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_event)->clazz)->markFunction)((jobject) self->F_event, mark, depth + 1);
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_touchDownTarget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchDownTarget)->clazz)->markFunction)((jobject) self->F_touchDownTarget, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_float_float_float_float(ctx, (frame[0].o), (jfloat(20.0f)), (jfloat(0.4f)), (jfloat(1.1f)), (jfloat(2.147484e+09f)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_input_GestureDetector(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_input_GestureDetector);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1);
	init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$1_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx, sp[2].o, (frame[0].o));
	init_com_badlogic_gdx_input_GestureDetector_float_float_float_float_com_badlogic_gdx_input_GestureDetector$GestureListener(ctx, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_detector = (jref) sp[1].o;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:handle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_InputEvent)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(106);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_InputEvent, (frame[1].o)));
	LINE_NUMBER(108);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener$2_$SwitchMap$com$badlogic$gdx$scenes$scene2d$InputEvent$Type;
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
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_touchDownTarget = (jref) sp[1].o;
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, (frame[2].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_touchDown_float_float_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float])(ctx, (frame[2].o));
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp5, temp6);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp7 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp8 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp9 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	jint temp10 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int])(ctx, sp[0].o, sp[1].o, temp7, temp8, temp9, temp10);
	LINE_NUMBER(115);
	jint temp11 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getTouchFocus_R_boolean])(ctx, (frame[2].o));
	if (temp11 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[2].o));
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	sp[4].o = frame[2].o;
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, sp[4].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, (frame[2].o));
	LINE_NUMBER(115);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addTouchFocus_com_badlogic_gdx_scenes_scene2d_EventListener_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, temp1);
	}
label_12:;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(119);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_isTouchFocusCancel_R_boolean])(ctx, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(120);
	if ((frame[3].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	((func_com_badlogic_gdx_input_GestureDetector_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_reset])(ctx, sp[0].o);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(123);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_event = (jref) (frame[2].o);
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor = (jref) sp[1].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, (frame[2].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_touchUp_float_float_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_actor;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float])(ctx, (frame[2].o));
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp5, temp6);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp7 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords;
	jfloat temp8 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y;
	jint temp9 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	jint temp10 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getButton_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int])(ctx, sp[0].o, sp[1].o, temp7, temp8, temp9, temp10);
	}
label_18:;
	{
	LINE_NUMBER(129);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_event = (jref) (jobject(nullptr));
	LINE_NUMBER(130);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (jobject(nullptr));
	LINE_NUMBER(131);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_touchDownTarget = (jref) (jobject(nullptr));
	LINE_NUMBER(132);
	if ((frame[3].i) != 0) goto label_26;
	}
	INST_ICONST(1);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(134);
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_event = (jref) (frame[2].o);
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK(sp[0].o))->F_actor = (jref) sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageX_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getStageY_R_float])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getPointer_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_input_GestureDetector_touchDragged_float_float_int_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:touchDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:touchUp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tap_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:tap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_longPress_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:longPress", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:fling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:pan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	LINE_NUMBER(162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_panStop_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:panStop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_zoom_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:zoom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pinch_com_badlogic_gdx_scenes_scene2d_InputEvent_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:pinch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:getGestureDetector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_detector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getTouchDownTarget_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:getTouchDownTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener *) NULL_CHECK((frame[0].o)))->F_touchDownTarget;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	{
	LINE_NUMBER(33);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords = sp[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tap_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_longPress_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_panStop_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_zoom_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pinch_com_badlogic_gdx_scenes_scene2d_InputEvent_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getTouchDownTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	{ "touchDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "touchUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "tap", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "longPress", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)Z" },
	{ "fling", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V" },
	{ "pan", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)V" },
	{ "panStop", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "zoom", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V" },
	{ "pinch", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V" },
	{ "getGestureDetector", "()Lcom/badlogic/gdx/input/GestureDetector;" },
	{ "getTouchDownTarget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_EventListener, };

static FieldMetadata fields[] {
	{ "tmpCoords", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords, "Lcom/badlogic/gdx/math/Vector2;", 24 },
	{ "tmpCoords2", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tmpCoords2, "Lcom/badlogic/gdx/math/Vector2;", 24 },
	{ "detector", &class_com_badlogic_gdx_input_GestureDetector, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, F_detector), "Lcom/badlogic/gdx/input/GestureDetector;", 18 },
	{ "event", &class_com_badlogic_gdx_scenes_scene2d_InputEvent, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, F_event), "Lcom/badlogic/gdx/scenes/scene2d/InputEvent;", 0 },
	{ "actor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, F_actor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 0 },
	{ "touchDownTarget", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, F_touchDownTarget), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "handle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "touchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "tap", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tap_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_tap_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "longPress", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_longPress_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_longPress_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)Z", 1 },
	{ "fling", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_fling_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V", 1 },
	{ "pan", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pan_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)V", 1 },
	{ "panStop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_panStop_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_panStop_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V", 1 },
	{ "zoom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_zoom_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_zoom_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V", 1 },
	{ "pinch", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pinch_com_badlogic_gdx_scenes_scene2d_InputEvent_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_pinch_com_badlogic_gdx_scenes_scene2d_InputEvent_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2_com_badlogic_gdx_math_Vector2, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;Lcom/badlogic/gdx/math/Vector2;)V", 1 },
	{ "getGestureDetector", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getGestureDetector_R_com_badlogic_gdx_input_GestureDetector, "()Lcom/badlogic/gdx/input/GestureDetector;", 1 },
	{ "getTouchDownTarget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getTouchDownTarget_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener_getTouchDownTarget_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener);

}

