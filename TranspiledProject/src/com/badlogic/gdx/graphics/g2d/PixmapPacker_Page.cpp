#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/graphics/glutils/PixmapTextureData.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page_1.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/OrderedMap.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) object;
	if (self->F_rects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rects)->clazz)->markFunction)((jobject) self->F_rects, mark, depth + 1);
	if (self->F_image)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_image)->clazz)->markFunction)((jobject) self->F_image, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_addedRects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_addedRects)->clazz)->markFunction)((jobject) self->F_addedRects, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_com_badlogic_gdx_graphics_g2d_PixmapPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(473);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_OrderedMap);
	init_com_badlogic_gdx_utils_OrderedMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_rects = (jref) sp[1].o;
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_addedRects = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageWidth;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageHeight;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageFormat;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[1].o, temp0, temp1, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_image = (jref) sp[1].o;
	LINE_NUMBER(475);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(476);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(477);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_fill) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fill])(ctx, sp[0].o);
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getPixmap_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page:getPixmap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getRects_R_com_badlogic_gdx_utils_OrderedMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page:getRects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_rects;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getTexture_R_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page:getTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_updateTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page:updateTexture", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(499);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_dirty) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getTextureData_R_com_badlogic_gdx_graphics_TextureData])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1);
	sp[2].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	sp[4].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	sp[5].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_image;
	sp[5].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, sp[5].o);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean_boolean(ctx, sp[3].o, sp[4].o, sp[5].o, (frame[3].i), (jint(0)), (jint(1)));
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page$1_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_com_badlogic_gdx_graphics_TextureData(ctx, sp[1].o, sp[2].o, sp[3].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(509);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(511);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(512);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page[] {
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

static FieldMetadata fields[] {
	{ "rects", &class_com_badlogic_gdx_utils_OrderedMap, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, F_rects), "Lcom/badlogic/gdx/utils/OrderedMap;", 0 },
	{ "image", &class_com_badlogic_gdx_graphics_Pixmap, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, F_image), "Lcom/badlogic/gdx/graphics/Pixmap;", 0 },
	{ "texture", &class_com_badlogic_gdx_graphics_Texture, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, F_texture), "Lcom/badlogic/gdx/graphics/Texture;", 0 },
	{ "addedRects", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, F_addedRects), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "dirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, F_dirty), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_com_badlogic_gdx_graphics_g2d_PixmapPacker, 0, "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker;)V", 1 },
	{ "getPixmap", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getPixmap_R_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getPixmap_R_com_badlogic_gdx_graphics_Pixmap, "()Lcom/badlogic/gdx/graphics/Pixmap;", 1 },
	{ "getRects", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getRects_R_com_badlogic_gdx_utils_OrderedMap, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getRects_R_com_badlogic_gdx_utils_OrderedMap, "()Lcom/badlogic/gdx/utils/OrderedMap;", 1 },
	{ "getTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getTexture_R_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_getTexture_R_com_badlogic_gdx_graphics_Texture, "()Lcom/badlogic/gdx/graphics/Texture;", 1 },
	{ "updateTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_updateTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_updateTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_boolean, "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)Z", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker$Page",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker$Page),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page);

}

