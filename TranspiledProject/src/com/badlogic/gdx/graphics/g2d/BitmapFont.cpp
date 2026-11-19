#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/Files_FileType.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Files.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_Glyph.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g2d_BitmapFont_LOG2_PAGE_SIZE;
jint SF_com_badlogic_gdx_graphics_g2d_BitmapFont_PAGE_SIZE;
jint SF_com_badlogic_gdx_graphics_g2d_BitmapFont_PAGES;

void mark_com_badlogic_gdx_graphics_g2d_BitmapFont(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_BitmapFont *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g2d_BitmapFont_LOG2_PAGE_SIZE = jint(9);
	SF_com_badlogic_gdx_graphics_g2d_BitmapFont_PAGE_SIZE = jint(512);
	SF_com_badlogic_gdx_graphics_g2d_BitmapFont_PAGES = jint(128);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"com/badlogic/gdx/utils/lsans-15.fnt"_j))));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[2].o = (jobject)((func_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[2].o))(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"com/badlogic/gdx/utils/lsans-15.png"_j))));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (jint(1)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[1].o))(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"com/badlogic/gdx/utils/lsans-15.fnt"_j))));
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[2].o = (jobject)((func_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[2].o))(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"com/badlogic/gdx/utils/lsans-15.png"_j))));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].i), (jint(1)));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(93);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, (frame[1].o), (frame[3].i));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, (jobject(nullptr)))), (jint(1)));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(123);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jint(1)));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[1].o, (frame[1].o), (frame[3].i));
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[3].o, (frame[2].o), (jint(0)));
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[2].o, sp[3].o);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].i));
	LINE_NUMBER(132);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (jint(1));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[2].o);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Array_with_Array1_java_lang_Object_R_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 3;
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(151);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(152);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_flipped = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_flipped);
	LINE_NUMBER(153);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(154);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_integer = (frame[3].i);
	LINE_NUMBER(156);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size) != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(158);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"If no regions are specified, the font data must have an images path."_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (frame[4].i));
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(163);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_fontFile;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(166);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))));
	frame[6].o = sp[0].o;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(168);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_fontFile;
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_type_R_com_badlogic_gdx_Files$FileType) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_type_R_com_badlogic_gdx_Files$FileType])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_Files_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	clinit_com_badlogic_gdx_graphics_Texture(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Texture);
	init_com_badlogic_gdx_graphics_Texture_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[2].o, (frame[6].o), (jint(0)));
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(163);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(171);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (jint(1));
	LINE_NUMBER(172);
	goto label_20;
	}
label_6:;
	{
	LINE_NUMBER(173);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions = (jref) (frame[2].o);
	LINE_NUMBER(174);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache])(ctx, (frame[0].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(179);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_load_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_load_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_load_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:load", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_glyphs;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(184);
	if ((frame[5].o) != nullptr) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(185);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_5;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(186);
	if ((frame[9].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[9].o)))->F_page));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[2].o)));
	}
label_8:;
	{
	LINE_NUMBER(185);
	INST_IINC(8, 1);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(183);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_missingGlyph;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_missingGlyph;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_missingGlyph;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[3].o))->F_page));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[2].o)));
	}
label_9:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[2].o), (frame[3].f), (frame[4].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(196);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jint param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jint param4, jint param5, jfloat param6, jint param7, jbool param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:draw", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].f = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(214);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].i), (frame[6].i), (frame[7].f), (frame[8].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jint param4, jint param5, jfloat param6, jint param7, jbool param8, jobject param9) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:draw", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].f = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	frame[10].o = param9;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].i), (frame[6].i), (frame[7].f), (frame[8].i), (frame[9].i), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float])(ctx, sp[0].o, (frame[2].o), (frame[3].f), (frame[4].f));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getScaleX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_scaleX);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getScaleY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_scaleY);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getRegion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getRegions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_int_R_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getRegion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getLineHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getLineHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getSpaceXadvance_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getSpaceXadvance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getXHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getXHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_xHeight);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getCapHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getAscent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getAscent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_ascent);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getDescent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_descent);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:isFlipped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_flipped);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(318);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_ownsTexture) == 0) goto label_1;
	}
	{
	LINE_NUMBER(319);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o)));
	((func_com_badlogic_gdx_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(319);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(322);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_setFixedWidthGlyphs_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:setFixedWidthGlyphs", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	frame[2].o = sp[0].o;
	LINE_NUMBER(328);
	frame[3].i = (jint(0));
	LINE_NUMBER(329);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(331);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance) <= (frame[3].i)) goto label_8;
	}
	{
	frame[3].i = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance);
	}
label_8:;
	{
	LINE_NUMBER(329);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(333);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(335);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	goto label_15;
label_14:;
	{
	LINE_NUMBER(336);
	sp[0].o = frame[6].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset) + (((frame[3].i) - ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance)) / (jint(2))));
	LINE_NUMBER(337);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance = (frame[3].i);
	LINE_NUMBER(338);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[6].o)))->F_kerning = (jref) (jobject(nullptr));
	LINE_NUMBER(339);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[6].o)))->F_fixedWidth = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(333);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_setUseIntegerPositions_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:setUseIntegerPositions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(345);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_integer = (frame[1].i);
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setUseIntegerPositions_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:usesIntegerPositions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_integer);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_getCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getCache", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_cache;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:getData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_BitmapFont_ownsTexture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:ownsTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_ownsTexture);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont_setOwnsTexture_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:setOwnsTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(375);
	((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (frame[1].i);
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:newFontCache", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(384);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFontCache);
	init_com_badlogic_gdx_graphics_g2d_BitmapFontCache_com_badlogic_gdx_graphics_g2d_BitmapFont_boolean(ctx, sp[0].o, (frame[0].o), ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_integer));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_name;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_g2d_BitmapFont_indexOf_java_lang_CharSequence_char_int_R_int(jcontext ctx, jobject param0, jchar param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(427);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].i = temp0;
	}
label_1:;
	{
	LINE_NUMBER(428);
	if ((frame[2].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(429);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != (frame[1].i)) goto label_4;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(428);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_BitmapFont[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_load_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_int_R_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getLineHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getSpaceXadvance_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getXHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getAscent_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setFixedWidthGlyphs_java_lang_CharSequence,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setUseIntegerPositions_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_ownsTexture_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setOwnsTexture_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache,
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
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FFFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FFIIFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "getRegion", "()Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
	{ "getRegions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getRegion", "(I)Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
	{ "getLineHeight", "()F" },
	{ "getSpaceXadvance", "()F" },
	{ "getXHeight", "()F" },
	{ "getCapHeight", "()F" },
	{ "getAscent", "()F" },
	{ "getDescent", "()F" },
	{ "isFlipped", "()Z" },
	{ "setFixedWidthGlyphs", "(Ljava/lang/CharSequence;)V" },
	{ "setUseIntegerPositions", "(Z)V" },
	{ "usesIntegerPositions", "()Z" },
	{ "getCache", "()Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;" },
	{ "getData", "()Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;" },
	{ "ownsTexture", "()Z" },
	{ "setOwnsTexture", "(Z)V" },
	{ "newFontCache", "()Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData,
	&class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
};

static FieldMetadata fields[] {
	{ "LOG2_PAGE_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_BitmapFont_LOG2_PAGE_SIZE, "I", 26 },
	{ "PAGE_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_BitmapFont_PAGE_SIZE, "I", 26 },
	{ "PAGES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_BitmapFont_PAGES, "I", 26 },
	{ "data", &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont, F_data), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;", 16 },
	{ "regions", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont, F_regions), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "cache", &class_com_badlogic_gdx_graphics_g2d_BitmapFontCache, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont, F_cache), "Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;", 18 },
	{ "flipped", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont, F_flipped), "Z", 2 },
	{ "integer", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont, F_integer), "Z", 0 },
	{ "ownsTexture", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont, F_ownsTexture), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureRegion, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;ZZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_TextureRegion_boolean, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;Z)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/utils/Array;Z)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_load_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_load_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;)V", 4 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FFFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FFIIFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_draw_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "getScaleX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleX_R_float, "()F", 1 },
	{ "getScaleY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getScaleY_R_float, "()F", 1 },
	{ "getRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion, "()Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 1 },
	{ "getRegions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_int_R_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_int_R_com_badlogic_gdx_graphics_g2d_TextureRegion, "(I)Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 1 },
	{ "getLineHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getLineHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getLineHeight_R_float, "()F", 1 },
	{ "getSpaceXadvance", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getSpaceXadvance_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getSpaceXadvance_R_float, "()F", 1 },
	{ "getXHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getXHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getXHeight_R_float, "()F", 1 },
	{ "getCapHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getCapHeight_R_float, "()F", 1 },
	{ "getAscent", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getAscent_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getAscent_R_float, "()F", 1 },
	{ "getDescent", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getDescent_R_float, "()F", 1 },
	{ "isFlipped", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_isFlipped_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_dispose, "()V", 1 },
	{ "setFixedWidthGlyphs", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setFixedWidthGlyphs_java_lang_CharSequence, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setFixedWidthGlyphs_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
	{ "setUseIntegerPositions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setUseIntegerPositions_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setUseIntegerPositions_boolean, "(Z)V", 1 },
	{ "usesIntegerPositions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean, "()Z", 1 },
	{ "getCache", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache, "()Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;", 1 },
	{ "getData", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getData_R_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, "()Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;", 1 },
	{ "ownsTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_ownsTexture_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_ownsTexture_R_boolean, "()Z", 1 },
	{ "setOwnsTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_setOwnsTexture_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setOwnsTexture_boolean, "(Z)V", 1 },
	{ "newFontCache", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_newFontCache_R_com_badlogic_gdx_graphics_g2d_BitmapFontCache, "()Lcom/badlogic/gdx/graphics/g2d/BitmapFontCache;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "indexOf", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_BitmapFont_indexOf_java_lang_CharSequence_char_int_R_int, 0, "(Ljava/lang/CharSequence;CI)I", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_BitmapFont{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/BitmapFont",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_BitmapFont),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_BitmapFont,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_BitmapFont,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_BitmapFont,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 42,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_BitmapFont = registerClass(&class_com_badlogic_gdx_graphics_g2d_BitmapFont);

}

