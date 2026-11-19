#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_ScrollPaneStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_ScrollPaneStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) object;
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_corner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corner)->clazz)->markFunction)((jobject) self->F_corner, mark, depth + 1);
	if (self->F_hScroll)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hScroll)->clazz)->markFunction)((jobject) self->F_hScroll, mark, depth + 1);
	if (self->F_hScrollKnob)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hScrollKnob)->clazz)->markFunction)((jobject) self->F_hScrollKnob, mark, depth + 1);
	if (self->F_vScroll)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vScroll)->clazz)->markFunction)((jobject) self->F_vScroll, mark, depth + 1);
	if (self->F_vScrollKnob)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vScrollKnob)->clazz)->markFunction)((jobject) self->F_vScrollKnob, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1093);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1094);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1097);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1098);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[1].o);
	LINE_NUMBER(1099);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[0].o)))->F_hScroll = (jref) (frame[2].o);
	LINE_NUMBER(1100);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[0].o)))->F_hScrollKnob = (jref) (frame[3].o);
	LINE_NUMBER(1101);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[0].o)))->F_vScroll = (jref) (frame[4].o);
	LINE_NUMBER(1102);
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[0].o)))->F_vScrollKnob = (jref) (frame[5].o);
	LINE_NUMBER(1103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1105);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1106);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(1107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_corner;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_corner = (jref) sp[1].o;
	LINE_NUMBER(1109);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_hScroll;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll = (jref) sp[1].o;
	LINE_NUMBER(1110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_hScrollKnob;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob = (jref) sp[1].o;
	LINE_NUMBER(1112);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_vScroll;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll = (jref) sp[1].o;
	LINE_NUMBER(1113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK((frame[1].o)))->F_vScrollKnob;
	((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob = (jref) sp[1].o;
	LINE_NUMBER(1114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle[] {
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
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "corner", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, F_corner), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "hScroll", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, F_hScroll), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "hScrollKnob", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, F_hScrollKnob), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "vScroll", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, F_vScroll), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "vScrollKnob", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, F_vScrollKnob), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane,
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
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle);

}

