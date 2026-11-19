#include "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip_TextTooltipStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Container.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tooltip.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "java/lang/NullPointerException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextTooltip *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tooltip(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_getInstance_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, sp[3].o)));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_getInstance_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, sp[3].o)));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_getInstance_R_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[3].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, sp[3].o)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, sp[3].o)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(49);
	init_com_badlogic_gdx_scenes_scene2d_ui_Tooltip_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(ctx, (frame[0].o), (jobject(nullptr)), (frame[2].o));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[3].o)))->F_label;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:newLabel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label);
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:setStyle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(62);
	((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[1].o)))->F_wrapWidth));
	LINE_NUMBER(66);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[1].o)))->F_wrapWidth), (jfloat(0)), -1)) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Container])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK((frame[0].o)))->F_container;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label, sp[0].o));
	LINE_NUMBER(70);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[1].o)))->F_label;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setWrap_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setWrap_boolean])(ctx, (frame[3].o), (frame[2].i));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle,
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
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "newLabel", "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)Lcom/badlogic/gdx/scenes/scene2d/ui/Label;" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle,
};

static FieldMetadata fields[] {
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextTooltip, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;)V", 1 },
	{ "newLabel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_newLabel_java_lang_String_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label, "(Ljava/lang/String;Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)Lcom/badlogic/gdx/scenes/scene2d/ui/Label;", 4 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Tooltip,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextTooltip),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip);

}

