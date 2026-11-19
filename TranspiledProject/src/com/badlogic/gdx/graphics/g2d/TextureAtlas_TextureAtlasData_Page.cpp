#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Page.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Page.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_textureFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureFile)->clazz)->markFunction)((jobject) self->F_textureFile, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_format)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_format)->clazz)->markFunction)((jobject) self->F_format, mark, depth + 1);
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_uWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uWrap)->clazz)->markFunction)((jobject) self->F_uWrap, mark, depth + 1);
	if (self->F_vWrap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vWrap)->clazz)->markFunction)((jobject) self->F_vWrap, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Page:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(483);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[0].o))->F_format = (jref) sp[1].o;
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_ClampToEdge;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[0].o))->F_uWrap = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_ClampToEdge;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[0].o))->F_vWrap = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page[] {
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
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_name), "Ljava/lang/String;", 1 },
	{ "textureFile", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_textureFile), "Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "texture", &class_com_badlogic_gdx_graphics_Texture, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_texture), "Lcom/badlogic/gdx/graphics/Texture;", 1 },
	{ "width", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_width), "F", 1 },
	{ "height", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_height), "F", 1 },
	{ "useMipMaps", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_useMipMaps), "Z", 1 },
	{ "format", &class_com_badlogic_gdx_graphics_Pixmap$Format, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_format), "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "minFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_minFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_magFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "uWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_uWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
	{ "vWrap", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_vWrap), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
	{ "pma", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, F_pma), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData$Page",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page);

}

