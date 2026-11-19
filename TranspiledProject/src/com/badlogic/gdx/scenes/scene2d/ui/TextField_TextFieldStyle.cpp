#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_fontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontColor)->clazz)->markFunction)((jobject) self->F_fontColor, mark, depth + 1);
	if (self->F_focusedFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focusedFontColor)->clazz)->markFunction)((jobject) self->F_focusedFontColor, mark, depth + 1);
	if (self->F_disabledFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledFontColor)->clazz)->markFunction)((jobject) self->F_disabledFontColor, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_focusedBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_focusedBackground)->clazz)->markFunction)((jobject) self->F_focusedBackground, mark, depth + 1);
	if (self->F_disabledBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_disabledBackground)->clazz)->markFunction)((jobject) self->F_disabledBackground, mark, depth + 1);
	if (self->F_cursor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cursor)->clazz)->markFunction)((jobject) self->F_cursor, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_messageFont)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageFont)->clazz)->markFunction)((jobject) self->F_messageFont, mark, depth + 1);
	if (self->F_messageFontColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageFontColor)->clazz)->markFunction)((jobject) self->F_messageFontColor, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1299);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1303);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1304);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[1].o);
	LINE_NUMBER(1305);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[0].o)))->F_fontColor = (jref) (frame[2].o);
	LINE_NUMBER(1306);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[0].o)))->F_cursor = (jref) (frame[3].o);
	LINE_NUMBER(1307);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[0].o)))->F_selection = (jref) (frame[4].o);
	LINE_NUMBER(1308);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[5].o);
	LINE_NUMBER(1309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1311);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1312);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_font;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_fontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(1314);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_focusedFontColor;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_focusedFontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedFontColor = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(1315);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_disabledFontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(1317);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(1318);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_focusedBackground;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_focusedBackground = (jref) sp[1].o;
	LINE_NUMBER(1319);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_disabledBackground;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground = (jref) sp[1].o;
	LINE_NUMBER(1320);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_cursor;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_cursor = (jref) sp[1].o;
	LINE_NUMBER(1321);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_selection;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(1323);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_messageFont;
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFont = (jref) sp[1].o;
	LINE_NUMBER(1324);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_messageFontColor;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK((frame[1].o)))->F_messageFontColor;
	init_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle *) NULL_CHECK(sp[0].o))->F_messageFontColor = (jref) sp[1].o;
	}
label_12:;
	LINE_NUMBER(1325);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle[] {
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
	{ "font", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_font), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "fontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_fontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "focusedFontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_focusedFontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "disabledFontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_disabledFontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "focusedBackground", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_focusedBackground), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "disabledBackground", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_disabledBackground), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "cursor", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_cursor), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "selection", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_selection), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "messageFont", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_messageFont), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "messageFontColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, F_messageFontColor), "Lcom/badlogic/gdx/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle);

}

