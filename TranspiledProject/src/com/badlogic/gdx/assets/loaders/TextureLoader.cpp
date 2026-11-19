#include "com/badlogic/gdx/assets/loaders/TextureLoader.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureLoaderInfo.h"
#include "com/badlogic/gdx/graphics/TextureData_Factory.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_TextureLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_assets_loaders_TextureLoader *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_TextureLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_TextureLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_TextureLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	init_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo);
	init_com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo(ctx, sp[1].o);
	((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader:loadAsync", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_filename = (jref) (frame[2].o);
	LINE_NUMBER(51);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_textureData;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(52);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(53);
	frame[6].i = (jint(0));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture = (jref) (jobject(nullptr));
	LINE_NUMBER(56);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_format;
	frame[5].o = sp[0].o;
	LINE_NUMBER(58);
	frame[6].i = ((jint)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_genMipMaps);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_texture;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[3].o), (frame[5].o), (frame[6].i));
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(63);
	goto label_12;
	}
label_3:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_textureData;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_texture;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	((func_com_badlogic_gdx_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_prepare, sp[0].o))(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(68);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader:loadSync", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[0].o))->F_texture;
	frame[5].o = sp[0].o;
	LINE_NUMBER(74);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	((func_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_load_com_badlogic_gdx_graphics_TextureData])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(79);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_minFilter;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(81);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_wrapU;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[4].o)))->F_wrapV;
	((func_com_badlogic_gdx_graphics_Texture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(35);
	((func_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_TextureLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_graphics_Texture,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_utils_Array,
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
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter;)Lcom/badlogic/gdx/graphics/Texture;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter;)Lcom/badlogic/gdx/utils/Array;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo,
	&class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter,
};

static FieldMetadata fields[] {
	{ "info", &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureLoaderInfo, offsetof(com_badlogic_gdx_assets_loaders_TextureLoader, F_info), "Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureLoaderInfo;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_TextureLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_graphics_Texture, VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_graphics_Texture, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter;)Lcom/badlogic/gdx/graphics/Texture;", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureLoader$TextureParameter;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_TextureLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_assets_loaders_TextureLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/TextureLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_TextureLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_TextureLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_TextureLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_TextureLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_TextureLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_TextureLoader);

}

