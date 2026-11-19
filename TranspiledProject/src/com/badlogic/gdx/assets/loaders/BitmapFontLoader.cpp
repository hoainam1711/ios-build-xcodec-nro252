#include "com/badlogic/gdx/assets/loaders/BitmapFontLoader.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/assets/loaders/BitmapFontLoader.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/loaders/BitmapFontLoader_BitmapFontParameter.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/assets/loaders/AsynchronousAssetLoader.h"
#include "com/badlogic/gdx/assets/loaders/TextureLoader_TextureParameter.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_assets_loaders_BitmapFontLoader(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_loaders_BitmapFontLoader *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_loaders_BitmapFontLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_assets_loaders_BitmapFontLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_loaders_BitmapFontLoader(ctx);
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

jobject M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader:getDependencies", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(48);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_bitmapFontData;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_bitmapFontData;
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_2:;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData);
	sp[2].o = frame[2].o;
	jobject temp0 = sp[2].o;
	sp[2].o = sp[1].o;
	sp[3].o = temp0;
	sp += 4;
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	if (((jint)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_flip) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 5;
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, sp[3].o, sp[4].i);
	((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(54);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_atlasName;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_atlasName;
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(57);
	frame[5].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String])(ctx, sp[0].o);
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_11;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_BitmapFontLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(61);
	clinit_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter);
	init_com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(63);
	if ((frame[3].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(64);
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK((frame[8].o)))->F_genMipMaps = ((jint)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_genMipMaps);
	LINE_NUMBER(65);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_minFilter;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[3].o)))->F_magFilter;
	((com_badlogic_gdx_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	}
label_17:;
	{
	LINE_NUMBER(69);
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, sp[0].o, (frame[7].o), (((jobject) &class_com_badlogic_gdx_graphics_Texture)), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(70);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[4].o), (frame[9].o));
	LINE_NUMBER(57);
	INST_IINC(5, 1);
	goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader:loadAsync", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader:loadSync", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(83);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[4].o)))->F_atlasName;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[4].o)))->F_atlasName;
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas)));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas, sp[0].o));
	LINE_NUMBER(85);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[1].o))->F_imagePaths;
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_findRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, (frame[5].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(88);
	if ((frame[7].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(89);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Could not find font region "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" in atlas "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter *) NULL_CHECK((frame[4].o)))->F_atlasName;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[3].o), (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(93);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(94);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = frame[6].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	sp[3].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String])(ctx, sp[3].o, (frame[7].i));
	sp[2].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, (((jobject) &class_com_badlogic_gdx_graphics_Texture)));
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[2].o)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(97);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	sp[1].o = (jobject)((com_badlogic_gdx_assets_loaders_BitmapFontLoader *) NULL_CHECK((frame[0].o)))->F_data;
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean(ctx, sp[0].o, sp[1].o, (frame[6].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(38);
	((func_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/loaders/BitmapFontLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_loaders_BitmapFontLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader_unloadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters,
	(void *) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter,
	(void *) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont,
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
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter;)Lcom/badlogic/gdx/utils/Array;" },
	{ "loadAsync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter;)V" },
	{ "loadSync", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter,
};

static FieldMetadata fields[] {
	{ "data", &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, offsetof(com_badlogic_gdx_assets_loaders_BitmapFontLoader, F_data), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_loaders_BitmapFontLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_loaders_BitmapFontLoader$BitmapFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/loaders/BitmapFontLoader$BitmapFontParameter;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "loadSync", (intptr_t) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadSync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_loadAsync_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_assets_loaders_BitmapFontLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_assets_loaders_BitmapFontLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/loaders/BitmapFontLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_AsynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_assets_loaders_BitmapFontLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_loaders_BitmapFontLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_loaders_BitmapFontLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_loaders_BitmapFontLoader,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_loaders_BitmapFontLoader = registerClass(&class_com_badlogic_gdx_assets_loaders_BitmapFontLoader);

}

