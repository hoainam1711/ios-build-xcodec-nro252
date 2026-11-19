#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_AssetLoaderParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) object;
	if (self->F_format)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_format)->clazz)->markFunction)((jobject) self->F_format, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_textureData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textureData)->clazz)->markFunction)((jobject) self->F_textureData, mark, depth + 1);
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_wrapU)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapU)->clazz)->markFunction)((jobject) self->F_wrapU, mark, depth + 1);
	if (self->F_wrapV)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wrapV)->clazz)->markFunction)((jobject) self->F_wrapV, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(91);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(93);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_format = (jref) (jobject(nullptr));
	LINE_NUMBER(95);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_genMipMaps = (jint(0));
	LINE_NUMBER(97);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(99);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[0].o)))->F_textureData = (jref) (jobject(nullptr));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_ClampToEdge;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureWrap_ClampToEdge;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_wrapV = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter[] {
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
	{ "format", &class_com_badlogic_gdx_graphics_Pixmap$Format, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_format), "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "genMipMaps", &class_boolean, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_genMipMaps), "Z", 1 },
	{ "texture", &class_com_badlogic_gdx_graphics_Texture, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_texture), "Lcom/badlogic/gdx/graphics/Texture;", 1 },
	{ "textureData", &class_com_badlogic_gdx_graphics_TextureData, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_textureData), "Lcom/badlogic/gdx/graphics/TextureData;", 1 },
	{ "minFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_minFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_magFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "wrapU", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_wrapU), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
	{ "wrapV", &class_com_badlogic_gdx_graphics_Texture$TextureWrap, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, F_wrapV), "Lcom/badlogic/gdx/graphics/Texture$TextureWrap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_TextureLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter = registerClass(&class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter);

}

