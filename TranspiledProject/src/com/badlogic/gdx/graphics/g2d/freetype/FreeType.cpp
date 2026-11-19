#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_SizeMetrics.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Pointer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Face.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Stroker.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/SharedLibraryLoader.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_GlyphMetrics.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_GlyphSlot.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Size.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Bitmap.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Glyph.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Library.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_NONE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_MONO;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY2;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY4;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_LCD;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_LCD_V;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_NONE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_MS_SYMBOL;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_UNICODE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_SJIS;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_GB2312;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_BIG5;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_WANSUNG;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_JOHAB;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_STANDARD;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_EXPERT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_CUSTOM;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_LATIN_1;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_OLD_LATIN_2;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_APPLE_ROMAN;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_SCALABLE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_SIZES;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_WIDTH;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_SFNT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HORIZONTAL;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_VERTICAL;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_KERNING;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FAST_GLYPHS;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_MULTIPLE_MASTERS;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_GLYPH_NAMES;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_EXTERNAL_STREAM;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HINTER;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_CID_KEYED;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_TRICKY;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STYLE_FLAG_ITALIC;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STYLE_FLAG_BOLD;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_DEFAULT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_SCALE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_HINTING;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_RENDER;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_BITMAP;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_VERTICAL_LAYOUT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_CROP_BITMAP;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_PEDANTIC;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_RECURSE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_IGNORE_TRANSFORM;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_MONOCHROME;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_LINEAR_DESIGN;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_AUTOHINT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_NORMAL;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LIGHT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_MONO;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LCD;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LCD_V;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_NORMAL;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LIGHT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MONO;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LCD;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LCD_V;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MAX;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_DEFAULT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_UNFITTED;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_UNSCALED;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_BUTT;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_ROUND;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_SQUARE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_ROUND;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_BEVEL;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_VARIABLE;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_FIXED;

void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeType *) object;
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(jcontext ctx, jchar param0, jchar param1, jchar param2, jchar param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType:encode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(844);
	popStackFrame(ctx);
	return (((((frame[0].i) << (24)) | ((frame[1].i) << (16))) | ((frame[2].i) << (8))) | (frame[3].i));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_initFreeType_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType:initFreeType", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	{
	LINE_NUMBER(924);
	clinit_com_badlogic_gdx_utils_SharedLibraryLoader(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SharedLibraryLoader);
	init_com_badlogic_gdx_utils_SharedLibraryLoader(ctx, sp[0].o);
	((func_com_badlogic_gdx_utils_SharedLibraryLoader_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_SharedLibraryLoader_load_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"gdx-freetype"_j))));
	LINE_NUMBER(925);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_initFreeTypeJni_R_long(ctx);
	frame[0].l = temp0;
	LINE_NUMBER(926);
	if ((longCompare((frame[0].l), (jlong(0)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(927);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't initialize FreeType library, FreeType error code: "_j))));
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_getLastErrorCode_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(929);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_long(ctx, sp[0].o, (frame[0].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType:toInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(943);
	popStackFrame(ctx);
	return ((((frame[0].i) + (63)) & (-64)) >> (6));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	{
	LINE_NUMBER(835);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_NONE = (jint(0));
	LINE_NUMBER(836);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_MONO = (jint(1));
	LINE_NUMBER(837);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY = (jint(2));
	LINE_NUMBER(838);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY2 = (jint(3));
	LINE_NUMBER(839);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY4 = (jint(4));
	LINE_NUMBER(840);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_LCD = (jint(5));
	LINE_NUMBER(841);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_LCD_V = (6);
	LINE_NUMBER(847);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_NONE = (jint(0));
	LINE_NUMBER(848);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (115), (121), (109), (98));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_MS_SYMBOL = temp0;
	LINE_NUMBER(849);
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (117), (110), (105), (99));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_UNICODE = temp1;
	LINE_NUMBER(850);
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (115), (106), (105), (115));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_SJIS = temp2;
	LINE_NUMBER(851);
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (103), (98), (32), (32));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_GB2312 = temp3;
	LINE_NUMBER(852);
	jint temp4 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (98), (105), (103), (53));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_BIG5 = temp4;
	LINE_NUMBER(853);
	jint temp5 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (119), (97), (110), (115));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_WANSUNG = temp5;
	LINE_NUMBER(854);
	jint temp6 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (106), (111), (104), (97));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_JOHAB = temp6;
	LINE_NUMBER(855);
	jint temp7 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (65), (68), (79), (66));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_STANDARD = temp7;
	LINE_NUMBER(856);
	jint temp8 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (65), (68), (66), (69));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_EXPERT = temp8;
	LINE_NUMBER(857);
	jint temp9 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (65), (68), (66), (67));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_CUSTOM = temp9;
	LINE_NUMBER(858);
	jint temp10 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (108), (97), (116), (49));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_LATIN_1 = temp10;
	LINE_NUMBER(859);
	jint temp11 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (108), (97), (116), (50));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_OLD_LATIN_2 = temp11;
	LINE_NUMBER(860);
	jint temp12 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int(ctx, (97), (114), (109), (110));
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_APPLE_ROMAN = temp12;
	LINE_NUMBER(862);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_SCALABLE = (jint(1));
	LINE_NUMBER(863);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_SIZES = (jint(2));
	LINE_NUMBER(864);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_WIDTH = (jint(4));
	LINE_NUMBER(865);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_SFNT = (8);
	LINE_NUMBER(866);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HORIZONTAL = (16);
	LINE_NUMBER(867);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_VERTICAL = (32);
	LINE_NUMBER(868);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_KERNING = (64);
	LINE_NUMBER(869);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FAST_GLYPHS = (128);
	LINE_NUMBER(870);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_MULTIPLE_MASTERS = (256);
	LINE_NUMBER(871);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_GLYPH_NAMES = (512);
	LINE_NUMBER(872);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_EXTERNAL_STREAM = (1024);
	LINE_NUMBER(873);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HINTER = (2048);
	LINE_NUMBER(874);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_CID_KEYED = (4096);
	LINE_NUMBER(875);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_TRICKY = (8192);
	LINE_NUMBER(877);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STYLE_FLAG_ITALIC = (jint(1));
	LINE_NUMBER(878);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STYLE_FLAG_BOLD = (jint(2));
	LINE_NUMBER(880);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_DEFAULT = (jint(0));
	LINE_NUMBER(881);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_SCALE = (jint(1));
	LINE_NUMBER(882);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_HINTING = (jint(2));
	LINE_NUMBER(883);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_RENDER = (jint(4));
	LINE_NUMBER(884);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_BITMAP = (8);
	LINE_NUMBER(885);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_VERTICAL_LAYOUT = (16);
	LINE_NUMBER(886);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT = (32);
	LINE_NUMBER(887);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_CROP_BITMAP = (64);
	LINE_NUMBER(888);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_PEDANTIC = (128);
	LINE_NUMBER(889);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH = (512);
	LINE_NUMBER(890);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_RECURSE = (1024);
	LINE_NUMBER(891);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_IGNORE_TRANSFORM = (2048);
	LINE_NUMBER(892);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_MONOCHROME = (4096);
	LINE_NUMBER(893);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_LINEAR_DESIGN = (8192);
	LINE_NUMBER(894);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_AUTOHINT = (jint(32768));
	LINE_NUMBER(896);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_NORMAL = (jint(0));
	LINE_NUMBER(897);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LIGHT = (jint(65536));
	LINE_NUMBER(898);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_MONO = (jint(131072));
	LINE_NUMBER(899);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LCD = (jint(196608));
	LINE_NUMBER(900);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LCD_V = (jint(262144));
	LINE_NUMBER(902);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_NORMAL = (jint(0));
	LINE_NUMBER(903);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LIGHT = (jint(1));
	LINE_NUMBER(904);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MONO = (jint(2));
	LINE_NUMBER(905);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LCD = (jint(3));
	LINE_NUMBER(906);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LCD_V = (jint(4));
	LINE_NUMBER(907);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MAX = (jint(5));
	LINE_NUMBER(909);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_DEFAULT = (jint(0));
	LINE_NUMBER(910);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_UNFITTED = (jint(1));
	LINE_NUMBER(911);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_UNSCALED = (jint(2));
	LINE_NUMBER(913);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_BUTT = (jint(0));
	LINE_NUMBER(914);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_ROUND = (jint(1));
	LINE_NUMBER(915);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_SQUARE = (jint(2));
	LINE_NUMBER(917);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_ROUND = (jint(0));
	LINE_NUMBER(918);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_BEVEL = (jint(1));
	LINE_NUMBER(919);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_VARIABLE = (jint(2));
	LINE_NUMBER(920);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER = (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_VARIABLE);
	LINE_NUMBER(921);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_FIXED = (jint(3));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType[] {
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
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer,
};

static FieldMetadata fields[] {
	{ "FT_PIXEL_MODE_NONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_NONE, "I", 9 },
	{ "FT_PIXEL_MODE_MONO", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_MONO, "I", 9 },
	{ "FT_PIXEL_MODE_GRAY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY, "I", 9 },
	{ "FT_PIXEL_MODE_GRAY2", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY2, "I", 9 },
	{ "FT_PIXEL_MODE_GRAY4", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY4, "I", 9 },
	{ "FT_PIXEL_MODE_LCD", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_LCD, "I", 9 },
	{ "FT_PIXEL_MODE_LCD_V", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_LCD_V, "I", 9 },
	{ "FT_ENCODING_NONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_NONE, "I", 9 },
	{ "FT_ENCODING_MS_SYMBOL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_MS_SYMBOL, "I", 9 },
	{ "FT_ENCODING_UNICODE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_UNICODE, "I", 9 },
	{ "FT_ENCODING_SJIS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_SJIS, "I", 9 },
	{ "FT_ENCODING_GB2312", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_GB2312, "I", 9 },
	{ "FT_ENCODING_BIG5", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_BIG5, "I", 9 },
	{ "FT_ENCODING_WANSUNG", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_WANSUNG, "I", 9 },
	{ "FT_ENCODING_JOHAB", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_JOHAB, "I", 9 },
	{ "FT_ENCODING_ADOBE_STANDARD", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_STANDARD, "I", 9 },
	{ "FT_ENCODING_ADOBE_EXPERT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_EXPERT, "I", 9 },
	{ "FT_ENCODING_ADOBE_CUSTOM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_CUSTOM, "I", 9 },
	{ "FT_ENCODING_ADOBE_LATIN_1", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_ADOBE_LATIN_1, "I", 9 },
	{ "FT_ENCODING_OLD_LATIN_2", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_OLD_LATIN_2, "I", 9 },
	{ "FT_ENCODING_APPLE_ROMAN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_ENCODING_APPLE_ROMAN, "I", 9 },
	{ "FT_FACE_FLAG_SCALABLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_SCALABLE, "I", 9 },
	{ "FT_FACE_FLAG_FIXED_SIZES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_SIZES, "I", 9 },
	{ "FT_FACE_FLAG_FIXED_WIDTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_WIDTH, "I", 9 },
	{ "FT_FACE_FLAG_SFNT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_SFNT, "I", 9 },
	{ "FT_FACE_FLAG_HORIZONTAL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HORIZONTAL, "I", 9 },
	{ "FT_FACE_FLAG_VERTICAL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_VERTICAL, "I", 9 },
	{ "FT_FACE_FLAG_KERNING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_KERNING, "I", 9 },
	{ "FT_FACE_FLAG_FAST_GLYPHS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FAST_GLYPHS, "I", 9 },
	{ "FT_FACE_FLAG_MULTIPLE_MASTERS", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_MULTIPLE_MASTERS, "I", 9 },
	{ "FT_FACE_FLAG_GLYPH_NAMES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_GLYPH_NAMES, "I", 9 },
	{ "FT_FACE_FLAG_EXTERNAL_STREAM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_EXTERNAL_STREAM, "I", 9 },
	{ "FT_FACE_FLAG_HINTER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HINTER, "I", 9 },
	{ "FT_FACE_FLAG_CID_KEYED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_CID_KEYED, "I", 9 },
	{ "FT_FACE_FLAG_TRICKY", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_TRICKY, "I", 9 },
	{ "FT_STYLE_FLAG_ITALIC", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STYLE_FLAG_ITALIC, "I", 9 },
	{ "FT_STYLE_FLAG_BOLD", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STYLE_FLAG_BOLD, "I", 9 },
	{ "FT_LOAD_DEFAULT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_DEFAULT, "I", 9 },
	{ "FT_LOAD_NO_SCALE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_SCALE, "I", 9 },
	{ "FT_LOAD_NO_HINTING", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_HINTING, "I", 9 },
	{ "FT_LOAD_RENDER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_RENDER, "I", 9 },
	{ "FT_LOAD_NO_BITMAP", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_BITMAP, "I", 9 },
	{ "FT_LOAD_VERTICAL_LAYOUT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_VERTICAL_LAYOUT, "I", 9 },
	{ "FT_LOAD_FORCE_AUTOHINT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT, "I", 9 },
	{ "FT_LOAD_CROP_BITMAP", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_CROP_BITMAP, "I", 9 },
	{ "FT_LOAD_PEDANTIC", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_PEDANTIC, "I", 9 },
	{ "FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_IGNORE_GLOBAL_ADVANCE_WIDTH, "I", 9 },
	{ "FT_LOAD_NO_RECURSE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_RECURSE, "I", 9 },
	{ "FT_LOAD_IGNORE_TRANSFORM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_IGNORE_TRANSFORM, "I", 9 },
	{ "FT_LOAD_MONOCHROME", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_MONOCHROME, "I", 9 },
	{ "FT_LOAD_LINEAR_DESIGN", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_LINEAR_DESIGN, "I", 9 },
	{ "FT_LOAD_NO_AUTOHINT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_AUTOHINT, "I", 9 },
	{ "FT_LOAD_TARGET_NORMAL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_NORMAL, "I", 9 },
	{ "FT_LOAD_TARGET_LIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LIGHT, "I", 9 },
	{ "FT_LOAD_TARGET_MONO", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_MONO, "I", 9 },
	{ "FT_LOAD_TARGET_LCD", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LCD, "I", 9 },
	{ "FT_LOAD_TARGET_LCD_V", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LCD_V, "I", 9 },
	{ "FT_RENDER_MODE_NORMAL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_NORMAL, "I", 9 },
	{ "FT_RENDER_MODE_LIGHT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LIGHT, "I", 9 },
	{ "FT_RENDER_MODE_MONO", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MONO, "I", 9 },
	{ "FT_RENDER_MODE_LCD", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LCD, "I", 9 },
	{ "FT_RENDER_MODE_LCD_V", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_LCD_V, "I", 9 },
	{ "FT_RENDER_MODE_MAX", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MAX, "I", 9 },
	{ "FT_KERNING_DEFAULT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_DEFAULT, "I", 9 },
	{ "FT_KERNING_UNFITTED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_UNFITTED, "I", 9 },
	{ "FT_KERNING_UNSCALED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_KERNING_UNSCALED, "I", 9 },
	{ "FT_STROKER_LINECAP_BUTT", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_BUTT, "I", 9 },
	{ "FT_STROKER_LINECAP_ROUND", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_ROUND, "I", 9 },
	{ "FT_STROKER_LINECAP_SQUARE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_SQUARE, "I", 9 },
	{ "FT_STROKER_LINEJOIN_ROUND", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_ROUND, "I", 9 },
	{ "FT_STROKER_LINEJOIN_BEVEL", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_BEVEL, "I", 9 },
	{ "FT_STROKER_LINEJOIN_MITER_VARIABLE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_VARIABLE, "I", 9 },
	{ "FT_STROKER_LINEJOIN_MITER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER, "I", 9 },
	{ "FT_STROKER_LINEJOIN_MITER_FIXED", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_FIXED, "I", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeType, 0, "()V", 1 },
	{ "getLastErrorCode", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_getLastErrorCode_R_int, 0, "()I", 264 },
	{ "encode", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_encode_char_char_char_char_R_int, 0, "(CCCC)I", 10 },
	{ "initFreeType", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_initFreeType_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library, 0, "()Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Library;", 9 },
	{ "initFreeTypeJni", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_initFreeTypeJni_R_long, 0, "()J", 266 },
	{ "toInt", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int, 0, "(I)I", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeType{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeType",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeType),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 10,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 74,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeType = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType);

}

