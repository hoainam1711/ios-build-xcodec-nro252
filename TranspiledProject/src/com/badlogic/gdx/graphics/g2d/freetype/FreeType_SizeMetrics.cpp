#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_SizeMetrics.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_SizeMetrics.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Pointer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "java/lang/Object.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(362);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXppem_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getXppem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXppem_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYppem_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getYppem", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(374);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYppem_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXScale_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getXScale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXscale_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYscale_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getYscale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYscale_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getAscender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(398);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getDescender", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(414);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics:getMaxAdvance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXppem_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYppem_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXScale_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYscale_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int,
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
	{ "getXppem", "()I" },
	{ "getYppem", "()I" },
	{ "getXScale", "()I" },
	{ "getYscale", "()I" },
	{ "getAscender", "()I" },
	{ "getDescender", "()I" },
	{ "getHeight", "()I" },
	{ "getMaxAdvance", "()I" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_long, 0, "(J)V", 0 },
	{ "getXppem", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXppem_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXppem_R_int, "()I", 1 },
	{ "getXppem", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXppem_long_R_int, 0, "(J)I", 266 },
	{ "getYppem", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYppem_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYppem_R_int, "()I", 1 },
	{ "getYppem", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYppem_long_R_int, 0, "(J)I", 266 },
	{ "getXScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXScale_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXScale_R_int, "()I", 1 },
	{ "getXscale", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getXscale_long_R_int, 0, "(J)I", 266 },
	{ "getYscale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYscale_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYscale_R_int, "()I", 1 },
	{ "getYscale", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getYscale_long_R_int, 0, "(J)I", 266 },
	{ "getAscender", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int, "()I", 1 },
	{ "getAscender", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_long_R_int, 0, "(J)I", 266 },
	{ "getDescender", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int, "()I", 1 },
	{ "getDescender", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_long_R_int, 0, "(J)I", 266 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_long_R_int, 0, "(J)I", 266 },
	{ "getMaxAdvance", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int, "()I", 1 },
	{ "getMaxAdvance", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_long_R_int, 0, "(J)I", 266 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeType$SizeMetrics",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics);

}

