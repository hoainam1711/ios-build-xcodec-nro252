#include "com/badlogic/gdx/scenes/scene2d/ui/Label.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/utils/CharArray.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/utils/Justify.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Label_tempColor;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Label_prefSizeLayout;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Label(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Label_tempColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Label_tempColor)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Label_tempColor, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Label_prefSizeLayout)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Label_prefSizeLayout)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Label_prefSizeLayout, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Label *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_layout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layout)->clazz)->markFunction)((jobject) self->F_layout, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_ellipsis)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ellipsis)->clazz)->markFunction)((jobject) self->F_ellipsis, mark, depth + 1);
	if (self->F_justify)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_justify)->clazz)->markFunction)((jobject) self->F_justify, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, sp[2].o)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, sp[2].o)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, (frame[2].o), (frame[3].o));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(ctx, sp[2].o, sp[3].o, (frame[4].o));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, (frame[2].o), (frame[3].o));
	sp[4].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[2].o), (frame[4].o));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(ctx, sp[2].o, sp[3].o, sp[4].o);
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(74);
	init_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx, (frame[0].o));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK(sp[0].o))->F_layout = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_CharArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_CharArray);
	init_com_badlogic_gdx_utils_CharArray(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(42);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_intValue = (bit_cast<jint>(0x80000000));
	LINE_NUMBER(44);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign = (8);
	LINE_NUMBER(45);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (8);
	LINE_NUMBER(48);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid = (jint(1));
	LINE_NUMBER(49);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX = (jfloat(1));
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY = (jfloat(1));
	LINE_NUMBER(50);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged = (jint(0));
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Justify_None;
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK(sp[0].o))->F_justify = (jref) sp[1].o;
	LINE_NUMBER(75);
	if ((frame[1].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (frame[1].o));
	}
label_11:;
	{
	LINE_NUMBER(76);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(77);
	if ((frame[1].o) == nullptr) goto label_13;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	}
label_13:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_font;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing LabelStyle font."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(83);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_font;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(86);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(99);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_intValue) != (frame[1].i)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	((func_com_badlogic_gdx_utils_CharArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_int_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(102);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_intValue = (frame[1].i);
	LINE_NUMBER(103);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	if (((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	((func_com_badlogic_gdx_utils_CharArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_clear])(ctx, sp[0].o);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(112);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_utils_CharArray)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	((func_com_badlogic_gdx_utils_CharArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(115);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_com_badlogic_gdx_utils_CharArray_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_utils_CharArray, (frame[1].o))));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_textEquals_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_textEquals_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	((func_com_badlogic_gdx_utils_CharArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_append_java_lang_CharSequence_R_com_badlogic_gdx_utils_CharArray])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(121);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_intValue = (bit_cast<jint>(0x80000000));
	LINE_NUMBER(122);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Label_textEquals_java_lang_CharSequence_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:textEquals", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(128);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == temp1) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(129);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(130);
	jint temp0 = (jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[4].i));
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	if (temp0 == temp1) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(129);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Label_getText_R_com_badlogic_gdx_utils_CharArray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(140);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid = (jint(1));
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_scaleAndComputePrefSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:scaleAndComputePrefSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(145);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(146);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float])(ctx, (frame[1].o));
	frame[3].f = temp1;
	LINE_NUMBER(147);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY));
	}
label_4:;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Label_prefSizeLayout;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_computePrefSize_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_computePrefSize_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(151);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_6:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_computePrefSize_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:computePrefSize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid = (jint(0));
	LINE_NUMBER(156);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(157);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(159);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp4 = temp2 - temp3;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	LINE_NUMBER(160);
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = (temp4 - temp5);
	}
label_5:;
	{
	LINE_NUMBER(162);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].f), (8), (jint(1)));
	LINE_NUMBER(163);
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(165);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefWidth = ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(166);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefHeight = ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:layout", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(171);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(172);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float])(ctx, (frame[1].o));
	frame[3].f = temp1;
	LINE_NUMBER(173);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY));
	}
label_4:;
	{
	LINE_NUMBER(175);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(176);
	if ((frame[4].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(177);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	LINE_NUMBER(178);
	if ((floatCompare((frame[5].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lastPrefHeight), -1)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(179);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lastPrefHeight = (frame[5].f);
	LINE_NUMBER(180);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(184);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getWidth_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getHeight_R_float])(ctx, (frame[0].o));
	frame[6].f = temp1;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[7].o = sp[0].o;
	LINE_NUMBER(186);
	frame[8].f = (jfloat(0));
	frame[9].f = (jfloat(0));
	LINE_NUMBER(187);
	if ((frame[7].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(188);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].f = temp0;
	LINE_NUMBER(189);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[9].f = temp1;
	LINE_NUMBER(190);
	jfloat temp2 = frame[5].f;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[5].f = (temp2 - (temp3 + temp4));
	LINE_NUMBER(191);
	jfloat temp5 = frame[6].f;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[6].f = (temp5 - (temp6 + temp7));
	}
label_18:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_layout;
	frame[10].o = sp[0].o;
	LINE_NUMBER(196);
	if ((frame[4].i) != 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_CharArray_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	if (temp0 == (jint(-1))) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[10].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[3].o))->F_size;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	jfloat temp2 = frame[5].f;
	jint temp3 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign;
	jint temp4 = frame[4].i;
	sp[4].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_justify;
	sp[5].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, temp2, temp3, temp4, sp[4].o, sp[5].o);
	LINE_NUMBER(199);
	frame[11].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width);
	LINE_NUMBER(200);
	frame[12].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height);
	LINE_NUMBER(202);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (8)) != 0) goto label_29;
	}
	{
	LINE_NUMBER(203);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (16)) == 0) goto label_31;
	}
	{
	LINE_NUMBER(204);
	frame[8].f = ((frame[8].f) + ((frame[5].f) - (frame[11].f)));
	goto label_29;
	}
label_31:;
	{
	LINE_NUMBER(206);
	frame[8].f = ((frame[8].f) + (((frame[5].f) - (frame[11].f)) / (jfloat(2))));
	goto label_29;
	}
label_25:;
	{
	LINE_NUMBER(209);
	frame[11].f = (frame[5].f);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[1].o));
	frame[12].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight);
	}
label_29:;
	{
	LINE_NUMBER(213);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (jint(2))) == 0) goto label_34;
	}
	{
	LINE_NUMBER(214);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[0].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_36;
	}
	INST_FCONST(0);
	goto label_37;
label_36:;
	{
	jfloat temp0 = (frame[6].f) - (frame[12].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_37:;
	{
	sp -= 2;
	frame[9].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(215);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, sp[0].o);
	frame[9].f = (temp0 + temp1);
	goto label_39;
	}
label_34:;
	{
	LINE_NUMBER(216);
	if ((((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (jint(4))) == 0) goto label_40;
	}
	{
	LINE_NUMBER(217);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[0].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_42;
	}
	{
	jfloat temp0 = (frame[6].f) - (frame[12].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_43;
	}
label_42:;
	INST_FCONST(0);
label_43:;
	{
	sp -= 2;
	frame[9].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(218);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, sp[0].o);
	frame[9].f = (temp0 - temp1);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(220);
	frame[9].f = ((frame[9].f) + (((frame[6].f) - (frame[12].f)) / (jfloat(2))));
	}
label_39:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[0].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_45;
	}
	{
	frame[9].f = ((frame[9].f) + (frame[12].f));
	}
label_45:;
	{
	LINE_NUMBER(224);
	sp[0].o = frame[10].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((com_badlogic_gdx_utils_CharArray *) NULL_CHECK(sp[3].o))->F_size;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	jfloat temp2 = frame[11].f;
	jint temp3 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign;
	jint temp4 = frame[4].i;
	sp[4].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_justify;
	sp[5].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, temp2, temp3, temp4, sp[4].o, sp[5].o);
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float])(ctx, sp[0].o, (frame[10].o), (frame[8].f), (frame[9].f));
	LINE_NUMBER(227);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_48;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_48:;
	LINE_NUMBER(228);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(231);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_validate])(ctx, (frame[0].o));
	LINE_NUMBER(232);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Label_tempColor;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(233);
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[2].f));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(235);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	}
label_4:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_fontColor;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[1].o))->F_fontColor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tint_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tint_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getY_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPosition_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(241);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getPrefWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(245);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(246);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid) == 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Label_scaleAndComputePrefSize(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(247);
	frame[1].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	LINE_NUMBER(248);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[2].o = sp[0].o;
	LINE_NUMBER(249);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(250);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[1].f = temp6;
	}
label_5:;
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getPrefHeight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Label_scaleAndComputePrefSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(256);
	frame[1].f = (jfloat(1));
	LINE_NUMBER(257);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float])(ctx, sp[0].o);
	frame[1].f = (temp0 / temp1);
	}
label_3:;
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, sp[0].o);
	frame[2].f = (temp0 - ((temp1 * (frame[1].f)) * (jfloat(2))));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[3].o = sp[0].o;
	LINE_NUMBER(260);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(261);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[2].f = temp6;
	}
label_6:;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Label_getGlyphLayout_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getGlyphLayout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_layout;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setWrap_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setWrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(277);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap = (frame[1].i);
	LINE_NUMBER(278);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Label_getWrap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getWrap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Label_getLabelAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getLabelAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Label_getLineAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getLineAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setAlignment", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(297);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[1].i));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setAlignment", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(304);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign = (frame[1].i);
	LINE_NUMBER(306);
	if (((frame[2].i) & (8)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(307);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (8);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(308);
	if (((frame[2].i) & (16)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(309);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (16);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(311);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(313);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setFontScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(317);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setFontScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(321);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged = (jint(1));
	LINE_NUMBER(322);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX = (frame[1].f);
	LINE_NUMBER(323);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY = (frame[2].f);
	LINE_NUMBER(324);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getFontScaleX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setFontScaleX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(332);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float])(ctx, (frame[0].o), (frame[1].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getFontScaleY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setFontScaleY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(340);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX), (frame[1].f));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setEllipsis", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis = (jref) (frame[1].o);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setEllipsis", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(352);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(353);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis = (jref) (((jobject) createStringLiteral(ctx, u8"..."_j)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(355);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis = (jref) (jobject(nullptr));
	}
label_3:;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Label_getJustify_R_com_badlogic_gdx_utils_Justify(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getJustify", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_justify;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setJustify_com_badlogic_gdx_utils_Justify(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setJustify", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(365);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Justify cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(366);
	((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_justify = (jref) (frame[1].o);
	LINE_NUMBER(367);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Label_getBitmapFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getBitmapFontCache", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Label_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getName_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(377);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[2].o), (46));
	frame[3].i = temp0;
	LINE_NUMBER(380);
	if ((frame[3].i) == (jint(-1))) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(381);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (36));
	sp += 1;
	if (temp0 == (jint(-1))) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"Label "_j));
	goto label_7;
label_6:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	{
	LINE_NUMBER(35);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Label_tempColor = sp[0].o;
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Label_prefSizeLayout = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Label[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_java_lang_CharSequence,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_textEquals_java_lang_CharSequence_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getText_R_com_badlogic_gdx_utils_CharArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_scaleAndComputePrefSize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_computePrefSize_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getGlyphLayout_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setWrap_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getWrap_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getLabelAlign_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getLineAlign_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getJustify_R_com_badlogic_gdx_utils_Justify,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setJustify_com_badlogic_gdx_utils_Justify,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getBitmapFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache,
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
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;" },
	{ "setText", "(I)Z" },
	{ "setText", "(Ljava/lang/CharSequence;)V" },
	{ "textEquals", "(Ljava/lang/CharSequence;)Z" },
	{ "getText", "()Lcom/badlogic/gdx/utils/CharArray;" },
	{ "scaleAndComputePrefSize", "()V" },
	{ "computePrefSize", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;)V" },
	{ "getGlyphLayout", "()Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "setWrap", "(Z)V" },
	{ "getWrap", "()Z" },
	{ "getLabelAlign", "()I" },
	{ "getLineAlign", "()I" },
	{ "setAlignment", "(I)V" },
	{ "setAlignment", "(II)V" },
	{ "setFontScale", "(F)V" },
	{ "setFontScale", "(FF)V" },
	{ "getFontScaleX", "()F" },
	{ "setFontScaleX", "(F)V" },
	{ "getFontScaleY", "()F" },
	{ "setFontScaleY", "(F)V" },
	{ "setEllipsis", "(Ljava/lang/String;)V" },
	{ "setEllipsis", "(Z)V" },
	{ "getJustify", "()Lcom/badlogic/gdx/utils/Justify;" },
	{ "setJustify", "(Lcom/badlogic/gdx/utils/Justify;)V" },
	{ "getBitmapFontCache", "()Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle,
};

static FieldMetadata fields[] {
	{ "tempColor", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Label_tempColor, "Lcom/badlogic/gdx/graphics/Color;", 26 },
	{ "prefSizeLayout", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Label_prefSizeLayout, "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 26 },
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;", 2 },
	{ "layout", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_layout), "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 18 },
	{ "prefWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_prefWidth), "F", 2 },
	{ "prefHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_prefHeight), "F", 2 },
	{ "text", &class_com_badlogic_gdx_utils_CharArray, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_text), "Lcom/badlogic/gdx/utils/CharArray;", 18 },
	{ "intValue", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_intValue), "I", 2 },
	{ "cache", &class_com_badlogic_gdx_graphics_g2d_BitmapFontCache, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_cache), "Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;", 2 },
	{ "labelAlign", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_labelAlign), "I", 2 },
	{ "lineAlign", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_lineAlign), "I", 2 },
	{ "wrap", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_wrap), "Z", 2 },
	{ "lastPrefHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_lastPrefHeight), "F", 2 },
	{ "prefSizeInvalid", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_prefSizeInvalid), "Z", 2 },
	{ "fontScaleX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_fontScaleX), "F", 2 },
	{ "fontScaleY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_fontScaleY), "F", 2 },
	{ "fontScaleChanged", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_fontScaleChanged), "Z", 2 },
	{ "ellipsis", &class_java_lang_String, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_ellipsis), "Ljava/lang/String;", 2 },
	{ "justify", &class_com_badlogic_gdx_utils_Justify, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label, F_justify), "Lcom/badlogic/gdx/utils/Justify;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Ljava/lang/CharSequence;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Ljava/lang/CharSequence;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String_com_badlogic_gdx_graphics_Color, 0, "(Ljava/lang/CharSequence;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String_java_lang_String, 0, "(Ljava/lang/CharSequence;Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, 0, "(Ljava/lang/CharSequence;Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)V", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_int_R_boolean, "(I)Z", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_java_lang_CharSequence, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setText_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
	{ "textEquals", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_textEquals_java_lang_CharSequence_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_textEquals_java_lang_CharSequence_R_boolean, "(Ljava/lang/CharSequence;)Z", 1 },
	{ "getText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getText_R_com_badlogic_gdx_utils_CharArray, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getText_R_com_badlogic_gdx_utils_CharArray, "()Lcom/badlogic/gdx/utils/CharArray;", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_invalidate, "()V", 1 },
	{ "scaleAndComputePrefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_scaleAndComputePrefSize, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_scaleAndComputePrefSize, "()V", 2 },
	{ "computePrefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_computePrefSize_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_computePrefSize_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;)V", 4 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_layout, "()V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getPrefHeight_R_float, "()F", 1 },
	{ "getGlyphLayout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getGlyphLayout_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getGlyphLayout_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "()Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "setWrap", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setWrap_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setWrap_boolean, "(Z)V", 1 },
	{ "getWrap", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getWrap_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getWrap_R_boolean, "()Z", 1 },
	{ "getLabelAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getLabelAlign_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getLabelAlign_R_int, "()I", 1 },
	{ "getLineAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getLineAlign_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getLineAlign_R_int, "()I", 1 },
	{ "setAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int, "(I)V", 1 },
	{ "setAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setAlignment_int_int, "(II)V", 1 },
	{ "setFontScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float, "(F)V", 1 },
	{ "setFontScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScale_float_float, "(FF)V", 1 },
	{ "getFontScaleX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleX_R_float, "()F", 1 },
	{ "setFontScaleX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleX_float, "(F)V", 1 },
	{ "getFontScaleY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getFontScaleY_R_float, "()F", 1 },
	{ "setFontScaleY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setFontScaleY_float, "(F)V", 1 },
	{ "setEllipsis", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setEllipsis", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setEllipsis_boolean, "(Z)V", 1 },
	{ "getJustify", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getJustify_R_com_badlogic_gdx_utils_Justify, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getJustify_R_com_badlogic_gdx_utils_Justify, "()Lcom/badlogic/gdx/utils/Justify;", 1 },
	{ "setJustify", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setJustify_com_badlogic_gdx_utils_Justify, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setJustify_com_badlogic_gdx_utils_Justify, "(Lcom/badlogic/gdx/utils/Justify;)V", 1 },
	{ "getBitmapFontCache", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getBitmapFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getBitmapFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache, "()Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;", 4 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Label_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Label, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Label{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Label",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Label),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Label,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Label,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Label,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 160,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Label = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Label);

}

