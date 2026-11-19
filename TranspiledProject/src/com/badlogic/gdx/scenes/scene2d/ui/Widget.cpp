#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Widget(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_Actor(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Widget *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Actor(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Widget(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(35);
	init_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_needsLayout = (jint(1));
	LINE_NUMBER(38);
	((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_layoutEnabled = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:getMaxWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:getMaxHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:setLayoutEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(65);
	((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_layoutEnabled = (frame[1].i);
	LINE_NUMBER(66);
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:validate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_layoutEnabled) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(73);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_fillParent) == 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(76);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[4].o));
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(77);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[4].o));
	frame[2].f = temp0;
	LINE_NUMBER(78);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[4].o));
	frame[3].f = temp1;
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(80);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Group_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getWidth_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(81);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Group_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Group_getHeight_R_float])(ctx, (frame[1].o));
	frame[3].f = temp1;
	}
label_10:;
	{
	LINE_NUMBER(83);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_setSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_setSize_float_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	}
label_3:;
	{
	LINE_NUMBER(86);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_needsLayout) != 0) goto label_12;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_12:;
	{
	LINE_NUMBER(87);
	((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_needsLayout = (jint(0));
	LINE_NUMBER(88);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_layout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_layout])(ctx, (frame[0].o));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:needsLayout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_needsLayout);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_needsLayout = (jint(1));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:invalidateHierarchy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_layoutEnabled) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(102);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(104);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_4;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_invalidateHierarchy) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_invalidateHierarchy, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[1].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[1].o))));
	}
label_4:;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_sizeChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:sizeChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:pack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(113);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate])(ctx, (frame[0].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:setFillParent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(117);
	((com_badlogic_gdx_scenes_scene2d_ui_Widget *) NULL_CHECK((frame[0].o)))->F_fillParent = (frame[1].i);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(122);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate])(ctx, (frame[0].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Widget_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Widget:layout", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Widget[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_sizeChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toFront,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toBack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "act", "(F)V" },
	{ "fire", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "notify", "(Lcom/badlogic/gdx/scenes/scene2d/Event;Z)Z" },
	{ "hit", "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "remove", "()Z" },
	{ "addListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getCaptureListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "removeAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "isDescendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "isAscendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "firstAscendant", "(Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "hasParent", "()Z" },
	{ "getParent", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "setParent", "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V" },
	{ "isTouchable", "()Z" },
	{ "getTouchable", "()Lcom/badlogic/gdx/scenes/scene2d/Touchable;" },
	{ "setTouchable", "(Lcom/badlogic/gdx/scenes/scene2d/Touchable;)V" },
	{ "isVisible", "()Z" },
	{ "setVisible", "(Z)V" },
	{ "ascendantsVisible", "()Z" },
	{ "ancestorsVisible", "()Z" },
	{ "hasKeyboardFocus", "()Z" },
	{ "hasScrollFocus", "()Z" },
	{ "isTouchFocusTarget", "()Z" },
	{ "isTouchFocusListener", "()Z" },
	{ "getUserObject", "()Ljava/lang/Object;" },
	{ "setUserObject", "(Ljava/lang/Object;)V" },
	{ "getX", "()F" },
	{ "getX", "(I)F" },
	{ "setX", "(F)V" },
	{ "setX", "(FI)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "setY", "(FI)V" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "positionChanged", "()V" },
	{ "sizeChanged", "()V" },
	{ "scaleChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "getOriginX", "()F" },
	{ "setOriginX", "(F)V" },
	{ "getOriginY", "()F" },
	{ "setOriginY", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "getScaleX", "()F" },
	{ "setScaleX", "(F)V" },
	{ "getScaleY", "()F" },
	{ "setScaleY", "(F)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "setZIndex", "(I)Z" },
	{ "getZIndex", "()I" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "stageToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "parentToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToStageCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToParentCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToAscendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToActorCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "drawDebug", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "drawDebugBounds", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "setDebug", "(Z)V" },
	{ "getDebug", "()Z" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "layout", "()V" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "validate", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "needsLayout", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, };

static FieldMetadata fields[] {
	{ "needsLayout", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Widget, F_needsLayout), "Z", 2 },
	{ "fillParent", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Widget, F_fillParent), "Z", 2 },
	{ "layoutEnabled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Widget, F_layoutEnabled), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Widget, 0, "()V", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float, "()F", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getPrefHeight_R_float, "()F", 1 },
	{ "getMaxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float, "()F", 1 },
	{ "getMaxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float, "()F", 1 },
	{ "setLayoutEnabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean, "(Z)V", 1 },
	{ "validate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate, "()V", 1 },
	{ "needsLayout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean, "()Z", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate, "()V", 1 },
	{ "invalidateHierarchy", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy, "()V", 1 },
	{ "sizeChanged", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_sizeChanged, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_sizeChanged, "()V", 4 },
	{ "pack", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack, "()V", 1 },
	{ "setFillParent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean, "(Z)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Widget_layout, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Widget{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Widget",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Actor,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Widget),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 132,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Widget = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Widget);

}

