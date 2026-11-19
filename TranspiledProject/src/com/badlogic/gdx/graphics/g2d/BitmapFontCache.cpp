#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache_1.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/NumberUtils.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "com/badlogic/gdx/utils/FlushablePool.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_Glyph.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFontCache.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tempColor;

void mark_com_badlogic_gdx_graphics_g2d_BitmapFontCache(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tempColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tempColor)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tempColor, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_BitmapFontCache *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_layouts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layouts)->clazz)->markFunction)((jobject) self->F_layouts, mark, depth + 1);
	if (self->F_pooledLayouts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pooledLayouts)->clazz)->markFunction)((jobject) self->F_pooledLayouts, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_pageVertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pageVertices)->clazz)->markFunction)((jobject) self->F_pageVertices, mark, depth + 1);
	if (self->F_idx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idx)->clazz)->markFunction)((jobject) self->F_idx, mark, depth + 1);
	if (self->F_pageGlyphIndices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pageGlyphIndices)->clazz)->markFunction)((jobject) self->F_pageGlyphIndices, mark, depth + 1);
	if (self->F_tempGlyphCount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempGlyphCount)->clazz)->markFunction)((jobject) self->F_tempGlyphCount, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFontCache_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_usesIntegerPositions_R_boolean])(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_g2d_BitmapFontCache_com_badlogic_gdx_graphics_g2d_BitmapFont_boolean(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_BitmapFontCache_com_badlogic_gdx_graphics_g2d_BitmapFont_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(68);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(1)));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_layouts = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1);
	init_com_badlogic_gdx_graphics_g2d_BitmapFontCache$1_com_badlogic_gdx_graphics_g2d_BitmapFontCache(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_pooledLayouts = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(69);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[1].o);
	LINE_NUMBER(70);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_integer = (frame[2].i);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[1].o)))->F_regions;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(73);
	if ((frame[3].i) != 0) goto label_8;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The specified font must contain at least one texture page."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_float, 1), (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_pageVertices = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_idx = (jref) sp[1].o;
	LINE_NUMBER(77);
	if ((frame[3].i) <= (jint(1))) goto label_11;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_IntArray, (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_pageGlyphIndices = (jref) sp[1].o;
	LINE_NUMBER(80);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_15:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	jint temp0 = frame[4].i;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(80);
	INST_IINC(4, 1);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_tempGlyphCount = (jref) sp[1].o;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(90);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_translate_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_translate_float_float])(ctx, (frame[0].o), ((frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_x)), ((frame[2].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:translate", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(97);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(98);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_integer) == 0) goto label_2;
	}
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[1].f));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(100);
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[2].f));
	frame[2].f = (jfloat(temp1));
	}
label_2:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(106);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(107);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(108);
	frame[7].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	}
label_14:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_15;
	}
	{
	LINE_NUMBER(109);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(110);
	sp[0].o = frame[6].o;
	jint temp3 = (frame[7].i) + (jint(1));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[2].f));
	LINE_NUMBER(108);
	INST_IINC(7, 5);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(106);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tint_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:tint", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(117);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(118);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_currentTint), (frame[2].f), -1)) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(119);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_currentTint = (frame[2].f);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(122);
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tempColor;
	frame[4].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_tempGlyphCount;
	frame[5].o = sp[0].o;
	LINE_NUMBER(124);
	SM_java_util_Arrays_fill_Array1_int_int(ctx, (frame[5].o), (jint(0)));
	LINE_NUMBER(126);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_9:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_10;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(128);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_colors;
	frame[9].o = sp[0].o;
	LINE_NUMBER(129);
	frame[10].i = (jint(0));
	frame[11].i = (jint(0));
	frame[12].i = (jint(0));
	LINE_NUMBER(130);
	frame[13].f = (jfloat(0));
	LINE_NUMBER(131);
	frame[14].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_runs;
	frame[15].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_19:;
	{
	if ((frame[14].i) >= (frame[15].i)) goto label_20;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_runs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[14].i));
	frame[16].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[16].o)))->F_glyphs;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[17].o = sp[0].o;
	LINE_NUMBER(134);
	frame[18].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[16].o)))->F_glyphs;
	frame[19].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_25:;
	{
	if ((frame[18].i) >= (frame[19].i)) goto label_26;
	}
	{
	LINE_NUMBER(135);
	jint temp0 = frame[12].i;
	INST_IINC(12, 1);
	if (temp0 != (frame[11].i)) goto label_28;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = frame[4].o;
	sp[1].o = frame[9].o;
	INST_IINC(10, 1);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[1].o, (frame[10].i));
	SM_com_badlogic_gdx_graphics_Color_abgr8888ToColor_com_badlogic_gdx_graphics_Color_int(ctx, sp[0].o, temp0);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_mul_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[4].o), (frame[1].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[13].f = temp1;
	LINE_NUMBER(138);
	INST_IINC(10, 1);
	if ((frame[10].i) >= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[9].o)))->F_size)) goto label_32;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, (frame[9].o), (frame[10].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_33;
	}
label_32:;
	INST_ICONST(-1);
label_33:;
	INST_ISTORE(11);
label_28:;
	{
	LINE_NUMBER(140);
	frame[20].i = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, ((jobject)ARRAY_ACCESS(jobject, (frame[17].o), (frame[18].i)))))))->F_page);
	LINE_NUMBER(141);
	frame[21].i = ((((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[20].i))) * (20)) + (jint(2)));
	LINE_NUMBER(142);
	sp[0].o = frame[5].o;
	jint temp0 = frame[20].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(143);
	frame[22].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[20].i)));
	LINE_NUMBER(144);
	ARRAY_ACCESS(jfloat, (frame[22].o), (frame[21].i)) = (frame[13].f);
	LINE_NUMBER(145);
	ARRAY_ACCESS(jfloat, (frame[22].o), ((frame[21].i) + (jint(5)))) = (frame[13].f);
	LINE_NUMBER(146);
	ARRAY_ACCESS(jfloat, (frame[22].o), ((frame[21].i) + (10))) = (frame[13].f);
	LINE_NUMBER(147);
	ARRAY_ACCESS(jfloat, (frame[22].o), ((frame[21].i) + (15))) = (frame[13].f);
	LINE_NUMBER(134);
	INST_IINC(18, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(131);
	INST_IINC(14, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(126);
	INST_IINC(6, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(151);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setAlphas_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setAlphas", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(155);
	frame[2].i = ((jint(((jfloat(254.0f)) * (frame[1].f)))) << (24));
	LINE_NUMBER(156);
	frame[3].f = (jfloat(0));
	frame[4].f = (jfloat(0));
	LINE_NUMBER(157);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[6].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(159);
	frame[8].i = (jint(2));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[9].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	}
label_10:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_11;
	}
	{
	LINE_NUMBER(160);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (frame[8].i)));
	LINE_NUMBER(161);
	if ((floatCompare((frame[10].f), (frame[3].f), -1)) != 0) goto label_14;
	}
	{
	if ((frame[8].i) == (jint(2))) goto label_14;
	}
	{
	LINE_NUMBER(162);
	ARRAY_ACCESS(jfloat, (frame[7].o), (frame[8].i)) = (frame[4].f);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(164);
	frame[3].f = (frame[10].f);
	LINE_NUMBER(165);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_NumberUtils_floatToIntColor_float_R_int(ctx, (frame[10].f));
	frame[11].i = temp0;
	LINE_NUMBER(166);
	frame[11].i = (((frame[11].i) & (jint(16777215))) | (frame[2].i));
	LINE_NUMBER(167);
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(ctx, (frame[11].i));
	frame[4].f = temp1;
	LINE_NUMBER(168);
	ARRAY_ACCESS(jfloat, (frame[7].o), (frame[8].i)) = (frame[4].f);
	}
label_16:;
	{
	LINE_NUMBER(159);
	INST_IINC(8, 5);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(157);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setColors", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(176);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(178);
	frame[5].i = (jint(2));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(179);
	ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i)) = (frame[1].f);
	LINE_NUMBER(178);
	INST_IINC(5, 5);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(176);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(181);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setColors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setColors", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(190);
	frame[5].i = (((((jint(((jfloat(255.0f)) * (frame[4].f)))) << (24)) | ((jint(((jfloat(255.0f)) * (frame[3].f)))) << (16))) | ((jint(((jfloat(255.0f)) * (frame[2].f)))) << (8))) | (jint(((jfloat(255.0f)) * (frame[1].f)))));
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(ctx, (frame[5].i));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setColors", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_int_int])(ctx, sp[0].o, temp0, (frame[2].i), (frame[3].i));
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_int_int(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setColors", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(205);
	frame[5].i = (((frame[2].i) * (20)) + (jint(2)));
	jint temp0 = (frame[3].i) * (20);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)ARRAY_ACCESS(jint, sp[0].o, (jint(0)))));
	frame[6].i = temp1;
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(206);
	ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i)) = (frame[1].f);
	LINE_NUMBER(205);
	INST_IINC(5, 5);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(211);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(215);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[7].o)))->F_size);
	}
label_16:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_17;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[7].o)))->F_items;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[8].i)));
	LINE_NUMBER(219);
	if ((frame[10].i) < (frame[3].i)) goto label_20;
	}
	goto label_17;
label_20:;
	{
	LINE_NUMBER(222);
	if ((frame[10].i) < (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(223);
	frame[11].i = (((frame[8].i) * (20)) + (jint(2)));
	LINE_NUMBER(224);
	ARRAY_ACCESS(jfloat, (frame[6].o), (frame[11].i)) = (frame[1].f);
	LINE_NUMBER(225);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[11].i) + (jint(5)))) = (frame[1].f);
	LINE_NUMBER(226);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[11].i) + (10))) = (frame[1].f);
	LINE_NUMBER(227);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[11].i) + (15))) = (frame[1].f);
	}
label_21:;
	{
	LINE_NUMBER(215);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(211);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_float_float_float_float_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(251);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(254);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[1].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[1].o)));
	sp[2].o = frame[5].o;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[3].o, (frame[3].i))));
	}
label_6:;
	{
	LINE_NUMBER(251);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:draw", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(261);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegion_R_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0)))), ((frame[2].i) * (20)), (((frame[3].i) - (frame[2].i)) * (20)));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getRegions_R_com_badlogic_gdx_utils_Array])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(267);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[6].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(268);
	frame[7].i = (jint(-1));
	frame[8].i = (jint(0));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(272);
	frame[10].i = (jint(0));
	frame[11].i = ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[9].o)))->F_size);
	}
label_13:;
	{
	if ((frame[10].i) >= (frame[11].i)) goto label_14;
	}
	{
	LINE_NUMBER(273);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, (frame[9].o), (frame[10].i));
	frame[12].i = temp0;
	LINE_NUMBER(276);
	if ((frame[12].i) < (frame[3].i)) goto label_17;
	}
	goto label_14;
label_17:;
	{
	LINE_NUMBER(279);
	if ((frame[7].i) != (jint(-1))) goto label_18;
	}
	{
	if ((frame[12].i) < (frame[2].i)) goto label_18;
	}
	INST_ILOAD(10);
	INST_ISTORE(7);
label_18:;
	{
	LINE_NUMBER(282);
	if ((frame[12].i) < (frame[2].i)) goto label_19;
	}
	INST_IINC(8, 1);
label_19:;
	{
	LINE_NUMBER(272);
	INST_IINC(10, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(286);
	if ((frame[7].i) == (jint(-1))) goto label_20;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_21;
	goto label_20;
label_21:;
	{
	LINE_NUMBER(289);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[5].i));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[1].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureRegion_getTexture_R_com_badlogic_gdx_graphics_Texture])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[1].o)));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	((func_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_draw_com_badlogic_gdx_graphics_Texture_Array1_float_int_int, sp[0].o))(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), ((frame[7].i) * (20)), ((frame[8].i) * (20)));
	}
label_20:;
	{
	LINE_NUMBER(267);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(291);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(294);
	if ((floatCompare((frame[2].f), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(295);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(296);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(299);
	frame[4].f = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a);
	LINE_NUMBER(300);
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[2].f));
	LINE_NUMBER(301);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(302);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(303);
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a = (frame[4].f);
	LINE_NUMBER(304);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:clear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(310);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pooledLayouts;
	((func_com_badlogic_gdx_utils_FlushablePool_flush) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FlushablePool_flush])(ctx, sp[0].o);
	LINE_NUMBER(312);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(313);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_glyphCount = (jint(0));
	LINE_NUMBER(314);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_7:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	((func_com_badlogic_gdx_utils_IntArray_clear) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_clear])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	}
label_10:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(0));
	LINE_NUMBER(314);
	INST_IINC(1, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(318);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requireGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:requireGlyphs", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(323);
	M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requirePageGlyphs_int_int(ctx, (frame[0].o), (jint(0)), ((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_glyphCount));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_tempGlyphCount;
	frame[2].o = sp[0].o;
	LINE_NUMBER(326);
	SM_java_util_Arrays_fill_Array1_int_int(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(328);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_8;
	}
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o))))->F_glyphs;
	frame[5].o = sp[0].o;
	LINE_NUMBER(330);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[5].o)))->F_items;
	frame[6].o = sp[0].o;
	LINE_NUMBER(331);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[5].o)))->F_size);
	}
label_13:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_14;
	}
	{
	LINE_NUMBER(332);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)))))))->F_page;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(331);
	INST_IINC(7, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(328);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(335);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_18:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(336);
	M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requirePageGlyphs_int_int(ctx, (frame[0].o), (frame[3].i), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(335);
	INST_IINC(3, 1);
	goto label_18;
	}
label_3:;
	LINE_NUMBER(338);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requirePageGlyphs_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:requirePageGlyphs", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(342);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_ensureCapacity_int_R_Array1_int])(ctx, sp[0].o, (temp0 - ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_size)));
	}
label_1:;
	{
	LINE_NUMBER(346);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[3].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) + ((frame[2].i) * (20)));
	LINE_NUMBER(347);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(348);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(350);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(352);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	sp[1].o = frame[5].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[1].i))));
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[5].o);
	}
label_8:;
	LINE_NUMBER(355);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPageCount_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setPageCount", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_float, 1), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(359);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	jint temp0 = jint(0);
	sp[1].o = frame[2].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(360);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices = (jref) (frame[2].o);
	LINE_NUMBER(362);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	jint temp2 = jint(0);
	sp[1].o = frame[3].o;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(364);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx = (jref) (frame[3].o);
	LINE_NUMBER(366);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_IntArray, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(367);
	frame[5].i = (jint(0));
	LINE_NUMBER(368);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(369);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	jint temp0 = jint(0);
	sp[1].o = frame[4].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	}
label_9:;
	{
	LINE_NUMBER(372);
	frame[6].i = (frame[5].i);
	}
label_12:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_13;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = frame[4].o;
	jint temp0 = frame[6].i;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(372);
	INST_IINC(6, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(374);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices = (jref) (frame[4].o);
	LINE_NUMBER(376);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[1].i));
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[0].o))->F_tempGlyphCount = (jref) sp[1].o;
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addToCache_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:addToCache", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(381);
	if ((frame[4].i) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK(sp[0].o))->F_regions;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK(sp[1].o))->F_regions;
	M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPageCount_int(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	}
label_3:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(387);
	M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requireGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_colors;
	frame[5].o = sp[0].o;
	LINE_NUMBER(390);
	frame[6].i = (jint(0));
	frame[7].i = (jint(0));
	frame[8].i = (jint(0));
	LINE_NUMBER(391);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(392);
	frame[10].i = (jint(0));
	}
label_11:;
	{
	if ((frame[10].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[10].i));
	frame[11].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(394);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_glyphs;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[12].o = sp[0].o;
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_xAdvances;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[13].o = sp[0].o;
	LINE_NUMBER(396);
	frame[14].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_x));
	frame[15].f = ((frame[3].f) + ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_y));
	LINE_NUMBER(397);
	frame[16].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[11].o)))->F_glyphs;
	frame[17].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_20:;
	{
	if ((frame[16].i) >= (frame[17].i)) goto label_21;
	}
	{
	LINE_NUMBER(398);
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	if (temp0 != (frame[7].i)) goto label_23;
	}
	{
	LINE_NUMBER(399);
	sp[0].o = frame[5].o;
	INST_IINC(6, 1);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (frame[6].i));
	jfloat temp1 = (jfloat)SM_com_badlogic_gdx_utils_NumberUtils_intToFloatColor_int_R_float(ctx, temp0);
	frame[9].f = temp1;
	LINE_NUMBER(400);
	INST_IINC(6, 1);
	if ((frame[6].i) >= ((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK((frame[5].o)))->F_size)) goto label_26;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, (frame[5].o), (frame[6].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_27;
	}
label_26:;
	INST_ICONST(-1);
label_27:;
	INST_ISTORE(7);
label_23:;
	{
	LINE_NUMBER(402);
	frame[14].f = ((frame[14].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), (frame[16].i))));
	LINE_NUMBER(403);
	M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addGlyph_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_float_float_float(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (frame[16].i))))), (frame[14].f), (frame[15].f), (frame[9].f));
	LINE_NUMBER(397);
	INST_IINC(16, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(392);
	INST_IINC(10, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(407);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_currentTint = (clinit_com_badlogic_gdx_graphics_Color(ctx), (jfloat)SF_com_badlogic_gdx_graphics_Color_WHITE_FLOAT_BITS);
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addGlyph_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:addGlyph", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK(sp[0].o))->F_data;
	frame[5].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_scaleX);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK(sp[0].o))->F_data;
	frame[6].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[0].o))->F_scaleY);
	LINE_NUMBER(412);
	frame[2].f = ((frame[2].f) + ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_xoffset))) * (frame[5].f)));
	LINE_NUMBER(413);
	frame[3].f = ((frame[3].f) + ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_yoffset))) * (frame[6].f)));
	LINE_NUMBER(414);
	frame[7].f = ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_width))) * (frame[5].f));
	frame[8].f = ((jfloat(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_height))) * (frame[6].f));
	LINE_NUMBER(415);
	frame[9].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_u);
	frame[10].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_u2);
	frame[11].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_v);
	frame[12].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(417);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_integer) == 0) goto label_11;
	}
	{
	LINE_NUMBER(418);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[2].f));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(419);
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[3].f));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(420);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[7].f));
	frame[7].f = (jfloat(temp2));
	LINE_NUMBER(421);
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[8].f));
	frame[8].f = (jfloat(temp3));
	}
label_11:;
	{
	LINE_NUMBER(423);
	frame[13].f = ((frame[2].f) + (frame[7].f));
	frame[14].f = ((frame[3].f) + (frame[8].f));
	LINE_NUMBER(425);
	frame[15].i = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_page);
	LINE_NUMBER(426);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[16].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[15].i)));
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	jint temp0 = frame[15].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (20));
	LINE_NUMBER(429);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i));
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[1].o))->F_glyphCount;
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK(sp[1].o))->F_glyphCount = (temp0 + (jint(1)));
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, temp0);
	}
label_21:;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)));
	LINE_NUMBER(432);
	sp[0].o = frame[17].o;
	jint temp0 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (frame[2].f);
	LINE_NUMBER(433);
	sp[0].o = frame[17].o;
	jint temp1 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (frame[3].f);
	LINE_NUMBER(434);
	sp[0].o = frame[17].o;
	jint temp2 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (frame[4].f);
	LINE_NUMBER(435);
	sp[0].o = frame[17].o;
	jint temp3 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (frame[9].f);
	LINE_NUMBER(436);
	sp[0].o = frame[17].o;
	jint temp4 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = (frame[11].f);
	LINE_NUMBER(438);
	sp[0].o = frame[17].o;
	jint temp5 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = (frame[2].f);
	LINE_NUMBER(439);
	sp[0].o = frame[17].o;
	jint temp6 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (frame[14].f);
	LINE_NUMBER(440);
	sp[0].o = frame[17].o;
	jint temp7 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = (frame[4].f);
	LINE_NUMBER(441);
	sp[0].o = frame[17].o;
	jint temp8 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = (frame[9].f);
	LINE_NUMBER(442);
	sp[0].o = frame[17].o;
	jint temp9 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (frame[12].f);
	LINE_NUMBER(444);
	sp[0].o = frame[17].o;
	jint temp10 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = (frame[13].f);
	LINE_NUMBER(445);
	sp[0].o = frame[17].o;
	jint temp11 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp11) = (frame[14].f);
	LINE_NUMBER(446);
	sp[0].o = frame[17].o;
	jint temp12 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = (frame[4].f);
	LINE_NUMBER(447);
	sp[0].o = frame[17].o;
	jint temp13 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp13) = (frame[10].f);
	LINE_NUMBER(448);
	sp[0].o = frame[17].o;
	jint temp14 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp14) = (frame[12].f);
	LINE_NUMBER(450);
	sp[0].o = frame[17].o;
	jint temp15 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp15) = (frame[13].f);
	LINE_NUMBER(451);
	sp[0].o = frame[17].o;
	jint temp16 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp16) = (frame[3].f);
	LINE_NUMBER(452);
	sp[0].o = frame[17].o;
	jint temp17 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp17) = (frame[4].f);
	LINE_NUMBER(453);
	sp[0].o = frame[17].o;
	jint temp18 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp18) = (frame[10].f);
	LINE_NUMBER(454);
	ARRAY_ACCESS(jfloat, (frame[17].o), (frame[16].i)) = (frame[11].f);
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setText", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(460);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(461);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jfloat(0)), (8), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setText", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(467);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].f), (frame[5].i), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setText", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(475);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(476);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setText", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(483);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i), (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setText", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(490);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(491);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(492);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:addText", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jfloat(0)), (8), (jint(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:addText", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].f), (frame[5].i), (frame[6].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:addText", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:addText", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pooledLayouts;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FlushablePool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(527);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[2].o = frame[1].o;
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_color;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, (frame[6].f), (frame[7].i), (frame[8].i), (frame[9].o));
	LINE_NUMBER(528);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float])(ctx, (frame[0].o), (frame[10].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:addText", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK(sp[2].o))->F_data;
	M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addToCache_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float(ctx, sp[0].o, sp[1].o, temp0, (temp1 + ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK(sp[2].o))->F_ascent)));
	LINE_NUMBER(536);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(540);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(545);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getFont", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_font;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setUseIntegerPositions_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:setUseIntegerPositions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(555);
	((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_integer = (frame[1].i);
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_usesIntegerPositions_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:usesIntegerPositions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_integer);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getPageCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getPageCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	popStackFrame(ctx);
	return (((jarray) nullCheck(ctx, sp[0].o))->length);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_int_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_int_R_Array1_float])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_int_R_Array1_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getVertices", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertexCount_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getVertexCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getLayouts_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:getLayouts", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/BitmapFontCache:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache(ctx);
	{
	LINE_NUMBER(37);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache(ctx);
	SF_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tempColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_BitmapFontCache[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPosition_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_translate_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tint_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setAlphas_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requireGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requirePageGlyphs_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPageCount_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addToCache_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addGlyph_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getX_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getY_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setUseIntegerPositions_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_usesIntegerPositions_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getPageCount_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_int_R_Array1_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertexCount_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getLayouts_R_com_badlogic_gdx_utils_Array,
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
	{ "setPosition", "(FF)V" },
	{ "translate", "(FF)V" },
	{ "tint", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setAlphas", "(F)V" },
	{ "setColors", "(F)V" },
	{ "setColors", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColors", "(FFFF)V" },
	{ "setColors", "(Lcom/badlogic/gdx/graphics/Color;II)V" },
	{ "setColors", "(FII)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;II)V" },
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "clear", "()V" },
	{ "requireGlyphs", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;)V" },
	{ "requirePageGlyphs", "(II)V" },
	{ "setPageCount", "(I)V" },
	{ "addToCache", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V" },
	{ "addGlyph", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;FFF)V" },
	{ "setText", "(Ljava/lang/CharSequence;FF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Ljava/lang/CharSequence;FFFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Ljava/lang/CharSequence;FFIIFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V" },
	{ "addText", "(Ljava/lang/CharSequence;FF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Ljava/lang/CharSequence;FFFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Ljava/lang/CharSequence;FFIIFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "getFont", "()Lcom/badlogic/gdx/graphics/g2d/BitmapFont;" },
	{ "setUseIntegerPositions", "(Z)V" },
	{ "usesIntegerPositions", "()Z" },
	{ "getPageCount", "()I" },
	{ "getVertices", "()[F" },
	{ "getVertices", "(I)[F" },
	{ "getVertexCount", "(I)I" },
	{ "getLayouts", "()Lcom/badlogic/gdx/utils/Array;" },
};

static FieldMetadata fields[] {
	{ "tempColor", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tempColor, "Lcom/badlogic/gdx/graphics/Color;", 26 },
	{ "font", &class_com_badlogic_gdx_graphics_g2d_BitmapFont, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_font), "Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 18 },
	{ "integer", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_integer), "Z", 2 },
	{ "layouts", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_layouts), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "pooledLayouts", &class_com_badlogic_gdx_utils_FlushablePool, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_pooledLayouts), "Lcom/badlogic/gdx/utils/FlushablePool;", 18 },
	{ "glyphCount", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_glyphCount), "I", 2 },
	{ "x", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_x), "F", 2 },
	{ "y", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_y), "F", 2 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_color), "Lcom/badlogic/gdx/graphics/Color;", 18 },
	{ "currentTint", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_currentTint), "F", 2 },
	{ "pageVertices", getArrayClass(&class_float, 2), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_pageVertices), "[[F", 2 },
	{ "idx", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_idx), "[I", 2 },
	{ "pageGlyphIndices", getArrayClass(&class_com_badlogic_gdx_utils_IntArray, 1), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_pageGlyphIndices), "[Lcom/badlogic/gdx/utils/IntArray;", 2 },
	{ "tempGlyphCount", getArrayClass(&class_int, 1), offsetof(com_badlogic_gdx_graphics_g2d_BitmapFontCache, F_tempGlyphCount), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFontCache_com_badlogic_gdx_graphics_g2d_BitmapFont, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_BitmapFontCache_com_badlogic_gdx_graphics_g2d_BitmapFont_boolean, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Z)V", 1 },
	{ "setPosition", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPosition_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPosition_float_float, "(FF)V", 1 },
	{ "translate", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_translate_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_translate_float_float, "(FF)V", 1 },
	{ "tint", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tint_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_tint_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setAlphas", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setAlphas_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setAlphas_float, "(F)V", 1 },
	{ "setColors", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float, "(F)V", 1 },
	{ "setColors", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setColors", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_float_float_float, "(FFFF)V", 1 },
	{ "setColors", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_com_badlogic_gdx_graphics_Color_int_int, "(Lcom/badlogic/gdx/graphics/Color;II)V", 1 },
	{ "setColors", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColors_float_int_int, "(FII)V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch, "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_int_int, "(Lcom/badlogic/gdx/graphics/g2d/Batch;II)V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_clear, "()V", 1 },
	{ "requireGlyphs", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requireGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requireGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;)V", 2 },
	{ "requirePageGlyphs", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requirePageGlyphs_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_requirePageGlyphs_int_int, "(II)V", 2 },
	{ "setPageCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPageCount_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setPageCount_int, "(I)V", 2 },
	{ "addToCache", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addToCache_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addToCache_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V", 2 },
	{ "addGlyph", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addGlyph_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_float_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addGlyph_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;FFF)V", 2 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V", 1 },
	{ "addText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FF)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZ)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_addText_com_badlogic_gdx_graphics_g2d_GlyphLayout_float_float, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout;FF)V", 1 },
	{ "getX", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getX_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getY_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getY_R_float, "()F", 1 },
	{ "getFont", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getFont_R_com_badlogic_gdx_graphics_g2d_BitmapFont, "()Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "setUseIntegerPositions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setUseIntegerPositions_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_setUseIntegerPositions_boolean, "(Z)V", 1 },
	{ "usesIntegerPositions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_usesIntegerPositions_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_usesIntegerPositions_R_boolean, "()Z", 1 },
	{ "getPageCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getPageCount_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getPageCount_R_int, "()I", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_R_Array1_float, "()[F", 1 },
	{ "getVertices", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_int_R_Array1_float, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertices_int_R_Array1_float, "(I)[F", 1 },
	{ "getVertexCount", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertexCount_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getVertexCount_int_R_int, "(I)I", 1 },
	{ "getLayouts", (intptr_t) M_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getLayouts_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFontCache_getLayouts_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_BitmapFontCache{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/BitmapFontCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_BitmapFontCache),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_BitmapFontCache,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_BitmapFontCache,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_BitmapFontCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 44,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_BitmapFontCache = registerClass(&class_com_badlogic_gdx_graphics_g2d_BitmapFontCache);

}

