#include "com/badlogic/gdx/scenes/scene2d/ui/ImageButton_ImageButtonStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ImageButton.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Button_ButtonStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ImageButton_ImageButtonStyle.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) object;
	if (self->F_imageUp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageUp)->clazz)->markFunction)((jobject) self->F_imageUp, mark, depth + 1);
	if (self->F_imageDown)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageDown)->clazz)->markFunction)((jobject) self->F_imageDown, mark, depth + 1);
	if (self->F_imageOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageOver)->clazz)->markFunction)((jobject) self->F_imageOver, mark, depth + 1);
	if (self->F_imageDisabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageDisabled)->clazz)->markFunction)((jobject) self->F_imageDisabled, mark, depth + 1);
	if (self->F_imageChecked)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageChecked)->clazz)->markFunction)((jobject) self->F_imageChecked, mark, depth + 1);
	if (self->F_imageCheckedDown)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageCheckedDown)->clazz)->markFunction)((jobject) self->F_imageCheckedDown, mark, depth + 1);
	if (self->F_imageCheckedOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imageCheckedOver)->clazz)->markFunction)((jobject) self->F_imageCheckedOver, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(134);
	init_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(139);
	init_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(140);
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[0].o)))->F_imageUp = (jref) (frame[4].o);
	LINE_NUMBER(141);
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[0].o)))->F_imageDown = (jref) (frame[5].o);
	LINE_NUMBER(142);
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[0].o)))->F_imageChecked = (jref) (frame[6].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	init_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageUp;
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUp = (jref) sp[1].o;
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageDown;
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDown = (jref) sp[1].o;
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageOver;
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageOver = (jref) sp[1].o;
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageDisabled;
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDisabled = (jref) sp[1].o;
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageChecked;
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageChecked = (jref) sp[1].o;
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageCheckedDown;
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedDown = (jref) sp[1].o;
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK((frame[1].o)))->F_imageCheckedOver;
	((com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageCheckedOver = (jref) sp[1].o;
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	init_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle[] {
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
	{ "imageUp", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, F_imageUp), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "imageDown", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, F_imageDown), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "imageOver", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, F_imageOver), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "imageDisabled", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, F_imageDisabled), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "imageChecked", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, F_imageChecked), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "imageCheckedDown", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, F_imageCheckedDown), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "imageCheckedOver", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, F_imageCheckedOver), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Button$ButtonStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/ImageButton$ImageButtonStyle",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle);

}

