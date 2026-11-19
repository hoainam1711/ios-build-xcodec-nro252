#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_ScrollPaneStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/RemoveActorAction.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_ListStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ClickListener.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/utils/OrderedSet.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/Actions.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Disableable.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/math/Interpolation.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_2.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_1.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "java/lang/Deprecated.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp;

void mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_scrollPane)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scrollPane)->clazz)->markFunction)((jobject) self->F_scrollPane, mark, depth + 1);
	if (self->F_clickListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clickListener)->clazz)->markFunction)((jobject) self->F_clickListener, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, sp[1].o)));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, sp[1].o)));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	init_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx, (frame[0].o));
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(64);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_alignment = (8);
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$1);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$1_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_utils_Array(ctx, sp[1].o, sp[2].o, sp[3].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(83);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRequired_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRequired_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_newScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_newScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane])(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_scrollPane = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$2_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx, sp[2].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[1].o))->F_clickListener = (jref) sp[2].o;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_newScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:newScrollPane", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane);
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setMaxListCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setMaxListCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_maxListCount = (frame[1].i);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxListCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getMaxListCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_maxListCount);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStage_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setStage", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(122);
	M_com_badlogic_gdx_scenes_scene2d_Actor_setStage_com_badlogic_gdx_scenes_scene2d_Stage(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(127);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_scrollStyle;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_listStyle;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(133);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setItems", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(144);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newItems cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(145);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(147);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(148);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate])(ctx, sp[0].o);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(152);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(153);
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp1, temp2, -1)) == 0) goto label_8;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy])(ctx, sp[0].o);
label_8:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setItems", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newItems cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(159);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(161);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate])(ctx, sp[0].o);
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(168);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(169);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) == 0) goto label_9;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy])(ctx, sp[0].o);
label_9:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_clearItems(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:clearItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear])(ctx, sp[0].o);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_clearItems) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_clearItems])(ctx, sp[0].o);
	LINE_NUMBER(177);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getItems_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:layout", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[1].o = sp[0].o;
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[2].o = sp[0].o;
	LINE_NUMBER(189);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float])(ctx, (frame[2].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, (frame[2].o));
	jfloat temp6 = temp4 - (temp5 * (jfloat(2)));
	sp[1].o = frame[1].o;
	LINE_NUMBER(191);
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(190);
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp6, temp7);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_prefHeight = temp8;
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_prefHeight = (temp0 - (temp1 * (jfloat(2))));
	}
label_7:;
	{
	LINE_NUMBER(195);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_getPool_java_lang_Class_R_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_getPool_java_lang_Class_R_com_badlogic_gdx_utils_Pool])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_GlyphLayout)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(197);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selectedPrefWidth) == 0) goto label_10;
	}
	{
	LINE_NUMBER(198);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jfloat(0));
	LINE_NUMBER(199);
	if ((frame[1].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_prefWidth = (temp0 + temp1);
	}
label_13:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(201);
	if ((frame[5].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[5].o));
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_prefWidth = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_prefWidth) + ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width));
	}
label_15:;
	LINE_NUMBER(205);
	goto label_18;
label_10:;
	{
	LINE_NUMBER(206);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(207);
	frame[6].i = (jint(0));
	}
label_20:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_21;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[3].o, (frame[6].i));
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(209);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width), (frame[5].f));
	frame[5].f = temp0;
	LINE_NUMBER(207);
	INST_IINC(6, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(212);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_prefWidth = (frame[5].f);
	LINE_NUMBER(213);
	if ((frame[1].o) == nullptr) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_prefWidth = temp6;
	}
label_26:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_listStyle;
	frame[6].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_scrollStyle;
	frame[7].o = sp[0].o;
	LINE_NUMBER(217);
	jfloat temp0 = frame[5].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[6].o)))->F_selection;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = temp0 + temp1;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[6].o)))->F_selection;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[8].f = (temp2 + temp3);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[7].o)))->F_background;
	frame[1].o = sp[0].o;
	LINE_NUMBER(219);
	if ((frame[1].o) == nullptr) goto label_31;
	}
	{
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[8].f = temp6;
	}
label_31:;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_disableY) != 0) goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(221);
	jfloat temp0 = frame[8].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_scrollStyle;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_scrollStyle;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_35;
	}
label_34:;
	INST_FCONST(0);
label_35:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_scrollStyle;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_scrollStyle;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	goto label_37;
	}
label_36:;
	INST_FCONST(0);
label_37:;
	{
	sp -= 3;
	LINE_NUMBER(221);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[1].f, sp[2].f);
	frame[8].f = (sp[0].f + temp0);
	}
label_33:;
	{
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_prefWidth), (frame[8].f));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_prefWidth = temp0;
	}
label_18:;
	{
	LINE_NUMBER(226);
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getBackgroundDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundDisabled;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundDisabled;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hasParent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hasParent_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundOpen;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundOpen;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(233);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundOver;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundOver;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_background;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getFontColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getFontColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_overFontColor;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hasParent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hasParent_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_3:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_overFontColor;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_fontColor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:draw", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(245);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_validate])(ctx, (frame[0].o));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getFontColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getFontColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(249);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[5].o = sp[0].o;
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(252);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getX_R_float])(ctx, (frame[0].o));
	frame[7].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getY_R_float])(ctx, (frame[0].o));
	frame[8].f = temp1;
	LINE_NUMBER(253);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getWidth_R_float])(ctx, (frame[0].o));
	frame[9].f = temp2;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getHeight_R_float])(ctx, (frame[0].o));
	frame[10].f = temp3;
	LINE_NUMBER(255);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(256);
	if ((frame[3].o) == nullptr) goto label_11;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o), (frame[7].f), (frame[8].f), (frame[9].f), (frame[10].f));
	}
label_11:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(259);
	if ((frame[11].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(260);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(261);
	jfloat temp0 = frame[9].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[9].f = (temp0 - (temp1 + temp2));
	LINE_NUMBER(262);
	jfloat temp3 = frame[10].f;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[10].f = (temp3 - (temp4 + temp5));
	LINE_NUMBER(263);
	jfloat temp6 = frame[7].f;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[7].f = (temp6 + temp7);
	LINE_NUMBER(264);
	jfloat temp8 = frame[8].f;
	jfloat temp9 = (frame[10].f) / (jfloat(2));
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp11 = temp9 + temp10;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[5].o));
	frame[8].f = (temp8 + (jfloat((jint((temp11 + (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight) / (jfloat(2)))))))));
	goto label_20;
	}
label_15:;
	{
	LINE_NUMBER(266);
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (frame[10].f) / (jfloat(2));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[5].o));
	frame[8].f = (temp0 + (jfloat((jint((temp1 + (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight) / (jfloat(2)))))))));
	}
label_20:;
	{
	LINE_NUMBER(268);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float])(ctx, (frame[5].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[4].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[5].o), (frame[11].o), (frame[7].f), (frame[8].f), (frame[9].f));
	}
label_13:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:drawItem", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(275);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[7].o;
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, temp3, (frame[6].f), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_alignment), (jint(0)), (((jobject) createStringLiteral(ctx, u8"..."_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setAlignment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(282);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_alignment = (frame[1].i);
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getSelection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getSelected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelected_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setSelected", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getSelectedIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(309);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size) != 0) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_first_R_java_lang_Object])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setSelectedIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedPrefWidth_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setSelectedPrefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(319);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selectedPrefWidth = (frame[1].i);
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedPrefWidth_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getSelectedPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_selectedPrefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxSelectedPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getMaxSelectedPrefWidth", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_getPool_java_lang_Class_R_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_getPool_java_lang_Class_R_com_badlogic_gdx_utils_Pool])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_GlyphLayout)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(331);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(332);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(333);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[1].o))->F_font;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[3].o, (frame[4].i));
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(334);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[2].o)))->F_width), (frame[3].f));
	frame[3].f = temp0;
	LINE_NUMBER(332);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(336);
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[4].o = sp[0].o;
	LINE_NUMBER(338);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	frame[3].f = temp6;
	}
label_11:;
	{
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(343);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_disabled) != 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane])(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(344);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_disabled = (frame[1].i);
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_disabled);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_validate])(ctx, (frame[0].o));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_validate])(ctx, (frame[0].o));
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_prefHeight);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:showList", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showScrollPane) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showScrollPane])(ctx, (frame[0].o));
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showScrollPane(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:showScrollPane", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_show_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_show_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideList(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:hideList", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(379);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane])(ctx, (frame[0].o));
	LINE_NUMBER(380);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:hideScrollPane", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide])(ctx, sp[0].o);
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getList", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setScrollingDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setScrollingDisabled", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setScrollingDisabled_boolean_boolean])(ctx, sp[0].o, (jint(1)), (frame[1].i));
	LINE_NUMBER(394);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getScrollPane", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_scrollPane;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:isOver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_clickListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getClickListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[0].o)))->F_clickListener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onShow_com_badlogic_gdx_scenes_scene2d_Actor_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:onShow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(412);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(0.3f);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_fade;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_fadeIn_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(ctx, temp0, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onHide_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:onHide", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(1));
	LINE_NUMBER(417);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(0.15f);
	clinit_com_badlogic_gdx_math_Interpolation(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_math_Interpolation_fade;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_fadeOut_float_com_badlogic_gdx_math_Interpolation_R_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(ctx, temp0, sp[1].o);
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_removeActor_R_com_badlogic_gdx_scenes_scene2d_actions_RemoveActorAction(ctx);
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_actions_Actions_sequence_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_R_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	{
	LINE_NUMBER(56);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox;
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

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method showList
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[29]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method hideList
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[31]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

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
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setDisabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_newScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setMaxListCount_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxListCount_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_clearItems,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getItems_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getFontColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setAlignment_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelected_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedIndex_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedPrefWidth_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedPrefWidth_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxSelectedPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showList,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showScrollPane,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideList,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setScrollingDisabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onShow_com_badlogic_gdx_scenes_scene2d_Actor_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onHide_com_badlogic_gdx_scenes_scene2d_Actor,
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
	{ "newScrollPane", "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;" },
	{ "setMaxListCount", "(I)V" },
	{ "getMaxListCount", "()I" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle;" },
	{ "setItems", "([Ljava/lang/Object;)V" },
	{ "setItems", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "clearItems", "()V" },
	{ "getItems", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getBackgroundDrawable", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getFontColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "drawItem", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/Object;FFF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "setAlignment", "(I)V" },
	{ "getSelection", "()Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;" },
	{ "getSelected", "()Ljava/lang/Object;" },
	{ "setSelected", "(Ljava/lang/Object;)V" },
	{ "getSelectedIndex", "()I" },
	{ "setSelectedIndex", "(I)V" },
	{ "setSelectedPrefWidth", "(Z)V" },
	{ "getSelectedPrefWidth", "()Z" },
	{ "getMaxSelectedPrefWidth", "()F" },
	{ "toString", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "showList", "()V" },
	{ "showScrollPane", "()V" },
	{ "hideList", "()V" },
	{ "hideScrollPane", "()V" },
	{ "getList", "()Lcom/badlogic/gdx/scenes/scene2d/ui/List;" },
	{ "setScrollingDisabled", "(Z)V" },
	{ "getScrollPane", "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;" },
	{ "isOver", "()Z" },
	{ "getClickListener", "()Lcom/badlogic/gdx/scenes/scene2d/utils/ClickListener;" },
	{ "onShow", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V" },
	{ "onHide", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Disableable, &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle,
	&class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane,
};

static FieldMetadata fields[] {
	{ "temp", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp, "Lcom/badlogic/gdx/math/Vector2;", 24 },
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle;", 0 },
	{ "items", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_items), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "scrollPane", &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_scrollPane), "Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;", 0 },
	{ "prefWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_prefWidth), "F", 2 },
	{ "prefHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_prefHeight), "F", 2 },
	{ "clickListener", &class_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_clickListener), "Lcom/badlogic/gdx/scenes/scene2d/utils/ClickListener;", 2 },
	{ "disabled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_disabled), "Z", 0 },
	{ "alignment", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_alignment), "I", 2 },
	{ "selectedPrefWidth", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_selectedPrefWidth), "Z", 0 },
	{ "selection", &class_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox, F_selection), "Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle;)V", 1 },
	{ "newScrollPane", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_newScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_newScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;", 4 },
	{ "setMaxListCount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setMaxListCount_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setMaxListCount_int, "(I)V", 1 },
	{ "getMaxListCount", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxListCount_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxListCount_R_int, "()I", 1 },
	{ "setStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStage_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStage_com_badlogic_gdx_scenes_scene2d_Stage, "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V", 4 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle;", 1 },
	{ "setItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "setItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setItems_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "clearItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_clearItems, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_clearItems, "()V", 1 },
	{ "getItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getItems_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getItems_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_layout, "()V", 1 },
	{ "getBackgroundDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getBackgroundDrawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getFontColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getFontColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getFontColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 4 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawItem", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/Object;FFF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 4 },
	{ "setAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setAlignment_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setAlignment_int, "(I)V", 1 },
	{ "getSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, "()Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;", 1 },
	{ "getSelected", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setSelected", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelected_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelected_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getSelectedIndex", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedIndex_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedIndex_R_int, "()I", 1 },
	{ "setSelectedIndex", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedIndex_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedIndex_int, "(I)V", 1 },
	{ "setSelectedPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedPrefWidth_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setSelectedPrefWidth_boolean, "(Z)V", 1 },
	{ "getSelectedPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedPrefWidth_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedPrefWidth_R_boolean, "()Z", 1 },
	{ "getMaxSelectedPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxSelectedPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getMaxSelectedPrefWidth_R_float, "()F", 1 },
	{ "setDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setDisabled_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setDisabled_boolean, "(Z)V", 1 },
	{ "isDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isDisabled_R_boolean, "()Z", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getPrefHeight_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_toString_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 4 },
	{ "showList", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showList, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showList, "()V", 131073 },
	{ "showScrollPane", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showScrollPane, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_showScrollPane, "()V", 1 },
	{ "hideList", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideList, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideList, "()V", 131073 },
	{ "hideScrollPane", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_hideScrollPane, "()V", 1 },
	{ "getList", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List, "()Lcom/badlogic/gdx/scenes/scene2d/ui/List;", 1 },
	{ "setScrollingDisabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setScrollingDisabled_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setScrollingDisabled_boolean, "(Z)V", 1 },
	{ "getScrollPane", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getScrollPane_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;", 1 },
	{ "isOver", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_isOver_R_boolean, "()Z", 1 },
	{ "getClickListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, "()Lcom/badlogic/gdx/scenes/scene2d/utils/ClickListener;", 1 },
	{ "onShow", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onShow_com_badlogic_gdx_scenes_scene2d_Actor_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onShow_com_badlogic_gdx_scenes_scene2d_Actor_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V", 4 },
	{ "onHide", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onHide_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onHide_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 4 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SelectBox",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 169,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SelectBox = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox);

}

