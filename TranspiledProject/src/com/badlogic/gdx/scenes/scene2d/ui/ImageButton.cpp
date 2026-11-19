#include "com/badlogic/gdx/scenes/scene2d/ui/ImageButton.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Image.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Button_ButtonStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/utils/Scaling.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ImageButton_ImageButtonStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ImageButton.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Button.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Cell.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Button(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) object;
	if (self->F_image)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_image)->clazz)->markFunction)((jobject) self->F_image, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Button(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, sp[1].o)));
	LINE_NUMBER(35);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, sp[1].o)));
	LINE_NUMBER(40);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	init_com_badlogic_gdx_scenes_scene2d_ui_Button_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_newImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_newImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image])(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK(sp[0].o))->F_image = (jref) sp[1].o;
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle);
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, sp[1].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (frame[1].o), (jobject(nullptr)), (jobject(nullptr)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle);
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, sp[1].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle);
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, sp[1].o, (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (frame[1].o), (frame[2].o), (frame[3].o));
	init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_newImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:newImage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Image(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Image);
	sp[1].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, (jobject(nullptr)));
	clinit_com_badlogic_gdx_utils_Scaling(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_utils_Scaling_fit;
	init_com_badlogic_gdx_scenes_scene2d_ui_Image_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_utils_Scaling(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle)) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style must be an ImageButtonStyle."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(69);
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style = (jref) (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, (frame[1].o)));
	LINE_NUMBER(70);
	M_com_badlogic_gdx_scenes_scene2d_ui_Button_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage])(ctx, sp[0].o);
label_4:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:getImageDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabled;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabled;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isPressed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isPressed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isChecked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedDown;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedDown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDown;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDown;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isChecked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedOver;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isChecked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isChecked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageChecked;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageChecked;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:updateImage", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_setDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(107);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage])(ctx, (frame[0].o));
	LINE_NUMBER(108);
	M_com_badlogic_gdx_scenes_scene2d_ui_Button_draw_com_badlogic_gdx_graphics_g2d_Batch_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:getImage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:getImageCell", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getName_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(121);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(123);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[2].o), (46));
	frame[3].i = temp0;
	LINE_NUMBER(124);
	if ((frame[3].i) == (jint(-1))) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(125);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (36));
	sp += 1;
	if (temp0 == (jint(-1))) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"ImageButton "_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton *) NULL_CHECK((frame[0].o)))->F_image;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Image_getDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Image_getDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_ImageButton[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearChildren_boolean,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getClip_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_stack_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_row_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_endRow,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_columnDefaults_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCells_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_center_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_top_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_left_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_right_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCell_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActor_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getTableDebug_R_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getAlign_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRow_float_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setRound_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRows_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumns_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowHeight_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowMinHeight_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowPrefHeight_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnWidth_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnMinWidth_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnPrefWidth_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRects_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearDebugRects,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugRects_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getSkin_R_com_badlogic_gdx_scenes_scene2d_ui_Skin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_setDisabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_isDisabled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_initialize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_setChecked_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_setChecked_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_toggle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_isChecked_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_isPressed_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_isOver_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_setProgrammaticChangeEvents_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getProgrammaticChangeEvents_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getButtonGroup_R_com_badlogic_gdx_scenes_scene2d_ui_ButtonGroup,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Button_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_newImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
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
	{ "obtainCell", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "drawBackground", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFF)V" },
	{ "setBackground", "(Ljava/lang/String;)V" },
	{ "setBackground", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "background", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "background", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "getBackground", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "clip", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "clip", "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "setClip", "(Z)V" },
	{ "getClip", "()Z" },
	{ "add", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "([Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "add", "(Ljava/lang/CharSequence;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "stack", "([Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "endRow", "()V" },
	{ "columnDefaults", "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "getCell", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "getCells", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "defaults", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padTop", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padLeft", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padBottom", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padRight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "pad", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "pad", "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padTop", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padLeft", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padBottom", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padRight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "align", "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "center", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "top", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "left", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "bottom", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "right", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugAll", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugTable", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugCell", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugActor", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debug", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "getTableDebug", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;" },
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
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setSkin", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getRowMinHeight", "(I)F" },
	{ "getRowPrefHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "getColumnMinWidth", "(I)F" },
	{ "getColumnPrefWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "addDebugRects", "(FFFF)V" },
	{ "clearDebugRects", "()V" },
	{ "addDebugRect", "(FFFFLcom/badlogic/gdx/graphics/Color;)V" },
	{ "drawDebugRects", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "getSkin", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;" },
	{ "setDisabled", "(Z)V" },
	{ "isDisabled", "()Z" },
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "initialize", "()V" },
	{ "setChecked", "(Z)V" },
	{ "setChecked", "(ZZ)V" },
	{ "toggle", "()V" },
	{ "isChecked", "()Z" },
	{ "isPressed", "()Z" },
	{ "isOver", "()Z" },
	{ "getClickListener", "()Lcom/badlogic/gdx/scenes/scene2d/utils/ClickListener;" },
	{ "setProgrammaticChangeEvents", "(Z)V" },
	{ "getProgrammaticChangeEvents", "()Z" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Button$ButtonStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Button$ButtonStyle;" },
	{ "getButtonGroup", "()Lcom/badlogic/gdx/scenes/scene2d/ui/ButtonGroup;" },
	{ "getBackgroundDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "newImage", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Image;" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle;" },
	{ "getImageDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "updateImage", "()V" },
	{ "getImage", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Image;" },
	{ "getImageCell", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle,
};

static FieldMetadata fields[] {
	{ "image", &class_com_badlogic_gdx_scenes_scene2d_ui_Image, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton, F_image), "Lcom/badlogic/gdx/scenes/scene2d/ui/Image;", 18 },
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "newImage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_newImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_newImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Image;", 4 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Button$ButtonStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle;", 1 },
	{ "getImageDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "updateImage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_updateImage, "()V", 4 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "getImage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImage_R_com_badlogic_gdx_scenes_scene2d_ui_Image, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Image;", 1 },
	{ "getImageCell", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getImageCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Button$ButtonStyle;", 4161 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_ImageButton_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/ImageButton",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Button,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_ImageButton,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_ImageButton,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 269,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_ImageButton = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton);

}

