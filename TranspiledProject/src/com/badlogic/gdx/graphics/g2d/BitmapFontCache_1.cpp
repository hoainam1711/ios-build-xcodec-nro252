#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache_1.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache_1.h"
#include "com/badlogic/gdx/utils/FlushablePool.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_FlushablePool(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_BitmapFontCache$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_FlushablePool(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_com_badlogic_gdx_graphics_g2d_BitmapFontCache(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_utils_FlushablePool(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache$1:newObject", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache$1:newObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_FlushablePool_free_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_fill_int,
	(void *) M_com_badlogic_gdx_utils_Pool_reset_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_Pool_discard_java_lang_Object,
	(void *) M_com_badlogic_gdx_utils_FlushablePool_freeAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_utils_Pool_clear,
	(void *) M_com_badlogic_gdx_utils_Pool_getFree_R_int,
	(void *) M_com_badlogic_gdx_utils_FlushablePool_flush,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
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
	{ "newObject", "()Ljava/lang/Object;" },
	{ "obtain", "()Ljava/lang/Object;" },
	{ "free", "(Ljava/lang/Object;)V" },
	{ "fill", "(I)V" },
	{ "reset", "(Ljava/lang/Object;)V" },
	{ "discard", "(Ljava/lang/Object;)V" },
	{ "freeAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "clear", "()V" },
	{ "getFree", "()I" },
	{ "flush", "()V" },
	{ "newObject", "()Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_com_badlogic_gdx_graphics_g2d_BitmapFontCache, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache$1, F_this$0), "Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_com_badlogic_gdx_graphics_g2d_BitmapFontCache, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;)V", 0 },
	{ "newObject", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "()Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 4 },
	{ "newObject", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_newObject_R_java_lang_Object, "()Ljava/lang/Object;", 4164 },
};

Class class_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/BitmapFontCache$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_FlushablePool,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_BitmapFontCache$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1 = registerClass(&class_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1);

}

