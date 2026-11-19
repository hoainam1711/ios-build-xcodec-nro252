#include "com/badlogic/gdx/graphics/Cubemap.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/glutils/PixmapTextureData.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/util/HashMap.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/Cubemap.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/Texture_TextureWrap.h"
#include "com/badlogic/gdx/graphics/CubemapData.h"
#include "com/badlogic/gdx/graphics/Cubemap_CubemapSide.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters_LoadedCallback.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/TextureData_Factory.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Cubemap_1.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/util/Map.h"
#include "com/badlogic/gdx/graphics/glutils/FacedCubemapData.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/assets/loaders/CubemapLoader_CubemapParameter.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
jobject SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;

void mark_com_badlogic_gdx_graphics_Cubemap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Cubemap_assetManager)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap_assetManager)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap_assetManager, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_GLTexture(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_Cubemap *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_CubemapData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	init_com_badlogic_gdx_graphics_GLTexture_int(ctx, (frame[0].o), (jint(34067)));
	LINE_NUMBER(94);
	((com_badlogic_gdx_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(95);
	((func_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(96);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	SM_com_badlogic_gdx_graphics_Cubemap_addManagedCubemap_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Cubemap(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(102);
	init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[1].o), (frame[7].i));
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[2].o), (frame[7].i));
	sp[3].o = frame[3].o;
	jint temp0 = frame[7].i;
	LINE_NUMBER(109);
	sp[3].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, sp[3].o, temp0);
	sp[4].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[4].o), (frame[7].i));
	sp[5].o = frame[5].o;
	jint temp1 = frame[7].i;
	LINE_NUMBER(110);
	sp[5].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, sp[5].o, temp1);
	sp[6].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(108);
	init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(115);
	init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<init>", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[0].o, (frame[1].o), (jobject(nullptr)), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_2:;
	{
	LINE_NUMBER(122);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	goto label_4;
label_3:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[0].o, (frame[2].o), (jobject(nullptr)), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_4:;
	{
	LINE_NUMBER(123);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	INST_ACONST_NULL();
	goto label_6;
label_5:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[0].o, (frame[3].o), (jobject(nullptr)), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_6:;
	{
	LINE_NUMBER(124);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	INST_ACONST_NULL();
	goto label_8;
label_7:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[0].o, (frame[4].o), (jobject(nullptr)), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_8:;
	{
	LINE_NUMBER(125);
	if ((frame[5].o) != nullptr) goto label_9;
	}
	INST_ACONST_NULL();
	goto label_10;
label_9:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[0].o, (frame[5].o), (jobject(nullptr)), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_10:;
	{
	LINE_NUMBER(126);
	if ((frame[6].o) != nullptr) goto label_11;
	}
	INST_ACONST_NULL();
	goto label_12;
label_11:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[0].o, (frame[6].o), (jobject(nullptr)), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_12:;
	{
	sp -= 7;
	LINE_NUMBER(121);
	init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cubemap_int_int_int_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[2].o, (frame[3].i), (frame[2].i), (frame[4].o));
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[1].o, sp[2].o, (jobject(nullptr)), (jint(0)), (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[3].o, (frame[3].i), (frame[2].i), (frame[4].o));
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[2].o, sp[3].o, (jobject(nullptr)), (jint(0)), (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[4].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[4].o, (frame[1].i), (frame[3].i), (frame[4].o));
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[3].o, sp[4].o, (jobject(nullptr)), (jint(0)), (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[4].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[5].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[5].o, (frame[1].i), (frame[3].i), (frame[4].o));
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[4].o, sp[5].o, (jobject(nullptr)), (jint(0)), (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[5].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[6].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[6].o, (frame[1].i), (frame[2].i), (frame[4].o));
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[5].o, sp[6].o, (jobject(nullptr)), (jint(0)), (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[6].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[7].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[7].o, (frame[1].i), (frame[2].i), (frame[4].o));
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[6].o, sp[7].o, (jobject(nullptr)), (jint(0)), (jint(1)));
	init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_FacedCubemapData);
	init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[1].o, (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o));
	init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_CubemapData(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:load", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_CubemapData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_isPrepared_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_CubemapData_prepare) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_prepare, sp[0].o))(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(148);
	((func_com_badlogic_gdx_graphics_Cubemap_bind) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_bind])(ctx, (frame[0].o));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_minFilter;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_Cubemap_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_uWrap;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_vWrap;
	((func_com_badlogic_gdx_graphics_Cubemap_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(151);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Cubemap_unsafeSetAnisotropicFilter_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_unsafeSetAnisotropicFilter_float_boolean_R_float])(ctx, (frame[0].o), ((jfloat)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_anisotropicFilterLevel), (jint(1)));
	LINE_NUMBER(152);
	((func_com_badlogic_gdx_graphics_CubemapData_consumeCubemapData) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_consumeCubemapData, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(153);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glBindTexture_int_int, sp[0].o))(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glTarget), (jint(0)));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Cubemap_getCubemapData_R_com_badlogic_gdx_graphics_CubemapData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:getCubemapData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_Cubemap_isManaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:isManaged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Cubemap_reload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:reload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Cubemap_isManaged_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_isManaged_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Tried to reload an unmanaged Cubemap"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glHandle = temp0;
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Cubemap_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_CubemapData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_getWidth_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Cubemap_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_CubemapData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_getHeight_R_int, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Cubemap_getDepth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Cubemap_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	if (((jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_glHandle) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(195);
	((func_com_badlogic_gdx_graphics_Cubemap_delete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_delete])(ctx, (frame[0].o));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Cubemap *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_CubemapData, INDEX_com_badlogic_gdx_graphics_CubemapData_isManaged_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o)), (frame[0].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(197);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Cubemap_addManagedCubemap_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Cubemap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:addManagedCubemap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(200);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(201);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(202);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(203);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Cubemap_clearAllCubemaps_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:clearAllCubemaps", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(208);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Cubemap_invalidateAllCubemaps_com_badlogic_gdx_Application(jcontext ctx, jobject param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:invalidateAllCubemaps", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(213);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o));
	LINE_NUMBER(214);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(216);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(217);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Cubemap, sp[0].o));
	LINE_NUMBER(219);
	((func_com_badlogic_gdx_graphics_Cubemap_reload) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_reload])(ctx, (frame[3].o));
	LINE_NUMBER(217);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	goto label_10;
label_3:;
	{
	LINE_NUMBER(225);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_finishLoading) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_finishLoading])(ctx, sp[0].o);
	LINE_NUMBER(229);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Cubemap, sp[0].o));
	LINE_NUMBER(231);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getAssetFileName_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(232);
	if ((frame[5].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(233);
	((func_com_badlogic_gdx_graphics_Cubemap_reload) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_reload])(ctx, (frame[4].o));
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(239);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
	jint temp0 = (jint)((func_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getReferenceCount_java_lang_String_R_int])(ctx, sp[0].o, (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(240);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_setReferenceCount_java_lang_String_int])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	LINE_NUMBER(241);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK((frame[4].o)))->F_glHandle = (jint(0));
	LINE_NUMBER(245);
	clinit_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter);
	init_com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Cubemap_getCubemapData_R_com_badlogic_gdx_graphics_CubemapData) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_getCubemapData_R_com_badlogic_gdx_graphics_CubemapData])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_cubemapData = (jref) sp[1].o;
	LINE_NUMBER(247);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Cubemap_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[1].o;
	LINE_NUMBER(248);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Cubemap_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_magFilter = (jref) sp[1].o;
	LINE_NUMBER(249);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Cubemap_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_wrapU = (jref) sp[1].o;
	LINE_NUMBER(250);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Cubemap_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Cubemap_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap])(ctx, (frame[4].o));
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK(sp[0].o))->F_wrapV = (jref) sp[1].o;
	LINE_NUMBER(251);
	((com_badlogic_gdx_assets_loaders_CubemapLoader$CubemapParameter *) NULL_CHECK((frame[7].o)))->F_cubemap = (jref) (frame[4].o);
	LINE_NUMBER(252);
	sp[0].o = frame[7].o;
	clinit_com_badlogic_gdx_graphics_Cubemap$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Cubemap$1);
	init_com_badlogic_gdx_graphics_Cubemap$1_int(ctx, sp[1].o, (frame[6].i));
	((com_badlogic_gdx_assets_AssetLoaderParameters *) NULL_CHECK(sp[0].o))->F_loadedCallback = (jref) sp[1].o;
	LINE_NUMBER(260);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_unload_java_lang_String])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(261);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glGenTexture_R_int, sp[1].o))(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glHandle = temp1;
	LINE_NUMBER(262);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_assetManager;
	((func_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_load_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters])(ctx, sp[0].o, (frame[5].o), (((jobject) &class_com_badlogic_gdx_graphics_Cubemap)), (frame[7].o));
	}
label_19:;
	LINE_NUMBER(264);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(265);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[1].o));
	LINE_NUMBER(266);
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, (frame[1].o), (frame[2].o));
	}
label_10:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Cubemap_setAssetManager_com_badlogic_gdx_assets_AssetManager(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:setAssetManager", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(275);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap_assetManager = (frame[0].o);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Cubemap_getManagedStatus_R_java_lang_String(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:getManagedStatus", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	{
	LINE_NUMBER(279);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Managed cubemap/app: { "_j))));
	LINE_NUMBER(281);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_Application, sp[0].o));
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	sp[1].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[1].o))(ctx, sp[1].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[1].o))))->F_size));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	LINE_NUMBER(284);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"}"_j))));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_Cubemap_getNumManagedCubemaps_R_int(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:getNumManagedCubemaps", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	{
	LINE_NUMBER(291);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_utils_Array, sp[0].o))))->F_size);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Cubemap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_GLTexture(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Cubemap:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	{
	LINE_NUMBER(40);
	clinit_java_util_HashMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[0].o);
	clinit_com_badlogic_gdx_graphics_Cubemap(ctx);
	SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Cubemap[] {
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
	(void *) M_com_badlogic_gdx_graphics_Cubemap_dispose,
	(void *) M_com_badlogic_gdx_graphics_Cubemap_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_Cubemap_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_Cubemap_getDepth_R_int,
	(void *) M_com_badlogic_gdx_graphics_Cubemap_isManaged_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_Cubemap_reload,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_bind,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_bind_int,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getMinFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getMagFilter_R_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getUWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getVWrap_R_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getTextureObjectHandle_R_int,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_boolean,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setWrap_com_badlogic_gdx_graphics_Texture$TextureWrap_com_badlogic_gdx_graphics_Texture$TextureWrap,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_unsafeSetAnisotropicFilter_float_boolean_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_setAnisotropicFilter_float_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_getAnisotropicFilter_R_float,
	(void *) M_com_badlogic_gdx_graphics_GLTexture_delete,
	(void *) M_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData,
	(void *) M_com_badlogic_gdx_graphics_Cubemap_getCubemapData_R_com_badlogic_gdx_graphics_CubemapData,
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
	{ "dispose", "()V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getDepth", "()I" },
	{ "isManaged", "()Z" },
	{ "reload", "()V" },
	{ "bind", "()V" },
	{ "bind", "(I)V" },
	{ "getMinFilter", "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;" },
	{ "getMagFilter", "()Lcom/badlogic/gdx/graphics/Texture$TextureFilter;" },
	{ "getUWrap", "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;" },
	{ "getVWrap", "()Lcom/badlogic/gdx/graphics/Texture$TextureWrap;" },
	{ "getTextureObjectHandle", "()I" },
	{ "unsafeSetWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Z)V" },
	{ "setWrap", "(Lcom/badlogic/gdx/graphics/Texture$TextureWrap;Lcom/badlogic/gdx/graphics/Texture$TextureWrap;)V" },
	{ "unsafeSetFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V" },
	{ "setFilter", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;)V" },
	{ "unsafeSetAnisotropicFilter", "(F)F" },
	{ "unsafeSetAnisotropicFilter", "(FZ)F" },
	{ "setAnisotropicFilter", "(F)F" },
	{ "getAnisotropicFilter", "()F" },
	{ "delete", "()V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/CubemapData;)V" },
	{ "getCubemapData", "()Lcom/badlogic/gdx/graphics/CubemapData;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_Cubemap$CubemapSide,
};

static FieldMetadata fields[] {
	{ "assetManager", &class_com_badlogic_gdx_assets_AssetManager, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap_assetManager, "Lcom/badlogic/gdx/assets/AssetManager;", 10 },
	{ "managedCubemaps", &class_java_util_Map, (intptr_t) &SF_com_badlogic_gdx_graphics_Cubemap_managedCubemaps, "Ljava/util/Map;", 24 },
	{ "data", &class_com_badlogic_gdx_graphics_CubemapData, offsetof(com_badlogic_gdx_graphics_Cubemap, F_data), "Lcom/badlogic/gdx/graphics/CubemapData;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_CubemapData, 0, "(Lcom/badlogic/gdx/graphics/CubemapData;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_boolean, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap_int_int_int_com_badlogic_gdx_graphics_Pixmap$Format, 0, "(IIILcom/badlogic/gdx/graphics/Pixmap$Format;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Cubemap_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData, 0, "(Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData, VTABLE_com_badlogic_gdx_graphics_Cubemap_load_com_badlogic_gdx_graphics_CubemapData, "(Lcom/badlogic/gdx/graphics/CubemapData;)V", 1 },
	{ "getCubemapData", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_getCubemapData_R_com_badlogic_gdx_graphics_CubemapData, VTABLE_com_badlogic_gdx_graphics_Cubemap_getCubemapData_R_com_badlogic_gdx_graphics_CubemapData, "()Lcom/badlogic/gdx/graphics/CubemapData;", 1 },
	{ "isManaged", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_isManaged_R_boolean, VTABLE_com_badlogic_gdx_graphics_Cubemap_isManaged_R_boolean, "()Z", 1 },
	{ "reload", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_reload, VTABLE_com_badlogic_gdx_graphics_Cubemap_reload, "()V", 4 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_Cubemap_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_Cubemap_getHeight_R_int, "()I", 1 },
	{ "getDepth", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_getDepth_R_int, VTABLE_com_badlogic_gdx_graphics_Cubemap_getDepth_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_Cubemap_dispose, VTABLE_com_badlogic_gdx_graphics_Cubemap_dispose, "()V", 1 },
	{ "addManagedCubemap", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap_addManagedCubemap_com_badlogic_gdx_Application_com_badlogic_gdx_graphics_Cubemap, 0, "(Lcom/badlogic/gdx/Application;Lcom/badlogic/gdx/graphics/Cubemap;)V", 10 },
	{ "clearAllCubemaps", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap_clearAllCubemaps_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "invalidateAllCubemaps", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap_invalidateAllCubemaps_com_badlogic_gdx_Application, 0, "(Lcom/badlogic/gdx/Application;)V", 9 },
	{ "setAssetManager", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap_setAssetManager_com_badlogic_gdx_assets_AssetManager, 0, "(Lcom/badlogic/gdx/assets/AssetManager;)V", 9 },
	{ "getManagedStatus", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap_getManagedStatus_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "getNumManagedCubemaps", (intptr_t) SM_com_badlogic_gdx_graphics_Cubemap_getNumManagedCubemaps_R_int, 0, "()I", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Cubemap, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Cubemap{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Cubemap",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_GLTexture,
		.size = sizeof(com_badlogic_gdx_graphics_Cubemap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Cubemap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Cubemap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Cubemap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Cubemap = registerClass(&class_com_badlogic_gdx_graphics_Cubemap);

}

