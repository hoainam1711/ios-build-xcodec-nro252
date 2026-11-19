#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_loaders_AssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader *) object;
}

void clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_AssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	init_com_badlogic_gdx_assets_loaders_AssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader:unloadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) nullptr,
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
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V" },
	{ "unloadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", 0, VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 1025 },
	{ "unloadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 1 },
	{ "loadSync", 0, VTABLE_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 1025 },
};

Class class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_AssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader);

}

