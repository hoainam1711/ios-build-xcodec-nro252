#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_2.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_ListStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"
#include "com/badlogic/gdx/utils/PoolManager.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/utils/OrderedSet.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Widget.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Cullable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_List(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_List *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_items)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_items)->clazz)->markFunction)((jobject) self->F_items, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_cullingArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cullingArea)->clazz)->markFunction)((jobject) self->F_cullingArea, mark, depth + 1);
	if (self->F_keyListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyListener)->clazz)->markFunction)((jobject) self->F_keyListener, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_List(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_List(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, sp[1].o)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_List(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, sp[1].o)));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_List(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	init_com_badlogic_gdx_scenes_scene2d_ui_Widget(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	init_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_com_badlogic_gdx_utils_Array(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(53);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_alignment = (8);
	LINE_NUMBER(54);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_pressedIndex = (jint(-1));
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_overIndex = (jint(-1));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRequired_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_setRequired_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(70);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_List$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_List$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_List$1_com_badlogic_gdx_scenes_scene2d_ui_List(ctx, sp[2].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[1].o))->F_keyListener = (jref) sp[2].o;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_List_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_List$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_List$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_List$2_com_badlogic_gdx_scenes_scene2d_ui_List(ctx, sp[1].o, (frame[0].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_List_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(163);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(164);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:layout", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[1].o = sp[0].o;
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_selection;
	frame[2].o = sp[0].o;
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_itemHeight = (temp0 - (temp1 * (jfloat(2))));
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_itemHeight;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_itemHeight = (temp2 + (temp3 + temp4));
	LINE_NUMBER(180);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jfloat(0));
	LINE_NUMBER(181);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_List(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Actor_POOLS;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_PoolManager_getPool_java_lang_Class_R_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_PoolManager_getPool_java_lang_Class_R_com_badlogic_gdx_utils_Pool])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_GlyphLayout)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(183);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[3].o, (frame[5].i));
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[4].o)))->F_width), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_prefWidth));
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_prefWidth = temp0;
	LINE_NUMBER(183);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(187);
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_prefWidth = (temp0 + (temp1 + temp2));
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_prefHeight = ((jfloat(((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size))) * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_itemHeight));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[5].o = sp[0].o;
	LINE_NUMBER(192);
	if ((frame[5].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp4 = temp2 + temp3;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp4, temp5);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_prefWidth = temp6;
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	jfloat temp7 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp9 = temp7 + temp8;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp11 = temp9 + temp10;
	jfloat temp12 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp13 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp11, temp12);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_prefHeight = temp13;
	}
label_17:;
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[21];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:draw", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(199);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_validate])(ctx, (frame[0].o));
	LINE_NUMBER(201);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_font;
	frame[3].o = sp[0].o;
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_selection;
	frame[4].o = sp[0].o;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorSelected;
	frame[5].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorUnselected;
	frame[6].o = sp[0].o;
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(209);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(211);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getX_R_float])(ctx, (frame[0].o));
	frame[8].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getY_R_float])(ctx, (frame[0].o));
	frame[9].f = temp1;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getWidth_R_float])(ctx, (frame[0].o));
	frame[10].f = temp2;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float])(ctx, (frame[0].o));
	frame[11].f = temp3;
	LINE_NUMBER(212);
	frame[12].f = (frame[11].f);
	LINE_NUMBER(214);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[13].o = sp[0].o;
	LINE_NUMBER(215);
	if ((frame[13].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(216);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].f = temp0;
	LINE_NUMBER(217);
	frame[8].f = ((frame[8].f) + (frame[14].f));
	LINE_NUMBER(218);
	jfloat temp1 = frame[12].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[13].o)))(ctx, (frame[13].o));
	frame[12].f = (temp1 - temp2);
	LINE_NUMBER(219);
	jfloat temp3 = frame[10].f;
	jfloat temp4 = frame[14].f;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[13].o)))(ctx, (frame[13].o));
	frame[10].f = (temp3 - (temp4 + temp5));
	}
label_15:;
	{
	LINE_NUMBER(222);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	frame[14].f = temp0;
	jfloat temp1 = (frame[10].f) - (frame[14].f);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	frame[15].f = (temp1 - temp2);
	LINE_NUMBER(223);
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float])(ctx, (frame[3].o));
	frame[16].f = (temp3 - temp4);
	LINE_NUMBER(225);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float])(ctx, (frame[3].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(226);
	frame[17].i = (jint(0));
	}
label_24:;
	{
	jint temp0 = frame[17].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_25;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	jfloat temp0 = (frame[12].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_itemHeight);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	if ((floatCompare(temp0, (temp1 + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_height)), 1)) > 0) goto label_28;
	}
	{
	jfloat temp0 = frame[12].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[17].i));
	frame[18].o = sp[0].o;
	LINE_NUMBER(229);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[18].o));
	frame[19].i = temp0;
	LINE_NUMBER(230);
	frame[20].o = (jobject(nullptr));
	LINE_NUMBER(231);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_pressedIndex) != (frame[17].i)) goto label_32;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_down;
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_down;
	frame[20].o = sp[0].o;
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(233);
	if ((frame[19].i) == 0) goto label_35;
	}
	{
	LINE_NUMBER(234);
	frame[20].o = (frame[4].o);
	LINE_NUMBER(235);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float])(ctx, (frame[3].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a) * (frame[2].f)));
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(236);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_overIndex) != (frame[17].i)) goto label_34;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_over;
	if (sp[0].o == nullptr) goto label_34;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_over;
	frame[20].o = sp[0].o;
	}
label_34:;
	{
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_drawSelection_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_drawSelection_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[20].o), (frame[8].f), (((frame[9].f) + (frame[12].f)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_itemHeight)), (frame[10].f), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_itemHeight));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_int_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_int_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[17].i), (frame[18].o), ((frame[8].f) + (frame[14].f)), (((frame[9].f) + (frame[12].f)) - (frame[16].f)), (frame[15].f));
	LINE_NUMBER(240);
	if ((frame[19].i) == 0) goto label_41;
	}
	{
	LINE_NUMBER(241);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float])(ctx, (frame[3].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[6].o)))->F_a) * (frame[2].f)));
	}
label_41:;
	LINE_NUMBER(244);
	goto label_43;
label_28:;
	{
	jfloat temp0 = frame[12].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	if ((floatCompare(temp0, ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK(sp[0].o))->F_y), 1)) >= 0) goto label_43;
	}
	LINE_NUMBER(245);
	goto label_25;
label_43:;
	{
	LINE_NUMBER(247);
	frame[12].f = ((frame[12].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_itemHeight));
	LINE_NUMBER(226);
	INST_IINC(17, 1);
	goto label_24;
	}
label_25:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_drawSelection_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:drawSelection", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(252);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	}
label_1:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:drawBackground", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(259);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_background;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	}
label_1:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_int_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:drawItem", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[4].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(266);
	sp[0].o = frame[2].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[8].o;
	jfloat temp0 = frame[5].f;
	jfloat temp1 = frame[6].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, temp2, temp3, (frame[7].f), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_alignment), (jint(0)), (((jobject) createStringLiteral(ctx, u8"..."_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getSelection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelection_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setSelection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection = (jref) (frame[1].o);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getSelected", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelected_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setSelected", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getRequired_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getRequired_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear])(ctx, sp[0].o);
	}
label_3:;
	LINE_NUMBER(291);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelectedIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getSelectedIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(296);
	if (((jint)((com_badlogic_gdx_utils_ObjectSet *) NULL_CHECK((frame[1].o)))->F_size) != 0) goto label_2;
	}
	INST_ICONST(-1);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
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

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setSelectedIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(302);
	if ((frame[1].i) < (jint(-1))) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(303);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"index must be >= -1 and < "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[2].o))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(304);
	if ((frame[1].i) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear])(ctx, sp[0].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(309);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getOverItem_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getOverItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_overIndex) != (jint(-1))) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_overIndex));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getPressedItem_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getPressedItem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_pressedIndex) != (jint(-1))) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_pressedIndex));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemAt_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getItemAt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(323);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int])(ctx, (frame[0].o), (frame[1].f));
	frame[2].i = temp0;
	LINE_NUMBER(324);
	if ((frame[2].i) != (jint(-1))) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getItemIndexAt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(330);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[3].o = sp[0].o;
	LINE_NUMBER(332);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(333);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[2].f = (temp0 - (temp1 + temp2));
	LINE_NUMBER(334);
	jfloat temp3 = frame[1].f;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[1].f = (temp3 - temp4);
	}
label_3:;
	{
	LINE_NUMBER(336);
	frame[4].i = (jint((((frame[2].f) - (frame[1].f)) / ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_itemHeight))));
	LINE_NUMBER(337);
	if ((frame[4].i) < 0) goto label_7;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
label_7:;
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setItems", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newItems cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(343);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(345);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_Array1_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(347);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_overIndex = (jint(-1));
	LINE_NUMBER(348);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_pressedIndex = (jint(-1));
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate])(ctx, sp[0].o);
	LINE_NUMBER(351);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(352);
	jfloat temp2 = frame[2].f;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp2, temp3, -1)) != 0) goto label_10;
	}
	{
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) == 0) goto label_11;
	}
label_10:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy])(ctx, sp[0].o);
label_11:;
	LINE_NUMBER(353);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setItems", 7 };
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
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"newItems cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(360);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(362);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(366);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_overIndex = (jint(-1));
	LINE_NUMBER(367);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_pressedIndex = (jint(-1));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_validate])(ctx, sp[0].o);
	LINE_NUMBER(370);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(371);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) != 0) goto label_11;
	}
	{
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) == 0) goto label_12;
	}
label_11:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy])(ctx, sp[0].o);
label_12:;
	LINE_NUMBER(372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_clearItems(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:clearItems", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(377);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_overIndex = (jint(-1));
	LINE_NUMBER(378);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_pressedIndex = (jint(-1));
	LINE_NUMBER(379);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear])(ctx, sp[0].o);
	LINE_NUMBER(380);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getItems_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getItemHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_itemHeight);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(393);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_validate])(ctx, (frame[0].o));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_validate])(ctx, (frame[0].o));
	LINE_NUMBER(399);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_prefHeight);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setCullingArea_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setCullingArea", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(407);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_cullingArea = (jref) (frame[1].o);
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getCullingArea_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getCullingArea", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setAlignment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(419);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_alignment = (frame[1].i);
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_List_getAlignment_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getAlignment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_alignment);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setTypeToSelect_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setTypeToSelect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(427);
	((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_typeToSelect = (frame[1].i);
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getKeyListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK((frame[0].o)))->F_keyListener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_List[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Widget_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setCullingArea_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_drawSelection_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_int_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelection_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelected_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelectedIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getOverItem_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getPressedItem_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemAt_float_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_Array1_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_clearItems,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItems_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getCullingArea_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setAlignment_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getAlignment_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_setTypeToSelect_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener,
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
	{ "setCullingArea", "(Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;" },
	{ "drawSelection", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;FFFF)V" },
	{ "drawBackground", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "drawItem", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;ILjava/lang/Object;FFF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "getSelection", "()Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;" },
	{ "setSelection", "(Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;)V" },
	{ "getSelected", "()Ljava/lang/Object;" },
	{ "setSelected", "(Ljava/lang/Object;)V" },
	{ "getSelectedIndex", "()I" },
	{ "setSelectedIndex", "(I)V" },
	{ "getOverItem", "()Ljava/lang/Object;" },
	{ "getPressedItem", "()Ljava/lang/Object;" },
	{ "getItemAt", "(F)Ljava/lang/Object;" },
	{ "getItemIndexAt", "(F)I" },
	{ "setItems", "([Ljava/lang/Object;)V" },
	{ "setItems", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "clearItems", "()V" },
	{ "getItems", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getItemHeight", "()F" },
	{ "toString", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "getCullingArea", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "setAlignment", "(I)V" },
	{ "getAlignment", "()I" },
	{ "setTypeToSelect", "(Z)V" },
	{ "getKeyListener", "()Lcom/badlogic/gdx/scenes/scene2d/InputListener;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Cullable, &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle,
};

static FieldMetadata fields[] {
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;", 0 },
	{ "items", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_items), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "selection", &class_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_selection), "Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;", 0 },
	{ "cullingArea", &class_com_badlogic_gdx_math_Rectangle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_cullingArea), "Lcom/badlogic/gdx/math/Rectangle;", 2 },
	{ "prefWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_prefWidth), "F", 2 },
	{ "prefHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_prefHeight), "F", 2 },
	{ "itemHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_itemHeight), "F", 0 },
	{ "alignment", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_alignment), "I", 2 },
	{ "pressedIndex", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_pressedIndex), "I", 0 },
	{ "overIndex", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_overIndex), "I", 0 },
	{ "keyListener", &class_com_badlogic_gdx_scenes_scene2d_InputListener, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_keyListener), "Lcom/badlogic/gdx/scenes/scene2d/InputListener;", 2 },
	{ "typeToSelect", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List, F_typeToSelect), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_List_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;)V", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_layout, "()V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_drawSelection_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_drawSelection_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;FFFF)V", 4 },
	{ "drawBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 4 },
	{ "drawItem", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_int_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_drawItem_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_BitmapFont_int_java_lang_Object_float_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;ILjava/lang/Object;FFF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 4 },
	{ "getSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, "()Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;", 1 },
	{ "setSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelection_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelection_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection, "(Lcom/badlogic/gdx/scenes/scene2d/utils/ArraySelection;)V", 1 },
	{ "getSelected", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setSelected", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelected_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelected_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getSelectedIndex", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getSelectedIndex_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getSelectedIndex_R_int, "()I", 1 },
	{ "setSelectedIndex", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int, "(I)V", 1 },
	{ "getOverItem", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getOverItem_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getOverItem_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getPressedItem", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getPressedItem_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPressedItem_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getItemAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemAt_float_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getItemAt_float_R_java_lang_Object, "(F)Ljava/lang/Object;", 1 },
	{ "getItemIndexAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int, "(F)I", 1 },
	{ "setItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_Array1_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_Array1_java_lang_Object, "([Ljava/lang/Object;)V", 129 },
	{ "setItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setItems_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "clearItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_clearItems, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_clearItems, "()V", 1 },
	{ "getItems", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItems_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getItems_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getItemHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getItemHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getItemHeight_R_float, "()F", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getPrefHeight_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "setCullingArea", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setCullingArea_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setCullingArea_com_badlogic_gdx_math_Rectangle, "(Lcom/badlogic/gdx/math/Rectangle;)V", 1 },
	{ "getCullingArea", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getCullingArea_R_com_badlogic_gdx_math_Rectangle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getCullingArea_R_com_badlogic_gdx_math_Rectangle, "()Lcom/badlogic/gdx/math/Rectangle;", 1 },
	{ "setAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setAlignment_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setAlignment_int, "(I)V", 1 },
	{ "getAlignment", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getAlignment_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getAlignment_R_int, "()I", 1 },
	{ "setTypeToSelect", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setTypeToSelect_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setTypeToSelect_boolean, "(Z)V", 1 },
	{ "getKeyListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener, "()Lcom/badlogic/gdx/scenes/scene2d/InputListener;", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_List{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/List",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Widget,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_List),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_List,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_List,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_List,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 161,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_List = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_List);

}

