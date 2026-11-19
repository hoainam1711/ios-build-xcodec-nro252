#include "com/badlogic/gdx/scenes/scene2d/ui/Window_WindowStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window_WindowStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) object;
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_titleFont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_titleFont)->clazz)->markFunction)((jobject) self->F_titleFont, mark, depth + 1);
	if (self->F_titleFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_titleFontColor)->clazz)->markFunction)((jobject) self->F_titleFontColor, mark, depth + 1);
	if (self->F_stageBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stageBackground)->clazz)->markFunction)((jobject) self->F_stageBackground, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(351);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_titleFontColor = (jref) sp[1].o;
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(354);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_titleFontColor = (jref) sp[1].o;
	LINE_NUMBER(355);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[0].o)))->F_titleFont = (jref) (frame[1].o);
	LINE_NUMBER(356);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[0].o)))->F_titleFontColor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(357);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[3].o);
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(360);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_titleFontColor = (jref) sp[1].o;
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_titleFont;
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_titleFont = (jref) sp[1].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_titleFontColor;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_titleFontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_titleFontColor = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK((frame[1].o)))->F_stageBackground;
	((com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle *) NULL_CHECK(sp[0].o))->F_stageBackground = (jref) sp[1].o;
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle[] {
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
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "titleFont", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, F_titleFont), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "titleFontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, F_titleFontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "stageBackground", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, F_stageBackground), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Window$WindowStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Window,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle);

}

