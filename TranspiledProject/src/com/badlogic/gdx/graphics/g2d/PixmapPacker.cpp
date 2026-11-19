#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Bounds.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "java/util/regex/Matcher.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "java/io/PrintStream.h"
#include "java/nio/ByteBuffer.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "java/nio/Buffer.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/utils/OrderedMap.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PackStrategy.h"
#include "com/badlogic/gdx/utils/ObjectSet.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/Texture_TextureFilter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PixmapPackerRectangle.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "com/badlogic/gdx/graphics/GLTexture.h"
#include "com/badlogic/gdx/utils/Array_ArrayIterator.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_PixmapPacker_indexPattern;

void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_PixmapPacker_indexPattern)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_PixmapPacker_indexPattern)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_PixmapPacker_indexPattern, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker *) object;
	if (self->F_pageFormat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pageFormat)->clazz)->markFunction)((jobject) self->F_pageFormat, mark, depth + 1);
	if (self->F_transparentColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transparentColor)->clazz)->markFunction)((jobject) self->F_transparentColor, mark, depth + 1);
	if (self->F_pages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pages)->clazz)->markFunction)((jobject) self->F_pages, mark, depth + 1);
	if (self->F_packStrategy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packStrategy)->clazz)->markFunction)((jobject) self->F_packStrategy, mark, depth + 1);
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = frame[3].o;
	jint temp2 = frame[4].i;
	jint temp3 = frame[5].i;
	jint temp4 = jint(0);
	jint temp5 = jint(0);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx, sp[2].o);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean_boolean_boolean_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, temp3, temp4, temp5, sp[2].o);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(124);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean_boolean_boolean_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].i), (jint(0)), (jint(0)), (frame[6].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean_boolean_boolean_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jbool param4, jbool param5, jbool param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(135);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(108);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK(sp[0].o))->F_transparentColor = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK(sp[0].o))->F_pages = (jref) sp[1].o;
	LINE_NUMBER(815);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK(sp[0].o))->F_c = (jref) sp[1].o;
	LINE_NUMBER(136);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth = (frame[1].i);
	LINE_NUMBER(137);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight = (frame[2].i);
	LINE_NUMBER(138);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageFormat = (jref) (frame[3].o);
	LINE_NUMBER(139);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_padding = (frame[4].i);
	LINE_NUMBER(140);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder = (frame[5].i);
	LINE_NUMBER(141);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceX = (frame[6].i);
	LINE_NUMBER(142);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceY = (frame[7].i);
	LINE_NUMBER(143);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packStrategy = (jref) (frame[8].o);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_sort_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packStrategy;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy_sort_com_badlogic_gdx_utils_Array) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy, INDEX_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy_sort_com_badlogic_gdx_utils_Array, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:pack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_java_lang_String_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_java_lang_String_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_java_lang_String_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:pack", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(165);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, self);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(166);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(167);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Pixmap has already been packed with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(170);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(171);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8".9"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(172);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle);
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp3 = temp2 - (jint(2));
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp3, (temp4 - (jint(2))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(173);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp6 = temp5 - (jint(2));
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	jint temp8 = temp7 - (jint(2));
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[2].o));
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp6, temp8, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(175);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplits_com_badlogic_gdx_graphics_Pixmap_R_Array1_int(ctx, (frame[0].o), (frame[2].o));
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK(sp[0].o))->F_splits = (jref) sp[1].o;
	LINE_NUMBER(176);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[3].o)))->F_splits;
	sp[1].o = (jobject)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPads_com_badlogic_gdx_graphics_Pixmap_Array1_int_R_Array1_int(ctx, sp[1].o, sp[2].o, sp[3].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK(sp[0].o))->F_pads = (jref) sp[1].o;
	LINE_NUMBER(177);
	sp[0].o = frame[4].o;
	sp[1].o = frame[2].o;
	jint temp9 = jint(0);
	jint temp10 = jint(0);
	jint temp11 = jint(1);
	jint temp12 = jint(1);
	jint temp13 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp14 = temp13 - (jint(1));
	jint temp15 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp9, temp10, temp11, temp12, temp14, (temp15 - (jint(1))));
	LINE_NUMBER(178);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	goto label_14;
	}
label_5:;
	{
	LINE_NUMBER(181);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceX) != 0) goto label_15;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceY) == 0) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(183);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	frame[6].i = temp1;
	LINE_NUMBER(185);
	frame[7].i = (jint(0));
	LINE_NUMBER(186);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	frame[8].i = temp2;
	LINE_NUMBER(187);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceY) == 0) goto label_21;
	}
	{
	LINE_NUMBER(189);
	frame[9].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[9].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_24;
	}
	{
	LINE_NUMBER(190);
	frame[10].i = (jint(0));
	}
label_26:;
	{
	jint temp0 = frame[10].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_27;
	}
	{
	LINE_NUMBER(191);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int])(ctx, (frame[2].o), (frame[10].i), (frame[9].i));
	frame[11].i = temp0;
	LINE_NUMBER(192);
	frame[12].i = ((frame[11].i) & (255));
	LINE_NUMBER(193);
	if ((frame[12].i) <= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_alphaThreshold)) goto label_31;
	}
	goto label_24;
label_31:;
	{
	LINE_NUMBER(190);
	INST_IINC(10, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(195);
	INST_IINC(7, 1);
	LINE_NUMBER(189);
	INST_IINC(9, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	frame[9].i = temp0;
	}
label_33:;
	{
	INST_IINC(9, -1);
	if ((frame[9].i) < (frame[7].i)) goto label_21;
	}
	{
	LINE_NUMBER(199);
	frame[10].i = (jint(0));
	}
label_35:;
	{
	jint temp0 = frame[10].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_36;
	}
	{
	LINE_NUMBER(200);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int])(ctx, (frame[2].o), (frame[10].i), (frame[9].i));
	frame[11].i = temp0;
	LINE_NUMBER(201);
	frame[12].i = ((frame[11].i) & (255));
	LINE_NUMBER(202);
	if ((frame[12].i) <= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_alphaThreshold)) goto label_40;
	}
	goto label_21;
label_40:;
	{
	LINE_NUMBER(199);
	INST_IINC(10, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(204);
	INST_IINC(8, -1);
	goto label_33;
	}
label_21:;
	{
	LINE_NUMBER(207);
	frame[9].i = (jint(0));
	LINE_NUMBER(208);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	frame[10].i = temp0;
	LINE_NUMBER(209);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceX) == 0) goto label_43;
	}
	{
	LINE_NUMBER(211);
	frame[11].i = (jint(0));
	}
label_45:;
	{
	jint temp0 = frame[11].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_46;
	}
	{
	LINE_NUMBER(212);
	frame[12].i = (frame[7].i);
	}
label_48:;
	{
	if ((frame[12].i) >= (frame[8].i)) goto label_49;
	}
	{
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int])(ctx, (frame[2].o), (frame[11].i), (frame[12].i));
	frame[13].i = temp0;
	LINE_NUMBER(214);
	frame[14].i = ((frame[13].i) & (255));
	LINE_NUMBER(215);
	if ((frame[14].i) <= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_alphaThreshold)) goto label_53;
	}
	goto label_46;
label_53:;
	{
	LINE_NUMBER(212);
	INST_IINC(12, 1);
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(217);
	INST_IINC(9, 1);
	LINE_NUMBER(211);
	INST_IINC(11, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	frame[11].i = temp0;
	}
label_55:;
	{
	INST_IINC(11, -1);
	if ((frame[11].i) < (frame[9].i)) goto label_43;
	}
	{
	LINE_NUMBER(221);
	frame[12].i = (frame[7].i);
	}
label_57:;
	{
	if ((frame[12].i) >= (frame[8].i)) goto label_58;
	}
	{
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int])(ctx, (frame[2].o), (frame[11].i), (frame[12].i));
	frame[13].i = temp0;
	LINE_NUMBER(223);
	frame[14].i = ((frame[13].i) & (255));
	LINE_NUMBER(224);
	if ((frame[14].i) <= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_alphaThreshold)) goto label_62;
	}
	goto label_43;
label_62:;
	{
	LINE_NUMBER(221);
	INST_IINC(12, 1);
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(226);
	INST_IINC(10, -1);
	goto label_55;
	}
label_43:;
	{
	LINE_NUMBER(230);
	frame[11].i = ((frame[10].i) - (frame[9].i));
	LINE_NUMBER(231);
	frame[12].i = ((frame[8].i) - (frame[7].i));
	LINE_NUMBER(233);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[11].i;
	jint temp1 = frame[12].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[2].o));
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(234);
	sp[0].o = frame[4].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int])(ctx, (frame[4].o), (frame[2].o), (jint(0)), (jint(0)), (frame[9].i), (frame[7].i), (frame[11].i), (frame[12].i));
	LINE_NUMBER(236);
	frame[2].o = (frame[4].o);
	LINE_NUMBER(238);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_int_int_int_int_int_int_int_int(ctx, sp[0].o, (jint(0)), (jint(0)), (frame[11].i), (frame[12].i), (frame[9].i), (frame[7].i), (frame[5].i), (frame[6].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(239);
	goto label_14;
	}
label_16:;
	{
	LINE_NUMBER(240);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle);
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	frame[3].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int])(ctx, (frame[3].o));
	if (temp0 > ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth)) goto label_70;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int])(ctx, (frame[3].o));
	if (temp0 <= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight)) goto label_71;
	}
label_70:;
	{
	LINE_NUMBER(245);
	if ((frame[1].o) != nullptr) goto label_72;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Page size too small for pixmap."_j))));
	throwException(ctx, sp[0].o);	}
label_72:;
	{
	LINE_NUMBER(246);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Page size too small for pixmap: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_71:;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packStrategy;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[3].o)))->F_bounds;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy, INDEX_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(250);
	if ((frame[1].o) == nullptr) goto label_74;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_rects;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[3].o));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_addedRects;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_74:;
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int])(ctx, (frame[3].o));
	frame[6].i = temp0;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int])(ctx, (frame[3].o));
	frame[7].i = temp1;
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int])(ctx, (frame[3].o));
	frame[8].i = temp2;
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int])(ctx, (frame[3].o));
	frame[9].i = temp3;
	LINE_NUMBER(257);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packToTexture) == 0) goto label_81;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder) != 0) goto label_81;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_81;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_dirty) != 0) goto label_81;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_texture;
	((func_com_badlogic_gdx_graphics_Texture_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Texture_bind])(ctx, sp[0].o);
	LINE_NUMBER(259);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_texture;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_GLTexture *) NULL_CHECK(sp[1].o))->F_glTarget;
	jint temp1 = jint(0);
	jint temp2 = frame[6].i;
	jint temp3 = frame[7].i;
	jint temp4 = frame[8].i;
	jint temp5 = frame[9].i;
	jint temp6 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int])(ctx, (frame[2].o));
	sp[1].o = frame[2].o;
	LINE_NUMBER(260);
	jint temp7 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[2].o));
	LINE_NUMBER(259);
	((func_com_badlogic_gdx_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glTexSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[1].o);
	goto label_86;
	}
label_81:;
	{
	LINE_NUMBER(262);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_dirty = (jint(1));
	}
label_86:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int])(ctx, sp[0].o, (frame[2].o), (frame[6].i), (frame[7].i));
	LINE_NUMBER(266);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder) == 0) goto label_88;
	}
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[2].o));
	frame[10].i = temp0;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[2].o));
	frame[11].i = temp1;
	LINE_NUMBER(269);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), (jint(0)), (jint(1)), (jint(1)), ((frame[6].i) - (jint(1))), ((frame[7].i) - (jint(1))), (jint(1)), (jint(1)));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), ((frame[10].i) - (jint(1))), (jint(0)), (jint(1)), (jint(1)), ((frame[6].i) + (frame[8].i)), ((frame[7].i) - (jint(1))), (jint(1)), (jint(1)));
	LINE_NUMBER(271);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), ((frame[11].i) - (jint(1))), (jint(1)), (jint(1)), ((frame[6].i) - (jint(1))), ((frame[7].i) + (frame[9].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), ((frame[10].i) - (jint(1))), ((frame[11].i) - (jint(1))), (jint(1)), (jint(1)), ((frame[6].i) + (frame[8].i)), ((frame[7].i) + (frame[9].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), (jint(0)), (frame[10].i), (jint(1)), (frame[6].i), ((frame[7].i) - (jint(1))), (frame[8].i), (jint(1)));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), ((frame[11].i) - (jint(1))), (frame[10].i), (jint(1)), (frame[6].i), ((frame[7].i) + (frame[9].i)), (frame[8].i), (jint(1)));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), (jint(0)), (jint(1)), (frame[11].i), ((frame[6].i) - (jint(1))), (frame[7].i), (jint(1)), (frame[9].i));
	LINE_NUMBER(277);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[5].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), ((frame[10].i) - (jint(1))), (jint(0)), (jint(1)), (frame[11].i), ((frame[6].i) + (frame[8].i)), (frame[7].i), (jint(1)), (frame[9].i));
	}
label_88:;
	{
	LINE_NUMBER(280);
	if ((frame[4].o) == nullptr) goto label_99;
	}
	{
	LINE_NUMBER(281);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[4].o));
	}
label_99:;
	{
	LINE_NUMBER(284);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[3].o)))->F_page = (jref) (frame[5].o);
	LINE_NUMBER(285);
	popStackFrame(ctx, self);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPages_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPages", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getRect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[3].o)))->F_rects;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, sp[0].o));
	LINE_NUMBER(299);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	INST_ALOAD(4);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_5:;
	LINE_NUMBER(300);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(301);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[3].o)))->F_rects;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ALOAD(3);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_4:;
	LINE_NUMBER(309);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(310);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPageIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[0].o))))->F_rects;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ILOAD(2);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(317);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx, self);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(327);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[2].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[2].o)))->F_image;
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(330);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(331);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	LINE_NUMBER(332);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_generateTextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:generateTextureAtlas", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(337);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(338);
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(339);
	popStackFrame(ctx, self);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:updateTextureAtlas", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(348);
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i), (jint(1)));
	LINE_NUMBER(349);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:updateTextureAtlas", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(357);
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(359);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_addedRects;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_addedRects;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_rects;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, sp[0].o));
	LINE_NUMBER(362);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getX_R_int])(ctx, (frame[10].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getY_R_int])(ctx, (frame[10].o));
	sp[2].o = frame[10].o;
	LINE_NUMBER(363);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getWidth_R_int])(ctx, sp[2].o);
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int])(ctx, (frame[10].o));
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_com_badlogic_gdx_graphics_Texture_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	frame[11].o = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_splits;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"split"_j)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"pad"_j)));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_names = (jref) sp[1].o;
	LINE_NUMBER(367);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_splits;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_pads;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_values = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(370);
	frame[12].i = (jint(-1));
	LINE_NUMBER(371);
	frame[13].o = (frame[9].o);
	LINE_NUMBER(373);
	if ((frame[5].i) == 0) goto label_18;
	}
	{
	LINE_NUMBER(374);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_PixmapPacker_indexPattern;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[13].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(375);
	jint temp0 = (jint)((func_java_util_regex_Matcher_matches_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_util_regex_Matcher_matches_R_boolean])(ctx, (frame[14].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[14].o), (jint(1)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[14].o), (jint(2)));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[0].o);
	frame[12].i = temp0;
	}
label_18:;
	{
	LINE_NUMBER(381);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_name = (jref) (frame[13].o);
	LINE_NUMBER(382);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_index = (frame[12].i);
	LINE_NUMBER(383);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_offsetX = (jfloat(((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_offsetX)));
	LINE_NUMBER(384);
	sp[0].o = frame[11].o;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_originalHeight;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle_getHeight_R_int])(ctx, (frame[10].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = (jfloat(((temp0 - temp1) - ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_offsetY))));
	LINE_NUMBER(385);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_originalWidth = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_originalWidth);
	LINE_NUMBER(386);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_originalHeight = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle *) NULL_CHECK((frame[10].o)))->F_originalHeight);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[11].o));
	LINE_NUMBER(389);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_addedRects;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas_getTextures_R_com_badlogic_gdx_utils_ObjectSet) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_getTextures_R_com_badlogic_gdx_utils_ObjectSet])(ctx, (frame[1].o));
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_texture;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(393);
	goto label_2;
label_3:;
	LINE_NUMBER(394);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:updateTextureRegions", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(400);
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i));
	}
label_1:;
	{
	LINE_NUMBER(401);
	jint temp0 = (jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[2].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size));
	sp[2].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[2].o))))->F_texture;
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[1].o, sp[2].o);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(403);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:updatePageTextures", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_iterator_R_com_badlogic_gdx_utils_Array$ArrayIterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(408);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_updateTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page_updateTexture_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_boolean])(ctx, (frame[5].o), (frame[1].o), (frame[2].o), (frame[3].i));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(409);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageWidth_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:setPageWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(416);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth = (frame[1].i);
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageHeight_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:setPageHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(424);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight = (frame[1].i);
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageFormat_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPageFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageFormat;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageFormat_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:setPageFormat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(432);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageFormat = (jref) (frame[1].o);
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPadding_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPadding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_padding);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPadding_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:setPadding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(440);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_padding = (frame[1].i);
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getDuplicateBorder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:setDuplicateBorder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(448);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder = (frame[1].i);
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPackToTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packToTexture);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPackToTexture_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:setPackToTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(459);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packToTexture = (frame[1].i);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getTransparentColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(714);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_transparentColor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:setTransparentColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(721);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_transparentColor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(722);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplits_com_badlogic_gdx_graphics_Pixmap_R_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getSplits", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(726);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(1)), (jint(0)), (jint(1)), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(727);
	jint temp1 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)), (jint(0)), (jint(1)));
	frame[3].i = temp1;
	LINE_NUMBER(728);
	jint temp2 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(1)), (jint(1)), (jint(0)));
	frame[4].i = temp2;
	LINE_NUMBER(729);
	jint temp3 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[4].i), (jint(0)), (jint(0)));
	frame[5].i = temp3;
	LINE_NUMBER(732);
	jint temp4 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[3].i) + (jint(1))), (jint(0)), (jint(1)), (jint(1)));
	LINE_NUMBER(733);
	jint temp5 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), ((frame[5].i) + (jint(1))), (jint(1)), (jint(0)));
	LINE_NUMBER(736);
	if ((frame[2].i) != 0) goto label_7;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_7;
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_7;
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_7;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(739);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(740);
	INST_IINC(2, -1);
	LINE_NUMBER(741);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	frame[3].i = ((temp0 - (jint(2))) - ((frame[3].i) - (jint(1))));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(744);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	frame[3].i = (temp0 - (jint(2)));
	}
label_11:;
	{
	LINE_NUMBER(746);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(747);
	INST_IINC(4, -1);
	LINE_NUMBER(748);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	frame[5].i = ((temp0 - (jint(2))) - ((frame[5].i) - (jint(1))));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(751);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	frame[5].i = (temp0 - (jint(2)));
	}
label_15:;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[2].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[3].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (frame[4].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (frame[5].i);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPads_com_badlogic_gdx_graphics_Pixmap_Array1_int_R_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getPads", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(759);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	frame[3].i = (temp0 - (jint(1)));
	LINE_NUMBER(760);
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	frame[4].i = (temp1 - (jint(1)));
	LINE_NUMBER(762);
	jint temp2 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[3].i), (jint(1)), (jint(1)));
	frame[5].i = temp2;
	LINE_NUMBER(763);
	jint temp3 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[4].i), (jint(1)), (jint(1)), (jint(0)));
	frame[6].i = temp3;
	LINE_NUMBER(766);
	frame[7].i = (jint(0));
	LINE_NUMBER(767);
	frame[8].i = (jint(0));
	LINE_NUMBER(768);
	if ((frame[5].i) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[5].i) + (jint(1))), (frame[3].i), (jint(0)), (jint(1)));
	frame[7].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(769);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[4].i), ((frame[6].i) + (jint(1))), (jint(0)), (jint(0)));
	frame[8].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(772);
	jint temp0 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[7].i) + (jint(1))), (frame[3].i), (jint(1)), (jint(1)));
	LINE_NUMBER(773);
	jint temp1 = (jint)M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[4].i), ((frame[8].i) + (jint(1))), (jint(1)), (jint(0)));
	LINE_NUMBER(776);
	if ((frame[5].i) != 0) goto label_11;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_11;
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_11;
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_11;
	{
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(781);
	if ((frame[5].i) != 0) goto label_13;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_13;
	{
	LINE_NUMBER(782);
	frame[5].i = (jint(-1));
	LINE_NUMBER(783);
	frame[7].i = (jint(-1));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(785);
	if ((frame[5].i) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(786);
	INST_IINC(5, -1);
	LINE_NUMBER(787);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	frame[7].i = ((temp0 - (jint(2))) - ((frame[7].i) - (jint(1))));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(790);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	frame[7].i = (temp0 - (jint(2)));
	}
label_16:;
	{
	LINE_NUMBER(793);
	if ((frame[6].i) != 0) goto label_20;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_20;
	{
	LINE_NUMBER(794);
	frame[6].i = (jint(-1));
	LINE_NUMBER(795);
	frame[8].i = (jint(-1));
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(797);
	if ((frame[6].i) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(798);
	INST_IINC(6, -1);
	LINE_NUMBER(799);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	frame[8].i = ((temp0 - (jint(2))) - ((frame[8].i) - (jint(1))));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(802);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	frame[8].i = (temp0 - (jint(2)));
	}
label_23:;
	{
	LINE_NUMBER(806);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[5].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[7].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (frame[6].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (frame[8].i);
	frame[9].o = sp[0].o;
	LINE_NUMBER(808);
	if ((frame[2].o) == nullptr) goto label_28;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean(ctx, (frame[9].o), (frame[2].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(809);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_28:;
	{
	LINE_NUMBER(812);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:getSplitPoint", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(818);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(820);
	if ((frame[5].i) == 0) goto label_2;
	}
	INST_ILOAD(2);
	goto label_3;
label_2:;
	INST_ILOAD(3);
label_3:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(821);
	if ((frame[5].i) == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, sp[0].o);
	sp++;
label_6:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(822);
	if ((frame[4].i) == 0) goto label_8;
	}
	INST_SIPUSH(255);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(824);
	frame[10].i = (frame[2].i);
	LINE_NUMBER(825);
	frame[11].i = (frame[3].i);
	}
label_12:;
	{
	LINE_NUMBER(826);
	if ((frame[7].i) == (frame[8].i)) goto label_13;
	}
	{
	LINE_NUMBER(827);
	if ((frame[5].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(828);
	frame[10].i = (frame[7].i);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(830);
	frame[11].i = (frame[7].i);
	}
label_17:;
	{
	LINE_NUMBER(832);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int])(ctx, (frame[1].o), (frame[10].i), (frame[11].i));
	frame[12].i = temp0;
	LINE_NUMBER(833);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_c;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Color_set_int_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Color_set_int_R_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, (frame[12].i));
	LINE_NUMBER(834);
	sp[0].o = frame[6].o;
	jint temp1 = jint(0);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_c;
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_r) * (jfloat(255.0f)))));
	LINE_NUMBER(835);
	sp[0].o = frame[6].o;
	jint temp2 = jint(1);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_c;
	ARRAY_ACCESS(jint, sp[0].o, temp2) = (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_g) * (jfloat(255.0f)))));
	LINE_NUMBER(836);
	sp[0].o = frame[6].o;
	jint temp3 = jint(2);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_c;
	ARRAY_ACCESS(jint, sp[0].o, temp3) = (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_b) * (jfloat(255.0f)))));
	LINE_NUMBER(837);
	sp[0].o = frame[6].o;
	jint temp4 = jint(3);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_c;
	ARRAY_ACCESS(jint, sp[0].o, temp4) = (jint((((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_a) * (jfloat(255.0f)))));
	LINE_NUMBER(838);
	if (((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(3)))) != (frame[9].i)) goto label_24;
	}
	INST_ILOAD(7);
	popStackFrame(ctx);
	INST_IRETURN();
label_24:;
	{
	LINE_NUMBER(840);
	if ((frame[4].i) != 0) goto label_25;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(0)))) != 0) goto label_26;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(1)))) != 0) goto label_26;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(2)))) != 0) goto label_26;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[6].o), (jint(3)))) == (255)) goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(841);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"  "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[11].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_25:;
	{
	LINE_NUMBER(843);
	INST_IINC(7, 1);
	LINE_NUMBER(844);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx);
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"(.+)_(\\d+)$"_j))));
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx);
	SF_com_badlogic_gdx_graphics_g2d_PixmapPacker_indexPattern = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_sort_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_java_lang_String_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPages_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_generateTextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_com_badlogic_gdx_graphics_g2d_TextureAtlas,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageWidth_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageHeight_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageFormat_R_com_badlogic_gdx_graphics_Pixmap$Format,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageFormat_com_badlogic_gdx_graphics_Pixmap$Format,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPadding_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPadding_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPackToTexture_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplits_com_badlogic_gdx_graphics_Pixmap_R_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPads_com_badlogic_gdx_graphics_Pixmap_Array1_int_R_Array1_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int,
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
	{ "sort", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "pack", "(Lcom/badlogic/gdx/graphics/Pixmap;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle;" },
	{ "pack", "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Pixmap;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle;" },
	{ "getPages", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getRect", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle;" },
	{ "getPage", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;" },
	{ "getPageIndex", "(Ljava/lang/String;)I" },
	{ "generateTextureAtlas", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;" },
	{ "updateTextureAtlas", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V" },
	{ "updateTextureAtlas", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;ZZ)V" },
	{ "updateTextureRegions", "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V" },
	{ "updatePageTextures", "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V" },
	{ "getPageWidth", "()I" },
	{ "setPageWidth", "(I)V" },
	{ "getPageHeight", "()I" },
	{ "setPageHeight", "(I)V" },
	{ "getPageFormat", "()Lcom/badlogic/gdx/graphics/Pixmap$Format;" },
	{ "setPageFormat", "(Lcom/badlogic/gdx/graphics/Pixmap$Format;)V" },
	{ "getPadding", "()I" },
	{ "setPadding", "(I)V" },
	{ "getDuplicateBorder", "()Z" },
	{ "setDuplicateBorder", "(Z)V" },
	{ "getPackToTexture", "()Z" },
	{ "setPackToTexture", "(Z)V" },
	{ "getTransparentColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setTransparentColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "getSplits", "(Lcom/badlogic/gdx/graphics/Pixmap;)[I" },
	{ "getPads", "(Lcom/badlogic/gdx/graphics/Pixmap;[I)[I" },
	{ "getSplitPoint", "(Lcom/badlogic/gdx/graphics/Pixmap;IIZZ)I" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy,
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy,
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle,
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds,
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy,
};

static FieldMetadata fields[] {
	{ "packToTexture", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_packToTexture), "Z", 0 },
	{ "disposed", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_disposed), "Z", 0 },
	{ "pageWidth", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_pageWidth), "I", 0 },
	{ "pageHeight", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_pageHeight), "I", 0 },
	{ "pageFormat", &class_com_badlogic_gdx_graphics_Pixmap$Format, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_pageFormat), "Lcom/badlogic/gdx/graphics/Pixmap$Format;", 0 },
	{ "padding", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_padding), "I", 0 },
	{ "duplicateBorder", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_duplicateBorder), "Z", 0 },
	{ "stripWhitespaceX", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_stripWhitespaceX), "Z", 0 },
	{ "stripWhitespaceY", &class_boolean, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_stripWhitespaceY), "Z", 0 },
	{ "alphaThreshold", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_alphaThreshold), "I", 0 },
	{ "transparentColor", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_transparentColor), "Lcom/badlogic/gdx/graphics/Color;", 0 },
	{ "pages", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_pages), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "packStrategy", &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_packStrategy), "Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$PackStrategy;", 0 },
	{ "indexPattern", &class_java_util_regex_Pattern, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_PixmapPacker_indexPattern, "Ljava/util/regex/Pattern;", 8 },
	{ "c", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker, F_c), "Lcom/badlogic/gdx/graphics/Color;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean, 0, "(IILcom/badlogic/gdx/graphics/Pixmap$Format;IZ)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy, 0, "(IILcom/badlogic/gdx/graphics/Pixmap$Format;IZLcom/badlogic/gdx/graphics/g2d/PixmapPacker$PackStrategy;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker_int_int_com_badlogic_gdx_graphics_Pixmap$Format_int_boolean_boolean_boolean_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy, 0, "(IILcom/badlogic/gdx/graphics/Pixmap$Format;IZZZLcom/badlogic/gdx/graphics/g2d/PixmapPacker$PackStrategy;)V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_sort_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_sort_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "pack", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, "(Lcom/badlogic/gdx/graphics/Pixmap;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle;", 33 },
	{ "pack", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_java_lang_String_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_pack_java_lang_String_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Pixmap;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle;", 33 },
	{ "getPages", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPages_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPages_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getRect", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$PixmapPackerRectangle, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$PixmapPackerRectangle;", 33 },
	{ "getPage", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;", 33 },
	{ "getPageIndex", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int, "(Ljava/lang/String;)I", 33 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_dispose, "()V", 33 },
	{ "generateTextureAtlas", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_generateTextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_com_badlogic_gdx_graphics_g2d_TextureAtlas, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_generateTextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_R_com_badlogic_gdx_graphics_g2d_TextureAtlas, "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;", 33 },
	{ "updateTextureAtlas", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V", 33 },
	{ "updateTextureAtlas", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureAtlas_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean_boolean, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;ZZ)V", 33 },
	{ "updateTextureRegions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updateTextureRegions_com_badlogic_gdx_utils_Array_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V", 33 },
	{ "updatePageTextures", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_updatePageTextures_com_badlogic_gdx_graphics_Texture$TextureFilter_com_badlogic_gdx_graphics_Texture$TextureFilter_boolean, "(Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Lcom/badlogic/gdx/graphics/Texture$TextureFilter;Z)V", 33 },
	{ "getPageWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageWidth_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageWidth_R_int, "()I", 1 },
	{ "setPageWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageWidth_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageWidth_int, "(I)V", 1 },
	{ "getPageHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageHeight_R_int, "()I", 1 },
	{ "setPageHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageHeight_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageHeight_int, "(I)V", 1 },
	{ "getPageFormat", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPageFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, "()Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "setPageFormat", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageFormat_com_badlogic_gdx_graphics_Pixmap$Format, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPageFormat_com_badlogic_gdx_graphics_Pixmap$Format, "(Lcom/badlogic/gdx/graphics/Pixmap$Format;)V", 1 },
	{ "getPadding", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPadding_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPadding_R_int, "()I", 1 },
	{ "setPadding", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPadding_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPadding_int, "(I)V", 1 },
	{ "getDuplicateBorder", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean, "()Z", 1 },
	{ "setDuplicateBorder", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean, "(Z)V", 1 },
	{ "getPackToTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean, "()Z", 1 },
	{ "setPackToTexture", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPackToTexture_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setPackToTexture_boolean, "(Z)V", 1 },
	{ "getTransparentColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getTransparentColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "setTransparentColor", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_setTransparentColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "getSplits", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplits_com_badlogic_gdx_graphics_Pixmap_R_Array1_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplits_com_badlogic_gdx_graphics_Pixmap_R_Array1_int, "(Lcom/badlogic/gdx/graphics/Pixmap;)[I", 2 },
	{ "getPads", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPads_com_badlogic_gdx_graphics_Pixmap_Array1_int_R_Array1_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getPads_com_badlogic_gdx_graphics_Pixmap_Array1_int_R_Array1_int, "(Lcom/badlogic/gdx/graphics/Pixmap;[I)[I", 2 },
	{ "getSplitPoint", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker_getSplitPoint_com_badlogic_gdx_graphics_Pixmap_int_int_boolean_boolean_R_int, "(Lcom/badlogic/gdx/graphics/Pixmap;IIZZ)I", 2 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 6,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker);

}

