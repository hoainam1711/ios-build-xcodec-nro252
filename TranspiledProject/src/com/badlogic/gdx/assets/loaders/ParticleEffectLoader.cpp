#include "com/badlogic/gdx/assets/loaders/ParticleEffectLoader.h"
#include "com/badlogic/gdx/assets/loaders/ParticleEffectLoader.h"
#include "com/badlogic/gdx/assets/loaders/ParticleEffectLoader_ParticleEffectParameter.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/graphics/g2d/ParticleEffect.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/assets/loaders/SynchronousAssetLoader.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_ParticleEffectLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_assets_loaders_ParticleEffectLoader *) object;
}

void clinit_com_badlogic_gdx_assets_loaders_ParticleEffectLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ParticleEffectLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_ParticleEffectLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_graphics_g2d_ParticleEffect(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ParticleEffectLoader:load", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_graphics_g2d_ParticleEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_ParticleEffect);
	init_com_badlogic_gdx_graphics_g2d_ParticleEffect(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(38);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) NULL_CHECK((frame[4].o)))->F_atlasFile;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = frame[5].o;
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) NULL_CHECK((frame[4].o)))->F_atlasFile;
	sp[2].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas)));
	sp[2].o = checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas, sp[2].o);
	sp[3].o = (jobject)((com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) NULL_CHECK((frame[4].o)))->F_atlasPrefix;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(40);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) NULL_CHECK((frame[4].o)))->F_imagesDir;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = frame[5].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) NULL_CHECK((frame[4].o)))->F_imagesDir;
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(43);
	sp[0].o = frame[5].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[3].o));
	((func_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_ParticleEffect_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ParticleEffectLoader:getDependencies", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(49);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(50);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) NULL_CHECK((frame[3].o)))->F_atlasFile;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter *) NULL_CHECK((frame[3].o)))->F_atlasFile;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ParticleEffectLoader:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_graphics_g2d_ParticleEffect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_graphics_g2d_ParticleEffect])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/ParticleEffectLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_ParticleEffectLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_AssetLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_graphics_g2d_ParticleEffect,
	(void *) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_utils_Array,
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
	{ "resolve", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ParticleEffectLoader$ParticleEffectParameter;)Lcom/badlogic/gdx/graphics/g2d/ParticleEffect;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ParticleEffectLoader$ParticleEffectParameter;)Lcom/badlogic/gdx/utils/Array;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_graphics_g2d_ParticleEffect, VTABLE_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_graphics_g2d_ParticleEffect, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ParticleEffectLoader$ParticleEffectParameter;)Lcom/badlogic/gdx/graphics/g2d/ParticleEffect;", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_ParticleEffectLoader$ParticleEffectParameter_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/ParticleEffectLoader$ParticleEffectParameter;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_ParticleEffectLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/ParticleEffectLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_ParticleEffectLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_ParticleEffectLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_ParticleEffectLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_ParticleEffectLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_ParticleEffectLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_ParticleEffectLoader);

}

