#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Bitmap.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Pointer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "java/nio/IntBuffer.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Bitmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/graphics/Color.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap *) object;
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(616);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:getRows", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(620);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:getWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(628);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:getPitch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(636);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:getBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(644);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newByteBuffer_int_R_java_nio_ByteBuffer(ctx, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_long_R_java_nio_ByteBuffer(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:getPixmap", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(661);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(664);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_R_int])(ctx, (frame[0].o));
	frame[8].i = temp2;
	LINE_NUMBER(665);
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int])(ctx, (frame[0].o));
	jint temp4 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, temp3);
	frame[9].i = temp4;
	LINE_NUMBER(666);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Color_WHITE;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	if ((frame[8].i) != (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_GRAY)) goto label_6;
	}
	{
	if ((frame[9].i) != (frame[4].i)) goto label_6;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(667);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_Alpha;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(668);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[7].o));
	sp[2].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[7].o));
	jint temp2 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, sp[2].o);
	SM_com_badlogic_gdx_utils_BufferUtils_copy_java_nio_Buffer_java_nio_Buffer_int(ctx, sp[0].o, sp[1].o, temp2);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(670);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(671);
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_Color_rgba8888_com_badlogic_gdx_graphics_Color_R_int(ctx, (frame[2].o));
	frame[10].i = temp2;
	LINE_NUMBER(672);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[9].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(673);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer])(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(675);
	if ((frame[8].i) != (clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType(ctx), (jint)SF_com_badlogic_gdx_graphics_g2d_freetype_FreeType_FT_PIXEL_MODE_MONO)) goto label_15;
	}
	{
	LINE_NUMBER(677);
	frame[14].i = (jint(0));
	}
label_17:;
	{
	if ((frame[14].i) >= (frame[5].i)) goto label_18;
	}
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[6].o), (frame[11].o));
	LINE_NUMBER(679);
	frame[15].i = (jint(0));
	frame[16].i = (jint(0));
	}
label_22:;
	{
	if ((frame[16].i) >= (frame[4].i)) goto label_23;
	}
	{
	LINE_NUMBER(680);
	frame[17].i = ((jint)ARRAY_ACCESS(jbyte, (frame[11].o), (frame[15].i)));
	LINE_NUMBER(681);
	frame[18].i = (jint(0));
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (8), ((frame[4].i) - (frame[16].i)));
	frame[19].i = temp0;
	}
label_27:;
	{
	if ((frame[18].i) >= (frame[19].i)) goto label_28;
	}
	{
	LINE_NUMBER(682);
	if (((frame[17].i) & ((jint(1)) << ((7) - (frame[18].i)))) == 0) goto label_30;
	}
	{
	LINE_NUMBER(683);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[16].i) + (frame[18].i))) = (frame[10].i);
	goto label_32;
	}
label_30:;
	{
	LINE_NUMBER(685);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[16].i) + (frame[18].i))) = (jint(0));
	}
label_32:;
	{
	LINE_NUMBER(681);
	INST_IINC(18, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(679);
	INST_IINC(15, 1);
	INST_IINC(16, 8);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer])(ctx, (frame[13].o), (frame[12].o));
	LINE_NUMBER(677);
	INST_IINC(14, 1);
	goto label_17;
	}
label_18:;
	goto label_9;
label_15:;
	{
	LINE_NUMBER(692);
	frame[14].i = ((frame[10].i) & (-256));
	LINE_NUMBER(693);
	frame[15].i = ((frame[10].i) & (255));
	LINE_NUMBER(694);
	frame[16].i = (jint(0));
	}
label_36:;
	{
	if ((frame[16].i) >= (frame[5].i)) goto label_9;
	}
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[6].o), (frame[11].o));
	LINE_NUMBER(696);
	frame[17].i = (jint(0));
	}
label_39:;
	{
	if ((frame[17].i) >= (frame[4].i)) goto label_40;
	}
	{
	LINE_NUMBER(700);
	frame[18].i = (((jint)ARRAY_ACCESS(jbyte, (frame[11].o), (frame[17].i))) & (255));
	LINE_NUMBER(701);
	if ((frame[18].i) != 0) goto label_43;
	}
	{
	LINE_NUMBER(702);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[17].i)) = (frame[14].i);
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(703);
	if ((frame[18].i) != (255)) goto label_46;
	}
	{
	LINE_NUMBER(704);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[17].i)) = ((frame[14].i) | (frame[15].i));
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(706);
	sp[0].o = frame[12].o;
	jint temp0 = frame[17].i;
	jint temp1 = frame[14].i;
	jfloat temp2 = jfloat((frame[15].i));
	jdouble temp3 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble(((jfloat((frame[18].i))) / (jfloat(255.0f))))), (jdouble((frame[3].f))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (temp1 | (jint((temp2 * (jfloat(temp3))))));
	}
label_45:;
	{
	LINE_NUMBER(696);
	INST_IINC(17, 1);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(708);
	sp[0].o = (jobject)((func_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer])(ctx, (frame[13].o), (frame[12].o));
	LINE_NUMBER(694);
	INST_IINC(16, 1);
	goto label_36;
	}
label_9:;
	{
	LINE_NUMBER(713);
	frame[10].o = (frame[7].o);
	LINE_NUMBER(714);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[7].o));
	if (sp[0].o == sp[1].o) goto label_50;
	}
	{
	LINE_NUMBER(715);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[7].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[7].o));
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, (frame[1].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(716);
	sp[0].o = frame[10].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(717);
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int])(ctx, (frame[10].o), (frame[7].o), (jint(0)), (jint(0)));
	LINE_NUMBER(718);
	sp[0].o = frame[10].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((func_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(719);
	((func_com_badlogic_gdx_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose])(ctx, (frame[7].o));
	}
label_50:;
	{
	LINE_NUMBER(721);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getNumGray_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:getNumGray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getNumGray_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap:getPixelMode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(734);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_long_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getNumGray_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_R_int,
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
	{ "getRows", "()I" },
	{ "getWidth", "()I" },
	{ "getPitch", "()I" },
	{ "getBuffer", "()Ljava/nio/ByteBuffer;" },
	{ "getPixmap", "(Lcom/badlogic/gdx/graphics/Pixmap$Format;Lcom/badlogic/gdx/graphics/Color;F)Lcom/badlogic/gdx/graphics/Pixmap;" },
	{ "getNumGray", "()I" },
	{ "getPixelMode", "()I" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_long, 0, "(J)V", 0 },
	{ "getRows", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_R_int, "()I", 1 },
	{ "getRows", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getRows_long_R_int, 0, "(J)I", 266 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_R_int, "()I", 1 },
	{ "getWidth", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getWidth_long_R_int, 0, "(J)I", 266 },
	{ "getPitch", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_R_int, "()I", 1 },
	{ "getPitch", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPitch_long_R_int, 0, "(J)I", 266 },
	{ "getBuffer", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "getBuffer", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getBuffer_long_R_java_nio_ByteBuffer, 0, "(J)Ljava/nio/ByteBuffer;", 266 },
	{ "getPixmap", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixmap_com_badlogic_gdx_graphics_Pixmap$Format_com_badlogic_gdx_graphics_Color_float_R_com_badlogic_gdx_graphics_Pixmap, "(Lcom/badlogic/gdx/graphics/Pixmap$Format;Lcom/badlogic/gdx/graphics/Color;F)Lcom/badlogic/gdx/graphics/Pixmap;", 1 },
	{ "getNumGray", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getNumGray_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getNumGray_R_int, "()I", 1 },
	{ "getNumGray", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getNumGray_long_R_int, 0, "(J)I", 266 },
	{ "getPixelMode", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_R_int, "()I", 1 },
	{ "getPixelMode", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap_getPixelMode_long_R_int, 0, "(J)I", 266 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Bitmap",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Bitmap);

}

