#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_GlyphMetrics.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Pointer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_GlyphMetrics.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(744);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(745);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(748);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getWidth_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(756);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getHoriBearingX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(764);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingX_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getHoriBearingY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(772);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingY_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getHoriAdvance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(780);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getVertBearingX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(788);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingX_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getVertBearingY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(796);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingY_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertAdvance_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics:getVertAdvance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(804);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertAdvance_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertAdvance_R_int,
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
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getHoriBearingX", "()I" },
	{ "getHoriBearingY", "()I" },
	{ "getHoriAdvance", "()I" },
	{ "getVertBearingX", "()I" },
	{ "getVertBearingY", "()I" },
	{ "getVertAdvance", "()I" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_long, 0, "(J)V", 0 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getWidth_R_int, "()I", 1 },
	{ "getWidth", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getWidth_long_R_int, 0, "(J)I", 266 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_long_R_int, 0, "(J)I", 266 },
	{ "getHoriBearingX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingX_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingX_R_int, "()I", 1 },
	{ "getHoriBearingX", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingX_long_R_int, 0, "(J)I", 266 },
	{ "getHoriBearingY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingY_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingY_R_int, "()I", 1 },
	{ "getHoriBearingY", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriBearingY_long_R_int, 0, "(J)I", 266 },
	{ "getHoriAdvance", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int, "()I", 1 },
	{ "getHoriAdvance", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_long_R_int, 0, "(J)I", 266 },
	{ "getVertBearingX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingX_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingX_R_int, "()I", 1 },
	{ "getVertBearingX", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingX_long_R_int, 0, "(J)I", 266 },
	{ "getVertBearingY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingY_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingY_R_int, "()I", 1 },
	{ "getVertBearingY", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertBearingY_long_R_int, 0, "(J)I", 266 },
	{ "getVertAdvance", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertAdvance_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertAdvance_R_int, "()I", 1 },
	{ "getVertAdvance", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getVertAdvance_long_R_int, 0, "(J)I", 266 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeType$GlyphMetrics",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics,
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
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics);

}

