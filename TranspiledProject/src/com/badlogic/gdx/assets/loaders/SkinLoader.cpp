#include "com/badlogic/gdx/assets/loaders/SkinLoader.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/loaders/SkinLoader.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/SkinLoader_SkinParameter.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_SkinLoader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_SkinLoader *) object;
}

void clinit_com_badlogic_gdx_assets_loaders_SkinLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_SkinLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_SkinLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:getDependencies", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(46);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[3].o)))->F_textureAtlasPath;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[3].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8".atlas"_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[3].o)))->F_textureAtlasPath;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[3].o)))->F_textureAtlasPath;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:loadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:loadSync", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(58);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".atlas"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(59);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(60);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[4].o)))->F_textureAtlasPath;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[4].o)))->F_textureAtlasPath;
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[4].o)))->F_resources;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter *) NULL_CHECK((frame[4].o)))->F_resources;
	frame[6].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas)));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas, sp[0].o));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_SkinLoader_newSkin_com_badlogic_gdx_graphics_g2d_TextureAtlas_R_com_badlogic_gdx_scenes_scene2d_ui_Skin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_newSkin_com_badlogic_gdx_graphics_g2d_TextureAtlas_R_com_badlogic_gdx_scenes_scene2d_ui_Skin])(ctx, (frame[0].o), (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(70);
	if ((frame[6].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_entries_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Entries_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(72);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[10].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[10].o)))->F_value;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(73);
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(75);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle])(ctx, (frame[8].o), (frame[3].o));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_SkinLoader_newSkin_com_badlogic_gdx_graphics_g2d_TextureAtlas_R_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:newSkin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Skin);
	init_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_scenes_scene2d_ui_Skin) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_scenes_scene2d_ui_Skin])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(38);
	((func_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/SkinLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_SkinLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter,
	(void *) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_scenes_scene2d_ui_Skin,
	(void *) M_com_badlogic_gdx_assets_loaders_SkinLoader_newSkin_com_badlogic_gdx_graphics_g2d_TextureAtlas_R_com_badlogic_gdx_scenes_scene2d_ui_Skin,
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
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter;)Lcom/badlogic/gdx/utils/Array;" },
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter;)Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;" },
	{ "newSkin", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_SkinLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_SkinLoader$SkinParameter_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/SkinLoader$SkinParameter;)Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 1 },
	{ "newSkin", (intptr_t) M_com_badlogic_gdx_assets_loaders_SkinLoader_newSkin_com_badlogic_gdx_graphics_g2d_TextureAtlas_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_newSkin_com_badlogic_gdx_graphics_g2d_TextureAtlas_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 4 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_SkinLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_assets_loaders_SkinLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/SkinLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_SkinLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_SkinLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_SkinLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_SkinLoader,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_SkinLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_SkinLoader);

}

