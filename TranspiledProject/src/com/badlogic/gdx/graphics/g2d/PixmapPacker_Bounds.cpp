#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Bounds.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Bounds.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(853);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(854);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(856);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(857);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(858);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(859);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].i);
	LINE_NUMBER(860);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].i);
	LINE_NUMBER(861);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(864);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(865);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(866);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].i);
	LINE_NUMBER(867);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].i);
	LINE_NUMBER(868);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int,
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
	{ "set", "(IIII)V" },
};

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds, F_x), "I", 1 },
	{ "y", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds, F_y), "I", 1 },
	{ "width", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds, F_width), "I", 1 },
	{ "height", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds, F_height), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_int_int_int_int, 0, "(IIII)V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int, "(IIII)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds);

}

