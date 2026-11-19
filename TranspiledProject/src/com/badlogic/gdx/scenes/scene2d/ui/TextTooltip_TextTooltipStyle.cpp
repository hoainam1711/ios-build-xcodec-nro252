#include "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip_TextTooltipStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip_TextTooltipStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) object;
	if (self->F_label)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_label)->clazz)->markFunction)((jobject) self->F_label, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(86);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(89);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(90);
	((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[0].o)))->F_label = (jref) (frame[1].o);
	LINE_NUMBER(91);
	((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[2].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[1].o)))->F_label;
	init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK(sp[0].o))->F_label = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(97);
	((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[0].o)))->F_wrapWidth = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle *) NULL_CHECK((frame[1].o)))->F_wrapWidth);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle[] {
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
	{ "label", &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, F_label), "Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;", 1 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "wrapWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, F_wrapWidth), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Label$LabelStyle;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip$TextTooltipStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip,
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
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle);

}

