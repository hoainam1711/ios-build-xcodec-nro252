#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_TreeStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_TreeStyle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) object;
	if (self->F_plus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plus)->clazz)->markFunction)((jobject) self->F_plus, mark, depth + 1);
	if (self->F_minus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minus)->clazz)->markFunction)((jobject) self->F_minus, mark, depth + 1);
	if (self->F_plusOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plusOver)->clazz)->markFunction)((jobject) self->F_plusOver, mark, depth + 1);
	if (self->F_minusOver)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minusOver)->clazz)->markFunction)((jobject) self->F_minusOver, mark, depth + 1);
	if (self->F_over)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_over)->clazz)->markFunction)((jobject) self->F_over, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(888);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(889);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(891);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(892);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[0].o)))->F_plus = (jref) (frame[1].o);
	LINE_NUMBER(893);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[0].o)))->F_minus = (jref) (frame[2].o);
	LINE_NUMBER(894);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[0].o)))->F_selection = (jref) (frame[3].o);
	LINE_NUMBER(895);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(897);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(898);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[1].o)))->F_plus;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_plus = (jref) sp[1].o;
	LINE_NUMBER(899);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[1].o)))->F_minus;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_minus = (jref) sp[1].o;
	LINE_NUMBER(901);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[1].o)))->F_plusOver;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_plusOver = (jref) sp[1].o;
	LINE_NUMBER(902);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[1].o)))->F_minusOver;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_minusOver = (jref) sp[1].o;
	LINE_NUMBER(904);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[1].o)))->F_over;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_over = (jref) sp[1].o;
	LINE_NUMBER(905);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[1].o)))->F_selection;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(906);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[1].o)))->F_background;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_background = (jref) sp[1].o;
	LINE_NUMBER(907);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle[] {
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
	{ "plus", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, F_plus), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "minus", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, F_minus), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "plusOver", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, F_plusOver), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "minusOver", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, F_minusOver), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "over", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, F_over), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "selection", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, F_selection), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle;)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Tree,
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
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle);

}

