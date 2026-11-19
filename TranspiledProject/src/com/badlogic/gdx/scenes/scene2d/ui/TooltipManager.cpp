#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager_2.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Container.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/Actions.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/RemoveActorAction.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tooltip.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/ScaleToAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/utils/Timer.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instance;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files;

void mark_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instance)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instance, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) object;
	if (self->F_shown)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shown)->clazz)->markFunction)((jobject) self->F_shown, mark, depth + 1);
	if (self->F_resetTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resetTask)->clazz)->markFunction)((jobject) self->F_resetTask, mark, depth + 1);
	if (self->F_showTooltip)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_showTooltip)->clazz)->markFunction)((jobject) self->F_showTooltip, mark, depth + 1);
	if (self->F_showTask)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_showTask)->clazz)->markFunction)((jobject) self->F_showTask, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_initialTime = (jfloat(2));
	LINE_NUMBER(40);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_subsequentTime = (jfloat(0));
	LINE_NUMBER(42);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_resetTime = (jfloat(1.5f));
	LINE_NUMBER(44);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_enabled = (jint(1));
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_animations = (jint(1));
	LINE_NUMBER(48);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jfloat(2.147484e+09f));
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_offsetX = (jfloat(15.0f));
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_offsetY = (jfloat(19.0f));
	LINE_NUMBER(53);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_edgeDistance = (jfloat(7.0f));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_shown = (jref) sp[1].o;
	LINE_NUMBER(57);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_initialTime);
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$1_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_resetTask = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_showTask = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_touchDown_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:touchDown", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_remove_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_resetTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_resetTask;
	((func_com_badlogic_gdx_utils_Timer$Task_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_run])(ctx, sp[0].o);
	LINE_NUMBER(89);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_4;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_always) == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(90);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTooltip = (jref) (frame[1].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_time));
	}
label_5:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_enter_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:enter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTooltip = (jref) (frame[1].o);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(98);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_enabled) != 0) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_always) == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(99);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), -1)) == 0) goto label_5;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_instant) == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_com_badlogic_gdx_utils_Timer$Task_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_run])(ctx, sp[0].o);
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_time));
	}
label_4:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hide_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:hide", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTooltip = (jref) (jobject(nullptr));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(109);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_hasParent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_hasParent_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_shown;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(111);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_resetTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_resetTask;
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_resetTime));
	}
label_3:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_showAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:showAction", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_animations) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_time), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	(sp++)->f = jfloat(0.5f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(0.15f);
	goto label_3;
label_1:;
	(sp++)->f = jfloat(0.1f);
label_3:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setTransform_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setTransform_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0.2f));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setScale_float])(ctx, sp[0].o, (jfloat(0.05f)));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jfloat temp0 = frame[2].f;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_fade;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_fadeIn_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(ctx, temp0, sp[1].o);
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = frame[2].f;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_fade;
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_scaleTo_float_float_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_scenes_scene2d_actions_ScaleToAction(ctx, temp1, temp2, temp3, sp[2].o);
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_parallel_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_R_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:hideAction", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[1].o)))->F_container;
	jfloat temp0 = jfloat(0.2f);
	jfloat temp1 = jfloat(0.2f);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_fade;
	LINE_NUMBER(130);
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_alpha_float_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(ctx, temp0, temp1, sp[1].o);
	jfloat temp2 = jfloat(0.05f);
	jfloat temp3 = jfloat(0.05f);
	jfloat temp4 = jfloat(0.2f);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_fade;
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_scaleTo_float_float_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_scenes_scene2d_actions_ScaleToAction(ctx, temp2, temp3, temp4, sp[2].o);
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_parallel_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_R_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_removeActor_R_com_badlogic_gdx_scenes_scene2d_actions_RemoveActorAction(ctx);
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_sequence_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_R_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:hideAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_resetTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(136);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_initialTime);
	LINE_NUMBER(137);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTooltip = (jref) (jobject(nullptr));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_shown;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, sp[0].o));
	LINE_NUMBER(140);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_hide])(ctx, (frame[2].o));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_shown;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instant(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:instant", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_com_badlogic_gdx_utils_Timer$Task_run) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_run])(ctx, sp[0].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK((frame[0].o)))->F_showTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_getInstance_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager:getInstance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	{
	LINE_NUMBER(152);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(153);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files = sp[0].o;
	LINE_NUMBER(154);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager);
	init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instance = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(156);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_touchDown_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_enter_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hide_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_showAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instant,
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
	{ "touchDown", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V" },
	{ "enter", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V" },
	{ "hide", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V" },
	{ "showAction", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V" },
	{ "hideAction", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V" },
	{ "hideAll", "()V" },
	{ "instant", "()V" },
};

static FieldMetadata fields[] {
	{ "instance", &class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instance, "Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;", 10 },
	{ "files", &class_com_badlogic_gdx_Files, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_files, "Lcom/badlogic/gdx/Files;", 10 },
	{ "initialTime", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_initialTime), "F", 1 },
	{ "subsequentTime", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_subsequentTime), "F", 1 },
	{ "resetTime", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_resetTime), "F", 1 },
	{ "enabled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_enabled), "Z", 1 },
	{ "animations", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_animations), "Z", 1 },
	{ "maxWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_maxWidth), "F", 1 },
	{ "offsetX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_offsetY), "F", 1 },
	{ "edgeDistance", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_edgeDistance), "F", 1 },
	{ "shown", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_shown), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "time", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_time), "F", 0 },
	{ "resetTask", &class_com_badlogic_gdx_utils_Timer$Task, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_resetTask), "Lcom/badlogic/gdx/utils/Timer$Task;", 16 },
	{ "showTooltip", &class_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_showTooltip), "Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;", 0 },
	{ "showTask", &class_com_badlogic_gdx_utils_Timer$Task, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, F_showTask), "Lcom/badlogic/gdx/utils/Timer$Task;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, 0, "()V", 1 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_touchDown_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_touchDown_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V", 1 },
	{ "enter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_enter_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_enter_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V", 1 },
	{ "hide", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hide_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hide_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V", 1 },
	{ "showAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_showAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_showAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V", 4 },
	{ "hideAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tooltip;)V", 4 },
	{ "hideAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAll, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_hideAll, "()V", 1 },
	{ "instant", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instant, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_instant, "()V", 1 },
	{ "getInstance", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_getInstance_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, 0, "()Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;", 9 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager);

}

