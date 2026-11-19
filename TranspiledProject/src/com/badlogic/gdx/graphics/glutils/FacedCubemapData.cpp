#include "com/badlogic/gdx/graphics/glutils/FacedCubemapData.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/graphics/glutils/PixmapTextureData.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/TextureData_Factory.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "com/badlogic/gdx/graphics/glutils/FacedCubemapData.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/CubemapData.h"
#include "com/badlogic/gdx/graphics/Cubemap_CubemapSide.h"
#include "com/badlogic/gdx/graphics/TextureData.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_glutils_FacedCubemapData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_FacedCubemapData *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_glutils_FacedCubemapData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_TextureData, (jobject(nullptr)))), (checkCast(ctx, &class_com_badlogic_gdx_graphics_TextureData, (jobject(nullptr)))), (checkCast(ctx, &class_com_badlogic_gdx_graphics_TextureData, (jobject(nullptr)))), (checkCast(ctx, &class_com_badlogic_gdx_graphics_TextureData, (jobject(nullptr)))), (checkCast(ctx, &class_com_badlogic_gdx_graphics_TextureData, (jobject(nullptr)))), (checkCast(ctx, &class_com_badlogic_gdx_graphics_TextureData, (jobject(nullptr)))));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[1].o), (jint(0)));
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[2].o), (jint(0)));
	sp[3].o = frame[3].o;
	jint temp0 = jint(0);
	LINE_NUMBER(33);
	sp[3].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, sp[3].o, temp0);
	sp[4].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[4].o), (jint(0)));
	sp[5].o = frame[5].o;
	jint temp1 = jint(0);
	LINE_NUMBER(34);
	sp[5].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, sp[5].o, temp1);
	sp[6].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(32);
	init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[1].o), (frame[7].i));
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[2].o), (frame[7].i));
	sp[3].o = frame[3].o;
	jint temp0 = frame[7].i;
	LINE_NUMBER(41);
	sp[3].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, sp[3].o, temp0);
	sp[4].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[4].o), (frame[7].i));
	sp[5].o = frame[5].o;
	jint temp1 = frame[7].i;
	LINE_NUMBER(42);
	sp[5].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, sp[5].o, temp1);
	sp[6].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(40);
	init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(48);
	init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:<init>", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(54);
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
	LINE_NUMBER(55);
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
	LINE_NUMBER(56);
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
	LINE_NUMBER(57);
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
	LINE_NUMBER(58);
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
	LINE_NUMBER(59);
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
	LINE_NUMBER(54);
	init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_int_int_int_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(64);
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
	init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_TextureData, (6));
	((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[2].o);
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[3].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (frame[4].o);
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (frame[5].o);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (frame[6].o);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isManaged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:isManaged", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isManaged_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(85);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[1].o)))->F_index;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[2].o), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:load", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[1].o)))->F_index;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_PixmapTextureData);
	init_com_badlogic_gdx_graphics_glutils_PixmapTextureData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean_boolean(ctx, sp[0].o, (frame[2].o), (jobject(nullptr)), (jint(0)), (jint(0)));
	sp += 1;
	}
label_2:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:isComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(110);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getTextureData_com_badlogic_gdx_graphics_Cubemap$CubemapSide_R_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:getTextureData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[1].o)))->F_index)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:getWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	frame[2].i = (jint(0));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_2;
	}
	INST_ILOAD(1);
	INST_ISTORE(2);
label_2:;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_4;
	}
	INST_ILOAD(1);
	INST_ISTORE(2);
label_4:;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveY;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_6;
	}
	INST_ILOAD(1);
	INST_ISTORE(2);
label_6:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeY;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_8;
	}
	INST_ILOAD(1);
	INST_ISTORE(2);
label_8:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:getHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	frame[2].i = (jint(0));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveZ;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(134);
	frame[2].i = (frame[1].i);
	}
label_2:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeZ;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(136);
	frame[2].i = (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_PositiveX;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(138);
	frame[2].i = (frame[1].i);
	}
label_8:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_com_badlogic_gdx_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Cubemap$CubemapSide_NegativeX;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(140);
	frame[2].i = (frame[1].i);
	}
label_11:;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:prepare", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isComplete_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isComplete_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You need to complete your cubemap data before using it"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(152);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_isPrepared_R_boolean, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_prepare, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	}
label_5:;
	{
	LINE_NUMBER(152);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_consumeCubemapData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/FacedCubemapData:consumeCubemapData", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getType_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	((func_com_badlogic_gdx_graphics_TextureData_consumeCustomData_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_consumeCustomData_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), ((jint(34069)) + (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_consumePixmap_R_com_badlogic_gdx_graphics_Pixmap, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	frame[3].i = temp0;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[2].o));
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(165);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))));
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(166);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(167);
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	jint temp4 = jint(0);
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp2, temp3, temp4, temp5, temp6, temp7);
	LINE_NUMBER(168);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp8 = (jint)((func_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_TextureData, INDEX_com_badlogic_gdx_graphics_TextureData_disposePixmap_R_boolean, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	if (temp8 == 0) goto label_14;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, sp[0].o);
label_14:;
	{
	LINE_NUMBER(169);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(170);
	frame[3].i = (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(172);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int, sp[0].o))(ctx, sp[0].o, (3317), (jint(1)));
	LINE_NUMBER(173);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	jint temp0 = (jint(34069)) + (frame[1].i);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	sp[1].o = frame[2].o;
	LINE_NUMBER(174);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, sp[1].o);
	jint temp5 = jint(0);
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[2].o));
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[2].o));
	LINE_NUMBER(173);
	((func_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	LINE_NUMBER(175);
	if ((frame[3].i) == 0) goto label_6;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, sp[0].o);
label_6:;
	{
	LINE_NUMBER(158);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_FacedCubemapData[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isPrepared_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_prepare,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_consumeCubemapData,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isManaged_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getTextureData_com_badlogic_gdx_graphics_Cubemap$CubemapSide_R_com_badlogic_gdx_graphics_TextureData,
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
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumeCubemapData", "()V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "isManaged", "()Z" },
	{ "load", "(Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "load", "(Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;Lcom/badlogic/gdx/graphics/Pixmap;)V" },
	{ "isComplete", "()Z" },
	{ "getTextureData", "(Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;)Lcom/badlogic/gdx/graphics/TextureData;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_CubemapData, };

static FieldMetadata fields[] {
	{ "data", getArrayClass(&class_com_badlogic_gdx_graphics_TextureData, 1), offsetof(com_badlogic_gdx_graphics_glutils_FacedCubemapData, F_data), "[Lcom/badlogic/gdx/graphics/TextureData;", 20 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FacedCubemapData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap_boolean, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Lcom/badlogic/gdx/graphics/Pixmap;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_int_int_int_com_badlogic_gdx_graphics_Pixmap$Format, 0, "(IIILcom/badlogic/gdx/graphics/Pixmap$Format;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_FacedCubemapData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData_com_badlogic_gdx_graphics_TextureData, 0, "(Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;Lcom/badlogic/gdx/graphics/TextureData;)V", 1 },
	{ "isManaged", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isManaged_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isManaged_R_boolean, "()Z", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_load_com_badlogic_gdx_graphics_Cubemap$CubemapSide_com_badlogic_gdx_graphics_Pixmap, "(Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;Lcom/badlogic/gdx/graphics/Pixmap;)V", 1 },
	{ "isComplete", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isComplete_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isComplete_R_boolean, "()Z", 1 },
	{ "getTextureData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getTextureData_com_badlogic_gdx_graphics_Cubemap$CubemapSide_R_com_badlogic_gdx_graphics_TextureData, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getTextureData_com_badlogic_gdx_graphics_Cubemap$CubemapSide_R_com_badlogic_gdx_graphics_TextureData, "(Lcom/badlogic/gdx/graphics/Cubemap$CubemapSide;)Lcom/badlogic/gdx/graphics/TextureData;", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_getHeight_R_int, "()I", 1 },
	{ "isPrepared", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isPrepared_R_boolean, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_prepare, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_prepare, "()V", 1 },
	{ "consumeCubemapData", (intptr_t) M_com_badlogic_gdx_graphics_glutils_FacedCubemapData_consumeCubemapData, VTABLE_com_badlogic_gdx_graphics_glutils_FacedCubemapData_consumeCubemapData, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_glutils_FacedCubemapData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/FacedCubemapData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_FacedCubemapData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_FacedCubemapData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_FacedCubemapData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_FacedCubemapData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_FacedCubemapData = registerClass(&class_com_badlogic_gdx_graphics_glutils_FacedCubemapData);

}

