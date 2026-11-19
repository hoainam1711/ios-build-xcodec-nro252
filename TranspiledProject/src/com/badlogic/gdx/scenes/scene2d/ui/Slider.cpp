#include "com/badlogic/gdx/scenes/scene2d/ui/Slider.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Slider_1.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Slider_SliderStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar_ProgressBarStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Slider.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Slider(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Slider *) object;
	if (self->F_visualInterpolationInverse)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visualInterpolationInverse)->clazz)->markFunction)((jobject) self->F_visualInterpolationInverse, mark, depth + 1);
	if (self->F_snapValues)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_snapValues)->clazz)->markFunction)((jobject) self->F_snapValues, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(49);
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
	sp[5].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[5].o, sp[6].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].i, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, sp[5].o)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jint temp3 = frame[4].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[5].o), (frame[6].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle(ctx, sp[0].o, temp0, temp1, temp2, temp3, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, sp[1].o)));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(66);
	init_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_button = (jint(-1));
	LINE_NUMBER(42);
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_linear;
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK(sp[0].o))->F_visualInterpolationInverse = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Slider$1_com_badlogic_gdx_scenes_scene2d_ui_Slider(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Slider_isOver_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:isOver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_mouseOver);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getBackgroundDrawable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, sp[0].o));
	LINE_NUMBER(116);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledBackground;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_backgroundDown;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_backgroundDown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(118);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_mouseOver) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_backgroundOver;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_backgroundOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_background;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getKnobDrawable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, sp[0].o));
	LINE_NUMBER(124);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnob;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnob;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobDown;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobDown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(126);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_mouseOver) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobOver;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_knob;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getKnobBeforeDrawable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, sp[0].o));
	LINE_NUMBER(132);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobBefore;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobBefore;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobBeforeDown;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobBeforeDown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(134);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_mouseOver) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobBeforeOver;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobBeforeOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_knobBefore;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getKnobAfterDrawable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, sp[0].o));
	LINE_NUMBER(140);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobAfter;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobAfter;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(141);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobAfterDown;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobAfterDown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(142);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_mouseOver) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobAfterOver;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle *) NULL_CHECK((frame[1].o)))->F_knobAfterOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_knobAfter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:calculatePositionAndValue", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[3].o)))->F_knob;
	frame[4].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(152);
	frame[7].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position);
	LINE_NUMBER(154);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getMinValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getMinValue_R_float])(ctx, (frame[0].o));
	frame[8].f = temp0;
	LINE_NUMBER(155);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getMaxValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getMaxValue_R_float])(ctx, (frame[0].o));
	frame[9].f = temp1;
	LINE_NUMBER(157);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_7;
	}
	{
	LINE_NUMBER(158);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = temp0 - temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[10].f = (temp2 - temp3);
	LINE_NUMBER(159);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	INST_FCONST(0);
	goto label_11;
label_10:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_11:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = ((temp0 - temp1) - ((frame[11].f) * (jfloat(0.5f))));
	LINE_NUMBER(161);
	jfloat temp2 = frame[8].f;
	jfloat temp3 = (frame[9].f) - (frame[8].f);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_visualInterpolationInverse;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) / ((frame[10].f) - (frame[11].f))));
	frame[6].f = (temp2 + (temp3 * temp4));
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	jfloat temp5 = jfloat(0);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp7 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp5, temp6);
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp7, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp8;
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	jfloat temp9 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[10].f) - (frame[11].f)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp9;
	LINE_NUMBER(164);
	goto label_17;
	}
label_7:;
	{
	LINE_NUMBER(165);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = temp0 - temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[10].f = (temp2 - temp3);
	LINE_NUMBER(166);
	if ((frame[4].o) != nullptr) goto label_19;
	}
	INST_FCONST(0);
	goto label_20;
label_19:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_20:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = ((temp0 - temp1) - ((frame[11].f) * (jfloat(0.5f))));
	LINE_NUMBER(168);
	jfloat temp2 = frame[8].f;
	jfloat temp3 = (frame[9].f) - (frame[8].f);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_visualInterpolationInverse;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) / ((frame[10].f) - (frame[11].f))));
	frame[6].f = (temp2 + (temp3 * temp4));
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	jfloat temp5 = jfloat(0);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp7 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp5, temp6);
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp7, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp8;
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	jfloat temp9 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[10].f) - (frame[11].f)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp9;
	}
label_17:;
	{
	LINE_NUMBER(173);
	frame[10].f = (frame[6].f);
	LINE_NUMBER(174);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (59));
	if (temp0 != 0) goto label_26;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_isKeyPressed_int_R_boolean, sp[0].o))(ctx, sp[0].o, (60));
	if (temp0 != 0) goto label_26;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_snap_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_snap_float_R_float])(ctx, (frame[0].o), (frame[6].f));
	frame[6].f = temp0;
	}
label_26:;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setValue_float_R_boolean])(ctx, (frame[0].o), (frame[6].f));
	frame[11].i = temp0;
	LINE_NUMBER(176);
	if ((floatCompare((frame[6].f), (frame[10].f), -1)) != 0) goto label_28;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = (frame[7].f);
	}
label_28:;
	{
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return (frame[11].i);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Slider_snap_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:snap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_2;
	}
label_1:;
	INST_FLOAD(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(184);
	frame[2].f = (jfloat(-1.0f));
	frame[3].f = (jfloat(0));
	LINE_NUMBER(185);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[4].i)));
	LINE_NUMBER(187);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - (frame[5].f)));
	frame[6].f = temp0;
	LINE_NUMBER(188);
	if ((floatCompare((frame[6].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_threshold), 1)) > 0) goto label_10;
	}
	{
	LINE_NUMBER(189);
	if ((floatCompare((frame[2].f), (jfloat(-1.0f)), -1)) == 0) goto label_12;
	}
	{
	if ((floatCompare((frame[6].f), (frame[2].f), 1)) >= 0) goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(190);
	frame[2].f = (frame[6].f);
	LINE_NUMBER(191);
	frame[3].f = (frame[5].f);
	}
label_10:;
	{
	LINE_NUMBER(185);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(195);
	if ((floatCompare((frame[2].f), (jfloat(-1.0f)), -1)) != 0) goto label_14;
	}
	INST_FLOAD(1);
	goto label_15;
label_14:;
	INST_FLOAD(3);
label_15:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_float_Array1_float(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:setSnapToValues", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(201);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"values cannot be empty."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(202);
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues = (jref) (frame[2].o);
	LINE_NUMBER(203);
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_threshold = (frame[1].f);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_Array1_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:setSnapToValues", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(211);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_float_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_float_Array1_float])(ctx, (frame[0].o), (frame[2].f), (frame[1].o));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValues_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getSnapToValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_snapValues;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValuesThreshold_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getSnapToValuesThreshold", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_threshold);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:isDragging", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_draggingPointer) == (jint(-1))) goto label_1;
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

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setButton_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:setButton", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(229);
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_button = (frame[1].i);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualInterpolationInverse_com_badlogic_gdx_math_Interpolation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:setVisualInterpolationInverse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_visualInterpolationInverse = (jref) (frame[1].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualPercent_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:setVisualPercent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Slider *) NULL_CHECK((frame[0].o)))->F_visualInterpolationInverse;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_math_Interpolation_apply_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Interpolation_apply_float_R_float])(ctx, sp[1].o, (frame[1].f));
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_setValue_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setValue_float_R_boolean])(ctx, sp[0].o, (temp0 + (temp1 * temp2)));
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Slider:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_ui_Slider;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method setSnapToValues
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Slider[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_drawRound_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getValue_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualValue_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_updateVisualValue,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getPercent_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar_getVisualPercent_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_isOver_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_snap_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_float_Array1_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_Array1_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValues_R_Array1_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValuesThreshold_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setButton_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualInterpolationInverse_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualPercent_float,
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
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Slider$SliderStyle;" },
	{ "isOver", "()Z" },
	{ "calculatePositionAndValue", "(FF)Z" },
	{ "snap", "(F)F" },
	{ "setSnapToValues", "(F[F)V" },
	{ "setSnapToValues", "([FF)V" },
	{ "getSnapToValues", "()[F" },
	{ "getSnapToValuesThreshold", "()F" },
	{ "isDragging", "()Z" },
	{ "setButton", "(I)V" },
	{ "setVisualInterpolationInverse", "(Lcom/badlogic/gdx/math/Interpolation;)V" },
	{ "setVisualPercent", "(F)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle,
};

static FieldMetadata fields[] {
	{ "button", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Slider, F_button), "I", 0 },
	{ "draggingPointer", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Slider, F_draggingPointer), "I", 0 },
	{ "mouseOver", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Slider, F_mouseOver), "Z", 0 },
	{ "visualInterpolationInverse", &class_com_badlogic_gdx_math_Interpolation, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Slider, F_visualInterpolationInverse), "Lcom/badlogic/gdx/math/Interpolation;", 2 },
	{ "snapValues", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Slider, F_snapValues), "[F", 2 },
	{ "threshold", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Slider, F_threshold), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(FFFZLcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(FFFZLcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Slider_float_float_float_boolean_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, 0, "(FFFZLcom/badlogic/gdx/scenes/scene2d/ui/Slider$SliderStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Slider$SliderStyle;", 1 },
	{ "isOver", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_isOver_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_isOver_R_boolean, "()Z", 1 },
	{ "getBackgroundDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getKnobDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getKnobBeforeDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobBeforeDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getKnobAfterDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getKnobAfterDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "calculatePositionAndValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_calculatePositionAndValue_float_float_R_boolean, "(FF)Z", 0 },
	{ "snap", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_snap_float_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_snap_float_R_float, "(F)F", 4 },
	{ "setSnapToValues", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_float_Array1_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_float_Array1_float, "(F[F)V", 129 },
	{ "setSnapToValues", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_Array1_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setSnapToValues_Array1_float_float, "([FF)V", 131073 },
	{ "getSnapToValues", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValues_R_Array1_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValues_R_Array1_float, "()[F", 1 },
	{ "getSnapToValuesThreshold", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValuesThreshold_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getSnapToValuesThreshold_R_float, "()F", 1 },
	{ "isDragging", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_isDragging_R_boolean, "()Z", 1 },
	{ "setButton", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setButton_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setButton_int, "(I)V", 1 },
	{ "setVisualInterpolationInverse", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualInterpolationInverse_com_badlogic_gdx_math_Interpolation, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualInterpolationInverse_com_badlogic_gdx_math_Interpolation, "(Lcom/badlogic/gdx/math/Interpolation;)V", 1 },
	{ "setVisualPercent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualPercent_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_setVisualPercent_float, "(F)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/ProgressBar$ProgressBarStyle;", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Slider_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Slider{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Slider",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Slider),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Slider,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Slider,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Slider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 177,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Slider = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Slider);

}

