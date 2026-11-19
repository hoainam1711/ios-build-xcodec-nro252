#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable)) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[1].o))));
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK(sp[0].o))->F_leftWidth = temp0;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK(sp[0].o))->F_rightWidth = temp1;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK(sp[0].o))->F_topHeight = temp2;
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK(sp[0].o))->F_bottomHeight = temp3;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK(sp[0].o))->F_minWidth = temp4;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK(sp[0].o))->F_minHeight = temp5;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getLeftWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:getLeftWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_leftWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setLeftWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:setLeftWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(51);
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_leftWidth = (frame[1].f);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getRightWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:getRightWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_rightWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setRightWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:setRightWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(59);
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_rightWidth = (frame[1].f);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getTopHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:getTopHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_topHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setTopHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:setTopHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(67);
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_topHeight = (frame[1].f);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getBottomHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:getBottomHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_bottomHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setBottomHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:setBottomHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(75);
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_bottomHeight = (frame[1].f);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:setMinWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(83);
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minWidth = (frame[1].f);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:setMinHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(91);
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_minHeight = (frame[1].f);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:setName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getSimpleName_java_lang_Class_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getLeftWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setLeftWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getRightWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setRightWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getTopHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setTopHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getBottomHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setBottomHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "setPadding", "(FFFF)V" },
	{ "setPadding", "(F)V" },
	{ "setPadding", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "getMinWidth", "()F" },
	{ "setMinWidth", "(F)V" },
	{ "getMinHeight", "()F" },
	{ "setMinHeight", "(F)V" },
	{ "setMinSize", "(FF)V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, };

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, F_name), "Ljava/lang/String;", 2 },
	{ "leftWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, F_leftWidth), "F", 2 },
	{ "rightWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, F_rightWidth), "F", 2 },
	{ "topHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, F_topHeight), "F", 2 },
	{ "bottomHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, F_bottomHeight), "F", 2 },
	{ "minWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, F_minWidth), "F", 2 },
	{ "minHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, F_minHeight), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 1 },
	{ "getLeftWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getLeftWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getLeftWidth_R_float, "()F", 1 },
	{ "setLeftWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setLeftWidth_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setLeftWidth_float, "(F)V", 1 },
	{ "getRightWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getRightWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getRightWidth_R_float, "()F", 1 },
	{ "setRightWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setRightWidth_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setRightWidth_float, "(F)V", 1 },
	{ "getTopHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getTopHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getTopHeight_R_float, "()F", 1 },
	{ "setTopHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setTopHeight_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setTopHeight_float, "(F)V", 1 },
	{ "getBottomHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getBottomHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getBottomHeight_R_float, "()F", 1 },
	{ "setBottomHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setBottomHeight_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setBottomHeight_float, "(F)V", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinWidth_R_float, "()F", 1 },
	{ "setMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinWidth_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinWidth_float, "(F)V", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getMinHeight_R_float, "()F", 1 },
	{ "setMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinHeight_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setMinHeight_float, "(F)V", 1 },
	{ "getName", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setName", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable);

}

