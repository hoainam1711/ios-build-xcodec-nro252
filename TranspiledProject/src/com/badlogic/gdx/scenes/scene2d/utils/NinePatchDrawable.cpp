#include "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TransformDrawable.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/NinePatch.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) object;
	if (self->F_patch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_patch)->clazz)->markFunction)((jobject) self->F_patch, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setPatch_com_badlogic_gdx_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setPatch_com_badlogic_gdx_graphics_g2d_NinePatch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(44);
	init_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) NULL_CHECK((frame[1].o)))->F_patch;
	((com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) NULL_CHECK(sp[0].o))->F_patch = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:draw", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].f), (frame[10].f));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setPatch_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:setPatch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	((com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch = (jref) (frame[1].o);
	LINE_NUMBER(61);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalWidth_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setMinWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setMinWidth_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getTotalHeight_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setMinHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setMinHeight_float])(ctx, sp[0].o, temp1);
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getPadTop_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadTop_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setTopHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setTopHeight_float])(ctx, sp[0].o, temp2);
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getPadRight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadRight_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setRightWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setRightWidth_float])(ctx, sp[0].o, temp3);
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getPadBottom_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadBottom_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setBottomHeight_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setBottomHeight_float])(ctx, sp[0].o, temp4);
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_NinePatch_getPadLeft_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_getPadLeft_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setLeftWidth_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setLeftWidth_float])(ctx, sp[0].o, temp5);
	}
label_2:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_getPatch_R_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:getPatch", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) NULL_CHECK((frame[0].o)))->F_patch;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable:tint", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(78);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch);
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_getPatch_R_com_badlogic_gdx_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_getPatch_R_com_badlogic_gdx_graphics_g2d_NinePatch])(ctx, (frame[2].o));
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_Color(ctx, sp[1].o, sp[2].o, (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable *) NULL_CHECK(sp[0].o))->F_patch = (jref) sp[1].o;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setPatch_com_badlogic_gdx_graphics_g2d_NinePatch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_getPatch_R_com_badlogic_gdx_graphics_g2d_NinePatch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V" },
	{ "setPatch", "(Lcom/badlogic/gdx/graphics/g2d/NinePatch;)V" },
	{ "getPatch", "()Lcom/badlogic/gdx/graphics/g2d/NinePatch;" },
	{ "tint", "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_utils_TransformDrawable, };

static FieldMetadata fields[] {
	{ "patch", &class_com_badlogic_gdx_graphics_g2d_NinePatch, offsetof(com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, F_patch), "Lcom/badlogic/gdx/graphics/g2d/NinePatch;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_graphics_g2d_NinePatch, 0, "(Lcom/badlogic/gdx/graphics/g2d/NinePatch;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, 0, "(Lcom/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_float_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFFFFFF)V", 1 },
	{ "setPatch", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setPatch_com_badlogic_gdx_graphics_g2d_NinePatch, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_setPatch_com_badlogic_gdx_graphics_g2d_NinePatch, "(Lcom/badlogic/gdx/graphics/g2d/NinePatch;)V", 1 },
	{ "getPatch", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_getPatch_R_com_badlogic_gdx_graphics_g2d_NinePatch, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_getPatch_R_com_badlogic_gdx_graphics_g2d_NinePatch, "()Lcom/badlogic/gdx/graphics/g2d/NinePatch;", 1 },
	{ "tint", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, "(Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable);

}

