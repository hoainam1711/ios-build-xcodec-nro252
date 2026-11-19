#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider_AssetTextureProvider.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider.h"
#include "com/badlogic/gdx/graphics/g3d/utils/TextureProvider_AssetTextureProvider.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider *) object;
	if (self->F_assetManager)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_assetManager)->clazz)->markFunction)((jobject) self->F_assetManager, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider_com_badlogic_gdx_assets_AssetManager(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureProvider$AssetTextureProvider:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider *) NULL_CHECK((frame[0].o)))->F_assetManager = (jref) (frame[1].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g3d/utils/TextureProvider$AssetTextureProvider:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider *) NULL_CHECK((frame[0].o)))->F_assetManager;
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_Texture)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider[] {
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
	(void *) M_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture,
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
	{ "load", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Texture;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider, };

static FieldMetadata fields[] {
	{ "assetManager", &class_com_badlogic_gdx_assets_AssetManager, offsetof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider, F_assetManager), "Lcom/badlogic/gdx/assets/AssetManager;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider_com_badlogic_gdx_assets_AssetManager, 0, "(Lcom/badlogic/gdx/assets/AssetManager;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider_load_java_lang_String_R_com_badlogic_gdx_graphics_Texture, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Texture;", 1 },
};

Class class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g3d/utils/TextureProvider$AssetTextureProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider = registerClass(&class_com_badlogic_gdx_graphics_g3d_utils_TextureProvider$AssetTextureProvider);

}

