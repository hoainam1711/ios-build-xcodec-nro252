#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PixmapPackerRectangle.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Bounds.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PixmapPackerRectangle.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) object;
	if (self->F_page)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_page)->clazz)->markFunction)((jobject) self->F_page, mark, depth + 1);
	if (self->F_splits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splits)->clazz)->markFunction)((jobject) self->F_splits, mark, depth + 1);
	if (self->F_pads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pads)->clazz)->markFunction)((jobject) self->F_pads, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(879);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(880);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_int_int_int_int(ctx, sp[1].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(881);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_offsetX = (jint(0));
	LINE_NUMBER(882);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_offsetY = (jint(0));
	LINE_NUMBER(883);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_originalWidth = (frame[3].i);
	LINE_NUMBER(884);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_originalHeight = (frame[4].i);
	LINE_NUMBER(885);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(887);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(888);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_int_int_int_int(ctx, sp[1].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK(sp[0].o))->F_bounds = (jref) sp[1].o;
	LINE_NUMBER(889);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_offsetX = (frame[5].i);
	LINE_NUMBER(890);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_offsetY = (frame[6].i);
	LINE_NUMBER(891);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_originalWidth = (frame[7].i);
	LINE_NUMBER(892);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_originalHeight = (frame[8].i);
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_bounds;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(900);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_bounds;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(904);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_bounds;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[0].o)))->F_bounds;
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int,
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
	{ "getX", "()I" },
	{ "getY", "()I" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
};

static FieldMetadata fields[] {
	{ "page", &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_page), "Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;", 1 },
	{ "splits", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_splits), "[I", 1 },
	{ "pads", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_pads), "[I", 1 },
	{ "offsetX", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_offsetX), "I", 1 },
	{ "offsetY", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_offsetY), "I", 1 },
	{ "originalWidth", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_originalWidth), "I", 1 },
	{ "originalHeight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_originalHeight), "I", 1 },
	{ "bounds", &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, F_bounds), "Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_int_int_int_int, 0, "(IIII)V", 0 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_int_int_int_int_int_int_int_int, 0, "(IIIIIIII)V", 0 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int, "()I", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int, "()I", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle);

}

