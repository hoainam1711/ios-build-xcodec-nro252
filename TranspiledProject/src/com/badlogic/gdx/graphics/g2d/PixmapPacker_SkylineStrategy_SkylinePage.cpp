#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage_Row.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) object;
	if (self->F_rows)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rows)->clazz)->markFunction)((jobject) self->F_rows, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_com_badlogic_gdx_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$SkylineStrategy$SkylinePage:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(702);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(699);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK(sp[0].o))->F_rows = (jref) sp[1].o;
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getPixmap_R_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getRects_R_com_badlogic_gdx_utils_OrderedMap,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getTexture_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_updateTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_boolean,
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
	{ "getPixmap", "()Lcom/badlogic/gdx/graphics/Pixmap;" },
	{ "getRects", "()Lcom/badlogic/gdx/utils/OrderedMap;" },
	{ "getTexture", "()Lcom/badlogic/gdx/graphics/Texture;" },
	{ "updateTexture", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)Z" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row,
};

static FieldMetadata fields[] {
	{ "rows", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage, F_rows), "Lcom/badlogic/gdx/utils/Array;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_com_badlogic_gdx_graphics_g2d_PixmapPacker, 0, "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker;)V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker$SkylineStrategy$SkylinePage",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage);

}

