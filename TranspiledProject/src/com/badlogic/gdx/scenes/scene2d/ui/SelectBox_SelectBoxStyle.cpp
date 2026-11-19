#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_ScrollPaneStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_ListStyle.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_fontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColor)->clazz)->markFunction)((jobject) self->F_fontColor, mark, depth + 1);
	if (self->F_overFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overFontColor)->clazz)->markFunction)((jobject) self->F_overFontColor, mark, depth + 1);
	if (self->F_disabledFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledFontColor)->clazz)->markFunction)((jobject) self->F_disabledFontColor, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_scrollStyle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scrollStyle)->clazz)->markFunction)((jobject) self->F_scrollStyle, mark, depth + 1);
	if (self->F_listStyle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listStyle)->clazz)->markFunction)((jobject) self->F_listStyle, mark, depth + 1);
	if (self->F_backgroundOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backgroundOver)->clazz)->markFunction)((jobject) self->F_backgroundOver, mark, depth + 1);
	if (self->F_backgroundOpen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backgroundOpen)->clazz)->markFunction)((jobject) self->F_backgroundOpen, mark, depth + 1);
	if (self->F_backgroundDisabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backgroundDisabled)->clazz)->markFunction)((jobject) self->F_backgroundDisabled, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(621);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	LINE_NUMBER(622);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(625);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	LINE_NUMBER(626);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[1].o);
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[0].o)))->F_fontColor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(628);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[3].o);
	LINE_NUMBER(629);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[0].o)))->F_scrollStyle = (jref) (frame[4].o);
	LINE_NUMBER(630);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[0].o)))->F_listStyle = (jref) (frame[5].o);
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(633);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	LINE_NUMBER(634);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_font;
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(635);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[0].o)))->F_fontColor;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(637);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_overFontColor;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_overFontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_overFontColor = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(640);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(641);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_scrollStyle;
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_scrollStyle = (jref) sp[1].o;
	LINE_NUMBER(642);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_listStyle;
	init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_listStyle = (jref) sp[1].o;
	LINE_NUMBER(644);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_backgroundOver;
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundOver = (jref) sp[1].o;
	LINE_NUMBER(645);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_backgroundOpen;
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundOpen = (jref) sp[1].o;
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK((frame[1].o)))->F_backgroundDisabled;
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[0].o))->F_backgroundDisabled = (jref) sp[1].o;
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle[] {
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
};

static FieldMetadata fields[] {
	{ "font", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_font), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "fontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_fontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "overFontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_overFontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "disabledFontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_disabledFontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "scrollStyle", &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_scrollStyle), "Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;", 1 },
	{ "listStyle", &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_listStyle), "Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;", 1 },
	{ "backgroundOver", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_backgroundOver), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "backgroundOpen", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_backgroundOpen), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "backgroundDisabled", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, F_backgroundDisabled), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle);

}

