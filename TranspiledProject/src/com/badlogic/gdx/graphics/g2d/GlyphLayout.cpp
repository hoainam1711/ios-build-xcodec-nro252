#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/DefaultPool.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_BitmapFontData.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/IntArray.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/FloatArray.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont_Glyph.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_1.h"
#include "java/lang/Enum.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_WrapState.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/Colors.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_invoke_com_badlogic_gdx_utils_DefaultPool_PoolSupplier_0.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/utils/DefaultPool_PoolSupplier.h"
#include "com/badlogic/gdx/utils/Justify.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
jobject SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
jfloat SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_epsilon;

void mark_com_badlogic_gdx_graphics_g2d_GlyphLayout(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_GlyphLayout *) object;
	if (self->F_runs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runs)->clazz)->markFunction)((jobject) self->F_runs, mark, depth + 1);
	if (self->F_colors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colors)->clazz)->markFunction)((jobject) self->F_colors, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(1)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(2)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_GlyphLayout_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(78);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(1)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(2)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(79);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_GlyphLayout_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(83);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(1)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(2)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(84);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].f), (frame[5].i), (frame[6].i));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_GlyphLayout_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:<init>", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(89);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(1)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_runs = (jref) sp[1].o;
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[1].o, (jint(2)));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_colors = (jref) sp[1].o;
	LINE_NUMBER(90);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].o), (frame[6].f), (frame[7].i), (frame[8].i), (frame[9].o));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:setText", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	sp[3].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_BitmapFont_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, (jfloat(0)), (8), (jint(0)), (jobject(nullptr)));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:setText", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[2].o)))(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, (frame[3].o), (frame[4].f), (frame[5].i), (frame[6].i), (jobject(nullptr)));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:setText", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[3].o = frame[5].o;
	jfloat temp2 = frame[6].f;
	jint temp3 = frame[7].i;
	jint temp4 = frame[8].i;
	clinit_com_badlogic_gdx_utils_Justify(ctx);
	sp[4].o = (jobject)SF_com_badlogic_gdx_utils_Justify_None;
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, temp2, temp3, temp4, sp[4].o, (frame[9].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8, jobject param9) {
	NULL_CHECK(self);
	jtype frame[36];
	auto stack = &frame[30];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:setText", 36 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	frame[10].o = param9;
	{
	LINE_NUMBER(130);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_reset])(ctx, (frame[0].o));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_BitmapFont *) NULL_CHECK((frame[1].o)))->F_data;
	frame[11].o = sp[0].o;
	LINE_NUMBER(133);
	if ((frame[3].i) != (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(134);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_height = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[11].o)))->F_capHeight);
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(139);
	if ((frame[8].i) == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[6].f), (((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[11].o)))->F_spaceXadvance) * (jfloat(3.0f))));
	frame[6].f = temp0;
	}
label_6:;
	{
	LINE_NUMBER(140);
	if ((frame[8].i) != 0) goto label_7;
	}
	INST_ALOAD(10);
	if ((--sp)->o == nullptr) goto label_8;
label_7:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[12].i = sp[0].i;
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, (frame[5].o));
	frame[13].i = temp0;
	frame[14].i = (frame[13].i);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_add_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int_int])(ctx, sp[0].o, (jint(0)), (frame[13].i));
	LINE_NUMBER(144);
	frame[15].i = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[11].o)))->F_markupEnabled);
	LINE_NUMBER(145);
	if ((frame[15].i) == 0) goto label_15;
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, (frame[13].i));
	}
label_15:;
	{
	LINE_NUMBER(147);
	frame[16].i = (jint(0));
	LINE_NUMBER(148);
	frame[17].f = (jfloat(0));
	frame[18].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[11].o)))->F_down);
	LINE_NUMBER(149);
	frame[19].o = (jobject(nullptr));
	LINE_NUMBER(150);
	frame[20].o = (jobject(nullptr));
	LINE_NUMBER(151);
	frame[21].i = (frame[3].i);
	}
label_21:;
	{
	LINE_NUMBER(155);
	frame[23].i = (jint(0));
	LINE_NUMBER(156);
	if ((frame[3].i) != (frame[4].i)) goto label_23;
	}
	{
	LINE_NUMBER(157);
	if ((frame[21].i) != (frame[4].i)) goto label_25;
	}
	goto label_26;
label_25:;
	{
	LINE_NUMBER(158);
	frame[22].i = (frame[4].i);
	LINE_NUMBER(159);
	frame[16].i = (jint(1));
	goto label_28;
	}
label_23:;
	{
	LINE_NUMBER(162);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, sp[0].o))(ctx, sp[0].o, temp0);
	switch(temp1) {
		case 10: goto label_29;
		case 91: goto label_30;
		default: goto label_31;
	}
	}
label_29:;
	{
	LINE_NUMBER(164);
	frame[22].i = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(165);
	frame[23].i = (jint(1));
	LINE_NUMBER(166);
	goto label_28;
	}
label_30:;
	{
	LINE_NUMBER(168);
	if ((frame[15].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_R_int(ctx, (frame[0].o), (frame[2].o), (frame[3].i), (frame[4].i));
	frame[24].i = temp0;
	LINE_NUMBER(170);
	if ((frame[24].i) < 0) goto label_36;
	}
	{
	LINE_NUMBER(171);
	frame[22].i = ((frame[3].i) - (jint(1)));
	LINE_NUMBER(172);
	frame[3].i = ((frame[3].i) + ((frame[24].i) + (jint(1))));
	LINE_NUMBER(173);
	if ((frame[3].i) != (frame[4].i)) goto label_40;
	}
	{
	LINE_NUMBER(174);
	frame[16].i = (jint(1));
	goto label_28;
	}
label_40:;
	{
	LINE_NUMBER(176);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_peek_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_peek_R_int])(ctx, sp[0].o);
	frame[14].i = temp0;
	LINE_NUMBER(177);
	goto label_28;
	}
label_36:;
	{
	LINE_NUMBER(179);
	if ((frame[24].i) != (-2)) goto label_31;
	}
	INST_IINC(3, 1);
label_31:;
	LINE_NUMBER(183);
	goto label_21;
label_28:;
	{
	LINE_NUMBER(190);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[24].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(191);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[24].o)))->F_x = (jfloat(0));
	LINE_NUMBER(192);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[24].o)))->F_y = (frame[17].f);
	LINE_NUMBER(193);
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, (frame[11].o), (frame[24].o), (frame[2].o), (frame[21].i), (frame[22].i), (frame[20].o));
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[24].o)))->F_glyphs;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount = (temp0 + ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(196);
	if ((frame[14].i) == (frame[13].i)) goto label_48;
	}
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))));
	if (temp0 != ((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount)) goto label_50;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_set_int_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))), (frame[14].i));
	goto label_52;
	}
label_50:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, (frame[14].i));
	}
label_52:;
	{
	LINE_NUMBER(204);
	frame[13].i = (frame[14].i);
	}
label_48:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[24].o)))->F_glyphs;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_54;
	}
	{
	LINE_NUMBER(208);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (frame[24].o));
	LINE_NUMBER(209);
	if ((frame[19].o) != nullptr) goto label_57;
	}
	goto label_58;
label_54:;
	{
	LINE_NUMBER(210);
	if ((frame[19].o) != nullptr) goto label_59;
	}
	{
	LINE_NUMBER(211);
	frame[19].o = (frame[24].o);
	LINE_NUMBER(212);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[19].o));
	goto label_57;
	}
label_59:;
	{
	LINE_NUMBER(214);
	((func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_appendRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun])(ctx, (frame[19].o), (frame[24].o));
	LINE_NUMBER(215);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (frame[24].o));
	}
label_57:;
	{
	LINE_NUMBER(218);
	if ((frame[23].i) != 0) goto label_63;
	}
	INST_ILOAD(16);
	if ((--sp)->i == 0) goto label_64;
label_63:;
	{
	LINE_NUMBER(219);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[11].o), (frame[19].o));
	LINE_NUMBER(220);
	frame[20].o = (jobject(nullptr));
	goto label_66;
	}
label_64:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_glyphs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[20].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[0].o));
	}
label_66:;
	{
	LINE_NUMBER(224);
	if ((frame[12].i) == 0) goto label_58;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_glyphs;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_67;
	}
	goto label_58;
label_67:;
	{
	LINE_NUMBER(226);
	if ((frame[23].i) != 0) goto label_68;
	}
	INST_ILOAD(16);
	if ((--sp)->i == 0) goto label_58;
label_68:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_xAdvances;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_first_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_first_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_xAdvances;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[0].o, (jint(1)));
	frame[25].f = (temp0 + temp1);
	LINE_NUMBER(229);
	frame[26].i = (jint(2));
	}
label_70:;
	{
	jint temp0 = frame[26].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_xAdvances;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size)) goto label_58;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_glyphs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[26].i) - (jint(1))));
	frame[27].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[0].o));
	LINE_NUMBER(231);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getGlyphWidth_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float(ctx, (frame[0].o), (frame[27].o), (frame[11].o));
	frame[28].f = temp0;
	LINE_NUMBER(232);
	if ((floatCompare((((frame[25].f) + (frame[28].f)) - (jfloat(1.000000e-04f))), (frame[6].f), 1)) > 0) goto label_74;
	}
	{
	LINE_NUMBER(234);
	jfloat temp0 = frame[25].f;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_xAdvances;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[25].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[26].i))));
	LINE_NUMBER(235);
	goto label_77;
	}
label_74:;
	{
	LINE_NUMBER(238);
	if ((frame[10].o) == nullptr) goto label_78;
	}
	{
	LINE_NUMBER(240);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_truncate_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String(ctx, (frame[0].o), (frame[11].o), (frame[19].o), (frame[6].f), (frame[10].o));
	LINE_NUMBER(241);
	goto label_26;
	}
label_78:;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_glyphs;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getWrapIndex_com_badlogic_gdx_utils_Array_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getWrapIndex_com_badlogic_gdx_utils_Array_int_R_int])(ctx, sp[0].o, sp[1].o, (frame[26].i));
	frame[29].i = temp0;
	LINE_NUMBER(246);
	if ((frame[29].i) != 0) goto label_82;
	}
	{
	if ((floatCompare(((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_x), (jfloat(0)), -1)) == 0) goto label_83;
	}
label_82:;
	{
	jint temp0 = frame[29].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_glyphs;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_84;
	}
label_83:;
	{
	LINE_NUMBER(248);
	frame[29].i = ((frame[26].i) - (jint(1)));
	}
label_84:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_GlyphLayout_wrap_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_int_R_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[11].o), (frame[19].o), (frame[29].i));
	frame[19].o = sp[0].o;
	LINE_NUMBER(251);
	if ((frame[19].o) != nullptr) goto label_86;
	}
	goto label_58;
label_86:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[19].o));
	LINE_NUMBER(254);
	frame[17].f = ((frame[17].f) + (frame[18].f));
	LINE_NUMBER(255);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_x = (jfloat(0));
	LINE_NUMBER(256);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_y = (frame[17].f);
	LINE_NUMBER(259);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_xAdvances;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_first_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_first_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[19].o)))->F_xAdvances;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_utils_FloatArray_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_get_int_R_float])(ctx, sp[0].o, (jint(1)));
	frame[25].f = (temp0 + temp1);
	LINE_NUMBER(260);
	frame[26].i = (jint(1));
	}
label_77:;
	{
	LINE_NUMBER(229);
	INST_IINC(26, 1);
	goto label_70;
	}
label_58:;
	{
	LINE_NUMBER(265);
	if ((frame[23].i) == 0) goto label_92;
	}
	{
	LINE_NUMBER(266);
	frame[19].o = (jobject(nullptr));
	LINE_NUMBER(267);
	frame[20].o = (jobject(nullptr));
	LINE_NUMBER(270);
	if ((frame[22].i) != (frame[21].i)) goto label_96;
	}
	{
	LINE_NUMBER(271);
	frame[17].f = ((frame[17].f) + ((frame[18].f) * ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[11].o)))->F_blankLineScale)));
	goto label_92;
	}
label_96:;
	{
	LINE_NUMBER(273);
	frame[17].f = ((frame[17].f) + (frame[18].f));
	}
label_92:;
	{
	LINE_NUMBER(276);
	frame[21].i = (frame[3].i);
	LINE_NUMBER(277);
	goto label_21;
	}
label_26:;
	{
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[11].o)))->F_capHeight;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[17].f));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_height = (temp0 + temp1);
	LINE_NUMBER(281);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_calculateWidthsAndJustify_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_float_com_badlogic_gdx_utils_Justify(ctx, (frame[0].o), (frame[11].o), (frame[6].f), (frame[9].o));
	LINE_NUMBER(283);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_alignRuns_float_int(ctx, (frame[0].o), (frame[6].f), (frame[7].i));
	LINE_NUMBER(286);
	if ((frame[15].i) == 0) goto label_102;
	}
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	(sp++)->o = SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_utils_IntArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_clear])(ctx, sp[0].o);
label_102:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_calculateWidthsAndJustify_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_float_com_badlogic_gdx_utils_Justify(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:calculateWidthsAndJustify", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(291);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(293);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_5;
	}
	{
	LINE_NUMBER(294);
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))));
	LINE_NUMBER(295);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_xAdvances;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[9].o = sp[0].o;
	LINE_NUMBER(296);
	frame[10].f = (((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_x) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (jint(0)))));
	frame[11].f = (jfloat(0));
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_glyphs;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[12].o = sp[0].o;
	LINE_NUMBER(298);
	frame[13].i = (jint(0));
	LINE_NUMBER(299);
	frame[14].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_glyphs;
	frame[15].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_14:;
	{
	LINE_NUMBER(300);
	frame[16].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (frame[14].i)))));
	LINE_NUMBER(301);
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getGlyphWidth_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float(ctx, (frame[0].o), (frame[16].o), (frame[1].o));
	frame[17].f = temp0;
	LINE_NUMBER(302);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[11].f), ((frame[10].f) + (frame[17].f)));
	frame[11].f = temp1;
	LINE_NUMBER(303);
	INST_IINC(14, 1);
	LINE_NUMBER(304);
	frame[10].f = ((frame[10].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (frame[14].i))));
	LINE_NUMBER(305);
	if ((frame[14].i) < (frame[15].i)) goto label_20;
	}
	goto label_21;
label_20:;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean])(ctx, (frame[3].o), ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[16].o)))->F_id));
	if (temp0 == 0) goto label_22;
	}
	INST_IINC(13, 1);
label_22:;
	LINE_NUMBER(308);
	goto label_14;
label_21:;
	{
	LINE_NUMBER(309);
	sp[0].o = frame[8].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[10].f), (frame[11].f));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_width = (temp0 - ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_x));
	LINE_NUMBER(310);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_justifyRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_int_com_badlogic_gdx_utils_Justify(ctx, (frame[0].o), (frame[8].o), (frame[2].f), (frame[13].i), (frame[3].o));
	LINE_NUMBER(311);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[4].f), (((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_x) + ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_width)));
	frame[4].f = temp1;
	LINE_NUMBER(293);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(313);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_width = (frame[4].f);
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_justifyRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_int_com_badlogic_gdx_utils_Justify(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:justifyRun", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(317);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_wrapState;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_GlyphLayout_shouldJustify_com_badlogic_gdx_utils_Justify_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(319);
	frame[5].f = ((frame[2].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_width));
	LINE_NUMBER(320);
	if ((floatCompare((frame[5].f), (jfloat(0)), 1)) > 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(321);
	frame[5].f = ((frame[5].f) / (jfloat((frame[3].i))));
	LINE_NUMBER(323);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_xAdvances;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[6].o = sp[0].o;
	LINE_NUMBER(324);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_glyphs;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[7].o = sp[0].o;
	LINE_NUMBER(325);
	frame[8].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_glyphs;
	frame[9].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_10;
	}
	{
	LINE_NUMBER(326);
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)))));
	LINE_NUMBER(327);
	INST_IINC(8, 1);
	LINE_NUMBER(328);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_matchChar_int_R_boolean])(ctx, (frame[4].o), ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[10].o)))->F_id));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[8].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[5].f));
	}
label_14:;
	LINE_NUMBER(329);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(330);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[1].o)))->F_width = (frame[2].f);
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_graphics_g2d_GlyphLayout_shouldJustify_com_badlogic_gdx_utils_Justify_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:shouldJustify", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(334);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$1_$SwitchMap$com$badlogic$gdx$utils$Justify;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Justify_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Justify_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_2;
		case 4: goto label_2;
		case 5: goto label_3;
		case 6: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_alignRuns_float_int(jcontext ctx, jobject self, jfloat param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:alignRuns", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(351);
	if (((frame[2].i) & (8)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(352);
	if (((frame[2].i) & (jint(1))) == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(353);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(354);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_1;
	}
	{
	LINE_NUMBER(355);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)))));
	LINE_NUMBER(356);
	sp[0].o = frame[7].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].f = temp0;
	sp += 2;
	if ((frame[3].i) == 0) goto label_11;
	}
	{
	jfloat temp0 = (jfloat(0.5f)) * ((frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_width));
	sp[0].f = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	{
	jfloat temp0 = (frame[1].f) - ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_width);
	sp[0].f = temp0;
	sp += 1;
	}
label_12:;
	{
	sp -= 3;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_x = (sp[1].f + sp[2].f);
	LINE_NUMBER(354);
	INST_IINC(5, 1);
	goto label_8;
	}
label_1:;
	LINE_NUMBER(359);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_truncate_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:truncate", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(366);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(367);
	sp[0].o = frame[1].o;
	sp[1].o = frame[6].o;
	sp[2].o = frame[4].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_getGlyphs_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, (jobject(nullptr)));
	LINE_NUMBER(368);
	frame[7].f = (jfloat(0));
	LINE_NUMBER(369);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_xAdvances;
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(370);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[1].o), (frame[6].o));
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_xAdvances;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[8].o = sp[0].o;
	LINE_NUMBER(372);
	frame[9].i = (jint(1));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_xAdvances;
	frame[10].i = ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size);
	}
label_10:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_5;
	}
	{
	LINE_NUMBER(373);
	frame[7].f = ((frame[7].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), (frame[9].i))));
	LINE_NUMBER(372);
	INST_IINC(9, 1);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(375);
	frame[3].f = ((frame[3].f) - (frame[7].f));
	LINE_NUMBER(378);
	frame[8].i = (jint(0));
	LINE_NUMBER(379);
	frame[9].f = ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_x);
	LINE_NUMBER(380);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	frame[10].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(381);
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size)) goto label_17;
	}
	{
	LINE_NUMBER(382);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (frame[8].i)));
	LINE_NUMBER(383);
	frame[9].f = ((frame[9].f) + (frame[11].f));
	LINE_NUMBER(384);
	if ((floatCompare((frame[9].f), (frame[3].f), -1)) <= 0) goto label_21;
	}
	goto label_17;
label_21:;
	{
	LINE_NUMBER(385);
	INST_IINC(8, 1);
	LINE_NUMBER(386);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(388);
	if ((frame[8].i) <= (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_truncate_int])(ctx, sp[0].o, ((frame[8].i) - (jint(1))));
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	((func_com_badlogic_gdx_utils_FloatArray_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_truncate_int])(ctx, sp[0].o, (frame[8].i));
	LINE_NUMBER(392);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_xAdvances;
	if (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_xAdvances;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_xAdvances;
	((func_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray_int_int])(ctx, sp[0].o, sp[1].o, temp0, (((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[2].o))->F_size) - (jint(1))));
	goto label_28;
	}
label_23:;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(397);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	((func_com_badlogic_gdx_utils_FloatArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(398);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_xAdvances;
	((func_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	{
	LINE_NUMBER(401);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	frame[11].i = (temp0 - ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size));
	LINE_NUMBER(402);
	if ((frame[11].i) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount = (((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount) - (frame[11].i));
	LINE_NUMBER(404);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_markupEnabled) == 0) goto label_32;
	}
label_35:;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) <= (jint(2))) goto label_32;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))));
	if (temp0 < ((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount)) goto label_32;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) - (jint(2)));
	goto label_35;
	}
label_32:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[6].o)))->F_glyphs;
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount = (temp0 + temp1);
	LINE_NUMBER(413);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_GlyphLayout_wrap_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_int_R_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:wrap", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_wrapState = (jref) sp[1].o;
	LINE_NUMBER(420);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	frame[4].o = sp[0].o;
	LINE_NUMBER(421);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	frame[6].o = sp[0].o;
	LINE_NUMBER(425);
	frame[7].i = (frame[3].i);
	}
label_5:;
	{
	LINE_NUMBER(426);
	if ((frame[7].i) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[4].o), ((frame[7].i) - (jint(1))));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean])(ctx, sp[0].o, (jchar(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[1].o))))->F_id))));
	if (temp0 != 0) goto label_8;
	}
	goto label_6;
label_8:;
	{
	LINE_NUMBER(426);
	INST_IINC(7, -1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(430);
	frame[8].i = (frame[3].i);
	}
label_9:;
	{
	LINE_NUMBER(431);
	if ((frame[8].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(432);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[8].i));
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_isWhitespace_char_R_boolean])(ctx, sp[0].o, (jchar(((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[1].o))))->F_id))));
	if (temp0 != 0) goto label_12;
	}
	goto label_10;
label_12:;
	{
	LINE_NUMBER(431);
	INST_IINC(8, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(436);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(437);
	if ((frame[8].i) >= (frame[5].i)) goto label_14;
	}
	{
	LINE_NUMBER(438);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[9].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(439);
	sp[0].o = frame[9].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK(sp[0].o))->F_wrapState = (jref) sp[1].o;
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_glyphs;
	frame[10].o = sp[0].o;
	LINE_NUMBER(442);
	((func_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_addAll_com_badlogic_gdx_utils_Array_int_int])(ctx, (frame[10].o), (frame[4].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(443);
	((func_com_badlogic_gdx_utils_Array_removeRange_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeRange_int_int])(ctx, (frame[4].o), (jint(0)), ((frame[8].i) - (jint(1))));
	LINE_NUMBER(444);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs = (jref) (frame[10].o);
	LINE_NUMBER(445);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_glyphs = (jref) (frame[4].o);
	LINE_NUMBER(447);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_xAdvances;
	frame[11].o = sp[0].o;
	LINE_NUMBER(448);
	((func_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray_int_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_addAll_com_badlogic_gdx_utils_FloatArray_int_int])(ctx, (frame[11].o), (frame[6].o), (jint(0)), ((frame[7].i) + (jint(1))));
	LINE_NUMBER(449);
	((func_com_badlogic_gdx_utils_FloatArray_removeRange_int_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_removeRange_int_int])(ctx, (frame[6].o), (jint(1)), (frame[8].i));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK((frame[6].o)))->F_items;
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getLineOffset_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float(ctx, (frame[0].o), (frame[4].o), (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(451);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances = (jref) (frame[11].o);
	LINE_NUMBER(452);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_xAdvances = (jref) (frame[6].o);
	LINE_NUMBER(454);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	frame[12].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(455);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_glyphs;
	frame[13].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(456);
	frame[14].i = (((frame[5].i) - (frame[12].i)) - (frame[13].i));
	LINE_NUMBER(457);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount = (((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount) - (frame[14].i));
	LINE_NUMBER(459);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_markupEnabled) == 0) goto label_33;
	}
	INST_ILOAD(14);
	if ((--sp)->i <= 0) goto label_33;
	{
	LINE_NUMBER(460);
	frame[15].i = (((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount) - (frame[13].i));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	frame[16].i = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) - (jint(2)));
	}
label_36:;
	{
	if ((frame[16].i) < (jint(2))) goto label_33;
	}
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (frame[16].i));
	frame[17].i = temp0;
	LINE_NUMBER(463);
	if ((frame[17].i) > (frame[15].i)) goto label_39;
	}
	goto label_33;
label_39:;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_set_int_int])(ctx, sp[0].o, (frame[16].i), ((frame[17].i) - (frame[14].i)));
	LINE_NUMBER(461);
	INST_IINC(16, -2);
	goto label_36;
	}
label_33:;
	LINE_NUMBER(467);
	goto label_41;
label_14:;
	{
	LINE_NUMBER(469);
	((func_com_badlogic_gdx_utils_Array_truncate_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_truncate_int])(ctx, (frame[4].o), (frame[7].i));
	LINE_NUMBER(470);
	((func_com_badlogic_gdx_utils_FloatArray_truncate_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_utils_FloatArray_truncate_int])(ctx, (frame[6].o), ((frame[7].i) + (jint(1))));
	LINE_NUMBER(472);
	frame[10].i = ((frame[8].i) - (frame[7].i));
	LINE_NUMBER(473);
	if ((frame[10].i) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount = (((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK(sp[0].o))->F_glyphCount) - (frame[10].i));
	LINE_NUMBER(475);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[1].o)))->F_markupEnabled) == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))));
	if (temp0 <= ((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount)) goto label_41;
	}
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_peek_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_peek_R_int])(ctx, sp[0].o);
	frame[11].i = temp0;
	}
label_48:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_get_int_R_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))));
	if (temp0 <= ((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount)) goto label_49;
	}
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size = (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) - (jint(2)));
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_set_int_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(2))), ((jint)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_set_int_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))), (frame[11].i));
	}
label_41:;
	{
	LINE_NUMBER(486);
	if ((frame[7].i) != 0) goto label_52;
	}
	{
	LINE_NUMBER(488);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_pop_R_java_lang_Object])(ctx, sp[0].o);
	goto label_55;
	}
label_52:;
	{
	LINE_NUMBER(491);
	M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_55:;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:setLastGlyphXAdvance", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_glyphs;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[0].o));
	LINE_NUMBER(499);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[3].o)))->F_fixedWidth) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[2].o)))->F_xAdvances;
	jint temp0 = ((jint)((com_badlogic_gdx_utils_FloatArray *) NULL_CHECK(sp[1].o))->F_size) - (jint(1));
	jfloat temp1 = (jfloat)M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getGlyphWidth_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float(ctx, (frame[0].o), (frame[3].o), (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	}
label_2:;
	LINE_NUMBER(500);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getGlyphWidth_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:getGlyphWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(504);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_fixedWidth) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_xadvance;
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_width) + ((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[1].o)))->F_xoffset);
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	popStackFrame(ctx);
	return (((jfloat(sp[0].i)) * ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_scaleX)) - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_padRight));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getLineOffset_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:getLineOffset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph, sp[0].o));
	LINE_NUMBER(510);
	if (((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[3].o)))->F_fixedWidth) == 0) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	{
	jfloat temp0 = (jfloat((-((jint)((com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph *) NULL_CHECK((frame[3].o)))->F_xoffset)))) * ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_scaleX);
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	popStackFrame(ctx);
	return (sp[0].f - ((jfloat)((com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData *) NULL_CHECK((frame[2].o)))->F_padLeft));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:parseColorMarkup", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(514);
	if ((frame[2].i) != (frame[3].i)) goto label_1;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(515);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i));
	switch(temp0) {
		case 35: goto label_2;
		case 91: goto label_3;
		case 93: goto label_4;
		default: goto label_5;
	}
	}
label_2:;
	{
	LINE_NUMBER(518);
	frame[4].i = (jint(0));
	LINE_NUMBER(519);
	frame[5].i = ((frame[2].i) + (jint(1)));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(520);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(521);
	if ((frame[6].i) != (93)) goto label_11;
	}
	{
	LINE_NUMBER(522);
	if ((frame[5].i) < ((frame[2].i) + (jint(2)))) goto label_8;
	}
	{
	if ((frame[5].i) <= ((frame[2].i) + (9))) goto label_13;
	}
	goto label_8;
label_13:;
	{
	LINE_NUMBER(523);
	if (((frame[5].i) - (frame[2].i)) >= (8)) goto label_14;
	}
	{
	frame[4].i = (((frame[4].i) << (((9) - ((frame[5].i) - (frame[2].i))) << (jint(2)))) | (255));
	}
label_14:;
	{
	LINE_NUMBER(524);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
	jint temp0 = (jint)SM_java_lang_Integer_reverseBytes_int_R_int(ctx, (frame[4].i));
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[2].i));
	}
label_11:;
	{
	LINE_NUMBER(527);
	frame[4].i = (((frame[4].i) << (jint(4))) + (frame[6].i));
	LINE_NUMBER(528);
	if ((frame[6].i) < (48)) goto label_17;
	}
	{
	if ((frame[6].i) > (57)) goto label_17;
	}
	{
	LINE_NUMBER(529);
	INST_IINC(4, -48);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(530);
	if ((frame[6].i) < (65)) goto label_20;
	}
	{
	if ((frame[6].i) > (70)) goto label_20;
	}
	{
	LINE_NUMBER(531);
	INST_IINC(4, -55);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(532);
	if ((frame[6].i) < (97)) goto label_8;
	}
	{
	if ((frame[6].i) > (102)) goto label_8;
	}
	LINE_NUMBER(533);
	INST_IINC(4, -87);
label_19:;
	{
	LINE_NUMBER(519);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(537);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (-2);
	}
label_4:;
	{
	LINE_NUMBER(541);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
	if (((jint)((com_badlogic_gdx_utils_IntArray *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_23;
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_IntArray_pop_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_pop_R_int])(ctx, sp[0].o);
	}
label_23:;
	{
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(545);
	frame[4].i = ((frame[2].i) + (jint(1)));
	}
label_24:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_25;
	}
	{
	LINE_NUMBER(546);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(547);
	if ((frame[5].i) == (93)) goto label_28;
	}
	goto label_29;
label_28:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[4].i));
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Colors_get_java_lang_String_R_com_badlogic_gdx_graphics_Color(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(549);
	if ((frame[6].o) != nullptr) goto label_31;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_31:;
	{
	LINE_NUMBER(550);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Color_toIntBits_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_toIntBits_R_int])(ctx, (frame[6].o));
	((func_com_badlogic_gdx_utils_IntArray_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return ((frame[4].i) - (frame[2].i));
	}
label_29:;
	{
	LINE_NUMBER(545);
	INST_IINC(4, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_GlyphLayout_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(557);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	((func_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(558);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(559);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_colors;
	((func_com_badlogic_gdx_utils_IntArray_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IntArray_clear])(ctx, sp[0].o);
	LINE_NUMBER(560);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_glyphCount = (jint(0));
	LINE_NUMBER(561);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(0));
	LINE_NUMBER(562);
	((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(0));
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_GlyphLayout_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(567);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (128));
	frame[1].o = sp[0].o;
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (120));
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(572);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_8:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(573);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[0].o)))->F_runs;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[1].o)))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, sp[1].o)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(572);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(576);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_epsilon = jfloat(1.000000e-04f);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	{
	LINE_NUMBER(49);
	clinit_com_badlogic_gdx_utils_DefaultPool(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_DefaultPool);
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g2d_GlyphLayout_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout_invoke_com_badlogic_gdx_utils_DefaultPool$PoolSupplier_0);
		sp[1].o = (jobject) proxy;
	}
	init_com_badlogic_gdx_utils_DefaultPool_com_badlogic_gdx_utils_DefaultPool$PoolSupplier(ctx, sp[0].o, sp[1].o);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool = sp[0].o;
	LINE_NUMBER(50);
	clinit_com_badlogic_gdx_utils_IntArray(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IntArray);
	init_com_badlogic_gdx_utils_IntArray_int(ctx, sp[0].o, (jint(4)));
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout(ctx);
	SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_GlyphLayout[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_reset,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_calculateWidthsAndJustify_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_float_com_badlogic_gdx_utils_Justify,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_justifyRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_int_com_badlogic_gdx_utils_Justify,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_alignRuns_float_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_truncate_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_wrap_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_int_R_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getGlyphWidth_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getLineOffset_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float,
	(void *) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_R_int,
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
	{ "reset", "()V" },
	{ "setText", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;)V" },
	{ "setText", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;Lcom/badlogic/gdx/graphics/Color;FIZ)V" },
	{ "setText", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/Color;FIZLjava/lang/String;)V" },
	{ "setText", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/Color;FIZLcom/badlogic/gdx/utils/Justify;Ljava/lang/String;)V" },
	{ "calculateWidthsAndJustify", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;FLcom/badlogic/gdx/utils/Justify;)V" },
	{ "justifyRun", "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;FILcom/badlogic/gdx/utils/Justify;)V" },
	{ "alignRuns", "(FI)V" },
	{ "truncate", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;FLjava/lang/String;)V" },
	{ "wrap", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;I)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;" },
	{ "setLastGlyphXAdvance", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;)V" },
	{ "getGlyphWidth", "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;)F" },
	{ "getLineOffset", "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;)F" },
	{ "parseColorMarkup", "(Ljava/lang/CharSequence;II)I" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Pool$Poolable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun,
	&class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState,
};

static FieldMetadata fields[] {
	{ "glyphRunPool", &class_com_badlogic_gdx_utils_Pool, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_glyphRunPool, "Lcom/badlogic/gdx/utils/Pool;", 26 },
	{ "colorStack", &class_com_badlogic_gdx_utils_IntArray, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_colorStack, "Lcom/badlogic/gdx/utils/IntArray;", 26 },
	{ "epsilon", &class_float, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_GlyphLayout_epsilon, "F", 26 },
	{ "runs", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout, F_runs), "Lcom/badlogic/gdx/utils/Array;", 17 },
	{ "colors", &class_com_badlogic_gdx_utils_IntArray, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout, F_colors), "Lcom/badlogic/gdx/utils/IntArray;", 17 },
	{ "glyphCount", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout, F_glyphCount), "I", 1 },
	{ "width", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout, F_width), "F", 1 },
	{ "height", &class_float, offsetof(com_badlogic_gdx_graphics_g2d_GlyphLayout, F_height), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_GlyphLayout, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_GlyphLayout_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_GlyphLayout_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;Lcom/badlogic/gdx/graphics/Color;FIZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_GlyphLayout_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String, 0, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/Color;FIZLjava/lang/String;)V", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;)V", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_com_badlogic_gdx_graphics_Color_float_int_boolean, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;Lcom/badlogic/gdx/graphics/Color;FIZ)V", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_java_lang_String, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/Color;FIZLjava/lang/String;)V", 1 },
	{ "setText", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setText_com_badlogic_gdx_graphics_g2d_BitmapFont_java_lang_CharSequence_int_int_com_badlogic_gdx_graphics_Color_float_int_boolean_com_badlogic_gdx_utils_Justify_java_lang_String, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont;Ljava/lang/CharSequence;IILcom/badlogic/gdx/graphics/Color;FIZLcom/badlogic/gdx/utils/Justify;Ljava/lang/String;)V", 1 },
	{ "calculateWidthsAndJustify", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_calculateWidthsAndJustify_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_float_com_badlogic_gdx_utils_Justify, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_calculateWidthsAndJustify_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_float_com_badlogic_gdx_utils_Justify, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;FLcom/badlogic/gdx/utils/Justify;)V", 2 },
	{ "justifyRun", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_justifyRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_int_com_badlogic_gdx_utils_Justify, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_justifyRun_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_int_com_badlogic_gdx_utils_Justify, "(Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;FILcom/badlogic/gdx/utils/Justify;)V", 2 },
	{ "shouldJustify", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_GlyphLayout_shouldJustify_com_badlogic_gdx_utils_Justify_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_R_boolean, 0, "(Lcom/badlogic/gdx/utils/Justify;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;)Z", 10 },
	{ "alignRuns", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_alignRuns_float_int, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_alignRuns_float_int, "(FI)V", 2 },
	{ "truncate", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_truncate_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_truncate_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;FLjava/lang/String;)V", 2 },
	{ "wrap", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_wrap_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_int_R_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_wrap_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun_int_R_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;I)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;", 2 },
	{ "setLastGlyphXAdvance", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_setLastGlyphXAdvance_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_com_badlogic_gdx_graphics_g2d_GlyphLayout$GlyphRun, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$GlyphRun;)V", 2 },
	{ "getGlyphWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getGlyphWidth_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_getGlyphWidth_com_badlogic_gdx_graphics_g2d_BitmapFont$Glyph_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float, "(Lcom/badlogic/gdx/graphics/g2d/BitmapFont$Glyph;Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;)F", 2 },
	{ "getLineOffset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_getLineOffset_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_getLineOffset_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_g2d_BitmapFont$BitmapFontData_R_float, "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/graphics/g2d/BitmapFont$BitmapFontData;)F", 2 },
	{ "parseColorMarkup", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_R_int, "(Ljava/lang/CharSequence;II)I", 2 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_reset, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_reset, "()V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_GlyphLayout_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_GlyphLayout_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_GlyphLayout{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/GlyphLayout",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_GlyphLayout),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_GlyphLayout,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_GlyphLayout,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_GlyphLayout = registerClass(&class_com_badlogic_gdx_graphics_g2d_GlyphLayout);

}

