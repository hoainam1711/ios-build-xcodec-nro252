#include "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Disableable.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar_ProgressBarStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Widget(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_animateInterpolation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_animateInterpolation)->clazz)->markFunction)((jobject) self->F_animateInterpolation, mark, depth + 1);
	if (self->F_visualInterpolation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visualInterpolation)->clazz)->markFunction)((jobject) self->F_visualInterpolation, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jint temp3 = frame[4].i;
	sp[1].o = frame[5].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"default-"_j))));
	jobject temp4 = sp[1].o;
	sp[1].f = temp0;
	jobject temp5 = sp[2].o;
	sp[2].f = temp1;
	sp[3].f = temp2;
	sp[4].i = temp3;
	sp[5].o = temp4;
	sp[6].o = temp5;
	sp += 7;
	if ((frame[4].i) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"vertical"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"horizontal"_j));
label_2:;
	{
	sp -= 8;
	sp[6].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[6].o, sp[7].o);
	sp[6].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[6].o);
	sp[5].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[5].o, sp[6].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].i, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, sp[5].o)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jint temp3 = frame[4].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[5].o), (frame[6].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, sp[0].o, temp0, temp1, temp2, temp3, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, sp[1].o)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(72);
	init_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx, (frame[0].o));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_linear;
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_animateInterpolation = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_linear;
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_visualInterpolation = (jref) sp[1].o;
	LINE_NUMBER(52);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round = (jint(1));
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (jint(1));
	LINE_NUMBER(73);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) <= 0) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"max must be > min. min,max: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(74);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) > 0) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"stepSize must be > 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(75);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(76);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min = (frame[1].f);
	LINE_NUMBER(77);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max = (frame[2].f);
	LINE_NUMBER(78);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize = (frame[3].f);
	LINE_NUMBER(79);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical = (frame[4].i);
	LINE_NUMBER(80);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(86);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(87);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:act", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(97);
	M_com_badlogic_gdx_scenes_scene2d_Actor_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(98);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_animateTime = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_animateTime) - (frame[1].f));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getActionsRequestRendering_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	clinit_com_badlogic_gdx_Gdx(ctx);
	(sp++)->o = SF_com_badlogic_gdx_Gdx_graphics;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_Graphics_requestRendering) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Graphics, INDEX_com_badlogic_gdx_Graphics_requestRendering, sp[0].o))(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[34];
	auto stack = &frame[25];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:draw", 34 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	frame[3].o = sp[0].o;
	LINE_NUMBER(107);
	frame[4].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[3].o)))->F_knob;
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getX_R_float])(ctx, (frame[0].o));
	frame[11].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getY_R_float])(ctx, (frame[0].o));
	frame[12].f = temp1;
	LINE_NUMBER(115);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getWidth_R_float])(ctx, (frame[0].o));
	frame[13].f = temp2;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getHeight_R_float])(ctx, (frame[0].o));
	frame[14].f = temp3;
	LINE_NUMBER(116);
	if ((frame[5].o) != nullptr) goto label_13;
	}
	INST_FCONST(0);
	goto label_14;
label_13:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_14:;
	{
	sp -= 1;
	frame[15].f = sp[0].f;
	LINE_NUMBER(117);
	if ((frame[5].o) != nullptr) goto label_16;
	}
	INST_FCONST(0);
	goto label_17;
label_16:;
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_17:;
	{
	sp -= 1;
	frame[16].f = sp[0].f;
	LINE_NUMBER(118);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualPercent_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualPercent_R_float])(ctx, (frame[0].o));
	frame[17].f = temp0;
	LINE_NUMBER(120);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[10].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(122);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_21;
	}
	{
	LINE_NUMBER(123);
	frame[18].f = (jfloat(0));
	frame[19].f = (jfloat(0));
	LINE_NUMBER(124);
	if ((frame[7].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[7].o;
	jfloat temp0 = frame[11].f;
	jfloat temp1 = frame[13].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp3 = temp0 + ((temp1 - temp2) * (jfloat(0.5f)));
	jfloat temp4 = frame[12].f;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp3, temp4, temp5, (frame[14].f));
	LINE_NUMBER(126);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[18].f = temp6;
	LINE_NUMBER(127);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[19].f = temp7;
	LINE_NUMBER(128);
	frame[14].f = ((frame[14].f) - ((frame[18].f) + (frame[19].f)));
	}
label_25:;
	{
	LINE_NUMBER(131);
	frame[20].f = ((frame[14].f) - (frame[15].f));
	LINE_NUMBER(132);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((frame[20].f) * (frame[17].f)), (jfloat(0)), (frame[20].f));
	frame[21].f = temp0;
	LINE_NUMBER(133);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = ((frame[19].f) + (frame[21].f));
	LINE_NUMBER(135);
	frame[22].f = ((frame[15].f) * (jfloat(0.5f)));
	LINE_NUMBER(136);
	if ((frame[8].o) == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[8].o;
	jfloat temp0 = frame[11].f;
	jfloat temp1 = frame[13].f;
	sp[3].o = frame[8].o;
	LINE_NUMBER(138);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[3].o))(ctx, sp[3].o);
	jfloat temp3 = temp0 + ((temp1 - temp2) * (jfloat(0.5f)));
	jfloat temp4 = (frame[12].f) + (frame[19].f);
	sp[3].o = frame[8].o;
	LINE_NUMBER(140);
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[3].o))(ctx, sp[3].o);
	jfloat temp6 = (frame[21].f) + (frame[22].f);
	LINE_NUMBER(137);
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp3, temp4, temp5, temp6);
	}
label_34:;
	{
	LINE_NUMBER(142);
	if ((frame[9].o) == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[9].o;
	jfloat temp0 = frame[11].f;
	jfloat temp1 = frame[13].f;
	sp[3].o = frame[9].o;
	LINE_NUMBER(144);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[3].o))(ctx, sp[3].o);
	jfloat temp3 = temp0 + ((temp1 - temp2) * (jfloat(0.5f)));
	jfloat temp4 = ((frame[12].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (frame[22].f);
	sp[3].o = frame[9].o;
	LINE_NUMBER(146);
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[3].o))(ctx, sp[3].o);
	jfloat temp6 = frame[20].f;
	LINE_NUMBER(147);
	sp[3].f = temp3;
	sp[4].f = temp4;
	sp[5].f = temp5;
	sp[6].f = temp6;
	sp += 7;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_44;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((frame[21].f) - (frame[22].f)))));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_45;
	}
label_44:;
	{
	jfloat temp0 = (frame[21].f) - (frame[22].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_45:;
	{
	sp -= 8;
	jfloat temp0 = sp[6].f - sp[7].f;
	LINE_NUMBER(143);
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].f, sp[4].f, sp[5].f, temp0);
	}
label_39:;
	{
	LINE_NUMBER(149);
	if ((frame[6].o) == nullptr) goto label_47;
	}
	{
	LINE_NUMBER(150);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[6].o)))(ctx, (frame[6].o));
	frame[23].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[6].o)))(ctx, (frame[6].o));
	frame[24].f = temp1;
	LINE_NUMBER(151);
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[6].o), ((frame[11].f) + (((frame[13].f) - (frame[23].f)) * (jfloat(0.5f)))), (((frame[12].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (((frame[15].f) - (frame[24].f)) * (jfloat(0.5f)))), (frame[23].f), (frame[24].f));
	}
label_47:;
	LINE_NUMBER(156);
	goto label_51;
label_21:;
	{
	LINE_NUMBER(157);
	frame[18].f = (jfloat(0));
	frame[19].f = (jfloat(0));
	LINE_NUMBER(158);
	if ((frame[7].o) == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[7].o;
	jfloat temp0 = frame[11].f;
	jfloat temp1 = frame[12].f;
	jfloat temp2 = frame[14].f;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jint temp4 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp1 + ((temp2 - temp3) * (jfloat(0.5f)))));
	jfloat temp5 = jfloat(temp4);
	jfloat temp6 = frame[13].f;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jint temp8 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp7);
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp5, temp6, (jfloat(temp8)));
	LINE_NUMBER(160);
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[18].f = temp9;
	LINE_NUMBER(161);
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[19].f = temp10;
	LINE_NUMBER(162);
	frame[13].f = ((frame[13].f) - ((frame[18].f) + (frame[19].f)));
	}
label_54:;
	{
	LINE_NUMBER(165);
	frame[20].f = ((frame[13].f) - (frame[16].f));
	LINE_NUMBER(166);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, ((frame[20].f) * (frame[17].f)), (jfloat(0)), (frame[20].f));
	frame[21].f = temp0;
	LINE_NUMBER(167);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = ((frame[18].f) + (frame[21].f));
	LINE_NUMBER(169);
	frame[22].f = ((frame[16].f) * (jfloat(0.5f)));
	LINE_NUMBER(170);
	if ((frame[8].o) == nullptr) goto label_63;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[8].o;
	jfloat temp0 = (frame[11].f) + (frame[18].f);
	jfloat temp1 = frame[12].f;
	jfloat temp2 = frame[14].f;
	sp[3].o = frame[8].o;
	LINE_NUMBER(173);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[3].o))(ctx, sp[3].o);
	jfloat temp4 = temp1 + ((temp2 - temp3) * (jfloat(0.5f)));
	jfloat temp5 = (frame[21].f) + (frame[22].f);
	sp[3].o = frame[8].o;
	LINE_NUMBER(174);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[3].o))(ctx, sp[3].o);
	LINE_NUMBER(171);
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp4, temp5, temp6);
	}
label_63:;
	{
	LINE_NUMBER(176);
	if ((frame[9].o) == nullptr) goto label_68;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[9].o;
	jfloat temp0 = ((frame[11].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (frame[22].f);
	jfloat temp1 = frame[12].f;
	jfloat temp2 = frame[14].f;
	sp[3].o = frame[9].o;
	LINE_NUMBER(179);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[3].o))(ctx, sp[3].o);
	jfloat temp4 = temp1 + ((temp2 - temp3) * (jfloat(0.5f)));
	jfloat temp5 = frame[20].f;
	LINE_NUMBER(180);
	sp[3].f = temp0;
	sp[4].f = temp4;
	sp[5].f = temp5;
	sp += 6;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_72;
	}
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((frame[21].f) - (frame[22].f)))));
	jfloat temp1 = jfloat(temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_73;
	}
label_72:;
	{
	jfloat temp0 = (frame[21].f) - (frame[22].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_73:;
	{
	sp -= 7;
	jfloat temp0 = sp[5].f - sp[6].f;
	sp[5].o = frame[9].o;
	LINE_NUMBER(181);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[5].o))(ctx, sp[5].o);
	LINE_NUMBER(177);
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].f, sp[4].f, temp0, temp1);
	}
label_68:;
	{
	LINE_NUMBER(183);
	if ((frame[6].o) == nullptr) goto label_51;
	}
	{
	LINE_NUMBER(184);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[6].o)))(ctx, (frame[6].o));
	frame[23].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[6].o)))(ctx, (frame[6].o));
	frame[24].f = temp1;
	LINE_NUMBER(185);
	M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[6].o), (((frame[11].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (((frame[16].f) - (frame[23].f)) * (jfloat(0.5f)))), ((frame[12].f) + (((frame[14].f) - (frame[24].f)) * (jfloat(0.5f)))), (frame[23].f), (frame[24].f));
	}
label_51:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:drawRound", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(194);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_1;
	}
	{
	LINE_NUMBER(195);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((frame[3].f))));
	frame[3].f = (jfloat(temp0));
	LINE_NUMBER(196);
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[4].f = (jfloat(temp1));
	LINE_NUMBER(197);
	jdouble temp2 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[5].f))));
	frame[5].f = (jfloat(temp2));
	LINE_NUMBER(198);
	jdouble temp3 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[6].f))));
	frame[6].f = (jfloat(temp3));
	}
label_1:;
	{
	LINE_NUMBER(200);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getVisualValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateInterpolation;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_float_float_R_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateFromValue), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value), ((jfloat(1)) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_updateVisualValue(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:updateVisualValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime = (jfloat(0));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPercent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getPercent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return ((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min)) / (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualPercent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getVisualPercent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max), -1)) != 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_visualInterpolation;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, sp[0].o, ((temp0 - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min)) / (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getBackgroundDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_background;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getKnobDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnob;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnob;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knob;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getKnobBeforeDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnobBefore;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnobBefore;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knobBefore;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getKnobAfterDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(244);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnobAfter;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnobAfter;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knobAfter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobPosition_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getKnobPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setValue", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_round_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_round_float_R_float])(ctx, (frame[0].o), (frame[1].f));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_clamp_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_clamp_float_R_float])(ctx, sp[0].o, temp0);
	frame[1].f = temp1;
	LINE_NUMBER(259);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value);
	LINE_NUMBER(260);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(261);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(262);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(264);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents) == 0) goto label_6;
	}
	{
	LINE_NUMBER(265);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent)));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent, sp[0].o));
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(267);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(268);
	if ((frame[5].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(269);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value = (frame[2].f);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(274);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration), (jfloat(0)), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(275);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateFromValue = (frame[3].f);
	LINE_NUMBER(276);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration);
	}
label_13:;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_round_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:round", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(283);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[1].f) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize)));
	popStackFrame(ctx);
	return ((jfloat(temp0)) * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_clamp_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:clamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(289);
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_math_MathUtils_clamp_float_float_float_R_float(ctx, (frame[1].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRange_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(294);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"min must be <= max: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(295);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min = (frame[1].f);
	LINE_NUMBER(296);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max = (frame[2].f);
	LINE_NUMBER(297);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value), (frame[1].f), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean])(ctx, (frame[0].o), (frame[1].f));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(299);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value), (frame[2].f), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean])(ctx, (frame[0].o), (frame[2].f));
	}
label_6:;
	LINE_NUMBER(301);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStepSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setStepSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(304);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"steps must be > 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(305);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize = (frame[1].f);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getPrefWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_1;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knob;
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(311);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	INST_FCONST(0);
	goto label_6;
label_5:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_6:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_7;
	INST_FCONST(0);
	goto label_8;
label_7:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_8:;
	POP_N(2); // Pop method args
	sp->f = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[0].f, sp[1].f);
	sp++;
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (jfloat(140.0f));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getPrefHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_1;
	}
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (jfloat(140.0f));
	}
label_1:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knob;
	frame[1].o = sp[0].o;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(321);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	INST_FCONST(0);
	goto label_6;
label_5:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_6:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_7;
	INST_FCONST(0);
	goto label_8;
label_7:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_8:;
	POP_N(2); // Pop method args
	sp->f = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[0].f, sp[1].f);
	sp++;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMinValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getMinValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMaxValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getMaxValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStepSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getStepSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateDuration_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setAnimateDuration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(339);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration = (frame[1].f);
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateInterpolation_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setAnimateInterpolation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(344);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"animateInterpolation cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(345);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateInterpolation = (jref) (frame[1].o);
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setVisualInterpolation_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setVisualInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(350);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_visualInterpolation = (jref) (frame[1].o);
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRound_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setRound", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(355);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round = (frame[1].i);
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(359);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled = (frame[1].i);
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isAnimating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:isAnimating", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime), (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isVertical_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:isVertical", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setProgrammaticChangeEvents_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setProgrammaticChangeEvents", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(378);
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents = (frame[1].i);
	LINE_NUMBER(379);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getProgrammaticChangeEvents_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getProgrammaticChangeEvents", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_programmaticChangeEvents);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_act_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setDisabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isDisabled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getValue_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_updateVisualValue,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPercent_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualPercent_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobPosition_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_round_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_clamp_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRange_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStepSize_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMinValue_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMaxValue_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStepSize_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setVisualInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRound_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isAnimating_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isVertical_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setProgrammaticChangeEvents_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getProgrammaticChangeEvents_R_boolean,
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
	{ "setDisabled", "(Z)V" },
	{ "isDisabled", "()Z" },
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/ProgressBar$ProgressBarStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/ProgressBar$ProgressBarStyle;" },
	{ "drawRound", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;FFFF)V" },
	{ "getValue", "()F" },
	{ "getVisualValue", "()F" },
	{ "updateVisualValue", "()V" },
	{ "getPercent", "()F" },
	{ "getVisualPercent", "()F" },
	{ "getBackgroundDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getKnobDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getKnobBeforeDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getKnobAfterDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getKnobPosition", "()F" },
	{ "setValue", "(F)Z" },
	{ "round", "(F)F" },
	{ "clamp", "(F)F" },
	{ "setRange", "(FF)V" },
	{ "setStepSize", "(F)V" },
	{ "getMinValue", "()F" },
	{ "getMaxValue", "()F" },
	{ "getStepSize", "()F" },
	{ "setAnimateDuration", "(F)V" },
	{ "setAnimateInterpolation", "(Lcom/badlogic/gdx/math/Interpolation;)V" },
	{ "setVisualInterpolation", "(Lcom/badlogic/gdx/math/Interpolation;)V" },
	{ "setRound", "(Z)V" },
	{ "isAnimating", "()Z" },
	{ "isVertical", "()Z" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getProgrammaticChangeEvents", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Disableable, &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle,
};

static FieldMetadata fields[] {
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/ProgressBar$ProgressBarStyle;", 2 },
	{ "min", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_min), "F", 0 },
	{ "max", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_max), "F", 0 },
	{ "stepSize", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_stepSize), "F", 0 },
	{ "value", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_value), "F", 2 },
	{ "animateFromValue", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_animateFromValue), "F", 2 },
	{ "position", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_position), "F", 0 },
	{ "vertical", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_vertical), "Z", 16 },
	{ "animateDuration", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_animateDuration), "F", 2 },
	{ "animateTime", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_animateTime), "F", 2 },
	{ "animateInterpolation", &class_com_badlogic_gdx_math_Interpolation, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_animateInterpolation), "Lcom/badlogic/gdx/math/Interpolation;", 2 },
	{ "visualInterpolation", &class_com_badlogic_gdx_math_Interpolation, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_visualInterpolation), "Lcom/badlogic/gdx/math/Interpolation;", 2 },
	{ "disabled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_disabled), "Z", 0 },
	{ "round", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_round), "Z", 2 },
	{ "programmaticChangeEvents", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar, F_programmaticChangeEvents), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(FFFZLcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(FFFZLcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, 0, "(FFFZLcom/badlogic/gdx/scenes/scene2d/ui/ProgressBar$ProgressBarStyle;)V", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/ProgressBar$ProgressBarStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/ProgressBar$ProgressBarStyle;", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_act_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_act_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawRound", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;FFFF)V", 2 },
	{ "getValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getValue_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getValue_R_float, "()F", 1 },
	{ "getVisualValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float, "()F", 1 },
	{ "updateVisualValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_updateVisualValue, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_updateVisualValue, "()V", 1 },
	{ "getPercent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPercent_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPercent_R_float, "()F", 1 },
	{ "getVisualPercent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualPercent_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualPercent_R_float, "()F", 1 },
	{ "getBackgroundDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getKnobDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getKnobBeforeDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getKnobAfterDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getKnobPosition", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobPosition_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getKnobPosition_R_float, "()F", 4 },
	{ "setValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setValue_float_R_boolean, "(F)Z", 1 },
	{ "round", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_round_float_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_round_float_R_float, "(F)F", 4 },
	{ "clamp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_clamp_float_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_clamp_float_R_float, "(F)F", 4 },
	{ "setRange", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRange_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRange_float_float, "(FF)V", 1 },
	{ "setStepSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStepSize_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStepSize_float, "(F)V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPrefHeight_R_float, "()F", 1 },
	{ "getMinValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMinValue_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMinValue_R_float, "()F", 1 },
	{ "getMaxValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMaxValue_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getMaxValue_R_float, "()F", 1 },
	{ "getStepSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStepSize_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStepSize_R_float, "()F", 1 },
	{ "setAnimateDuration", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateDuration_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateDuration_float, "(F)V", 1 },
	{ "setAnimateInterpolation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateInterpolation_com_badlogic_gdx_math_Interpolation, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setAnimateInterpolation_com_badlogic_gdx_math_Interpolation, "(Lcom/badlogic/gdx/math/Interpolation;)V", 1 },
	{ "setVisualInterpolation", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setVisualInterpolation_com_badlogic_gdx_math_Interpolation, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setVisualInterpolation_com_badlogic_gdx_math_Interpolation, "(Lcom/badlogic/gdx/math/Interpolation;)V", 1 },
	{ "setRound", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRound_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setRound_boolean, "(Z)V", 1 },
	{ "setDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setDisabled_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setDisabled_boolean, "(Z)V", 1 },
	{ "isAnimating", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isAnimating_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isAnimating_R_boolean, "()Z", 1 },
	{ "isDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isDisabled_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isDisabled_R_boolean, "()Z", 1 },
	{ "isVertical", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isVertical_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_isVertical_R_boolean, "()Z", 1 },
	{ "setProgrammaticChangeEvents", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setProgrammaticChangeEvents_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setProgrammaticChangeEvents_boolean, "(Z)V", 1 },
	{ "getProgrammaticChangeEvents", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getProgrammaticChangeEvents_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getProgrammaticChangeEvents_R_boolean, "()Z", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_ProgressBar),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 165,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar);

}

