#include "com/badlogic/gdx/scenes/scene2d/ui/Tooltip.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Container.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tooltip_1.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tooltip.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) object;
	if (self->F_manager)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_manager)->clazz)->markFunction)((jobject) self->F_manager, mark, depth + 1);
	if (self->F_container)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_container)->clazz)->markFunction)((jobject) self->F_container, mark, depth + 1);
	if (self->F_targetActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetActor)->clazz)->markFunction)((jobject) self->F_targetActor, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_getInstance_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	init_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager = (jref) (frame[2].o);
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tooltip$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Tooltip$1_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_com_badlogic_gdx_scenes_scene2d_Actor(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_container = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_disabled;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getManager_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:getManager", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getContainer_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:getContainer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:setActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:getActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setInstant_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:setInstant", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(74);
	((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_instant = (frame[1].i);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setAlways_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:setAlways", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(79);
	((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_always = (frame[1].i);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setTouchIndependent_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:setTouchIndependent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(84);
	((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_touchIndependent = (frame[1].i);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:touchDown", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(88);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_instant) == 0) goto label_1;
	}
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_toFront])(ctx, sp[0].o);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_touchDown_com_badlogic_gdx_scenes_scene2d_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_touchDown_com_badlogic_gdx_scenes_scene2d_ui_Tooltip])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:mouseMoved", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_hasParent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_hasParent_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setContainerPosition_com_badlogic_gdx_scenes_scene2d_Actor_float_float(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setContainerPosition_com_badlogic_gdx_scenes_scene2d_Actor_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:setContainerPosition", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(103);
	((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_targetActor = (jref) (frame[1].o);
	LINE_NUMBER(104);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(105);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setSize_float_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[1].o))->F_maxWidth), (jfloat(2.147484e+09f)));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_validate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_validate])(ctx, sp[0].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, temp0);
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_pack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_pack])(ctx, sp[0].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	frame[5].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_offsetX);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	frame[6].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_offsetY);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	frame[7].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_edgeDistance);
	LINE_NUMBER(113);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp;
	jfloat temp1 = (frame[2].f) + (frame[5].f);
	jfloat temp2 = (frame[3].f) - (frame[6].f);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp1, (temp2 - temp3));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(114);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_y), (frame[7].f), 1)) >= 0) goto label_12;
	}
	{
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, ((frame[2].f) + (frame[5].f)), ((frame[3].f) + (frame[6].f)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(115);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_x), (frame[7].f), 1)) >= 0) goto label_13;
	}
	{
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_x = (frame[7].f);
	}
label_13:;
	{
	LINE_NUMBER(116);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_x;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[4].o));
	if ((floatCompare(temp2, (temp3 - (frame[7].f)), -1)) <= 0) goto label_14;
	}
	{
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[4].o));
	jfloat temp1 = temp0 - (frame[7].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x = (temp1 - temp2);
	}
label_14:;
	{
	LINE_NUMBER(117);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, sp[0].o);
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[4].o));
	if ((floatCompare(temp2, (temp3 - (frame[7].f)), -1)) <= 0) goto label_15;
	}
	{
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[4].o));
	jfloat temp1 = temp0 - (frame[7].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y = (temp1 - temp2);
	}
label_15:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setPosition_float_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_y));
	LINE_NUMBER(120);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 / (jfloat(2));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp1, (temp2 / (jfloat(2))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getX_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_sub_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_sub_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp3, temp4);
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setOrigin_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setOrigin_float_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK((frame[8].o)))->F_y));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:enter", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(126);
	if ((frame[4].i) == (jint(-1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(127);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_touchIndependent) == 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isTouched_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isTouched_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(129);
	if ((frame[5].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[5].o), (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(130);
	M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setContainerPosition_com_badlogic_gdx_scenes_scene2d_Actor_float_float(ctx, (frame[0].o), (frame[6].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_enter_com_badlogic_gdx_scenes_scene2d_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_enter_com_badlogic_gdx_scenes_scene2d_ui_Tooltip])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:exit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(135);
	if ((frame[5].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(136);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide])(ctx, (frame[0].o));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_manager;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hide_com_badlogic_gdx_scenes_scene2d_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hide_com_badlogic_gdx_scenes_scene2d_ui_Tooltip])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tooltip:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
	{
	LINE_NUMBER(31);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Tooltip[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getManager_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getContainer_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setInstant_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setAlways_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setTouchIndependent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setContainerPosition_com_badlogic_gdx_scenes_scene2d_Actor_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide,
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
	{ "getManager", "()Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;" },
	{ "getContainer", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setInstant", "(Z)V" },
	{ "setAlways", "(Z)V" },
	{ "setTouchIndependent", "(Z)V" },
	{ "setContainerPosition", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)V" },
	{ "hide", "()V" },
};

static FieldMetadata fields[] {
	{ "tmp", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_tmp, "Lcom/badlogic/gdx/math/Vector2;", 8 },
	{ "manager", &class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tooltip, F_manager), "Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;", 18 },
	{ "container", &class_com_badlogic_gdx_scenes_scene2d_ui_Container, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tooltip, F_container), "Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 16 },
	{ "instant", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tooltip, F_instant), "Z", 0 },
	{ "always", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tooltip, F_always), "Z", 0 },
	{ "touchIndependent", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tooltip, F_touchIndependent), "Z", 0 },
	{ "targetActor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tooltip, F_targetActor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_com_badlogic_gdx_scenes_scene2d_Actor, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;)V", 1 },
	{ "getManager", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getManager_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getManager_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, "()Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;", 1 },
	{ "getContainer", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getContainer_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getContainer_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "getActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "setInstant", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setInstant_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setInstant_boolean, "(Z)V", 1 },
	{ "setAlways", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setAlways_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setAlways_boolean, "(Z)V", 1 },
	{ "setTouchIndependent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setTouchIndependent_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setTouchIndependent_boolean, "(Z)V", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z", 1 },
	{ "setContainerPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setContainerPosition_com_badlogic_gdx_scenes_scene2d_Actor_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_setContainerPosition_com_badlogic_gdx_scenes_scene2d_Actor_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)V", 2 },
	{ "enter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "exit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "hide", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Tooltip{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Tooltip",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Tooltip),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
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
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 31,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Tooltip = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Tooltip);

}

