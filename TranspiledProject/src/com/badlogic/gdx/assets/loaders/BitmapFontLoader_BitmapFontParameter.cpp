#include "com/badlogic/gdx/assets/loaders/BitmapFontLoader_BitmapFontParameter.h"
#include "com/badlogic/gdx/assets/loaders/BitmapFontLoader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/assets/loaders/BitmapFontLoader_BitmapFontParameter.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) object;
	if (self->F_minFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minFilter)->clazz)->markFunction)((jobject) self->F_minFilter, mark, depth + 1);
	if (self->F_magFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_magFilter)->clazz)->markFunction)((jobject) self->F_magFilter, mark, depth + 1);
	if (self->F_bitmapFontData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bitmapFontData)->clazz)->markFunction)((jobject) self->F_bitmapFontData, mark, depth + 1);
	if (self->F_atlasName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atlasName)->clazz)->markFunction)((jobject) self->F_atlasName, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_AssetLoaderParameters(ctx);
}

void init_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(104);
	init_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(106);
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[0].o)))->F_flip = (jint(0));
	LINE_NUMBER(109);
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[0].o)))->F_genMipMaps = (jint(0));
	LINE_NUMBER(112);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Texture$TextureFilter_Nearest;
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(119);
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[0].o)))->F_bitmapFontData = (jref) (jobject(nullptr));
	LINE_NUMBER(123);
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[0].o)))->F_atlasName = (jref) (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter[] {
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
	{ "flip", &class_boolean, offsetof(com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, F_flip), "Z", 1 },
	{ "genMipMaps", &class_boolean, offsetof(com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, F_genMipMaps), "Z", 1 },
	{ "minFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, F_minFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "magFilter", &class_com_badlogic_gdx_graphics_Texture$TextureFilter, offsetof(com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, F_magFilter), "Lcom/badlogic/gdx/graphics/Texture$TextureFilter;", 1 },
	{ "bitmapFontData", &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, offsetof(com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, F_bitmapFontData), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;", 1 },
	{ "atlasName", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, F_atlasName), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_AssetLoaderParameters,
		.size = sizeof(com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_BitmapFontLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter = registerClass(&class_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter);

}

