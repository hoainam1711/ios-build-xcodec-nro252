#include "com/badlogic/gdx/assets/loaders/CubemapLoader.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/graphics/Cubemap.h"
#include "com/badlogic/gdx/assets/loaders/CubemapLoader.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/CubemapData.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/assets/loaders/CubemapLoader_CubemapLoaderInfo.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/graphics/glutils/KTXTextureData.h"
#include "com/badlogic/gdx/assets/loaders/CubemapLoader_CubemapParameter.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_CubemapLoader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_CubemapLoader *) object;
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_CubemapLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_CubemapLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/CubemapLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_CubemapLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	init_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo);
	init_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo(ctx, sp[1].o);
	((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK(sp[0].o))->F_info = (jref) sp[1].o;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/CubemapLoader:loadAsync", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_filename = (jref) (frame[2].o);
	LINE_NUMBER(53);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemapData;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(54);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(55);
	frame[6].i = (jint(0));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap = (jref) (jobject(nullptr));
	LINE_NUMBER(58);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_format;
	frame[5].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemap;
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8".ktx"_j))));
	if (temp0 != 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8".zktx"_j))));
	if (temp0 == 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	clinit_com_badlogic_gdx_graphics_glutils_KTXTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_KTXTextureData);
	init_com_badlogic_gdx_graphics_glutils_KTXTextureData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, (frame[3].o), (frame[6].i));
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	}
label_11:;
	LINE_NUMBER(66);
	goto label_12;
label_3:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemapData;
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_cubemap;
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_CubemapData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_isPrepared_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_data;
	((func_com_badlogic_gdx_graphics_CubemapData_prepare) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_prepare, sp[0].o))(ctx, sp[0].o);
	}
label_14:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_graphics_Cubemap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/CubemapLoader:loadSync", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[0].o))->F_cubemap;
	frame[5].o = sp[0].o;
	LINE_NUMBER(77);
	if ((frame[5].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(78);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	((func_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(80);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap);
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader *) NULL_CHECK((frame[0].o)))->F_info;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo *) NULL_CHECK(sp[1].o))->F_data;
	init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_CubemapData(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(82);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_minFilter;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_Cubemap_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(84);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_wrapU;
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[4].o)))->F_wrapV;
	((func_com_badlogic_gdx_graphics_Cubemap_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/CubemapLoader:getDependencies", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/CubemapLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_graphics_Cubemap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_graphics_Cubemap])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/CubemapLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(37);
	((func_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/CubemapLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_CubemapLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter,
	(void *) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_graphics_Cubemap,
	(void *) M_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_utils_Array,
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
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/CubemapLoader$CubemapParameter;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/CubemapLoader$CubemapParameter;)Lcom/badlogic/gdx/graphics/Cubemap;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/CubemapLoader$CubemapParameter;)Lcom/badlogic/gdx/utils/Array;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo,
	&class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter,
};

static FieldMetadata fields[] {
	{ "info", &class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapLoaderInfo, offsetof(com_badlogic_gdx_assets_loaders_CubemapLoader, F_info), "Lcom/badlogic/gdx/assets/loaders/CubemapLoader$CubemapLoaderInfo;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_CubemapLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter, VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/CubemapLoader$CubemapParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_graphics_Cubemap, VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_graphics_Cubemap, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/CubemapLoader$CubemapParameter;)Lcom/badlogic/gdx/graphics/Cubemap;", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/CubemapLoader$CubemapParameter;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_CubemapLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_assets_loaders_CubemapLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/CubemapLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_CubemapLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_CubemapLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_CubemapLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_CubemapLoader,
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
static bool registered_com_badlogic_gdx_assets_loaders_CubemapLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_CubemapLoader);

}

