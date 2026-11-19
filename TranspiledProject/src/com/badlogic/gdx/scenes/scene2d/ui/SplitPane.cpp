#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/UnsupportedOperationException.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_SplitPaneStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ScissorStack.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_SplitPane(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_firstWidget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstWidget)->clazz)->markFunction)((jobject) self->F_firstWidget, mark, depth + 1);
	if (self->F_secondWidget)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_secondWidget)->clazz)->markFunction)((jobject) self->F_secondWidget, mark, depth + 1);
	if (self->F_firstWidgetBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstWidgetBounds)->clazz)->markFunction)((jobject) self->F_firstWidgetBounds, mark, depth + 1);
	if (self->F_secondWidgetBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_secondWidgetBounds)->clazz)->markFunction)((jobject) self->F_secondWidgetBounds, mark, depth + 1);
	if (self->F_handleBounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_handleBounds)->clazz)->markFunction)((jobject) self->F_handleBounds, mark, depth + 1);
	if (self->F_tempScissors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempScissors)->clazz)->markFunction)((jobject) self->F_tempScissors, mark, depth + 1);
	if (self->F_lastPoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPoint)->clazz)->markFunction)((jobject) self->F_lastPoint, mark, depth + 1);
	if (self->F_handlePosition)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_handlePosition)->clazz)->markFunction)((jobject) self->F_handlePosition, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[3].o = frame[4].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[4].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[4].o);
	sp[4].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[4].o, (((jobject) createStringLiteral(ctx, u8"default-"_j))));
	jobject temp1 = sp[3].o;
	sp[3].i = temp0;
	jobject temp2 = sp[4].o;
	sp[4].o = temp1;
	sp[5].o = temp2;
	sp += 6;
	if ((frame[3].i) == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"vertical"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"horizontal"_j));
label_2:;
	{
	sp -= 7;
	sp[5].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[5].o, sp[6].o);
	sp[5].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[5].o);
	init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, sp[3].o)));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(75);
	init_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_splitAmount = (jfloat(0.5f));
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_maxAmount = (jfloat(1));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_firstWidgetBounds = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_secondWidgetBounds = (jref) sp[1].o;
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handleBounds = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_tempScissors = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_lastPoint = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_handlePosition = (jref) sp[1].o;
	LINE_NUMBER(76);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical = (frame[3].i);
	LINE_NUMBER(77);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(78);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(79);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(81);
	M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_initialize(ctx, (frame[0].o));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:initialize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$1_com_badlogic_gdx_scenes_scene2d_ui_SplitPane(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(139);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:layout", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_clampSplitAmount) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_clampSplitAmount])(ctx, (frame[0].o));
	LINE_NUMBER(150);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical) != 0) goto label_2;
	}
	{
	LINE_NUMBER(151);
	M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateHorizBoundsAndPositions(ctx, (frame[0].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(153);
	M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateVertBoundsAndPositions(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	frame[1].o = sp[0].o;
	LINE_NUMBER(156);
	if ((frame[1].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidgetBounds;
	frame[2].o = sp[0].o;
	LINE_NUMBER(158);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_width), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[2].o)))->F_height));
	LINE_NUMBER(159);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_6;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[1].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[1].o))));
	}
label_6:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidgetBounds;
	frame[3].o = sp[0].o;
	LINE_NUMBER(164);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float])(ctx, (frame[2].o), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[3].o)))->F_y), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[3].o)))->F_width), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[3].o)))->F_height));
	LINE_NUMBER(165);
	if ((isInstance(ctx, (frame[2].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_11;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[2].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[2].o))));
	}
label_11:;
	LINE_NUMBER(167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getPrefWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_FCONST(0);
	goto label_6;
label_5:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_7:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(174);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(175);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 + temp1) + (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getPrefHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(181);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_FCONST(0);
	goto label_6;
label_5:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_7:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(183);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical) != 0) goto label_9;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(184);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 + temp1) + (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getMinWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(190);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(191);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 + temp1) + (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getMinHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 1;
	frame[1].f = sp[0].f;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(197);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical) != 0) goto label_7;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(198);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((temp0 + temp1) + (frame[2].f));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setVertical_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setVertical", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(202);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical) != (frame[1].i)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(203);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical = (frame[1].i);
	LINE_NUMBER(204);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isVertical_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:isVertical", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateHorizBoundsAndPositions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:calculateHorizBoundsAndPositions", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	frame[1].o = sp[0].o;
	LINE_NUMBER(214);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(216);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].f = (temp1 - temp2);
	LINE_NUMBER(217);
	frame[4].f = (jfloat((jint(((frame[3].f) * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_splitAmount))))));
	LINE_NUMBER(218);
	frame[5].f = ((frame[3].f) - (frame[4].f));
	LINE_NUMBER(219);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[6].f = temp3;
	LINE_NUMBER(221);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidgetBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (frame[4].f), (frame[2].f));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidgetBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, ((frame[4].f) + (frame[6].f)), (jfloat(0)), (frame[5].f), (frame[2].f));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_handleBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (frame[4].f), (jfloat(0)), (frame[6].f), (frame[2].f));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateVertBoundsAndPositions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:calculateVertBoundsAndPositions", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	frame[1].o = sp[0].o;
	LINE_NUMBER(229);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(230);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(232);
	jfloat temp2 = frame[3].f;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].f = (temp2 - temp3);
	LINE_NUMBER(233);
	frame[5].f = (jfloat((jint(((frame[4].f) * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_splitAmount))))));
	LINE_NUMBER(234);
	frame[6].f = ((frame[4].f) - (frame[5].f));
	LINE_NUMBER(235);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	frame[7].f = temp4;
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidgetBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), ((frame[3].f) - (frame[5].f)), (frame[2].f), (frame[5].f));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidgetBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (frame[2].f), (frame[6].f));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_handleBounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Rectangle_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, (jfloat(0)), (frame[6].f), (frame[2].f), (frame[7].f));
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(244);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(246);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(249);
	frame[5].f = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a) * (frame[2].f));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(253);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(254);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidgetBounds;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_tempScissors;
	((func_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(255);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_tempScissors;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_pushScissors_com_badlogic_gdx_math_Rectangle_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, sp[0].o, (frame[1].o), (frame[5].f));
	LINE_NUMBER(257);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(258);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_popScissors_R_com_badlogic_gdx_math_Rectangle(ctx);
	}
label_7:;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(262);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(263);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidgetBounds;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_tempScissors;
	((func_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_calculateScissors_com_badlogic_gdx_math_Rectangle_com_badlogic_gdx_math_Rectangle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_tempScissors;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_pushScissors_com_badlogic_gdx_math_Rectangle_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, sp[0].o, (frame[1].o), (frame[5].f));
	LINE_NUMBER(266);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(267);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_utils_ScissorStack_popScissors_R_com_badlogic_gdx_math_Rectangle(ctx);
	}
label_14:;
	{
	LINE_NUMBER(270);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_b), (frame[5].f));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_handleBounds;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_handleBounds;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_handleBounds;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_width;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_handleBounds;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[2].o))->F_height));
	LINE_NUMBER(272);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_resetTransform_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_resetTransform_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSplitAmount_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setSplitAmount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(278);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_splitAmount = (frame[1].f);
	LINE_NUMBER(279);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getSplitAmount_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getSplitAmount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_splitAmount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_clampSplitAmount(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:clampSplitAmount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	frame[1].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_minAmount);
	frame[2].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_maxAmount);
	LINE_NUMBER(292);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_3;
	}
	{
	LINE_NUMBER(293);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getHeight_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	frame[3].f = (temp0 - temp1);
	LINE_NUMBER(294);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_6;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o);
	LINE_NUMBER(295);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp1 / (frame[3].f)), (jfloat(1)));
	LINE_NUMBER(294);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp2);
	frame[1].f = temp3;
	}
label_6:;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_9;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = jfloat(1);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o);
	LINE_NUMBER(297);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp2 / (frame[3].f)), (jfloat(1)));
	jfloat temp4 = temp1 - temp3;
	LINE_NUMBER(296);
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp4);
	frame[2].f = temp5;
	}
label_9:;
	LINE_NUMBER(298);
	goto label_12;
label_3:;
	{
	LINE_NUMBER(299);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getWidth_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[3].f = (temp0 - temp1);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(301);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp1 / (frame[3].f)), (jfloat(1)));
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp2);
	frame[1].f = temp3;
	}
label_14:;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_12;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = jfloat(1);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o);
	LINE_NUMBER(303);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp2 / (frame[3].f)), (jfloat(1)));
	jfloat temp4 = temp1 - temp3;
	LINE_NUMBER(302);
	jfloat temp5 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp4);
	frame[2].f = temp5;
	}
label_12:;
	{
	LINE_NUMBER(306);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(307);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_splitAmount = ((jfloat(0.5f)) * ((frame[1].f) + (frame[2].f)));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_splitAmount), (frame[2].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK(sp[0].o))->F_splitAmount = temp1;
	}
label_20:;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinSplitAmount_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getMinSplitAmount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_minAmount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMinSplitAmount_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setMinSplitAmount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(317);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) <= 0) goto label_2;
	}
label_1:;
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minAmount has to be >= 0 and <= 1"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(318);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_minAmount = (frame[1].f);
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMaxSplitAmount_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getMaxSplitAmount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_maxAmount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMaxSplitAmount_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setMaxSplitAmount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(326);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) <= 0) goto label_2;
	}
label_1:;
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxAmount has to be >= 0 and <= 1"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(327);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_maxAmount = (frame[1].f);
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setFirstWidget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(333);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget = (jref) (frame[1].o);
	LINE_NUMBER(334);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(335);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setSecondWidget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(341);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget = (jref) (frame[1].o);
	LINE_NUMBER(342);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(343);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:addActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(347);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use SplitPane#setWidget."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:addActorAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(351);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use SplitPane#setWidget."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:addActorBefore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(355);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use SplitPane#setWidget."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:removeActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(359);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(360);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(361);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(364);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(365);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:removeActor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(372);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(373);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(375);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget = (jref) (jobject(nullptr));
	LINE_NUMBER(376);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(379);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(380);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(381);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget = (jref) (jobject(nullptr));
	LINE_NUMBER(382);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:removeActorAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(390);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(391);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(ctx, (frame[0].o), (frame[3].o), (frame[2].i));
	LINE_NUMBER(392);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_firstWidget = (jref) (jobject(nullptr));
	LINE_NUMBER(393);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, (frame[0].o));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(394);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(ctx, (frame[0].o), (frame[3].o), (frame[2].i));
	LINE_NUMBER(396);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_secondWidget = (jref) (jobject(nullptr));
	LINE_NUMBER(397);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_invalidate])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isCursorOverHandle_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:isCursorOverHandle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane *) NULL_CHECK((frame[0].o)))->F_cursorOverHandle);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SplitPane[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_sizeChanged,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_childrenChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChild_int_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_hasChildren_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setTransform_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_isTransform_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_initialize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setVertical_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isVertical_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateHorizBoundsAndPositions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateVertBoundsAndPositions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSplitAmount_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getSplitAmount_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_clampSplitAmount,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinSplitAmount_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMinSplitAmount_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMaxSplitAmount_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMaxSplitAmount_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isCursorOverHandle_R_boolean,
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
	{ "setCullingArea", "(Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "drawChildren", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "drawDebugChildren", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "computeTransform", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "getCullingArea", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "childrenChanged", "()V" },
	{ "addActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAt", "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorBefore", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAfter", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z" },
	{ "removeActorAt", "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "clearChildren", "()V" },
	{ "clearChildren", "(Z)V" },
	{ "clear", "(Z)V" },
	{ "findActor", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "getChild", "(I)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "getChildren", "()Lcom/badlogic/gdx/utils/SnapshotArray;" },
	{ "hasChildren", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "isTransform", "()Z" },
	{ "localToDescendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setDebug", "(ZZ)V" },
	{ "debugAll", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
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
	{ "setLayoutEnabled", "(Lcom/badlogic/gdx/scenes/scene2d/Group;Z)V" },
	{ "needsLayout", "()Z" },
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "initialize", "()V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle;" },
	{ "setVertical", "(Z)V" },
	{ "isVertical", "()Z" },
	{ "calculateHorizBoundsAndPositions", "()V" },
	{ "calculateVertBoundsAndPositions", "()V" },
	{ "setSplitAmount", "(F)V" },
	{ "getSplitAmount", "()F" },
	{ "clampSplitAmount", "()V" },
	{ "getMinSplitAmount", "()F" },
	{ "setMinSplitAmount", "(F)V" },
	{ "getMaxSplitAmount", "()F" },
	{ "setMaxSplitAmount", "(F)V" },
	{ "setFirstWidget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "setSecondWidget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "isCursorOverHandle", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle,
};

static FieldMetadata fields[] {
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle;", 0 },
	{ "firstWidget", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_firstWidget), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "secondWidget", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_secondWidget), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "vertical", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_vertical), "Z", 0 },
	{ "splitAmount", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_splitAmount), "F", 0 },
	{ "minAmount", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_minAmount), "F", 0 },
	{ "maxAmount", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_maxAmount), "F", 0 },
	{ "firstWidgetBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_firstWidgetBounds), "Lcom/badlogic/gdx/math/Rectangle;", 18 },
	{ "secondWidgetBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_secondWidgetBounds), "Lcom/badlogic/gdx/math/Rectangle;", 18 },
	{ "handleBounds", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_handleBounds), "Lcom/badlogic/gdx/math/Rectangle;", 16 },
	{ "cursorOverHandle", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_cursorOverHandle), "Z", 0 },
	{ "tempScissors", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_tempScissors), "Lcom/badlogic/gdx/math/Rectangle;", 18 },
	{ "lastPoint", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_lastPoint), "Lcom/badlogic/gdx/math/Vector2;", 0 },
	{ "handlePosition", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane, F_handlePosition), "Lcom/badlogic/gdx/math/Vector2;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;ZLcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;ZLcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;ZLcom/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle;)V", 1 },
	{ "initialize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_initialize, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_initialize, "()V", 2 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle;", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_layout, "()V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinHeight_R_float, "()F", 1 },
	{ "setVertical", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setVertical_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setVertical_boolean, "(Z)V", 1 },
	{ "isVertical", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isVertical_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isVertical_R_boolean, "()Z", 1 },
	{ "calculateHorizBoundsAndPositions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateHorizBoundsAndPositions, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateHorizBoundsAndPositions, "()V", 2 },
	{ "calculateVertBoundsAndPositions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateVertBoundsAndPositions, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_calculateVertBoundsAndPositions, "()V", 2 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "setSplitAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSplitAmount_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSplitAmount_float, "(F)V", 1 },
	{ "getSplitAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getSplitAmount_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getSplitAmount_R_float, "()F", 1 },
	{ "clampSplitAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_clampSplitAmount, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_clampSplitAmount, "()V", 4 },
	{ "getMinSplitAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinSplitAmount_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMinSplitAmount_R_float, "()F", 1 },
	{ "setMinSplitAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMinSplitAmount_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMinSplitAmount_float, "(F)V", 1 },
	{ "getMaxSplitAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMaxSplitAmount_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getMaxSplitAmount_R_float, "()F", 1 },
	{ "setMaxSplitAmount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMaxSplitAmount_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setMaxSplitAmount_float, "(F)V", 1 },
	{ "setFirstWidget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setFirstWidget_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "setSecondWidget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setSecondWidget_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "addActorBefore", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z", 1 },
	{ "removeActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "isCursorOverHandle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isCursorOverHandle_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_isCursorOverHandle_R_boolean, "()Z", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SplitPane_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SplitPane",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SplitPane,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SplitPane,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 184,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SplitPane = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane);

}

