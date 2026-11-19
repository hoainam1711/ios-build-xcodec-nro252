#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_FreeTypeBitmapFontData.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Face.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Stroker.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator_FreeTypeBitmapFontData.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_Glyph.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) object;
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
	if (self->F_generator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generator)->clazz)->markFunction)((jobject) self->F_generator, mark, depth + 1);
	if (self->F_parameter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parameter)->clazz)->markFunction)((jobject) self->F_parameter, mark, depth + 1);
	if (self->F_stroker)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stroker)->clazz)->markFunction)((jobject) self->F_stroker, mark, depth + 1);
	if (self->F_packer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packer)->clazz)->markFunction)((jobject) self->F_packer, mark, depth + 1);
	if (self->F_glyphs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphs)->clazz)->markFunction)((jobject) self->F_glyphs, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(664);
	init_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData:getGlyph", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(677);
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(678);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, sp[0].o, temp0, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(680);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_flipped) == 0) goto label_5;
	}
	{
	jfloat temp0 = -((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_ascent);
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(0);
	sp[-1].f = ((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[-1].o))->F_ascent;
label_6:;
	{
	sp -= 1;
	frame[3].f = ((sp[0].f + ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_capHeight)) / ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(681);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	jint temp0 = frame[1].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_stroker;
	jfloat temp1 = frame[3].f;
	sp[4].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator_createGlyph_char_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_float_com_badlogic_gdx_graphics_g2d_PixmapPacker_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, temp1, sp[4].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(682);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(684);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[2].o)))->F_page));
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyphRegion_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[2].o)));
	LINE_NUMBER(685);
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_setGlyph_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(686);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(687);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(689);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_face;
	frame[4].o = sp[0].o;
	LINE_NUMBER(690);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_kerning) == 0) goto label_2;
	}
	{
	LINE_NUMBER(691);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, (frame[4].o), (frame[1].i));
	frame[5].i = temp0;
	LINE_NUMBER(692);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_18:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_2;
	}
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[0].o));
	LINE_NUMBER(694);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, (frame[4].o), ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[8].o)))->F_id));
	frame[9].i = temp0;
	LINE_NUMBER(696);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, (frame[4].o), (frame[5].i), (frame[9].i), (jint(0)));
	frame[10].i = temp1;
	LINE_NUMBER(697);
	if ((frame[10].i) == 0) goto label_23;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[8].o)))->F_id;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, (frame[10].i));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_23:;
	{
	LINE_NUMBER(699);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, (frame[4].o), (frame[9].i), (frame[5].i), (jint(0)));
	frame[10].i = temp0;
	LINE_NUMBER(700);
	if ((frame[10].i) == 0) goto label_25;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_toInt_int_R_int(ctx, (frame[10].i));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_25:;
	{
	LINE_NUMBER(692);
	INST_IINC(6, 1);
	goto label_18;
	}
label_2:;
	{
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData:getGlyphs", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPackToTexture_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPackToTexture_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(709);
	M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].o));
	LINE_NUMBER(710);
	if (((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_3;
	}
	{
	LINE_NUMBER(711);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(712);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[2].o))->F_minFilter;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[3].o))->F_magFilter;
	sp[4].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[4].o))->F_genMipMaps));
	}
label_3:;
	LINE_NUMBER(714);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_stroker;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_stroker;
	((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_dispose])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(720);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getWrapIndex_com_badlogic_gdx_utils_Array_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isBreakChar_char_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePath_int_R_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getImagePaths_R_Array1_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getFontFile_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_setScale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_scale_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_dispose,
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
	{ "dispose", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "regions", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, F_regions), "Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "generator", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, F_generator), "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator;", 0 },
	{ "parameter", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, F_parameter), "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;", 0 },
	{ "stroker", &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, F_stroker), "Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Stroker;", 0 },
	{ "packer", &class_com_badlogic_gdx_graphics_g2d_PixmapPacker, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, F_packer), "Lcom/badlogic/gdx/graphics/g2d/PixmapPacker;", 0 },
	{ "glyphs", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, F_glyphs), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "dirty", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, F_dirty), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData, 0, "()V", 1 },
	{ "getGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyph_char_R_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, "(C)Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;", 1 },
	{ "getGlyphs", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;)V", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData_dispose, "()V", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeTypeFontGenerator$FreeTypeBitmapFontData",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeTypeFontGenerator$FreeTypeBitmapFontData);

}

