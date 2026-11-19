#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_Drawable *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Drawable:setPadding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setTopHeight_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setTopHeight_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(47);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setLeftWidth_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setLeftWidth_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].f));
	LINE_NUMBER(48);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setBottomHeight_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setBottomHeight_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].f));
	LINE_NUMBER(49);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setRightWidth_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setRightWidth_float, (frame[0].o)))(ctx, (frame[0].o), (frame[4].f));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Drawable:setPadding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(53);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].f), (frame[1].f), (frame[1].f), (frame[1].f));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Drawable:setPadding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/Drawable:setMinSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(69);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinWidth_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinWidth_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(70);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinHeight_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinHeight_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].f));
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_Drawable[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinSize_float_float,
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
};

static MethodMetadata methods[] {
	{ "draw", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 1025 },
	{ "getLeftWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, "()F", 1025 },
	{ "setLeftWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setLeftWidth_float, "(F)V", 1025 },
	{ "getRightWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, "()F", 1025 },
	{ "setRightWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setRightWidth_float, "(F)V", 1025 },
	{ "getTopHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, "()F", 1025 },
	{ "setTopHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setTopHeight_float, "(F)V", 1025 },
	{ "getBottomHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, "()F", 1025 },
	{ "setBottomHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setBottomHeight_float, "(F)V", 1025 },
	{ "setPadding", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float_float_float_float, "(FFFF)V", 1 },
	{ "setPadding", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_float, "(F)V", 1 },
	{ "setPadding", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setPadding_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "getMinWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, "()F", 1025 },
	{ "setMinWidth", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinWidth_float, "(F)V", 1025 },
	{ "getMinHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, "()F", 1025 },
	{ "setMinHeight", 0, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinHeight_float, "(F)V", 1025 },
	{ "setMinSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinSize_float_float, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinSize_float_float, "(FF)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_Drawable{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/Drawable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_Drawable),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_Drawable = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_Drawable);

}

