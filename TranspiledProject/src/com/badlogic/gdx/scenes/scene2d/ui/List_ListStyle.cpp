#include "com/badlogic/gdx/scenes/scene2d/ui/List_ListStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_ListStyle.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_fontColorSelected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColorSelected)->clazz)->markFunction)((jobject) self->F_fontColorSelected, mark, depth + 1);
	if (self->F_fontColorUnselected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColorUnselected)->clazz)->markFunction)((jobject) self->F_fontColorUnselected, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_down)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_down)->clazz)->markFunction)((jobject) self->F_down, mark, depth + 1);
	if (self->F_over)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_over)->clazz)->markFunction)((jobject) self->F_over, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List$ListStyle:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(444);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorSelected = (jref) sp[1].o;
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorUnselected = (jref) sp[1].o;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List$ListStyle:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(447);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorSelected = (jref) sp[1].o;
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorUnselected = (jref) sp[1].o;
	LINE_NUMBER(448);
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[1].o);
	LINE_NUMBER(449);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[0].o)))->F_fontColorSelected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[0].o)))->F_fontColorUnselected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(451);
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[0].o)))->F_selection = (jref) (frame[4].o);
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List$ListStyle:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(454);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorSelected = (jref) sp[1].o;
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_fontColorUnselected = (jref) sp[1].o;
	LINE_NUMBER(455);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[1].o)))->F_font;
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[0].o)))->F_fontColorSelected;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[1].o)))->F_fontColorSelected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(457);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[0].o)))->F_fontColorUnselected;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[1].o)))->F_fontColorUnselected;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[1].o)))->F_selection;
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[1].o)))->F_down;
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_down = (jref) sp[1].o;
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[1].o)))->F_over;
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_over = (jref) sp[1].o;
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle[] {
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
	{ "font", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, F_font), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "fontColorSelected", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, F_fontColorSelected), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "fontColorUnselected", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, F_fontColorUnselected), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "selection", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, F_selection), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "down", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, F_down), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "over", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, F_over), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/List$ListStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/List$ListStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_List,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle);

}

