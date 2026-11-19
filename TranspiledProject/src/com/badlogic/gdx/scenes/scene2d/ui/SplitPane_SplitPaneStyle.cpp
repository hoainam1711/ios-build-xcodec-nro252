#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_SplitPaneStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_SplitPaneStyle.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) object;
	if (self->F_handle)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_handle)->clazz)->markFunction)((jobject) self->F_handle, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(412);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(416);
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK((frame[0].o)))->F_handle = (jref) (frame[1].o);
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(419);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(420);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK((frame[1].o)))->F_handle;
	((com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle *) NULL_CHECK(sp[0].o))->F_handle = (jref) sp[1].o;
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle[] {
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
	{ "handle", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, F_handle), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SplitPane$SplitPaneStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle);

}

