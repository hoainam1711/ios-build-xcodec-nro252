#include "com/badlogic/gdx/scenes/scene2d/ui/Container.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Container.h"
#include "java/lang/UnsupportedOperationException.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Cullable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_Fixed.h"
#include "java/lang/Deprecated.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Container(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Container *) object;
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_minWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minWidth)->clazz)->markFunction)((jobject) self->F_minWidth, mark, depth + 1);
	if (self->F_minHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minHeight)->clazz)->markFunction)((jobject) self->F_minHeight, mark, depth + 1);
	if (self->F_prefWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefWidth)->clazz)->markFunction)((jobject) self->F_prefWidth, mark, depth + 1);
	if (self->F_prefHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefHeight)->clazz)->markFunction)((jobject) self->F_prefHeight, mark, depth + 1);
	if (self->F_maxWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_maxWidth)->clazz)->markFunction)((jobject) self->F_maxWidth, mark, depth + 1);
	if (self->F_maxHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_maxHeight)->clazz)->markFunction)((jobject) self->F_maxHeight, mark, depth + 1);
	if (self->F_padTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padTop)->clazz)->markFunction)((jobject) self->F_padTop, mark, depth + 1);
	if (self->F_padLeft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padLeft)->clazz)->markFunction)((jobject) self->F_padLeft, mark, depth + 1);
	if (self->F_padBottom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padBottom)->clazz)->markFunction)((jobject) self->F_padBottom, mark, depth + 1);
	if (self->F_padRight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padRight)->clazz)->markFunction)((jobject) self->F_padRight, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_actorCulling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actorCulling)->clazz)->markFunction)((jobject) self->F_actorCulling, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Container(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(33);
	init_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_minWidth = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_minHeight = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_prefWidth = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_prefHeight = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_maxWidth = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_maxHeight = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(29);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_round = (jint(1));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_childrenOnly;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(35);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setTransform_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Container_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Container(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	init_com_badlogic_gdx_scenes_scene2d_ui_Container(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(44);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_validate])(ctx, (frame[0].o));
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_isTransform_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_isTransform_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(47);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(48);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_6;
	}
	{
	LINE_NUMBER(49);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[3].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[4].f = temp1;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp5 = temp4 - (frame[3].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[0].o));
	jfloat temp7 = temp5 - temp6;
	sp[1].o = frame[0].o;
	LINE_NUMBER(52);
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, sp[1].o);
	jfloat temp9 = temp8 - (frame[4].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[0].o));
	jfloat temp11 = temp9 - temp10;
	LINE_NUMBER(51);
	jint temp12 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp2, temp3, temp7, temp11);
	if (temp12 == 0) goto label_13;
	}
	{
	LINE_NUMBER(53);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(54);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(55);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clipEnd])(ctx, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(57);
	goto label_17;
label_6:;
	{
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	}
label_17:;
	{
	LINE_NUMBER(59);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_resetTransform_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_resetTransform_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	goto label_18;
	}
label_2:;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getX_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getY_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	LINE_NUMBER(62);
	M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_draw_com_badlogic_gdx_graphics_g2d_Batch_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	}
label_18:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:drawBackground", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(71);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:setBackground", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:setBackground", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(87);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[1].o);
	LINE_NUMBER(88);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(89);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o);
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_7:;
	{
	LINE_NUMBER(93);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_invalidate])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:background", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getBackground", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:layout", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[1].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(111);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 - (frame[1].f);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[3].f = (temp3 - temp4);
	LINE_NUMBER(112);
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp6 = temp5 - (frame[2].f);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[4].f = (temp6 - temp7);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[5].f = temp8;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[6].f = temp9;
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[7].f = temp10;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp11 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[8].f = temp11;
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp12 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[9].f = temp12;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp13 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[10].f = temp13;
	LINE_NUMBER(118);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillX), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(119);
	frame[11].f = ((frame[3].f) * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillX));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(121);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[7].f), (frame[3].f));
	frame[11].f = temp0;
	}
label_15:;
	{
	LINE_NUMBER(122);
	if ((floatCompare((frame[11].f), (frame[5].f), 1)) >= 0) goto label_16;
	}
	INST_FLOAD(5);
	INST_FSTORE(11);
label_16:;
	{
	LINE_NUMBER(123);
	if ((floatCompare((frame[9].f), (jfloat(0)), -1)) <= 0) goto label_17;
	}
	{
	if ((floatCompare((frame[11].f), (frame[9].f), -1)) <= 0) goto label_17;
	}
	INST_FLOAD(9);
	INST_FSTORE(11);
label_17:;
	{
	LINE_NUMBER(126);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillY), (jfloat(0)), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(127);
	frame[12].f = ((frame[4].f) * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillY));
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(129);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[8].f), (frame[4].f));
	frame[12].f = temp0;
	}
label_21:;
	{
	LINE_NUMBER(130);
	if ((floatCompare((frame[12].f), (frame[6].f), 1)) >= 0) goto label_22;
	}
	INST_FLOAD(6);
	INST_FSTORE(12);
label_22:;
	{
	LINE_NUMBER(131);
	if ((floatCompare((frame[10].f), (jfloat(0)), -1)) <= 0) goto label_23;
	}
	{
	if ((floatCompare((frame[12].f), (frame[10].f), -1)) <= 0) goto label_23;
	}
	INST_FLOAD(10);
	INST_FSTORE(12);
label_23:;
	{
	LINE_NUMBER(133);
	frame[13].f = (frame[1].f);
	LINE_NUMBER(134);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_align) & (16)) == 0) goto label_25;
	}
	{
	LINE_NUMBER(135);
	frame[13].f = ((frame[13].f) + ((frame[3].f) - (frame[11].f)));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(136);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_align) & (8)) != 0) goto label_27;
	}
	{
	LINE_NUMBER(137);
	frame[13].f = ((frame[13].f) + (((frame[3].f) - (frame[11].f)) / (jfloat(2))));
	}
label_27:;
	{
	LINE_NUMBER(139);
	frame[14].f = (frame[2].f);
	LINE_NUMBER(140);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_align) & (jint(2))) == 0) goto label_30;
	}
	{
	LINE_NUMBER(141);
	frame[14].f = ((frame[14].f) + ((frame[4].f) - (frame[12].f)));
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(142);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_align) & (jint(4))) != 0) goto label_32;
	}
	{
	LINE_NUMBER(143);
	frame[14].f = ((frame[14].f) + (((frame[4].f) - (frame[12].f)) / (jfloat(2))));
	}
label_32:;
	{
	LINE_NUMBER(145);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_34;
	}
	{
	LINE_NUMBER(146);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((frame[13].f))));
	frame[13].f = (jfloat(temp0));
	LINE_NUMBER(147);
	jdouble temp1 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble((frame[14].f))));
	frame[14].f = (jfloat(temp1));
	LINE_NUMBER(148);
	jdouble temp2 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[11].f))));
	frame[11].f = (jfloat(temp2));
	LINE_NUMBER(149);
	jdouble temp3 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[12].f))));
	frame[12].f = (jfloat(temp3));
	}
label_34:;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float])(ctx, sp[0].o, (frame[13].f), (frame[14].f), (frame[11].f), (frame[12].f));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	}
label_40:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_setCullingArea_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:setCullingArea", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	M_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(159);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actorCulling;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Rectangle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Rectangle);
	init_com_badlogic_gdx_math_Rectangle(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_actorCulling = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actorCulling;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_x = (temp0 - temp1);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actorCulling;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float])(ctx, sp[1].o);
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y = (temp2 - temp3);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actorCulling;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_width = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actorCulling;
	((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actorCulling;
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Cullable_setCullingArea_com_badlogic_gdx_math_Rectangle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Cullable_setCullingArea_com_badlogic_gdx_math_Rectangle, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable, sp[0].o)), (frame[1].o));
	}
label_2:;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:setActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be the Container."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(176);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(177);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:addActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use Container#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:addActorAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(196);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use Container#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:addActorBefore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(203);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use Container#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:addActorAfter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(210);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Use Container#setActor."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:removeActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(214);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(216);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:removeActor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(221);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(223);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (jobject(nullptr));
	LINE_NUMBER(224);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:removeActorAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(229);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:size", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(236);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(237);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(238);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(239);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(240);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(241);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(247);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(248);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(249);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(250);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[2].o);
	LINE_NUMBER(251);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(252);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[2].o);
	LINE_NUMBER(253);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(254);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[2].o);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:size", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:width", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(273);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(274);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(275);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:width", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:height", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(287);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(288);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(289);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(290);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:height", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(303);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(304);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(310);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(311);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(312);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(313);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[2].o);
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minWidth cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(319);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minHeight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(325);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_minWidth = (jref) sp[1].o;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:minHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_minHeight = (jref) sp[1].o;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(353);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(354);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(355);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(361);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(362);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(363);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(364);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[2].o);
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(369);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"prefWidth cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(370);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(375);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"prefHeight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(376);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_prefWidth = (jref) sp[1].o;
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:prefHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_prefHeight = (jref) sp[1].o;
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(405);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(406);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(412);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(413);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(414);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(415);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[2].o);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(420);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxWidth cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(421);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(422);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxHeight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(427);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(434);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_maxWidth = (jref) sp[1].o;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:maxHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_maxHeight = (jref) sp[1].o;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:pad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(455);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pad cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(456);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(457);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[1].o);
	LINE_NUMBER(458);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[1].o);
	LINE_NUMBER(459);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[1].o);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:pad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(464);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"top cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(465);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"left cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(466);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(467);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"right cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(468);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(469);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[2].o);
	LINE_NUMBER(470);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[3].o);
	LINE_NUMBER(471);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[4].o);
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padTop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(476);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padTop cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(477);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padLeft", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(482);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padLeft cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(483);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[1].o);
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padBottom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(488);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padBottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(489);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[1].o);
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padRight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(495);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[1].o);
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:pad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(501);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	frame[2].o = sp[0].o;
	LINE_NUMBER(502);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[2].o);
	LINE_NUMBER(503);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[2].o);
	LINE_NUMBER(504);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[2].o);
	LINE_NUMBER(505);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[2].o);
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:pad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(512);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[3].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[4].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padBottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:padRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:fill", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(539);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillX = (jfloat(1));
	LINE_NUMBER(540);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillY = (jfloat(1));
	LINE_NUMBER(541);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:fillX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(546);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillX = (jfloat(1));
	LINE_NUMBER(547);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:fillY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(552);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillY = (jfloat(1));
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(557);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillX = (frame[1].f);
	LINE_NUMBER(558);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillY = (frame[2].f);
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_fillX = sp[1].f;
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_fillY = sp[1].f;
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:fill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_fillX = sp[1].f;
	LINE_NUMBER(572);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_4;
	}
	INST_FCONST(1);
	goto label_5;
label_4:;
	INST_FCONST(0);
label_5:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_fillY = sp[1].f;
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:align", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(579);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_align = (frame[1].i);
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_center_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:center", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(585);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_top_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:top", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) | (jint(2)));
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) & (-5));
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_left_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:left", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(598);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) | (8));
	LINE_NUMBER(599);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) & (-17));
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:bottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) | (jint(4)));
	LINE_NUMBER(606);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) & (-3));
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_right_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:right", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(612);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) | (16));
	LINE_NUMBER(613);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK(sp[0].o))->F_align) & (-9));
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getMinWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	jfloat temp2 = temp0 + temp1;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (temp2 + temp3);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getMinHeightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(622);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getMinHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(626);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_minHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	jfloat temp2 = temp0 + temp1;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (temp2 + temp3);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPrefWidthValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPrefWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(635);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_2:;
	{
	LINE_NUMBER(636);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	jfloat temp3 = temp1 + temp2;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp3 + temp4));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPrefHeightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPrefHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(645);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_2:;
	{
	LINE_NUMBER(646);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeight_R_float])(ctx, (frame[0].o));
	jfloat temp1 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	jfloat temp3 = temp1 + temp2;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp3 + temp4));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getMaxWidthValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getMaxWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(654);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(655);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[1].f = (temp0 + (temp1 + temp2));
	}
label_2:;
	{
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getMaxHeightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getMaxHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_maxHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(665);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[1].f = (temp0 + (temp1 + temp2));
	}
label_2:;
	{
	LINE_NUMBER(666);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadTopValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadLeftValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadBottomValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadRightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getPadY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getFillX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getFillY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(716);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_fillY);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Container_getAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(720);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_align);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_setRound_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:setRound", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(725);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_round = (frame[1].i);
	LINE_NUMBER(726);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:clip", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(730);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:clip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(735);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:setClip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(742);
	((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_clip = (frame[1].i);
	LINE_NUMBER(743);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setTransform_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(744);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(745);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Container_getClip_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:getClip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(748);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_clip);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Container_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(752);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_1;
	}
	{
	LINE_NUMBER(753);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_disabled;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(754);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) < 0) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) >= 0) goto label_4;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) < 0) goto label_4;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) < 0) goto label_1;
	}
label_4:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(756);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Container:drawDebug", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(760);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_validate])(ctx, (frame[0].o));
	LINE_NUMBER(761);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_isTransform_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_isTransform_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(763);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_5;
	}
	{
	LINE_NUMBER(764);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush])(ctx, (frame[1].o));
	LINE_NUMBER(765);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[2].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(766);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, (frame[0].o));
	jint temp4 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	sp[0].i = temp4;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(767);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 - (frame[2].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[0].o));
	jfloat temp5 = temp3 - temp4;
	sp[1].o = frame[0].o;
	LINE_NUMBER(768);
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getHeight_R_float])(ctx, sp[1].o);
	jfloat temp7 = temp6 - (frame[3].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Container *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[0].o));
	jfloat temp9 = temp7 - temp8;
	LINE_NUMBER(767);
	jint temp10 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, temp5, temp9);
	sp[0].i = temp10;
	sp += 1;
	}
label_11:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(769);
	if ((frame[4].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(770);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(771);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clipEnd])(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(773);
	goto label_18;
label_5:;
	{
	LINE_NUMBER(774);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	}
label_18:;
	{
	LINE_NUMBER(775);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	goto label_19;
	}
label_2:;
	{
	LINE_NUMBER(777);
	M_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx, (frame[0].o), (frame[1].o));
	}
label_19:;
	LINE_NUMBER(778);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_ui_Container;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method addActor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method addActorAt
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method addActorBefore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method addActorAfter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Container[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setCullingArea_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_childrenChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_center_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_top_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_left_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_right_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeft_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottom_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getAlign_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setRound_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getClip_R_boolean,
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
	{ "drawBackground", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFF)V" },
	{ "setBackground", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "setBackground", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Z)V" },
	{ "background", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "getBackground", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "size", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "size", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "size", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "size", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "width", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "width", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "height", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "height", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minWidth", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minHeight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minSize", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minSize", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minWidth", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "minHeight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefWidth", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefHeight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefSize", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefSize", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefWidth", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "prefHeight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxWidth", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxHeight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxSize", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxSize", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxWidth", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "maxHeight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padTop", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padLeft", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padBottom", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padRight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "pad", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "pad", "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padTop", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padLeft", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padBottom", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "padRight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "fill", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "fillX", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "fillY", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "fill", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "fill", "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "fill", "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "align", "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "center", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "top", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "left", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "bottom", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "right", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "getMinHeightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPrefWidthValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPrefHeightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getMaxWidthValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getMaxHeightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadTopValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadTop", "()F" },
	{ "getPadLeftValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadLeft", "()F" },
	{ "getPadBottomValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadBottom", "()F" },
	{ "getPadRightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadRight", "()F" },
	{ "getPadX", "()F" },
	{ "getPadY", "()F" },
	{ "getFillX", "()F" },
	{ "getFillY", "()F" },
	{ "getAlign", "()I" },
	{ "setRound", "(Z)V" },
	{ "clip", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "clip", "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;" },
	{ "setClip", "(Z)V" },
	{ "getClip", "()Z" },
};

static FieldMetadata fields[] {
	{ "actor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_actor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
	{ "minWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_minWidth), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "minHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_minHeight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "prefWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_prefWidth), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "prefHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_prefHeight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "maxWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_maxWidth), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "maxHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_maxHeight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "padTop", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_padTop), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "padLeft", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_padLeft), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "padBottom", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_padBottom), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "padRight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_padRight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 2 },
	{ "fillX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_fillX), "F", 2 },
	{ "fillY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_fillY), "F", 2 },
	{ "align", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_align), "I", 2 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 2 },
	{ "clip", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_clip), "Z", 2 },
	{ "round", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_round), "Z", 2 },
	{ "actorCulling", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Container, F_actorCulling), "Lcom/badlogic/gdx/math/Rectangle;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Container, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Container_com_badlogic_gdx_scenes_scene2d_Actor, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFF)V", 4 },
	{ "setBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "setBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Z)V", 1 },
	{ "background", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "getBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_layout, "()V", 1 },
	{ "setCullingArea", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setCullingArea_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setCullingArea_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;)V", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "getActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "addActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_addActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "addActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor, "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "addActorBefore", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "addActorAfter", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 131073 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z", 1 },
	{ "removeActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "width", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "width", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "height", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "height", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "minHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "prefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "maxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "padRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "fillX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "fillY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "align", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "center", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_center_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_center_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "top", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_top_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_top_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "left", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_left_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_left_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "bottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "right", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_right_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_right_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMinHeight_R_float, "()F", 1 },
	{ "getPrefWidthValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPrefHeight_R_float, "()F", 1 },
	{ "getMaxWidthValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getMaxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxWidth_R_float, "()F", 1 },
	{ "getMaxHeightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getMaxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getMaxHeight_R_float, "()F", 1 },
	{ "getPadTopValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTop_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadTop_R_float, "()F", 1 },
	{ "getPadLeftValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeft_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadLeft_R_float, "()F", 1 },
	{ "getPadBottomValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottom_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadBottom_R_float, "()F", 1 },
	{ "getPadRightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadRight_R_float, "()F", 1 },
	{ "getPadX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadX_R_float, "()F", 1 },
	{ "getPadY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getPadY_R_float, "()F", 1 },
	{ "getFillX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillX_R_float, "()F", 1 },
	{ "getFillY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getFillY_R_float, "()F", 1 },
	{ "getAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getAlign_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getAlign_R_int, "()I", 1 },
	{ "setRound", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setRound_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setRound_boolean, "(Z)V", 1 },
	{ "clip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "clip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container, "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Container;", 1 },
	{ "setClip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setClip_boolean, "(Z)V", 1 },
	{ "getClip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_getClip_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getClip_R_boolean, "()Z", 1 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "drawDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Container{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Container",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Container),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Container,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Container,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Container,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 106,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 251,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Container = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Container);

}

