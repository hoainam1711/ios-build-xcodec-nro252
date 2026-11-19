#include "com/badlogic/gdx/scenes/scene2d/ui/CheckBox_CheckBoxStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/CheckBox.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/CheckBox_CheckBoxStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextButton_TextButtonStyle.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) object;
	if (self->F_checkboxOn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOn)->clazz)->markFunction)((jobject) self->F_checkboxOn, mark, depth + 1);
	if (self->F_checkboxOff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOff)->clazz)->markFunction)((jobject) self->F_checkboxOff, mark, depth + 1);
	if (self->F_checkboxOnOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOnOver)->clazz)->markFunction)((jobject) self->F_checkboxOnOver, mark, depth + 1);
	if (self->F_checkboxOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOver)->clazz)->markFunction)((jobject) self->F_checkboxOver, mark, depth + 1);
	if (self->F_checkboxOnDisabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOnDisabled)->clazz)->markFunction)((jobject) self->F_checkboxOnDisabled, mark, depth + 1);
	if (self->F_checkboxOffDisabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_checkboxOffDisabled)->clazz)->markFunction)((jobject) self->F_checkboxOffDisabled, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/CheckBox$CheckBoxStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(104);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/CheckBox$CheckBoxStyle:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(107);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(108);
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[0].o)))->F_checkboxOff = (jref) (frame[1].o);
	LINE_NUMBER(109);
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[0].o)))->F_checkboxOn = (jref) (frame[2].o);
	LINE_NUMBER(110);
	((com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[3].o);
	LINE_NUMBER(111);
	((com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle *) NULL_CHECK((frame[0].o)))->F_fontColor = (jref) (frame[4].o);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/CheckBox$CheckBoxStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	init_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[1].o)))->F_checkboxOff;
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK(sp[0].o))->F_checkboxOff = (jref) sp[1].o;
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[1].o)))->F_checkboxOn;
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK(sp[0].o))->F_checkboxOn = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[1].o)))->F_checkboxOnOver;
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK(sp[0].o))->F_checkboxOnOver = (jref) sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[1].o)))->F_checkboxOver;
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK(sp[0].o))->F_checkboxOver = (jref) sp[1].o;
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[1].o)))->F_checkboxOnDisabled;
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK(sp[0].o))->F_checkboxOnDisabled = (jref) sp[1].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK((frame[1].o)))->F_checkboxOffDisabled;
	((com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle *) NULL_CHECK(sp[0].o))->F_checkboxOffDisabled = (jref) sp[1].o;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle[] {
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
	{ "checkboxOn", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, F_checkboxOn), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "checkboxOff", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, F_checkboxOff), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "checkboxOnOver", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, F_checkboxOnOver), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "checkboxOver", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, F_checkboxOver), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "checkboxOnDisabled", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, F_checkboxOnDisabled), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "checkboxOffDisabled", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, F_checkboxOffDisabled), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/CheckBox$CheckBoxStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/CheckBox$CheckBoxStyle",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_CheckBox,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle);

}

