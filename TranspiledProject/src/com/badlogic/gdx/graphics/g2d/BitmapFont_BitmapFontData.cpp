#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "java/lang/Float.h"
#include "java/util/regex/Matcher.h"
#include "java/io/InputStream.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/InputStreamReader.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "java/io/Closeable.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_Glyph.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"
#include "java/util/StringTokenizer.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Math.h"
#include "java/lang/Exception.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/BufferedReader.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_imagePaths)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imagePaths)->clazz)->markFunction)((jobject) self->F_imagePaths, mark, depth + 1);
	if (self->F_fontFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontFile)->clazz)->markFunction)((jobject) self->F_fontFile, mark, depth + 1);
	if (self->F_glyphs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphs)->clazz)->markFunction)((jobject) self->F_glyphs, mark, depth + 1);
	if (self->F_missingGlyph)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_missingGlyph)->clazz)->markFunction)((jobject) self->F_missingGlyph, mark, depth + 1);
	if (self->F_breakChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breakChars)->clazz)->markFunction)((jobject) self->F_breakChars, mark, depth + 1);
	if (self->F_xChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_xChars)->clazz)->markFunction)((jobject) self->F_xChars, mark, depth + 1);
	if (self->F_capChars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capChars)->clazz)->markFunction)((jobject) self->F_capChars, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(479);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(446);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capHeight = (jfloat(1));
	LINE_NUMBER(455);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_blankLineScale = (jfloat(1));
	LINE_NUMBER(456);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, 1), (128));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	LINE_NUMBER(469);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_xHeight = (jfloat(1));
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (13));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (120);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (101);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (97);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (111);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (110);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (115);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (114);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (99);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (117);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (109);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (118);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (119);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (122);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_xChars = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (26));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (77);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (78);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (66);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (68);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (67);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (69);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (70);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (75);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (65);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (71);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (72);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (73);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (74);
	ARRAY_ACCESS(jchar, sp[1].o, (13)) = (76);
	ARRAY_ACCESS(jchar, sp[1].o, (14)) = (79);
	ARRAY_ACCESS(jchar, sp[1].o, (15)) = (80);
	ARRAY_ACCESS(jchar, sp[1].o, (16)) = (81);
	ARRAY_ACCESS(jchar, sp[1].o, (17)) = (82);
	ARRAY_ACCESS(jchar, sp[1].o, (18)) = (83);
	ARRAY_ACCESS(jchar, sp[1].o, (19)) = (84);
	ARRAY_ACCESS(jchar, sp[1].o, (20)) = (85);
	ARRAY_ACCESS(jchar, sp[1].o, (21)) = (86);
	ARRAY_ACCESS(jchar, sp[1].o, (22)) = (87);
	ARRAY_ACCESS(jchar, sp[1].o, (23)) = (88);
	ARRAY_ACCESS(jchar, sp[1].o, (24)) = (89);
	ARRAY_ACCESS(jchar, sp[1].o, (25)) = (90);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capChars = (jref) sp[1].o;
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(482);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(446);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capHeight = (jfloat(1));
	LINE_NUMBER(455);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_blankLineScale = (jfloat(1));
	LINE_NUMBER(456);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(462);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, 1), (128));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	LINE_NUMBER(469);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_xHeight = (jfloat(1));
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (13));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (120);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (101);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (97);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (111);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (110);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (115);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (114);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (99);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (117);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (109);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (118);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (119);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (122);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_xChars = (jref) sp[1].o;
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (26));
	ARRAY_ACCESS(jchar, sp[1].o, (jint(0))) = (77);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(1))) = (78);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(2))) = (66);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(3))) = (68);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(4))) = (67);
	ARRAY_ACCESS(jchar, sp[1].o, (jint(5))) = (69);
	ARRAY_ACCESS(jchar, sp[1].o, (6)) = (70);
	ARRAY_ACCESS(jchar, sp[1].o, (7)) = (75);
	ARRAY_ACCESS(jchar, sp[1].o, (8)) = (65);
	ARRAY_ACCESS(jchar, sp[1].o, (9)) = (71);
	ARRAY_ACCESS(jchar, sp[1].o, (10)) = (72);
	ARRAY_ACCESS(jchar, sp[1].o, (11)) = (73);
	ARRAY_ACCESS(jchar, sp[1].o, (12)) = (74);
	ARRAY_ACCESS(jchar, sp[1].o, (13)) = (76);
	ARRAY_ACCESS(jchar, sp[1].o, (14)) = (79);
	ARRAY_ACCESS(jchar, sp[1].o, (15)) = (80);
	ARRAY_ACCESS(jchar, sp[1].o, (16)) = (81);
	ARRAY_ACCESS(jchar, sp[1].o, (17)) = (82);
	ARRAY_ACCESS(jchar, sp[1].o, (18)) = (83);
	ARRAY_ACCESS(jchar, sp[1].o, (19)) = (84);
	ARRAY_ACCESS(jchar, sp[1].o, (20)) = (85);
	ARRAY_ACCESS(jchar, sp[1].o, (21)) = (86);
	ARRAY_ACCESS(jchar, sp[1].o, (22)) = (87);
	ARRAY_ACCESS(jchar, sp[1].o, (23)) = (88);
	ARRAY_ACCESS(jchar, sp[1].o, (24)) = (89);
	ARRAY_ACCESS(jchar, sp[1].o, (25)) = (90);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capChars = (jref) sp[1].o;
	LINE_NUMBER(483);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_fontFile = (jref) (frame[1].o);
	LINE_NUMBER(484);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_flipped = (frame[2].i);
	LINE_NUMBER(485);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_load_com_badlogic_gdx_files_FileHandle_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_load_com_badlogic_gdx_files_FileHandle_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_load_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[35];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:load", 35 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already loaded."_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(493);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[1].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_BufferedReader_java_io_Reader_int(ctx, sp[0].o, sp[1].o, (512));
	frame[3].o = sp[0].o;
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_19; } // goto label_16
	}
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(496);
	if ((frame[4].o) != nullptr) goto label_24;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"File is empty."_j))));
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(498);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"padding="_j))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (temp0 + (8)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(499);
	sp[0].o = frame[4].o;
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[4].o), (32));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp1, temp2);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))), (jint(4)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(500);
	if ((((jarray) nullCheck(ctx, (frame[5].o)))->length) == (jint(4))) goto label_27;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid padding."_j))));
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(501);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)))));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padTop = (jfloat(temp0));
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)))));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padRight = (jfloat(temp1));
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(2)))));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padBottom = (jfloat(temp2));
	LINE_NUMBER(504);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(3)))));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padLeft = (jfloat(temp3));
	LINE_NUMBER(505);
	frame[6].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padTop) + ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padBottom));
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(508);
	if ((frame[4].o) != nullptr) goto label_34;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing common header."_j))));
	throwException(ctx, sp[0].o);	}
label_34:;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" "_j))), (9));
	frame[7].o = sp[0].o;
	LINE_NUMBER(512);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) >= (jint(3))) goto label_36;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid common header."_j))));
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(514);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))), (((jobject) createStringLiteral(ctx, u8"lineHeight="_j))));
	if (temp0 != 0) goto label_37;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing: lineHeight"_j))));
	throwException(ctx, sp[0].o);	}
label_37:;
	{
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(1)))), (11));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (jfloat(temp0));
	LINE_NUMBER(517);
	jint temp1 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))), (((jobject) createStringLiteral(ctx, u8"base="_j))));
	if (temp1 != 0) goto label_39;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing: base"_j))));
	throwException(ctx, sp[0].o);	}
label_39:;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(2)))), (jint(5)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[8].f = (jfloat(temp0));
	LINE_NUMBER(520);
	frame[9].i = (jint(1));
	LINE_NUMBER(521);
	if ((((jarray) nullCheck(ctx, (frame[7].o)))->length) < (6)) goto label_42;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))) == nullptr) goto label_42;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))), (((jobject) createStringLiteral(ctx, u8"pages="_j))));
	if (temp0 == 0) goto label_42;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(523);
	jint temp0 = jint(1);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (jint(5)))), (6));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, temp1);
	frame[9].i = temp2;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(525);
	goto label_42;
label_2:;
	LINE_NUMBER(524);
	INST_ASTORE(10);
label_42:;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[9].i));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_imagePaths = (jref) sp[1].o;
	LINE_NUMBER(531);
	frame[10].i = (jint(0));
	}
label_44:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_45;
	}
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(534);
	if ((frame[4].o) != nullptr) goto label_48;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing additional page definitions."_j))));
	throwException(ctx, sp[0].o);	}
label_48:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8".*id=(\\d+)"_j))));
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[4].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(538);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_50;
	}
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[11].o), (jint(1)));
	frame[12].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(541);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[12].o));
	frame[13].i = temp0;
	LINE_NUMBER(542);
	if ((frame[13].i) == (frame[10].i)) goto label_5;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Page IDs must be indices starting at 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(545);
	goto label_50;
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(543);
	frame[13].o = sp[0].o;
	LINE_NUMBER(544);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid page id: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[13].o));
	throwException(ctx, sp[0].o);	}
label_50:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8".*file=\"?([^\"]+)\"?"_j))));
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[4].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(549);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[11].o));
	if (temp0 != 0) goto label_55;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing: file"_j))));
	throwException(ctx, sp[0].o);	}
label_55:;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[11].o), (jint(1)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(552);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	jint temp0 = frame[10].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, (frame[12].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"\\\\"_j))), (((jobject) createStringLiteral(ctx, u8"/"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(531);
	INST_IINC(10, 1);
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(554);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_descent = (jfloat(0));
	}
label_58:;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(558);
	if ((frame[4].o) != nullptr) goto label_60;
	}
	goto label_61;
label_60:;
	{
	LINE_NUMBER(559);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"kernings "_j))));
	if (temp0 == 0) goto label_62;
	}
	goto label_61;
label_62:;
	{
	LINE_NUMBER(560);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"metrics "_j))));
	if (temp0 == 0) goto label_63;
	}
	goto label_61;
label_63:;
	{
	LINE_NUMBER(561);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"char "_j))));
	if (temp0 != 0) goto label_64;
	}
	goto label_58;
label_64:;
	{
	LINE_NUMBER(563);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(565);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" ="_j))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(566);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[12].i = temp0;
	LINE_NUMBER(569);
	if ((frame[12].i) > 0) goto label_70;
	}
	{
	LINE_NUMBER(570);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph = (jref) (frame[10].o);
	goto label_72;
	}
label_70:;
	{
	LINE_NUMBER(571);
	if ((frame[12].i) > (jint(65535))) goto label_58;
	}
	{
	LINE_NUMBER(572);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (frame[12].i), (frame[10].o));
	}
label_72:;
	{
	LINE_NUMBER(575);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[10].o)))->F_id = (frame[12].i);
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(577);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_srcX = temp0;
	LINE_NUMBER(578);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(579);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_srcY = temp1;
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(581);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp2 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_width = temp2;
	LINE_NUMBER(582);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(583);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp3 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_height = temp3;
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(585);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp4 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = temp4;
	LINE_NUMBER(586);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(587);
	if ((frame[2].i) == 0) goto label_86;
	}
	{
	LINE_NUMBER(588);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = temp0;
	goto label_88;
	}
label_86:;
	{
	LINE_NUMBER(590);
	sp[0].o = frame[10].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[10].o)))->F_height;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (-(temp0 + temp1));
	}
label_88:;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	LINE_NUMBER(592);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xadvance = temp0;
	LINE_NUMBER(595);
	jint temp1 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[11].o));
	if (temp1 == 0) goto label_91;
	}
	{
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	}
label_91:;
	{
	LINE_NUMBER(596);
	jint temp0 = (jint)((func_java_util_StringTokenizer_hasMoreTokens_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_hasMoreTokens_R_boolean])(ctx, (frame[11].o));
	if (temp0 == 0) goto label_92;
	}
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(598);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[11].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_page = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(600);
	goto label_92;
label_10:;
	LINE_NUMBER(599);
	INST_ASTORE(13);
label_92:;
	{
	LINE_NUMBER(603);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[10].o)))->F_width) <= 0) goto label_93;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[10].o)))->F_height) <= 0) goto label_93;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[8].f) + (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[10].o)))->F_yoffset)))), ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_descent));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_descent = temp0;
	}
label_93:;
	LINE_NUMBER(604);
	goto label_58;
label_61:;
	{
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_descent = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_descent) + ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padBottom));
	}
label_94:;
	{
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(609);
	if ((frame[4].o) != nullptr) goto label_96;
	}
	goto label_97;
label_96:;
	{
	LINE_NUMBER(610);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"kerning "_j))));
	if (temp0 != 0) goto label_98;
	}
	goto label_97;
label_98:;
	{
	LINE_NUMBER(612);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" ="_j))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(615);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[11].i = temp0;
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[12].i = temp1;
	LINE_NUMBER(618);
	if ((frame[11].i) < 0) goto label_94;
	}
	{
	if ((frame[11].i) > (jint(65535))) goto label_94;
	}
	INST_ILOAD(12);
	if ((--sp)->i < 0) goto label_94;
	{
	if ((frame[12].i) <= (jint(65535))) goto label_105;
	}
	goto label_94;
label_105:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (jchar((frame[11].i))));
	frame[13].o = sp[0].o;
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(621);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[10].o));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[14].i = temp0;
	LINE_NUMBER(622);
	if ((frame[13].o) == nullptr) goto label_109;
	}
	{
	LINE_NUMBER(623);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int])(ctx, (frame[13].o), (frame[12].i), (frame[14].i));
	}
label_109:;
	LINE_NUMBER(625);
	goto label_94;
label_97:;
	{
	LINE_NUMBER(627);
	frame[10].i = (jint(0));
	LINE_NUMBER(628);
	frame[11].f = (jfloat(0));
	LINE_NUMBER(629);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(630);
	frame[13].f = (jfloat(0));
	LINE_NUMBER(631);
	frame[14].f = (jfloat(0));
	LINE_NUMBER(632);
	frame[15].f = (jfloat(0));
	LINE_NUMBER(633);
	frame[16].f = (jfloat(0));
	LINE_NUMBER(634);
	frame[17].f = (jfloat(0));
	LINE_NUMBER(637);
	if ((frame[4].o) == nullptr) goto label_119;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"metrics "_j))));
	if (temp0 == 0) goto label_119;
	}
	{
	LINE_NUMBER(639);
	frame[10].i = (jint(1));
	LINE_NUMBER(641);
	clinit_java_util_StringTokenizer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_StringTokenizer);
	init_java_util_StringTokenizer_java_lang_String_java_lang_String(ctx, sp[0].o, (frame[4].o), (((jobject) createStringLiteral(ctx, u8" ="_j))));
	frame[18].o = sp[0].o;
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(644);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[11].f = temp0;
	LINE_NUMBER(645);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(646);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[12].f = temp1;
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	jfloat temp2 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[13].f = temp2;
	LINE_NUMBER(649);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(650);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	jfloat temp3 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[14].f = temp3;
	LINE_NUMBER(651);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(652);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	jfloat temp4 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[15].f = temp4;
	LINE_NUMBER(653);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(654);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	jfloat temp5 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[16].f = temp5;
	LINE_NUMBER(655);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	LINE_NUMBER(656);
	sp[0].o = (jobject)((func_java_util_StringTokenizer_nextToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_java_util_StringTokenizer_nextToken_R_java_lang_String])(ctx, (frame[18].o));
	jfloat temp6 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[17].f = temp6;
	}
label_119:;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (32));
	frame[18].o = sp[0].o;
	LINE_NUMBER(660);
	if ((frame[18].o) != nullptr) goto label_138;
	}
	{
	LINE_NUMBER(661);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx, sp[0].o);
	frame[18].o = sp[0].o;
	LINE_NUMBER(662);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[18].o)))->F_id = (32);
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (108));
	frame[19].o = sp[0].o;
	LINE_NUMBER(664);
	if ((frame[19].o) != nullptr) goto label_143;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o));
	frame[19].o = sp[0].o;
	}
label_143:;
	{
	LINE_NUMBER(665);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[18].o)))->F_xadvance = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[19].o)))->F_xadvance);
	LINE_NUMBER(666);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (32), (frame[18].o));
	}
label_138:;
	{
	LINE_NUMBER(668);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[18].o)))->F_width) != 0) goto label_145;
	}
	{
	LINE_NUMBER(669);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[18].o)))->F_width = (jint(((((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padLeft) + (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[18].o)))->F_xadvance)))) + ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padRight))));
	LINE_NUMBER(670);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[18].o)))->F_xoffset = (jint((-((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padLeft))));
	}
label_145:;
	{
	LINE_NUMBER(672);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_spaceXadvance = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[18].o)))->F_xadvance)));
	LINE_NUMBER(674);
	frame[19].o = (jobject(nullptr));
	LINE_NUMBER(675);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_xChars;
	frame[20].o = sp[0].o;
	frame[21].i = (((jarray) nullCheck(ctx, (frame[20].o)))->length);
	frame[22].i = (jint(0));
	}
label_150:;
	{
	if ((frame[22].i) >= (frame[21].i)) goto label_151;
	}
	{
	frame[23].i = ((jint)ARRAY_ACCESS(jchar, (frame[20].o), (frame[22].i)));
	LINE_NUMBER(676);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (frame[23].i));
	frame[19].o = sp[0].o;
	LINE_NUMBER(677);
	if ((frame[19].o) == nullptr) goto label_154;
	}
	goto label_151;
label_154:;
	{
	LINE_NUMBER(675);
	INST_IINC(22, 1);
	goto label_150;
	}
label_151:;
	{
	LINE_NUMBER(679);
	if ((frame[19].o) != nullptr) goto label_155;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o));
	frame[19].o = sp[0].o;
	}
label_155:;
	{
	LINE_NUMBER(680);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_xHeight = ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[19].o)))->F_height))) - (frame[6].f));
	LINE_NUMBER(682);
	frame[20].o = (jobject(nullptr));
	LINE_NUMBER(683);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capChars;
	frame[21].o = sp[0].o;
	frame[22].i = (((jarray) nullCheck(ctx, (frame[21].o)))->length);
	frame[23].i = (jint(0));
	}
label_158:;
	{
	if ((frame[23].i) >= (frame[22].i)) goto label_159;
	}
	{
	frame[24].i = ((jint)ARRAY_ACCESS(jchar, (frame[21].o), (frame[23].i)));
	LINE_NUMBER(684);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (frame[24].i));
	frame[20].o = sp[0].o;
	LINE_NUMBER(685);
	if ((frame[20].o) == nullptr) goto label_162;
	}
	goto label_159;
label_162:;
	{
	LINE_NUMBER(683);
	INST_IINC(23, 1);
	goto label_158;
	}
label_159:;
	{
	LINE_NUMBER(687);
	if ((frame[20].o) != nullptr) goto label_163;
	}
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[21].o = sp[0].o;
	frame[22].i = (((jarray) nullCheck(ctx, (frame[21].o)))->length);
	frame[23].i = (jint(0));
	}
label_165:;
	{
	if ((frame[23].i) >= (frame[22].i)) goto label_166;
	}
	{
	frame[24].o = ((jobject)ARRAY_ACCESS(jobject, (frame[21].o), (frame[23].i)));
	LINE_NUMBER(689);
	if ((frame[24].o) != nullptr) goto label_168;
	}
	goto label_169;
label_168:;
	{
	LINE_NUMBER(690);
	frame[25].o = (frame[24].o);
	frame[26].i = (((jarray) nullCheck(ctx, (frame[25].o)))->length);
	frame[27].i = (jint(0));
	}
label_170:;
	{
	if ((frame[27].i) >= (frame[26].i)) goto label_169;
	}
	{
	frame[28].o = ((jobject)ARRAY_ACCESS(jobject, (frame[25].o), (frame[27].i)));
	LINE_NUMBER(691);
	if ((frame[28].o) == nullptr) goto label_172;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[28].o)))->F_height) == 0) goto label_172;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[28].o)))->F_width) != 0) goto label_173;
	}
	goto label_172;
label_173:;
	{
	LINE_NUMBER(692);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capHeight), (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[28].o)))->F_height))));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight = temp0;
	}
label_172:;
	{
	LINE_NUMBER(690);
	INST_IINC(27, 1);
	goto label_170;
	}
label_169:;
	{
	LINE_NUMBER(688);
	INST_IINC(23, 1);
	goto label_165;
	}
label_166:;
	goto label_174;
label_163:;
	{
	LINE_NUMBER(696);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capHeight = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[20].o)))->F_height)));
	}
label_174:;
	{
	LINE_NUMBER(697);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight) - (frame[6].f));
	LINE_NUMBER(699);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_ascent = ((frame[8].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capHeight));
	LINE_NUMBER(700);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_down = (-((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_lineHeight));
	LINE_NUMBER(701);
	if ((frame[2].i) == 0) goto label_178;
	}
	{
	LINE_NUMBER(702);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_ascent = (-((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_ascent));
	LINE_NUMBER(703);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_down = (-((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_down));
	}
label_178:;
	{
	LINE_NUMBER(706);
	if ((frame[10].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(707);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_ascent = (frame[11].f);
	LINE_NUMBER(708);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_descent = (frame[12].f);
	LINE_NUMBER(709);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_down = (frame[13].f);
	LINE_NUMBER(710);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capHeight = (frame[14].f);
	LINE_NUMBER(711);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_lineHeight = (frame[15].f);
	LINE_NUMBER(712);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_spaceXadvance = (frame[16].f);
	LINE_NUMBER(713);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_xHeight = (frame[17].f);
	}
label_13:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(719);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(720);
	goto label_189;
	}
label_14:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_16;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_16; }
	{
	sp -= 1;
	LINE_NUMBER(716);
	frame[4].o = sp[0].o;
	LINE_NUMBER(717);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading font file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_16:;
	LINE_NUMBER(719);
	INST_ASTORE(29);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(720);
	throwException(ctx, (frame[29].o));	}
label_189:;
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:setGlyphRegion", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(725);
	jfloat temp0 = jfloat(1);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Texture_getWidth_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getWidth_R_int])(ctx, (frame[3].o));
	frame[4].f = (temp0 / (jfloat(temp1)));
	LINE_NUMBER(726);
	jfloat temp2 = jfloat(1);
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Texture_getHeight_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_getHeight_R_int])(ctx, (frame[3].o));
	frame[5].f = (temp2 / (jfloat(temp3)));
	LINE_NUMBER(728);
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(729);
	frame[8].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_u);
	LINE_NUMBER(730);
	frame[9].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureRegion *) NULL_CHECK((frame[2].o)))->F_v);
	LINE_NUMBER(731);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionWidth_R_int])(ctx, (frame[2].o));
	frame[10].f = (jfloat(temp4));
	LINE_NUMBER(732);
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getRegionHeight_R_int])(ctx, (frame[2].o));
	frame[11].f = (jfloat(temp5));
	LINE_NUMBER(733);
	if ((isInstance(ctx, (frame[2].o), &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(735);
	frame[12].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[2].o)));
	LINE_NUMBER(736);
	frame[6].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_offsetX);
	LINE_NUMBER(737);
	frame[7].f = ((jfloat((((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_originalHeight) - ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_packedHeight)))) - ((jfloat)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[12].o)))->F_offsetY));
	}
label_10:;
	{
	LINE_NUMBER(740);
	frame[12].f = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_srcX)));
	LINE_NUMBER(741);
	frame[13].f = (jfloat((((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_srcX) + ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_width))));
	LINE_NUMBER(742);
	frame[14].f = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_srcY)));
	LINE_NUMBER(743);
	frame[15].f = (jfloat((((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_srcY) + ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_height))));
	LINE_NUMBER(747);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(748);
	frame[12].f = ((frame[12].f) - (frame[6].f));
	LINE_NUMBER(749);
	if ((floatCompare((frame[12].f), (jfloat(0)), 1)) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(750);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_width = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_width))) + (frame[12].f))));
	LINE_NUMBER(751);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset))) - (frame[12].f))));
	LINE_NUMBER(752);
	frame[12].f = (jfloat(0));
	}
label_21:;
	{
	LINE_NUMBER(754);
	frame[13].f = ((frame[13].f) - (frame[6].f));
	LINE_NUMBER(755);
	if ((floatCompare((frame[13].f), (frame[10].f), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(756);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_width = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_width))) - ((frame[13].f) - (frame[10].f)))));
	LINE_NUMBER(757);
	frame[13].f = (frame[10].f);
	}
label_18:;
	{
	LINE_NUMBER(760);
	if ((floatCompare((frame[7].f), (jfloat(0)), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(761);
	frame[14].f = ((frame[14].f) - (frame[7].f));
	LINE_NUMBER(762);
	if ((floatCompare((frame[14].f), (jfloat(0)), 1)) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(763);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_height = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_height))) + (frame[14].f))));
	LINE_NUMBER(764);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_height) >= 0) goto label_34;
	}
	{
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_height = (jint(0));
	}
label_34:;
	{
	LINE_NUMBER(765);
	frame[14].f = (jfloat(0));
	}
label_31:;
	{
	LINE_NUMBER(767);
	frame[15].f = ((frame[15].f) - (frame[7].f));
	LINE_NUMBER(768);
	if ((floatCompare((frame[15].f), (frame[11].f), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(769);
	frame[16].f = ((frame[15].f) - (frame[11].f));
	LINE_NUMBER(770);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_height = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_height))) - (frame[16].f))));
	LINE_NUMBER(771);
	sp[0].o = frame[1].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset))) + (frame[16].f))));
	LINE_NUMBER(772);
	frame[15].f = (frame[11].f);
	}
label_28:;
	{
	LINE_NUMBER(776);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_u = ((frame[8].f) + ((frame[12].f) * (frame[4].f)));
	LINE_NUMBER(777);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_u2 = ((frame[8].f) + ((frame[13].f) * (frame[4].f)));
	LINE_NUMBER(778);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_flipped) == 0) goto label_42;
	}
	{
	LINE_NUMBER(779);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_v = ((frame[9].f) + ((frame[14].f) * (frame[5].f)));
	LINE_NUMBER(780);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_v2 = ((frame[9].f) + ((frame[15].f) * (frame[5].f)));
	goto label_45;
	}
label_42:;
	{
	LINE_NUMBER(782);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_v2 = ((frame[9].f) + ((frame[14].f) * (frame[5].f)));
	LINE_NUMBER(783);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_v = ((frame[9].f) + ((frame[15].f) * (frame[5].f)));
	}
label_45:;
	LINE_NUMBER(785);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setLineHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:setLineHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(789);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_lineHeight = ((frame[1].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_flipped) == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_lineHeight;
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = -((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_lineHeight);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_down = sp[1].f;
	LINE_NUMBER(791);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:setGlyph", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) / (512))));
	LINE_NUMBER(795);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	jint temp0 = (frame[1].i) / (512);
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, (512));
	frame[3].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(796);
	ARRAY_ACCESS(jobject, (frame[3].o), ((frame[1].i) & (511))) = (frame[2].o);
	LINE_NUMBER(797);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:getFirstGlyph", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(800);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
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
	LINE_NUMBER(801);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(802);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_5;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(803);
	if ((frame[8].o) == nullptr) goto label_8;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[8].o)))->F_height) == 0) goto label_8;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[8].o)))->F_width) != 0) goto label_9;
	}
	goto label_8;
label_9:;
	{
	LINE_NUMBER(804);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_8:;
	{
	LINE_NUMBER(802);
	INST_IINC(7, 1);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(800);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(807);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No glyphs found."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:hasGlyph", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(812);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (frame[1].i));
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:getGlyph", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[1].i) / (512))));
	LINE_NUMBER(821);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[1].i) & (511))));
	}
label_2:;
	{
	LINE_NUMBER(822);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:getGlyphs", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(831);
	frame[6].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(832);
	if ((frame[6].i) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(833);
	frame[7].i = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_markupEnabled);
	LINE_NUMBER(834);
	frame[8].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(835);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_glyphs;
	frame[9].o = sp[0].o;
	LINE_NUMBER(836);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_xAdvances;
	frame[10].o = sp[0].o;
	LINE_NUMBER(839);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, (frame[9].o), (frame[6].i));
	LINE_NUMBER(840);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_xAdvances;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_FloatArray_ensureCapacity_int_R_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_ensureCapacity_int_R_Array1_float])(ctx, sp[0].o, ((frame[6].i) + (jint(1))));
	}
label_8:;
	{
	LINE_NUMBER(843);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, temp0);
	frame[11].i = temp1;
	LINE_NUMBER(844);
	if ((frame[11].i) != (13)) goto label_10;
	}
	goto label_11;
label_10:;
	{
	LINE_NUMBER(845);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(846);
	if ((frame[12].o) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph;
	if (sp[0].o != nullptr) goto label_15;
	}
	goto label_11;
label_15:;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph;
	frame[12].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(850);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[9].o), (frame[12].o));
	LINE_NUMBER(851);
	sp[0].o = frame[10].o;
	sp += 1;
	if ((frame[5].o) != nullptr) goto label_17;
	}
	{
	LINE_NUMBER(852);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[12].o)))->F_fixedWidth) == 0) goto label_19;
	}
	INST_FCONST(0);
	goto label_20;
label_19:;
	{
	jfloat temp0 = ((jfloat((-((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[12].o)))->F_xoffset)))) * (frame[8].f)) - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padLeft);
	sp[0].f = temp0;
	sp += 1;
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(853);
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[5].o)))->F_xadvance;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_getKerning_char_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_getKerning_char_R_int])(ctx, (frame[5].o), (frame[11].i));
	jfloat temp2 = (jfloat((temp0 + temp1))) * (frame[8].f);
	sp[0].f = temp2;
	sp += 1;
	}
label_20:;
	{
	sp -= 2;
	LINE_NUMBER(851);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, sp[0].o, sp[1].f);
	LINE_NUMBER(854);
	frame[5].o = (frame[12].o);
	LINE_NUMBER(857);
	if ((frame[7].i) == 0) goto label_11;
	}
	{
	if ((frame[11].i) != (91)) goto label_11;
	}
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[2].o)))(ctx, (frame[2].o), (frame[3].i));
	if (temp0 != (91)) goto label_11;
	}
	INST_IINC(3, 1);
label_11:;
	{
	LINE_NUMBER(858);
	if ((frame[3].i) < (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(859);
	if ((frame[5].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(860);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[5].o)))->F_fixedWidth) == 0) goto label_26;
	}
	{
	jfloat temp0 = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[5].o)))->F_xadvance))) * (frame[8].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(861);
	jfloat temp0 = ((jfloat((((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[5].o)))->F_width) + ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[5].o)))->F_xoffset)))) * (frame[8].f)) - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_padRight);
	sp[0].f = temp0;
	sp += 1;
	}
label_27:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(862);
	((func_com_badlogic_gdx_utils_FloatArray_add_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_add_float])(ctx, (frame[10].o), (frame[11].f));
	}
label_24:;
	LINE_NUMBER(864);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getWrapIndex_com_badlogic_gdx_utils_Array_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:getWrapIndex", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(869);
	frame[3].i = ((frame[2].i) - (jint(1)));
	LINE_NUMBER(870);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(871);
	frame[5].i = (jchar(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)))))))->F_id)));
	LINE_NUMBER(872);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean])(ctx, (frame[0].o), (frame[5].i));
	if (temp0 == 0) goto label_4;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(873);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean])(ctx, (frame[0].o), (frame[5].i));
	if (temp0 == 0) goto label_5;
	}
	INST_IINC(3, -1);
label_5:;
	{
	LINE_NUMBER(874);
	if ((frame[3].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(875);
	frame[5].i = (jchar(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[3].i)))))))->F_id)));
	LINE_NUMBER(876);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean])(ctx, (frame[0].o), (frame[5].i));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean])(ctx, (frame[0].o), (frame[5].i));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	popStackFrame(ctx);
	return ((frame[3].i) + (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(874);
	INST_IINC(3, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(878);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:isBreakChar", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_breakChars;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(883);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_breakChars;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(884);
	if ((frame[1].i) != (frame[5].i)) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(883);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(885);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:isWhitespace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(889);
	switch((frame[1].i)) {
		case 9: goto label_1;
		case 10: goto label_1;
		case 13: goto label_1;
		case 32: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(894);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(896);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:getImagePath", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(902);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:getImagePaths", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(906);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_imagePaths;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFontFile_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:getFontFile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(910);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_fontFile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:setScale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(919);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scaleX cannot be 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(920);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scaleY cannot be 0."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(921);
	frame[3].f = ((frame[1].f) / ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleX));
	LINE_NUMBER(922);
	frame[4].f = ((frame[2].f) / ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(923);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight) * (frame[4].f));
	LINE_NUMBER(924);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance) * (frame[3].f));
	LINE_NUMBER(925);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_xHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_xHeight) * (frame[4].f));
	LINE_NUMBER(926);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight) * (frame[4].f));
	LINE_NUMBER(927);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_ascent = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_ascent) * (frame[4].f));
	LINE_NUMBER(928);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_descent = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_descent) * (frame[4].f));
	LINE_NUMBER(929);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_down = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_down) * (frame[4].f));
	LINE_NUMBER(930);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padLeft = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padLeft) * (frame[3].f));
	LINE_NUMBER(931);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padRight = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padRight) * (frame[3].f));
	LINE_NUMBER(932);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padTop = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padTop) * (frame[4].f));
	LINE_NUMBER(933);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padBottom = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_padBottom) * (frame[4].f));
	LINE_NUMBER(934);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(935);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[2].f);
	LINE_NUMBER(936);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(942);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(943);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_scale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(949);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float])(ctx, (frame[0].o), (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleX) + (frame[1].f)), (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleY) + (frame[1].f)));
	LINE_NUMBER(950);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_name;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_name;
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

void *vtable_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_load_com_badlogic_gdx_files_FileHandle_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setLineHeight_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getWrapIndex_com_badlogic_gdx_utils_Array_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFontFile_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_scale_float,
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
	{ "load", "(Lcom/badlogic/gdx/files/FileHandle;Z)V" },
	{ "setGlyphRegion", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V" },
	{ "setLineHeight", "(F)V" },
	{ "setGlyph", "(ILcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;)V" },
	{ "getFirstGlyph", "()Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;" },
	{ "hasGlyph", "(C)Z" },
	{ "getGlyph", "(C)Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;" },
	{ "getGlyphs", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;)V" },
	{ "getWrapIndex", "(Lcom/badlogic/gdx/utils/Array;I)I" },
	{ "isBreakChar", "(C)Z" },
	{ "isWhitespace", "(C)Z" },
	{ "getImagePath", "(I)Ljava/lang/String;" },
	{ "getImagePaths", "()[Ljava/lang/String;" },
	{ "getFontFile", "()Lcom/badlogic/gdx/files/FileHandle;" },
	{ "setScale", "(FF)V" },
	{ "setScale", "(F)V" },
	{ "scale", "(F)V" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_name), "Ljava/lang/String;", 1 },
	{ "imagePaths", getArrayClass(&class_java_lang_String, 1), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_imagePaths), "[Ljava/lang/String;", 1 },
	{ "fontFile", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_fontFile), "Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "flipped", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_flipped), "Z", 1 },
	{ "padTop", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_padTop), "F", 1 },
	{ "padRight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_padRight), "F", 1 },
	{ "padBottom", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_padBottom), "F", 1 },
	{ "padLeft", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_padLeft), "F", 1 },
	{ "lineHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_lineHeight), "F", 1 },
	{ "capHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_capHeight), "F", 1 },
	{ "ascent", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_ascent), "F", 1 },
	{ "descent", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_descent), "F", 1 },
	{ "down", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_down), "F", 1 },
	{ "blankLineScale", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_blankLineScale), "F", 1 },
	{ "scaleX", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_scaleX), "F", 1 },
	{ "scaleY", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_scaleY), "F", 1 },
	{ "markupEnabled", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_markupEnabled), "Z", 1 },
	{ "cursorX", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_cursorX), "F", 1 },
	{ "glyphs", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, 2), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_glyphs), "[[Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;", 17 },
	{ "missingGlyph", &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_missingGlyph), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;", 1 },
	{ "spaceXadvance", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_spaceXadvance), "F", 1 },
	{ "xHeight", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_xHeight), "F", 1 },
	{ "breakChars", getArrayClass(&class_char, 1), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_breakChars), "[C", 1 },
	{ "xChars", getArrayClass(&class_char, 1), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_xChars), "[C", 1 },
	{ "capChars", getArrayClass(&class_char, 1), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, F_capChars), "[C", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_load_com_badlogic_gdx_files_FileHandle_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_load_com_badlogic_gdx_files_FileHandle_boolean, "(Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "setGlyphRegion", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;Lcom/badlogic/gdx/graphics/g2d/TextureRegion;)V", 1 },
	{ "setLineHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setLineHeight_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setLineHeight_float, "(F)V", 1 },
	{ "setGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, "(ILcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;)V", 1 },
	{ "getFirstGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFirstGlyph_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, "()Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;", 1 },
	{ "hasGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_hasGlyph_char_R_boolean, "(C)Z", 1 },
	{ "getGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, "(C)Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;", 1 },
	{ "getGlyphs", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;)V", 1 },
	{ "getWrapIndex", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getWrapIndex_com_badlogic_gdx_utils_Array_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getWrapIndex_com_badlogic_gdx_utils_Array_int_R_int, "(Lcom/badlogic/gdx/utils/Array;I)I", 1 },
	{ "isBreakChar", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean, "(C)Z", 1 },
	{ "isWhitespace", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean, "(C)Z", 1 },
	{ "getImagePath", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getImagePaths", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String, "()[Ljava/lang/String;", 1 },
	{ "getFontFile", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFontFile_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFontFile_R_com_badlogic_gdx_files_FileHandle, "()Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float, "(FF)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float, "(F)V", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_scale_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_scale_float, "(F)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_BitmapFont,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData = registerClass(&class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData);

}

