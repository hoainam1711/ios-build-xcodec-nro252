#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_fontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColor)->clazz)->markFunction)((jobject) self->F_fontColor, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(391);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(394);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(395);
	((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[1].o);
	LINE_NUMBER(396);
	((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[0].o)))->F_fontColor = (jref) (frame[2].o);
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(399);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_font;
	((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(401);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle[] {
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
	{ "font", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, F_font), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "fontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, F_fontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Label,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);

}

