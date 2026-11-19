#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_SizeMetrics.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Face.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Stroker.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_GlyphMetrics.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_1.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Glyph.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Library.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_Glyph.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PackStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "com/badlogic/gdx/math/MathUtils.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_GlyphSlot.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "java/lang/Enum.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PixmapPackerRectangle.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Size.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Bitmap.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_GlyphAndBitmap.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_FreeTypeBitmapFontData.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_Hinting.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_DEFAULT_CHARS;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_NO_MAXIMUM;
jint SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize;

void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_DEFAULT_CHARS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_DEFAULT_CHARS)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_DEFAULT_CHARS, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) object;
	if (self->F_library)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_library)->clazz)->markFunction)((jobject) self->F_library, mark, depth + 1);
	if (self->F_face)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_face)->clazz)->markFunction)((jobject) self->F_face, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_com_badlogic_gdx_files_FileHandle_int(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_com_badlogic_gdx_files_FileHandle_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(94);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(83);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped = (jint(0));
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_initFreeType_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(ctx);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_library = (jref) sp[1].o;
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_library;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newFace_com_badlogic_gdx_files_FileHandle_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newFace_com_badlogic_gdx_files_FileHandle_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face])(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_face = (jref) sp[1].o;
	LINE_NUMBER(98);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(99);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (15));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getLoadingFlags_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:getLoadingFlags", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	frame[2].i = (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_DEFAULT);
	LINE_NUMBER(104);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$1_$SwitchMap$com$badlogic$gdx$graphics$g2d$freetype$FreeTypeFontGenerator$Hinting;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_hinting;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		case 7: goto label_8;
		default: goto label_9;
	}
	}
label_2:;
	{
	LINE_NUMBER(106);
	frame[2].i = ((frame[2].i) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_NO_HINTING));
	LINE_NUMBER(107);
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(109);
	frame[2].i = ((frame[2].i) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LIGHT));
	LINE_NUMBER(110);
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(112);
	frame[2].i = ((frame[2].i) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_NORMAL));
	LINE_NUMBER(113);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(115);
	frame[2].i = ((frame[2].i) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_MONO));
	LINE_NUMBER(116);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(118);
	frame[2].i = ((frame[2].i) | ((clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_LIGHT)));
	LINE_NUMBER(119);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(121);
	frame[2].i = ((frame[2].i) | ((clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_NORMAL)));
	LINE_NUMBER(122);
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(124);
	frame[2].i = ((frame[2].i) | ((clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_TARGET_MONO)));
	}
label_9:;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:loadChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), ((clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_DEFAULT) | (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_LOAD_FORCE_AUTOHINT)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:loadChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_loadChar_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:checkForBitmapFont", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getFaceFlags_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(140);
	if (((frame[1].i) & (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_SIZES)) != (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_FIXED_SIZES)) goto label_2;
	}
	{
	if (((frame[1].i) & (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HORIZONTAL)) != (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_FACE_FLAG_HORIZONTAL)) goto label_2;
	}
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean(ctx, (frame[0].o), (32));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(144);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getFormat_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getFormat_R_int])(ctx, (frame[2].o));
	if (temp0 != (jint(1651078259))) goto label_2;
	}
	{
	LINE_NUMBER(145);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:generateFont", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(ctx, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:generateFont", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(161);
	if ((frame[3].i) == 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(163);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_minFilter;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_genMipMaps));
	}
label_6:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to create a font with no texture regions."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_newBitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_newBitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(167);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	sp += 1;
	if (sp[0].o != nullptr) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont_setOwnsTexture_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_setOwnsTexture_boolean])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_newBitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:newBitmapFont", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(175);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:scaleForPixelHeight", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(181);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[2].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[3].i = temp1;
	LINE_NUMBER(184);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp2);
	frame[4].i = temp3;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (((frame[1].i) * (frame[1].i)) / ((frame[3].i) - (frame[4].i)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:scaleForPixelWidth", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getMaxAdvance_R_int])(ctx, (frame[3].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[4].i = temp1;
	LINE_NUMBER(195);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[3].o));
	jint temp3 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp2);
	frame[5].i = temp3;
	LINE_NUMBER(196);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int])(ctx, (frame[3].o));
	jint temp5 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp4);
	frame[6].i = temp5;
	LINE_NUMBER(197);
	frame[7].i = ((frame[5].i) - (frame[6].i));
	LINE_NUMBER(198);
	frame[8].i = (((frame[7].i) * (frame[1].i)) / ((frame[4].i) * (frame[2].i)));
	LINE_NUMBER(199);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (frame[8].i));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[8].i);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:scaleToFitSquare", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(209);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[3].i));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap(jcontext ctx, jobject self, jint param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:generateGlyphAndBitmap", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(220);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(223);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[5].i = temp1;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	if (temp2 != 0) goto label_4;
	}
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(233);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to load character!"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(240);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) == 0) goto label_9;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean])(ctx, (frame[6].o), (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_NORMAL));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(243);
	frame[7].o = (jobject(nullptr));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics])(ctx, (frame[6].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(250);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(251);
	if ((frame[7].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int])(ctx, (frame[7].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(253);
	sp[0].o = frame[9].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[7].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_height = temp1;
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(255);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[9].o)))->F_width = (jint(0));
	LINE_NUMBER(256);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[9].o)))->F_height = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(258);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int])(ctx, (frame[6].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = temp0;
	LINE_NUMBER(259);
	sp[0].o = frame[9].o;
	sp += 1;
	if ((frame[3].i) == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmapTop_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmapTop_R_int])(ctx, (frame[6].o));
	jint temp1 = (-temp0) + (frame[5].i);
	sp[0].i = temp1;
	sp += 1;
	goto label_25;
	}
label_24:;
	{
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[9].o)))->F_height;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmapTop_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getBitmapTop_R_int])(ctx, (frame[6].o));
	jint temp2 = (-(temp0 - temp1)) - (frame[5].i);
	sp[0].i = temp2;
	sp += 1;
	}
label_25:;
	{
	sp -= 2;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = sp[1].i;
	LINE_NUMBER(260);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int])(ctx, (frame[8].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xadvance = temp1;
	LINE_NUMBER(261);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[9].o)))->F_srcX = (jint(0));
	LINE_NUMBER(262);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[9].o)))->F_srcY = (jint(0));
	LINE_NUMBER(263);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[9].o)))->F_id = (frame[1].i);
	LINE_NUMBER(265);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx, sp[0].o, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(266);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap *) NULL_CHECK((frame[10].o)))->F_glyph = (jref) (frame[9].o);
	LINE_NUMBER(267);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap *) NULL_CHECK((frame[10].o)))->F_bitmap = (jref) (frame[7].o);
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:generateData", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(274);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(275);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[2].o)))->F_size = (frame[1].i);
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:generateData", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(ctx, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:setPixelSizes", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(284);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_pixelWidth = (frame[1].i);
	LINE_NUMBER(285);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_pixelHeight = (frame[2].i);
	LINE_NUMBER(286);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Couldn't set size for font"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:generateData", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(292);
	sp[0].o = frame[2].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_size));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_characters;
	sp[0].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(294);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	LINE_NUMBER(295);
	frame[5].i = ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_incremental);
	LINE_NUMBER(296);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getLoadingFlags_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int(ctx, (frame[0].o), (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(298);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, (frame[0].o), (jint(0)), ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_size));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getSize_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Size_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(302);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_flipped = ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_flip);
	LINE_NUMBER(303);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getAscender_R_int])(ctx, (frame[7].o));
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp1);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_ascent = (jfloat(temp2));
	LINE_NUMBER(304);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getDescender_R_int])(ctx, (frame[7].o));
	jint temp4 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp3);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_descent = (jfloat(temp4));
	LINE_NUMBER(305);
	sp[0].o = frame[2].o;
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$SizeMetrics_getHeight_R_int])(ctx, (frame[7].o));
	jint temp6 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp5);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (jfloat(temp6));
	LINE_NUMBER(306);
	frame[8].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_ascent);
	LINE_NUMBER(309);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) == 0) goto label_13;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_lineHeight), (jfloat(0)), -1)) != 0) goto label_13;
	}
	{
	LINE_NUMBER(310);
	frame[9].i = (32);
	}
label_15:;
	{
	jint temp0 = frame[9].i;
	jint temp1 = 32;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getNumGlyphs_R_int])(ctx, sp[0].o);
	if (temp0 >= (temp1 + temp2)) goto label_13;
	}
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[9].i), (frame[6].i));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics])(ctx, sp[0].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	frame[10].i = temp1;
	LINE_NUMBER(313);
	sp[0].o = frame[2].o;
	sp += 1;
	if ((floatCompare((jfloat((frame[10].i))), ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_lineHeight), -1)) <= 0) goto label_20;
	}
	{
	jfloat temp0 = jfloat((frame[10].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(2);
	sp[-1].f = ((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[-1].o))->F_lineHeight;
label_21:;
	sp -= 2;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight = sp[1].f;
label_17:;
	{
	LINE_NUMBER(310);
	INST_IINC(9, 1);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[2].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_lineHeight) + (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_spaceY))));
	LINE_NUMBER(320);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (32), (frame[6].i));
	if (temp0 != 0) goto label_23;
	}
	{
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (108), (frame[6].i));
	if (temp0 == 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics])(ctx, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance = (jfloat(temp1));
	goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(323);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getMaxAdvanceWidth_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance = (jfloat(temp0));
	}
label_25:;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_xChars;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_26:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_27;
	}
	{
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(328);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[12].i), (frame[6].i));
	if (temp0 != 0) goto label_29;
	}
	goto label_30;
label_29:;
	{
	LINE_NUMBER(329);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics])(ctx, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_xHeight = (jfloat(temp1));
	LINE_NUMBER(330);
	goto label_27;
	}
label_30:;
	{
	LINE_NUMBER(327);
	INST_IINC(11, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(332);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_xHeight), (jfloat(0)), -1)) != 0) goto label_32;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No x-height character found in font"_j))));
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_capChars;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_33:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_34;
	}
	{
	frame[12].i = ((jint)ARRAY_ACCESS(jchar, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(336);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[12].i), (frame[6].i));
	if (temp0 != 0) goto label_36;
	}
	goto label_37;
label_36:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics])(ctx, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_shadowOffsetY));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_capHeight = (jfloat((temp1 + temp2)));
	LINE_NUMBER(338);
	goto label_34;
	}
label_37:;
	{
	LINE_NUMBER(335);
	INST_IINC(11, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(340);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) != 0) goto label_39;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_capHeight), (jfloat(1)), -1)) != 0) goto label_39;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No cap character found in font"_j))));
	throwException(ctx, sp[0].o);	}
label_39:;
	{
	LINE_NUMBER(342);
	sp[0].o = frame[2].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_ascent = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_ascent) - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_capHeight));
	LINE_NUMBER(343);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_down = (-((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_lineHeight));
	LINE_NUMBER(344);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_flip) == 0) goto label_42;
	}
	{
	LINE_NUMBER(345);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_ascent = (-((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_ascent));
	LINE_NUMBER(346);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_down = (-((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_down));
	}
label_42:;
	{
	LINE_NUMBER(349);
	frame[9].i = (jint(0));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_packer;
	frame[10].o = sp[0].o;
	LINE_NUMBER(353);
	if ((frame[10].o) != nullptr) goto label_47;
	}
	{
	LINE_NUMBER(357);
	if ((frame[5].i) == 0) goto label_49;
	}
	{
	LINE_NUMBER(358);
	frame[11].i = (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize);
	LINE_NUMBER(359);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	goto label_53;
	}
label_49:;
	{
	LINE_NUMBER(361);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_lineHeight))));
	frame[13].i = (jint(temp0));
	LINE_NUMBER(362);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[13].i) * (frame[13].i)) * (frame[4].i)))));
	jint temp2 = (jint)SM_com_badlogic_gdx_math_MathUtils_nextPowerOfTwo_int_R_int(ctx, (jint(temp1)));
	frame[11].i = temp2;
	LINE_NUMBER(363);
	if ((clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize) <= 0) goto label_56;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[11].i), (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize));
	frame[11].i = temp0;
	}
label_56:;
	{
	LINE_NUMBER(364);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	}
label_53:;
	{
	LINE_NUMBER(366);
	frame[9].i = (jint(1));
	LINE_NUMBER(367);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker);
	jint temp0 = frame[11].i;
	jint temp1 = frame[11].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy(ctx, sp[0].o, temp0, temp1, sp[1].o, (jint(1)), (jint(0)), (frame[12].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(368);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_color;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(369);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[10].o));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	LINE_NUMBER(370);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderWidth), (jfloat(0)), -1)) <= 0) goto label_47;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderColor;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[10].o));
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (jfloat(0));
	}
label_47:;
	{
	LINE_NUMBER(376);
	if ((frame[5].i) == 0) goto label_63;
	}
	{
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, ((frame[4].i) + (32)));
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK(sp[0].o))->F_glyphs = (jref) sp[1].o;
	}
label_63:;
	{
	LINE_NUMBER(378);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(379);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderWidth), (jfloat(0)), -1)) <= 0) goto label_65;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_library;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_createStroker_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_createStroker_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(381);
	sp[0].o = frame[11].o;
	jint temp0 = jint((((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderWidth) * (jfloat(64.0f))));
	LINE_NUMBER(382);
	sp[1].i = temp0;
	sp += 2;
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderStraight) == 0) goto label_69;
	}
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_BUTT;
	goto label_70;
label_69:;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINECAP_ROUND;
label_70:;
	{
	LINE_NUMBER(383);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_borderStraight) == 0) goto label_71;
	}
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_MITER_FIXED;
	goto label_72;
label_71:;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_STROKER_LINEJOIN_ROUND;
label_72:;
	{
	sp -= 4;
	jint temp0 = jint(0);
	LINE_NUMBER(381);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_set_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_set_int_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i, temp0);
	}
label_65:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(388);
	frame[13].i = (jint(0));
	}
label_75:;
	{
	if ((frame[13].i) >= (frame[4].i)) goto label_76;
	}
	{
	LINE_NUMBER(389);
	frame[14].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[13].i)));
	LINE_NUMBER(391);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, (frame[0].o), (frame[14].i), (frame[6].i));
	if (temp0 == 0) goto label_79;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics])(ctx, sp[0].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHeight_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	sp[0].i = temp1;
	sp += 1;
	goto label_80;
	}
label_79:;
	INST_ICONST(0);
label_80:;
	{
	sp -= 1;
	frame[15].i = sp[0].i;
	LINE_NUMBER(392);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[13].i)) = (frame[15].i);
	LINE_NUMBER(394);
	if ((frame[14].i) != 0) goto label_83;
	}
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (jint(0)), (frame[2].o), (frame[1].o), (frame[11].o), (frame[8].f), (frame[10].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(396);
	if ((frame[16].o) == nullptr) goto label_83;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[16].o)))->F_width) == 0) goto label_83;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[16].o)))->F_height) == 0) goto label_83;
	}
	{
	LINE_NUMBER(397);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[2].o), (jint(0)), (frame[16].o));
	LINE_NUMBER(398);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_missingGlyph = (jref) (frame[16].o);
	LINE_NUMBER(399);
	if ((frame[5].i) == 0) goto label_83;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[16].o));
	}
label_83:;
	{
	LINE_NUMBER(388);
	INST_IINC(13, 1);
	goto label_75;
	}
label_76:;
	{
	LINE_NUMBER(403);
	frame[13].i = (((jarray) nullCheck(ctx, (frame[12].o)))->length);
	}
label_89:;
	{
	LINE_NUMBER(404);
	if ((frame[13].i) <= 0) goto label_90;
	}
	{
	LINE_NUMBER(405);
	frame[14].i = (jint(0));
	frame[15].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (jint(0))));
	LINE_NUMBER(406);
	frame[16].i = (jint(1));
	}
label_94:;
	{
	if ((frame[16].i) >= (frame[13].i)) goto label_95;
	}
	{
	LINE_NUMBER(407);
	frame[17].i = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[16].i)));
	LINE_NUMBER(408);
	if ((frame[17].i) <= (frame[15].i)) goto label_98;
	}
	{
	LINE_NUMBER(409);
	frame[15].i = (frame[17].i);
	LINE_NUMBER(410);
	frame[14].i = (frame[16].i);
	}
label_98:;
	{
	LINE_NUMBER(406);
	INST_IINC(16, 1);
	goto label_94;
	}
label_95:;
	{
	LINE_NUMBER(414);
	frame[16].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)));
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[2].o), (frame[16].i));
	if (sp[0].o != nullptr) goto label_102;
	}
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (frame[16].i), (frame[2].o), (frame[1].o), (frame[11].o), (frame[8].f), (frame[10].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(417);
	if ((frame[17].o) == nullptr) goto label_102;
	}
	{
	LINE_NUMBER(418);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[2].o), (frame[16].i), (frame[17].o));
	LINE_NUMBER(419);
	if ((frame[5].i) == 0) goto label_102;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[17].o));
	}
label_102:;
	{
	LINE_NUMBER(423);
	INST_IINC(13, -1);
	LINE_NUMBER(424);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i)) = ((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[13].i)));
	LINE_NUMBER(425);
	frame[17].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)));
	LINE_NUMBER(426);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[13].i)));
	LINE_NUMBER(427);
	ARRAY_ACCESS(jchar, (frame[3].o), (frame[13].i)) = (frame[17].i);
	LINE_NUMBER(428);
	goto label_89;
	}
label_90:;
	{
	LINE_NUMBER(430);
	if ((frame[11].o) == nullptr) goto label_112;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_112;
	INST_ALOAD(11);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_dispose])(ctx, sp[0].o);
label_112:;
	{
	LINE_NUMBER(432);
	if ((frame[5].i) == 0) goto label_113;
	}
	{
	LINE_NUMBER(433);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_generator = (jref) (frame[0].o);
	LINE_NUMBER(434);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_parameter = (jref) (frame[1].o);
	LINE_NUMBER(435);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_stroker = (jref) (frame[11].o);
	LINE_NUMBER(436);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_packer = (jref) (frame[10].o);
	}
label_113:;
	{
	LINE_NUMBER(440);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_kerning;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_hasKerning_R_boolean])(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_kerning = (temp0 & temp1);
	LINE_NUMBER(441);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_kerning) == 0) goto label_119;
	}
	{
	LINE_NUMBER(442);
	frame[14].i = (jint(0));
	}
label_121:;
	{
	if ((frame[14].i) >= (frame[4].i)) goto label_119;
	}
	{
	LINE_NUMBER(443);
	frame[15].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[14].i)));
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[2].o), (frame[15].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(445);
	if ((frame[16].o) != nullptr) goto label_125;
	}
	goto label_126;
label_125:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[15].i));
	frame[17].i = temp0;
	LINE_NUMBER(447);
	frame[18].i = (frame[14].i);
	}
label_128:;
	{
	if ((frame[18].i) >= (frame[4].i)) goto label_126;
	}
	{
	LINE_NUMBER(448);
	frame[19].i = ((jint)ARRAY_ACCESS(jchar, (frame[3].o), (frame[18].i)));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[2].o), (frame[19].i));
	frame[20].o = sp[0].o;
	LINE_NUMBER(450);
	if ((frame[20].o) != nullptr) goto label_132;
	}
	goto label_133;
label_132:;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[19].i));
	frame[21].i = temp0;
	LINE_NUMBER(453);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, sp[0].o, (frame[17].i), (frame[21].i), (jint(0)));
	frame[22].i = temp1;
	LINE_NUMBER(454);
	if ((frame[22].i) == 0) goto label_136;
	}
	{
	sp[0].o = frame[16].o;
	jint temp0 = frame[19].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, (frame[22].i));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_136:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, sp[0].o, (frame[21].i), (frame[17].i), (jint(0)));
	frame[22].i = temp0;
	LINE_NUMBER(457);
	if ((frame[22].i) == 0) goto label_133;
	}
	{
	sp[0].o = frame[20].o;
	jint temp0 = frame[15].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, (frame[22].i));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_133:;
	{
	LINE_NUMBER(447);
	INST_IINC(18, 1);
	goto label_128;
	}
label_126:;
	{
	LINE_NUMBER(442);
	INST_IINC(14, 1);
	goto label_121;
	}
label_119:;
	{
	LINE_NUMBER(463);
	if ((frame[9].i) == 0) goto label_138;
	}
	{
	LINE_NUMBER(464);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(465);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_minFilter;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_genMipMaps));
	}
label_138:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[2].o), (32));
	frame[14].o = sp[0].o;
	LINE_NUMBER(470);
	if ((frame[14].o) != nullptr) goto label_142;
	}
	{
	LINE_NUMBER(471);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(472);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[14].o)))->F_xadvance = ((jint(((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_spaceXadvance))) + ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[1].o)))->F_spaceX));
	LINE_NUMBER(473);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[14].o)))->F_id = (32);
	LINE_NUMBER(474);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[2].o), (32), (frame[14].o));
	}
label_142:;
	{
	LINE_NUMBER(476);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[14].o)))->F_width) != 0) goto label_147;
	}
	{
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[14].o)))->F_width = (jint(((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[14].o)))->F_xadvance))) + ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_padRight))));
	}
label_147:;
	{
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self, jchar param0, jobject param1, jobject param2, jobject param3, jfloat param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[41];
	auto stack = &frame[34];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:createGlyph", 41 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	if (temp0 != 0) goto label_5;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_5;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(486);
	if ((frame[7].i) == 0) goto label_8;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getLoadingFlags_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int(ctx, (frame[0].o), (frame[3].o));
	jint temp2 = (jint)M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_9;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_9:;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(493);
	sp[0].o = frame[9].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_mono) == 0) goto label_11;
	}
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MONO;
	goto label_12;
label_11:;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_NORMAL;
label_12:;
	POP_N(2); // Pop method args
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_toBitmap_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_toBitmap_int])(ctx, sp[0].o, sp[1].i);
	popExceptionFrame(frameRef);
	LINE_NUMBER(498);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(494);
	frame[10].o = sp[0].o;
	LINE_NUMBER(495);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_dispose) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_dispose])(ctx, (frame[9].o));
	LINE_NUMBER(496);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"FreeTypeFontGenerator"_j));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"Couldn't render char: "_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[1].i));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	((func_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_13:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(500);
	sp[0].o = frame[10].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_gamma));
	frame[11].o = sp[0].o;
	LINE_NUMBER(502);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_19;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[10].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(503);
	frame[12].i = (jint(0));
	frame[13].i = (jint(0));
	LINE_NUMBER(504);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderWidth), (jfloat(0)), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(506);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[9].o));
	frame[14].i = temp0;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getLeft_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getLeft_R_int])(ctx, (frame[9].o));
	frame[15].i = temp1;
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getGlyph_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph])(ctx, (frame[8].o));
	frame[16].o = sp[0].o;
	LINE_NUMBER(508);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_strokeBorder_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_strokeBorder_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_boolean])(ctx, (frame[16].o), (frame[4].o), (jint(0)));
	LINE_NUMBER(509);
	sp[0].o = frame[16].o;
	sp += 1;
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_mono) == 0) goto label_29;
	}
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_MONO;
	goto label_30;
label_29:;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx);
	(sp++)->i = SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_RENDER_MODE_NORMAL;
label_30:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_toBitmap_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_toBitmap_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(510);
	jint temp0 = frame[15].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getLeft_R_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getLeft_R_int])(ctx, (frame[16].o));
	frame[12].i = (temp0 - temp1);
	LINE_NUMBER(511);
	jint temp2 = frame[14].i;
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[16].o));
	frame[13].i = (-(temp2 - temp3));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getBitmap_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap])(ctx, (frame[16].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(515);
	sp[0].o = frame[17].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderColor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderGamma));
	frame[18].o = sp[0].o;
	LINE_NUMBER(518);
	frame[19].i = (jint(0));
	frame[20].i = ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_renderCount);
	}
label_37:;
	{
	if ((frame[19].i) >= (frame[20].i)) goto label_38;
	}
	{
	LINE_NUMBER(519);
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int])(ctx, (frame[18].o), (frame[11].o), (frame[12].i), (frame[13].i));
	LINE_NUMBER(518);
	INST_IINC(19, 1);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(521);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(522);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_dispose) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_dispose])(ctx, (frame[9].o));
	LINE_NUMBER(523);
	frame[11].o = (frame[18].o);
	LINE_NUMBER(524);
	frame[9].o = (frame[16].o);
	}
label_23:;
	{
	LINE_NUMBER(527);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX) != 0) goto label_44;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY) == 0) goto label_45;
	}
label_44:;
	{
	LINE_NUMBER(528);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[11].o));
	frame[14].i = temp0;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[11].o));
	frame[15].i = temp1;
	LINE_NUMBER(529);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX), (jint(0)));
	frame[16].i = temp2;
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY), (jint(0)));
	frame[17].i = temp3;
	LINE_NUMBER(530);
	jint temp4 = frame[14].i;
	jint temp5 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX));
	frame[18].i = (temp4 + temp5);
	jint temp6 = frame[15].i;
	jint temp7 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY));
	frame[19].i = (temp6 + temp7);
	LINE_NUMBER(532);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	jint temp8 = frame[18].i;
	jint temp9 = frame[19].i;
	sp[2].o = frame[11].o;
	LINE_NUMBER(533);
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, sp[2].o);
	jint temp10 = (jint)SM_com_badlogic_gdx_graphics_Pixmap$Format_toGdx2DPixmapFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, sp[2].o);
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int(ctx, sp[1].o, temp8, temp9, temp10);
	init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx, sp[0].o, sp[1].o);
	frame[20].o = sp[0].o;
	LINE_NUMBER(534);
	sp[0].o = frame[20].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[6].o));
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(535);
	((func_com_badlogic_gdx_graphics_Pixmap_fill) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fill])(ctx, (frame[20].o));
	LINE_NUMBER(537);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowColor;
	frame[21].o = sp[0].o;
	LINE_NUMBER(538);
	frame[22].f = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[21].o)))->F_a);
	LINE_NUMBER(539);
	if ((floatCompare((frame[22].f), (jfloat(0)), -1)) == 0) goto label_58;
	}
	{
	LINE_NUMBER(540);
	frame[23].i = (jbyte((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[21].o)))->F_r) * (jfloat(255.0f)))))));
	frame[24].i = (jbyte((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[21].o)))->F_g) * (jfloat(255.0f)))))));
	frame[25].i = (jbyte((jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[21].o)))->F_b) * (jfloat(255.0f)))))));
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[11].o));
	frame[26].o = sp[0].o;
	LINE_NUMBER(542);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[20].o));
	frame[27].o = sp[0].o;
	LINE_NUMBER(543);
	frame[28].i = (jint(0));
	}
label_65:;
	{
	if ((frame[28].i) >= (frame[15].i)) goto label_58;
	}
	{
	LINE_NUMBER(544);
	frame[29].i = (((frame[18].i) * ((frame[28].i) + (frame[17].i))) + (frame[16].i));
	LINE_NUMBER(545);
	frame[30].i = (jint(0));
	}
label_68:;
	{
	if ((frame[30].i) >= (frame[14].i)) goto label_69;
	}
	{
	LINE_NUMBER(546);
	frame[31].i = ((((frame[14].i) * (frame[28].i)) + (frame[30].i)) * (jint(4)));
	LINE_NUMBER(547);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[26].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[26].o), ((frame[31].i) + (jint(3))));
	frame[32].i = temp0;
	LINE_NUMBER(548);
	if ((frame[32].i) != 0) goto label_73;
	}
	goto label_74;
label_73:;
	{
	LINE_NUMBER(549);
	frame[33].i = (((frame[29].i) + (frame[30].i)) * (jint(4)));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), (frame[33].i), (frame[23].i));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), ((frame[33].i) + (jint(1))), (frame[24].i));
	LINE_NUMBER(552);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), ((frame[33].i) + (jint(2))), (frame[25].i));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[27].o), ((frame[33].i) + (jint(3))), (jbyte((jint(((jfloat(((frame[32].i) & (255)))) * (frame[22].f)))))));
	}
label_74:;
	{
	LINE_NUMBER(545);
	INST_IINC(30, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(543);
	INST_IINC(28, 1);
	goto label_65;
	}
label_58:;
	{
	LINE_NUMBER(559);
	frame[23].i = (jint(0));
	frame[24].i = ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_renderCount);
	}
label_80:;
	{
	if ((frame[23].i) >= (frame[24].i)) goto label_81;
	}
	{
	LINE_NUMBER(560);
	sp[0].o = frame[20].o;
	sp[1].o = frame[11].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (-((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetX)), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (-((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_shadowOffsetY)), (jint(0)));
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(559);
	INST_IINC(23, 1);
	goto label_80;
	}
label_81:;
	{
	LINE_NUMBER(561);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(562);
	frame[11].o = (frame[20].o);
	LINE_NUMBER(563);
	goto label_86;
	}
label_45:;
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderWidth), (jfloat(0)), -1)) != 0) goto label_86;
	}
	{
	LINE_NUMBER(565);
	frame[14].i = (jint(0));
	frame[15].i = (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_renderCount) - (jint(1)));
	}
label_89:;
	{
	if ((frame[14].i) >= (frame[15].i)) goto label_86;
	}
	{
	LINE_NUMBER(566);
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int])(ctx, (frame[11].o), (frame[11].o), (jint(0)), (jint(0)));
	LINE_NUMBER(565);
	INST_IINC(14, 1);
	goto label_89;
	}
label_86:;
	{
	LINE_NUMBER(569);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padTop) > 0) goto label_92;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padLeft) > 0) goto label_92;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padBottom) > 0) goto label_92;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padRight) <= 0) goto label_19;
	}
label_92:;
	{
	LINE_NUMBER(570);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[11].o));
	jint temp1 = (temp0 + ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padLeft)) + ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padRight);
	sp[1].o = frame[11].o;
	LINE_NUMBER(571);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, sp[1].o);
	jint temp3 = (temp2 + ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padTop)) + ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padBottom);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[11].o));
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp1, temp3, sp[1].o);
	frame[14].o = sp[0].o;
	LINE_NUMBER(572);
	sp[0].o = frame[14].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(573);
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int])(ctx, (frame[14].o), (frame[11].o), ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padLeft), ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_padTop));
	LINE_NUMBER(574);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(575);
	frame[11].o = (frame[14].o);
	}
label_19:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphSlot_getMetrics_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics])(ctx, (frame[8].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(580);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(581);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[13].o)))->F_id = (frame[1].i);
	LINE_NUMBER(582);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[11].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(583);
	sp[0].o = frame[13].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[11].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_height = temp1;
	LINE_NUMBER(584);
	sp[0].o = frame[13].o;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getLeft_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getLeft_R_int])(ctx, (frame[9].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = temp2;
	LINE_NUMBER(585);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_flip) == 0) goto label_104;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[9].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = ((-temp0) + (jint((frame[5].f))));
	goto label_106;
	}
label_104:;
	{
	LINE_NUMBER(588);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[13].o)))->F_height;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_getTop_R_int])(ctx, (frame[9].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = ((-(temp0 - temp1)) - (jint((frame[5].f))));
	}
label_106:;
	{
	LINE_NUMBER(589);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int])(ctx, (frame[12].o));
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, temp0);
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_xadvance = ((temp1 + (jint(((jfloat)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_borderWidth)))) + ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_spaceX));
	LINE_NUMBER(591);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_bitmapped) == 0) goto label_108;
	}
	{
	LINE_NUMBER(592);
	sp[0].o = frame[11].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CLEAR;
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(593);
	((func_com_badlogic_gdx_graphics_Pixmap_fill) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fill])(ctx, (frame[11].o));
	LINE_NUMBER(594);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer])(ctx, (frame[10].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(595);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, sp[0].o);
	frame[15].i = temp0;
	LINE_NUMBER(596);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Color_CLEAR;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, sp[0].o);
	frame[16].i = temp1;
	LINE_NUMBER(597);
	frame[17].i = (jint(0));
	}
label_115:;
	{
	if ((frame[17].i) >= ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[13].o)))->F_height)) goto label_108;
	}
	{
	LINE_NUMBER(598);
	jint temp0 = frame[17].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int])(ctx, (frame[10].o));
	frame[18].i = (temp0 * temp1);
	LINE_NUMBER(599);
	frame[19].i = (jint(0));
	}
label_118:;
	{
	if ((frame[19].i) >= (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[13].o)))->F_width) + ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[13].o)))->F_xoffset))) goto label_119;
	}
	{
	LINE_NUMBER(600);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[14].o), ((frame[18].i) + ((frame[19].i) / (8))));
	frame[20].i = ((bit_cast<jint>(bit_cast<uint32_t>(temp0) >> ((7) - ((frame[19].i) % (8))))) & (jint(1)));
	LINE_NUMBER(601);
	sp[0].o = frame[11].o;
	jint temp1 = frame[19].i;
	jint temp2 = frame[17].i;
	sp[1].i = temp1;
	sp[2].i = temp2;
	sp += 3;
	if ((frame[20].i) != (jint(1))) goto label_122;
	}
	INST_ILOAD(15);
	goto label_123;
label_122:;
	INST_ILOAD(16);
label_123:;
	{
	sp -= 4;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
	LINE_NUMBER(599);
	INST_IINC(19, 1);
	goto label_118;
	}
label_119:;
	{
	LINE_NUMBER(597);
	INST_IINC(17, 1);
	goto label_115;
	}
label_108:;
	{
	LINE_NUMBER(606);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle])(ctx, (frame[6].o), (frame[11].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(607);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPages_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPages_R_com_badlogic_gdx_utils_Array])(ctx, (frame[6].o));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[14].o)))->F_page;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[1].o, sp[2].o, (jint(1)));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_page = temp0;
	LINE_NUMBER(608);
	sp[0].o = frame[13].o;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int])(ctx, (frame[14].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_srcX = temp1;
	LINE_NUMBER(609);
	sp[0].o = frame[13].o;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int])(ctx, (frame[14].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK(sp[0].o))->F_srcY = temp2;
	LINE_NUMBER(612);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_incremental) == 0) goto label_129;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	if (sp[0].o == nullptr) goto label_129;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) > ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[13].o)))->F_page)) goto label_129;
	}
	{
	LINE_NUMBER(613);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[2].o)))->F_regions;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_minFilter;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_magFilter;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[3].o)))->F_genMipMaps));
	}
label_129:;
	{
	LINE_NUMBER(615);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[11].o));
	LINE_NUMBER(616);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_dispose) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Glyph_dispose])(ctx, (frame[9].o));
	LINE_NUMBER(618);
	popStackFrame(ctx);
	return (frame[13].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_hasGlyph_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:hasGlyph", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(624);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, sp[0].o, (frame[1].i));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_face;
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_dispose])(ctx, sp[0].o);
	LINE_NUMBER(635);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK((frame[0].o)))->F_library;
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_dispose])(ctx, sp[0].o);
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setMaxTextureSize_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:setMaxTextureSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(651);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize = (frame[0].i);
	LINE_NUMBER(652);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getMaxTextureSize_R_int(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:getMaxTextureSize", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	{
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_DEFAULT_CHARS = ((jobject) createStringLiteral(ctx, u8"\u0000ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890\"!`?'.,;:()[]{}<>|/@\\^$\u20ac-%+=#_&~*\u0080\u0081\u0082\u0083\u0084\u0085\u0086\u0087\u0088\u0089\u008a\u008b\u008c\u008d\u008e\u008f\u0090\u0091\u0092\u0093\u0094\u0095\u0096\u0097\u0098\u0099\u009a\u009b\u009c\u009d\u009e\u009f\u00a0\u00a1\u00a2\u00a3\u00a4\u00a5\u00a6\u00a7\u00a8\u00a9\u00aa\u00ab\u00ac\u00ad\u00ae\u00af\u00b0\u00b1\u00b2\u00b3\u00b4\u00b5\u00b6\u00b7\u00b8\u00b9\u00ba\u00bb\u00bc\u00bd\u00be\u00bf\u00c0\u00c1\u00c2\u00c3\u00c4\u00c5\u00c6\u00c7\u00c8\u00c9\u00ca\u00cb\u00cc\u00cd\u00ce\u00cf\u00d0\u00d1\u00d2\u00d3\u00d4\u00d5\u00d6\u00d7\u00d8\u00d9\u00da\u00db\u00dc\u00dd\u00de\u00df\u00e0\u00e1\u00e2\u00e3\u00e4\u00e5\u00e6\u00e7\u00e8\u00e9\u00ea\u00eb\u00ec\u00ed\u00ee\u00ef\u00f0\u00f1\u00f2\u00f3\u00f4\u00f5\u00f6\u00f7\u00f8\u00f9\u00fa\u00fb\u00fc\u00fd\u00fe\u00ff"_j));
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_NO_MAXIMUM = jint(-1);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	{
	LINE_NUMBER(78);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator(ctx);
	SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize = (1024);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getLoadingFlags_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_BitmapFont,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_newBitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_hasGlyph_int_R_boolean,
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
	{ "getLoadingFlags", "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)I" },
	{ "loadChar", "(I)Z" },
	{ "loadChar", "(II)Z" },
	{ "checkForBitmapFont", "()Z" },
	{ "generateFont", "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;" },
	{ "generateFont", "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;" },
	{ "newBitmapFont", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/utils/Array;Z)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;" },
	{ "scaleForPixelHeight", "(I)I" },
	{ "scaleForPixelWidth", "(II)I" },
	{ "scaleToFitSquare", "(III)I" },
	{ "generateGlyphAndBitmap", "(IIZ)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$GlyphAndBitmap;" },
	{ "generateData", "(I)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;" },
	{ "generateData", "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;" },
	{ "setPixelSizes", "(II)V" },
	{ "generateData", "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;" },
	{ "createGlyph", "(CLcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Stroker;FLcom/badlogic/gdx/graphics/g2d/PixmapPacker;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;" },
	{ "hasGlyph", "(I)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$Hinting,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData,
	&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap,
};

static FieldMetadata fields[] {
	{ "DEFAULT_CHARS", &class_java_lang_String, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_DEFAULT_CHARS, "Ljava/lang/String;", 25 },
	{ "NO_MAXIMUM", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_NO_MAXIMUM, "I", 25 },
	{ "maxTextureSize", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_maxTextureSize, "I", 10 },
	{ "library", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, F_library), "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Library;", 16 },
	{ "face", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, F_face), "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Face;", 16 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, F_name), "Ljava/lang/String;", 16 },
	{ "bitmapped", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, F_bitmapped), "Z", 0 },
	{ "pixelWidth", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, F_pixelWidth), "I", 2 },
	{ "pixelHeight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, F_pixelHeight), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_com_badlogic_gdx_files_FileHandle_int, 0, "(Lcom/badlogic/gdx/files/FileHandle;I)V", 1 },
	{ "getLoadingFlags", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getLoadingFlags_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getLoadingFlags_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_int, "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)I", 2 },
	{ "loadChar", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_R_boolean, "(I)Z", 2 },
	{ "loadChar", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_loadChar_int_int_R_boolean, "(II)Z", 2 },
	{ "checkForBitmapFont", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_checkForBitmapFont_R_boolean, "()Z", 2 },
	{ "generateFont", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_BitmapFont, "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "generateFont", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateFont_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_BitmapFont, "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "newBitmapFont", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_newBitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_newBitmapFont_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_utils_Array_boolean_R_com_badlogic_gdx_graphics_g2d_BitmapFont, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/utils/Array;Z)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 4 },
	{ "scaleForPixelHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelHeight_int_R_int, "(I)I", 1 },
	{ "scaleForPixelWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleForPixelWidth_int_int_R_int, "(II)I", 1 },
	{ "scaleToFitSquare", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_scaleToFitSquare_int_int_int_R_int, "(III)I", 1 },
	{ "generateGlyphAndBitmap", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateGlyphAndBitmap_int_int_boolean_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$GlyphAndBitmap, "(IIZ)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$GlyphAndBitmap;", 1 },
	{ "generateData", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, "(I)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;", 1 },
	{ "generateData", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;", 1 },
	{ "setPixelSizes", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int, "(II)V", 0 },
	{ "generateData", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_generateData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_R_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, "(Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;", 1 },
	{ "createGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, "(CLcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Stroker;FLcom/badlogic/gdx/graphics/g2d/PixmapPacker;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;", 4 },
	{ "hasGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_hasGlyph_int_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_hasGlyph_int_R_boolean, "(I)Z", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_dispose, "()V", 1 },
	{ "setMaxTextureSize", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setMaxTextureSize_int, 0, "(I)V", 9 },
	{ "getMaxTextureSize", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_getMaxTextureSize_R_int, 0, "()I", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator);

}

