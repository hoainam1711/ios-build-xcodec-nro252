#include "com/badlogic/gdx/scenes/scene2d/ui/Window.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window_1.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window_3.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window_2.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window_WindowStyle.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/graphics/Camera.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "com/badlogic/gdx/graphics/OrthographicCamera.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Cell.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/math/Vector3.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/math/Vector2.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize;
jint SF_com_badlogic_gdx_scenes_scene2d_ui_Window_MOVE;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Window(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Table(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Window *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_titleLabel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_titleLabel)->clazz)->markFunction)((jobject) self->F_titleLabel, mark, depth + 1);
	if (self->F_titleTable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_titleTable)->clazz)->markFunction)((jobject) self->F_titleTable, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, sp[2].o)));
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, sp[2].o)));
	LINE_NUMBER(63);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(66);
	init_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isMovable = (jint(1));
	LINE_NUMBER(47);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_resizeBorder = (8);
	LINE_NUMBER(48);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_keepWithinStage = (jint(1));
	LINE_NUMBER(67);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"title cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setClip_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);
	sp[4].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[2].o)))->F_titleFont;
	sp[5].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[2].o)))->F_titleFontColor;
	init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_titleLabel = (jref) sp[1].o;
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleLabel;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Window$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Window$1_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK(sp[0].o))->F_titleTable = (jref) sp[1].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleLabel;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_growX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_growX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(83);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setWidth_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setWidth_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(84);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setHeight_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setHeight_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Window$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_Window$2_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Window$3);
	init_com_badlogic_gdx_scenes_scene2d_ui_Window$3_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx, sp[1].o, (frame[0].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Window_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:newLabel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(198);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label);
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:setStyle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(202);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(203);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleLabel;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_titleFont;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_titleFontColor;
	init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(207);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_keepWithinStage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:keepWithinStage", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_keepWithinStage) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(219);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getCamera_R_com_badlogic_gdx_graphics_Camera) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getCamera_R_com_badlogic_gdx_graphics_Camera])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(221);
	if ((isInstance(ctx, (frame[2].o), &class_com_badlogic_gdx_graphics_OrthographicCamera)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(222);
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_OrthographicCamera, (frame[2].o)));
	LINE_NUMBER(223);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(224);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[1].o));
	frame[5].f = temp1;
	LINE_NUMBER(225);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float])(ctx, (frame[0].o), (16));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	if ((floatCompare((temp2 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)), (((frame[4].f) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x) + (((frame[4].f) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float])(ctx, (frame[0].o), (16));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int])(ctx, sp[0].o, temp0, temp1, (16));
	}
label_10:;
	{
	LINE_NUMBER(227);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float])(ctx, (frame[0].o), (8));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	if ((floatCompare((temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_x)), (((-(frame[4].f)) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom)), 1)) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	jfloat temp0 = ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_x) - (((frame[4].f) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float])(ctx, (frame[0].o), (8));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int])(ctx, sp[0].o, temp0, temp1, (8));
	}
label_12:;
	{
	LINE_NUMBER(229);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float])(ctx, (frame[0].o), (jint(2)));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	if ((floatCompare((temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)), (((frame[5].f) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom)), -1)) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float])(ctx, (frame[0].o), (jint(2)));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int])(ctx, sp[0].o, temp0, (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y) + (((frame[5].f) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom))), (jint(2)));
	}
label_14:;
	{
	LINE_NUMBER(231);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_int_R_float])(ctx, (frame[0].o), (jint(4)));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	if ((floatCompare((temp0 - ((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[0].o))->F_y)), (((-(frame[5].f)) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom)), 1)) >= 0) goto label_16;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_int_R_float])(ctx, (frame[0].o), (jint(4)));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Camera *) NULL_CHECK((frame[2].o)))->F_position;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setPosition_float_float_int])(ctx, sp[0].o, temp0, (((jfloat)((com_badlogic_gdx_math_Vector3 *) NULL_CHECK(sp[1].o))->F_y) - (((frame[5].f) / (jfloat(2))) / ((jfloat)((com_badlogic_gdx_graphics_OrthographicCamera *) NULL_CHECK((frame[3].o)))->F_zoom))), (jint(4)));
	}
label_16:;
	LINE_NUMBER(233);
	goto label_18;
label_5:;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getRoot_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[1].o));
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	LINE_NUMBER(234);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[1].o));
	frame[3].f = temp0;
	LINE_NUMBER(235);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[1].o));
	frame[4].f = temp1;
	LINE_NUMBER(236);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp2, (jfloat(0)), 1)) >= 0) goto label_22;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setX_float])(ctx, (frame[0].o), (jfloat(0)));
	}
label_22:;
	{
	LINE_NUMBER(237);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getRight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (frame[3].f), -1)) <= 0) goto label_23;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setX_float])(ctx, sp[0].o, (temp0 - temp1));
	}
label_23:;
	{
	LINE_NUMBER(238);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_24;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setY_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setY_float])(ctx, (frame[0].o), (jfloat(0)));
	}
label_24:;
	{
	LINE_NUMBER(239);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getTop_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[4].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setY_float])(ctx, sp[0].o, (temp0 - temp1));
	}
label_18:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(245);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getKeyboardFocus_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[3].o));
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(248);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_keepWithinStage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_keepWithinStage])(ctx, (frame[0].o));
	LINE_NUMBER(250);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_stageBackground;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[3].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition;
	jfloat temp4 = temp3 + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x);
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition;
	jfloat temp6 = temp5 + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getX_R_float])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize;
	jfloat temp8 = temp7 + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_x);
	sp[2].o = frame[0].o;
	LINE_NUMBER(254);
	jfloat temp9 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getY_R_float])(ctx, sp[2].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize;
	jfloat temp10 = temp9 + ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[2].o))->F_y);
	LINE_NUMBER(253);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_drawStageBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_drawStageBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp2, temp4, temp6, temp8, temp10);
	}
label_2:;
	{
	LINE_NUMBER(257);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_draw_com_badlogic_gdx_graphics_g2d_Batch_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_drawStageBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:drawStageBackground", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(262);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_stageBackground;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:drawBackground", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(267);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_a);
	LINE_NUMBER(271);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadTop_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadLeft_R_float])(ctx, (frame[0].o));
	frame[6].f = temp1;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp2 - (frame[6].f);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadRight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setSize_float_float])(ctx, sp[0].o, (temp3 - temp4), (frame[5].f));
	LINE_NUMBER(273);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	jfloat temp5 = frame[6].f;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setPosition_float_float])(ctx, sp[0].o, temp5, (temp6 - (frame[5].f)));
	LINE_NUMBER(274);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_drawTitleTable = (jint(1));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_draw_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_draw_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(276);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_drawTitleTable = (jint(0));
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Window_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:hit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_isVisible_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(282);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isModal) == 0) goto label_3;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_4;
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_4:;
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(283);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getHeight_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	LINE_NUMBER(284);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	if ((frame[4].o) != (frame[0].o)) goto label_7;
	}
label_6:;
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(285);
	if ((floatCompare((frame[2].f), (frame[5].f), 1)) > 0) goto label_8;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadTop_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (temp1 - temp2), -1)) < 0) goto label_8;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) < 0) goto label_8;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, 1)) > 0) goto label_8;
	}
	{
	LINE_NUMBER(287);
	frame[6].o = (frame[4].o);
	}
label_10:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[6].o));
	if (sp[0].o == (frame[0].o)) goto label_11;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), (frame[6].o));
	if (sp[0].o == nullptr) goto label_8;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window_isMovable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:isMovable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isMovable);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_setMovable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:setMovable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(300);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isMovable = (frame[1].i);
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window_isModal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:isModal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isModal);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_setModal_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:setModal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(308);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isModal = (frame[1].i);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_setKeepWithinStage_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:setKeepWithinStage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(312);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_keepWithinStage = (frame[1].i);
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window_isResizable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:isResizable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isResizable);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:setResizable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(320);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_isResizable = (frame[1].i);
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizeBorder_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:setResizeBorder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(324);
	((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_resizeBorder = (frame[1].i);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Window_isDragging_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:isDragging", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_dragging);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Window_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:getPrefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefWidth_R_float(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefWidth_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadLeft_R_float])(ctx, (frame[0].o));
	jfloat temp3 = temp1 + temp2;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPadRight_R_float])(ctx, (frame[0].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp3 + temp4));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:getTitleTable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleTable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleLabel_R_com_badlogic_gdx_scenes_scene2d_ui_Label(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:getTitleLabel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window *) NULL_CHECK((frame[0].o)))->F_titleLabel;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Window_MOVE = jint(32);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	{
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition = sp[0].o;
	LINE_NUMBER(42);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Window[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_keepWithinStage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_drawStageBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isMovable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setMovable_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isModal_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setModal_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setKeepWithinStage_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isResizable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizable_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizeBorder_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isDragging_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleLabel_R_com_badlogic_gdx_scenes_scene2d_ui_Label,
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
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "newLabel", "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)Lcom/badlogic/gdx/scenes/scene2d/ui/Label;" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle;" },
	{ "keepWithinStage", "()V" },
	{ "drawStageBackground", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFF)V" },
	{ "isMovable", "()Z" },
	{ "setMovable", "(Z)V" },
	{ "isModal", "()Z" },
	{ "setModal", "(Z)V" },
	{ "setKeepWithinStage", "(Z)V" },
	{ "isResizable", "()Z" },
	{ "setResizable", "(Z)V" },
	{ "setResizeBorder", "(I)V" },
	{ "isDragging", "()Z" },
	{ "getTitleTable", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "getTitleLabel", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Label;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle,
};

static FieldMetadata fields[] {
	{ "tmpPosition", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpPosition, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "tmpSize", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Window_tmpSize, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "MOVE", &class_int, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Window_MOVE, "I", 26 },
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle;", 2 },
	{ "isMovable", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_isMovable), "Z", 0 },
	{ "isModal", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_isModal), "Z", 0 },
	{ "isResizable", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_isResizable), "Z", 0 },
	{ "resizeBorder", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_resizeBorder), "I", 0 },
	{ "keepWithinStage", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_keepWithinStage), "Z", 0 },
	{ "titleLabel", &class_com_badlogic_gdx_scenes_scene2d_ui_Label, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_titleLabel), "Lcom/badlogic/gdx/scenes/scene2d/ui/Label;", 0 },
	{ "titleTable", &class_com_badlogic_gdx_scenes_scene2d_ui_Table, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_titleTable), "Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 0 },
	{ "drawTitleTable", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_drawTitleTable), "Z", 0 },
	{ "edge", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_edge), "I", 4 },
	{ "dragging", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window, F_dragging), "Z", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Window_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle;)V", 1 },
	{ "newLabel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)Lcom/badlogic/gdx/scenes/scene2d/ui/Label;", 4 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle;", 1 },
	{ "keepWithinStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_keepWithinStage, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_keepWithinStage, "()V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawStageBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_drawStageBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_drawStageBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFF)V", 4 },
	{ "drawBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFF)V", 4 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "isMovable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isMovable_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_isMovable_R_boolean, "()Z", 1 },
	{ "setMovable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setMovable_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setMovable_boolean, "(Z)V", 1 },
	{ "isModal", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isModal_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_isModal_R_boolean, "()Z", 1 },
	{ "setModal", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setModal_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setModal_boolean, "(Z)V", 1 },
	{ "setKeepWithinStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setKeepWithinStage_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setKeepWithinStage_boolean, "(Z)V", 1 },
	{ "isResizable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isResizable_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_isResizable_R_boolean, "()Z", 1 },
	{ "setResizable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizable_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizable_boolean, "(Z)V", 1 },
	{ "setResizeBorder", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizeBorder_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setResizeBorder_int, "(I)V", 1 },
	{ "isDragging", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_isDragging_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_isDragging_R_boolean, "()Z", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getPrefWidth_R_float, "()F", 1 },
	{ "getTitleTable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "getTitleLabel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleLabel_R_com_badlogic_gdx_scenes_scene2d_ui_Label, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getTitleLabel_R_com_badlogic_gdx_scenes_scene2d_ui_Label, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Label;", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Window_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Window, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Window{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Window",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Table,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Window),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Window,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Window,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Window,
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
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 263,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Window = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Window);

}

