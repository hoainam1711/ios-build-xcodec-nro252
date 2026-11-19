#include "com/badlogic/gdx/assets/loaders/TextureAtlasLoader.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Page.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/loaders/TextureAtlasLoader_TextureAtlasParameter.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "com/badlogic/gdx/assets/loaders/SynchronousAssetLoader.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"
#include "com/badlogic/gdx/assets/loaders/TextureAtlasLoader.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_TextureAtlasLoader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_TextureAtlasLoader *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_TextureAtlasLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureAtlasLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_TextureAtlasLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureAtlasLoader:load", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, sp[0].o));
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[6].o)))->F_textureFile;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\\\\"_j))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_com_badlogic_gdx_graphics_Texture)));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[6].o)))->F_texture = (jref) (frame[7].o);
	LINE_NUMBER(46);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(48);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas);
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data;
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(49);
	((com_badlogic_gdx_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data = (jref) (jobject(nullptr));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureAtlasLoader:getDependencies", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(57);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, (frame[2].o), (frame[4].o), ((jint)((com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter *) NULL_CHECK((frame[3].o)))->F_flip));
	((com_badlogic_gdx_assets_loaders_TextureAtlasLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, (frame[2].o), (frame[4].o), (jint(0)));
	((com_badlogic_gdx_assets_loaders_TextureAtlasLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(63);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_TextureAtlasLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page, sp[0].o));
	LINE_NUMBER(65);
	clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter);
	init_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(66);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[7].o)))->F_format;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_format = (jref) sp[1].o;
	LINE_NUMBER(67);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[8].o)))->F_genMipMaps = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[7].o)))->F_useMipMaps);
	LINE_NUMBER(68);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[7].o)))->F_minFilter;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[7].o)))->F_magFilter;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(70);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[7].o)))->F_textureFile;
	init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_Texture)), (frame[8].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureAtlasLoader:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_graphics_g2d_TextureAtlas) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_graphics_g2d_TextureAtlas])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/TextureAtlasLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_TextureAtlasLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_graphics_g2d_TextureAtlas,
	(void *) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_utils_Array,
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
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Lcom/badlogic/gdx/utils/Array;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter,
};

static FieldMetadata fields[] {
	{ "data", &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, offsetof(com_badlogic_gdx_assets_loaders_TextureAtlasLoader, F_data), "Lcom/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_graphics_g2d_TextureAtlas, VTABLE_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_graphics_g2d_TextureAtlas, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_TextureAtlasLoader$TextureAtlasParameter_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/TextureAtlasLoader$TextureAtlasParameter;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_TextureAtlasLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_assets_loaders_TextureAtlasLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/TextureAtlasLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_TextureAtlasLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_TextureAtlasLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_TextureAtlasLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_TextureAtlasLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_TextureAtlasLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_TextureAtlasLoader);

}

