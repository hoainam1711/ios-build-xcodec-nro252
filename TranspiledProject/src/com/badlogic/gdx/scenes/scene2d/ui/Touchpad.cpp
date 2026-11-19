#include "com/badlogic/gdx/scenes/scene2d/ui/Touchpad.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Touchpad_TouchpadStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Touchpad_1.h"
#include "com/badlogic/gdx/math/Circle.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Touchpad.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_knobBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knobBounds)->clazz)->markFunction)((jobject) self->F_knobBounds, mark, depth + 1);
	if (self->F_touchBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchBounds)->clazz)->markFunction)((jobject) self->F_touchBounds, mark, depth + 1);
	if (self->F_deadzoneBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deadzoneBounds)->clazz)->markFunction)((jobject) self->F_deadzoneBounds, mark, depth + 1);
	if (self->F_knobPosition)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knobPosition)->clazz)->markFunction)((jobject) self->F_knobPosition, mark, depth + 1);
	if (self->F_knobPercent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_knobPercent)->clazz)->markFunction)((jobject) self->F_knobPercent, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle(ctx, sp[0].o, temp0, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, sp[1].o)));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle(ctx, sp[0].o, temp0, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, sp[1].o)));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(61);
	init_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_resetOnTouchUp = (jint(1));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Circle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Circle);
	init_com_badlogic_gdx_math_Circle_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK(sp[0].o))->F_knobBounds = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Circle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Circle);
	init_com_badlogic_gdx_math_Circle_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK(sp[0].o))->F_touchBounds = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Circle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Circle);
	init_com_badlogic_gdx_math_Circle_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK(sp[0].o))->F_deadzoneBounds = (jref) sp[1].o;
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK(sp[0].o))->F_knobPosition = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK(sp[0].o))->F_knobPercent = (jref) sp[1].o;
	LINE_NUMBER(62);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"deadzoneRadius must be > 0"_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(63);
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_deadzoneRadius = (frame[1].f);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = temp0 / (jfloat(2));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getHeight_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp1, (temp2 / (jfloat(2))));
	LINE_NUMBER(67);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setSize_float_float])(ctx, sp[0].o, temp3, temp4);
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$1_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(ctx, sp[1].o, (frame[0].o));
	jint temp5 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_calculatePositionAndValue_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:calculatePositionAndValue", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	frame[4].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	frame[5].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	frame[6].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	frame[7].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	frame[8].f = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	frame[9].f = ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(96);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(98);
	if ((frame[3].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_deadzoneBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	jfloat temp0 = (frame[1].f) - (frame[8].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	jfloat temp1 = temp0 / ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[1].o))->F_radius);
	jfloat temp2 = (frame[2].f) - (frame[9].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp1, (temp2 / ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[1].o))->F_radius)));
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_math_Vector2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_len_R_float])(ctx, sp[0].o);
	frame[10].f = temp3;
	LINE_NUMBER(102);
	if ((floatCompare((frame[10].f), (jfloat(1)), -1)) <= 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, ((jfloat(1)) / (frame[10].f)));
	}
label_14:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	goto label_9;
	}
label_15:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_nor_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_scl_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[1].o))->F_radius));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_add_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_add_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, temp0, ((jfloat)((com_badlogic_gdx_math_Circle *) NULL_CHECK(sp[1].o))->F_y));
	}
label_9:;
	{
	LINE_NUMBER(110);
	jfloat temp0 = frame[6].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x), -1)) != 0) goto label_17;
	}
	{
	jfloat temp0 = frame[7].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y), -1)) == 0) goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(111);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_obtain_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent)));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent, sp[0].o));
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean])(ctx, (frame[0].o), (frame[10].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	}
label_20:;
	{
	LINE_NUMBER(116);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	((func_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_free_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	}
label_18:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(122);
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(123);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:hit", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(133);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_isVisible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_touchBounds;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Circle_contains_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_3;
	}
	INST_ALOAD(0);
	goto label_4;
label_3:;
	INST_ACONST_NULL();
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:layout", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = (temp0 / (jfloat(2)));
	LINE_NUMBER(141);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = (temp1 / (jfloat(2)));
	LINE_NUMBER(142);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	frame[3].f = temp2;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_touchBounds;
	((func_com_badlogic_gdx_math_Circle_set_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Circle_set_float_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_knob;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_knob;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_knob;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, temp2);
	frame[3].f = (temp0 - (temp3 / (jfloat(2))));
	}
label_5:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobBounds;
	((func_com_badlogic_gdx_math_Circle_set_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Circle_set_float_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(146);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_deadzoneBounds;
	((func_com_badlogic_gdx_math_Circle_set_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Circle_set_float_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_deadzoneRadius));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(153);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_validate])(ctx, (frame[0].o));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(156);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(158);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getX_R_float])(ctx, (frame[0].o));
	frame[4].f = temp0;
	LINE_NUMBER(159);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getY_R_float])(ctx, (frame[0].o));
	frame[5].f = temp1;
	LINE_NUMBER(160);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getWidth_R_float])(ctx, (frame[0].o));
	frame[6].f = temp2;
	LINE_NUMBER(161);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getHeight_R_float])(ctx, (frame[0].o));
	frame[7].f = temp3;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[8].o = sp[0].o;
	LINE_NUMBER(164);
	if ((frame[8].o) == nullptr) goto label_9;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, (frame[8].o)))(ctx, (frame[8].o), (frame[1].o), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f));
	}
label_9:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_knob;
	frame[9].o = sp[0].o;
	LINE_NUMBER(167);
	if ((frame[9].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(168);
	jfloat temp0 = frame[4].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[9].o)))(ctx, (frame[9].o));
	frame[4].f = (temp0 + (temp1 - (temp2 / (jfloat(2)))));
	LINE_NUMBER(169);
	jfloat temp3 = frame[5].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[9].o)))(ctx, (frame[9].o));
	frame[5].f = (temp3 + (temp4 - (temp5 / (jfloat(2)))));
	LINE_NUMBER(170);
	sp[0].o = frame[9].o;
	sp[1].o = frame[1].o;
	jfloat temp6 = frame[4].f;
	jfloat temp7 = frame[5].f;
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[9].o)))(ctx, (frame[9].o));
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[9].o)))(ctx, (frame[9].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp6, temp7, temp8, temp9);
	}
label_11:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_isTouched_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:isTouched", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_touched);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getResetOnTouchUp_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getResetOnTouchUp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_resetOnTouchUp);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setResetOnTouchUp_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:setResetOnTouchUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_resetOnTouchUp = (frame[1].i);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setDeadzone_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:setDeadzone", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(197);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"deadzoneRadius must be > 0"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(198);
	((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_deadzoneRadius = (frame[1].f);
	LINE_NUMBER(199);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getKnobX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getKnobY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPosition;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getKnobPercentX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getKnobPercentY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Touchpad *) NULL_CHECK((frame[0].o)))->F_knobPercent;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Touchpad:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Touchpad[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_calculatePositionAndValue_float_float_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_isTouched_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getResetOnTouchUp_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setResetOnTouchUp_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setDeadzone_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentY_R_float,
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
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "calculatePositionAndValue", "(FFZ)V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Touchpad$TouchpadStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Touchpad$TouchpadStyle;" },
	{ "isTouched", "()Z" },
	{ "getResetOnTouchUp", "()Z" },
	{ "setResetOnTouchUp", "(Z)V" },
	{ "setDeadzone", "(F)V" },
	{ "getKnobX", "()F" },
	{ "getKnobY", "()F" },
	{ "getKnobPercentX", "()F" },
	{ "getKnobPercentY", "()F" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle,
};

static FieldMetadata fields[] {
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/Touchpad$TouchpadStyle;", 2 },
	{ "touched", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_touched), "Z", 0 },
	{ "resetOnTouchUp", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_resetOnTouchUp), "Z", 0 },
	{ "deadzoneRadius", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_deadzoneRadius), "F", 2 },
	{ "knobBounds", &class_com_badlogic_gdx_math_Circle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_knobBounds), "Lcom/badlogic/gdx/math/Circle;", 18 },
	{ "touchBounds", &class_com_badlogic_gdx_math_Circle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_touchBounds), "Lcom/badlogic/gdx/math/Circle;", 18 },
	{ "deadzoneBounds", &class_com_badlogic_gdx_math_Circle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_deadzoneBounds), "Lcom/badlogic/gdx/math/Circle;", 18 },
	{ "knobPosition", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_knobPosition), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "knobPercent", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad, F_knobPercent), "Lcom/badlogic/gdx/math/Vector2;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(FLcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(FLcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_float_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, 0, "(FLcom/badlogic/gdx/scenes/scene2d/ui/Touchpad$TouchpadStyle;)V", 1 },
	{ "calculatePositionAndValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_calculatePositionAndValue_float_float_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_calculatePositionAndValue_float_float_boolean, "(FFZ)V", 0 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Touchpad$TouchpadStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Touchpad$TouchpadStyle;", 1 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_layout, "()V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getPrefHeight_R_float, "()F", 1 },
	{ "isTouched", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_isTouched_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_isTouched_R_boolean, "()Z", 1 },
	{ "getResetOnTouchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getResetOnTouchUp_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getResetOnTouchUp_R_boolean, "()Z", 1 },
	{ "setResetOnTouchUp", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setResetOnTouchUp_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setResetOnTouchUp_boolean, "(Z)V", 1 },
	{ "setDeadzone", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setDeadzone_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setDeadzone_float, "(F)V", 1 },
	{ "getKnobX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobX_R_float, "()F", 1 },
	{ "getKnobY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobY_R_float, "()F", 1 },
	{ "getKnobPercentX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentX_R_float, "()F", 1 },
	{ "getKnobPercentY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getKnobPercentY_R_float, "()F", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Touchpad_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Touchpad",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Touchpad),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Touchpad,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Touchpad,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Touchpad,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 145,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Touchpad = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad);

}

